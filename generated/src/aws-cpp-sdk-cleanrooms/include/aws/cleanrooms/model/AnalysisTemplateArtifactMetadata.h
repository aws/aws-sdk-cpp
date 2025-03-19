/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/Hash.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The analysis template artifact metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisTemplateArtifactMetadata">AWS
   * API Reference</a></p>
   */
  class AnalysisTemplateArtifactMetadata
  {
  public:
    AWS_CLEANROOMS_API AnalysisTemplateArtifactMetadata() = default;
    AWS_CLEANROOMS_API AnalysisTemplateArtifactMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplateArtifactMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The hash of the entry point for the analysis template artifact metadata.</p>
     */
    inline const Hash& GetEntryPointHash() const { return m_entryPointHash; }
    inline bool EntryPointHashHasBeenSet() const { return m_entryPointHashHasBeenSet; }
    template<typename EntryPointHashT = Hash>
    void SetEntryPointHash(EntryPointHashT&& value) { m_entryPointHashHasBeenSet = true; m_entryPointHash = std::forward<EntryPointHashT>(value); }
    template<typename EntryPointHashT = Hash>
    AnalysisTemplateArtifactMetadata& WithEntryPointHash(EntryPointHashT&& value) { SetEntryPointHash(std::forward<EntryPointHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional artifact hashes for the analysis template.</p>
     */
    inline const Aws::Vector<Hash>& GetAdditionalArtifactHashes() const { return m_additionalArtifactHashes; }
    inline bool AdditionalArtifactHashesHasBeenSet() const { return m_additionalArtifactHashesHasBeenSet; }
    template<typename AdditionalArtifactHashesT = Aws::Vector<Hash>>
    void SetAdditionalArtifactHashes(AdditionalArtifactHashesT&& value) { m_additionalArtifactHashesHasBeenSet = true; m_additionalArtifactHashes = std::forward<AdditionalArtifactHashesT>(value); }
    template<typename AdditionalArtifactHashesT = Aws::Vector<Hash>>
    AnalysisTemplateArtifactMetadata& WithAdditionalArtifactHashes(AdditionalArtifactHashesT&& value) { SetAdditionalArtifactHashes(std::forward<AdditionalArtifactHashesT>(value)); return *this;}
    template<typename AdditionalArtifactHashesT = Hash>
    AnalysisTemplateArtifactMetadata& AddAdditionalArtifactHashes(AdditionalArtifactHashesT&& value) { m_additionalArtifactHashesHasBeenSet = true; m_additionalArtifactHashes.emplace_back(std::forward<AdditionalArtifactHashesT>(value)); return *this; }
    ///@}
  private:

    Hash m_entryPointHash;
    bool m_entryPointHashHasBeenSet = false;

    Aws::Vector<Hash> m_additionalArtifactHashes;
    bool m_additionalArtifactHashesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
