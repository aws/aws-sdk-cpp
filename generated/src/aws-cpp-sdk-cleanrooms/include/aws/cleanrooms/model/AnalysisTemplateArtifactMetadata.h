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
    AWS_CLEANROOMS_API AnalysisTemplateArtifactMetadata();
    AWS_CLEANROOMS_API AnalysisTemplateArtifactMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplateArtifactMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The hash of the entry point for the analysis template artifact metadata.</p>
     */
    inline const Hash& GetEntryPointHash() const{ return m_entryPointHash; }
    inline bool EntryPointHashHasBeenSet() const { return m_entryPointHashHasBeenSet; }
    inline void SetEntryPointHash(const Hash& value) { m_entryPointHashHasBeenSet = true; m_entryPointHash = value; }
    inline void SetEntryPointHash(Hash&& value) { m_entryPointHashHasBeenSet = true; m_entryPointHash = std::move(value); }
    inline AnalysisTemplateArtifactMetadata& WithEntryPointHash(const Hash& value) { SetEntryPointHash(value); return *this;}
    inline AnalysisTemplateArtifactMetadata& WithEntryPointHash(Hash&& value) { SetEntryPointHash(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional artifact hashes for the analysis template.</p>
     */
    inline const Aws::Vector<Hash>& GetAdditionalArtifactHashes() const{ return m_additionalArtifactHashes; }
    inline bool AdditionalArtifactHashesHasBeenSet() const { return m_additionalArtifactHashesHasBeenSet; }
    inline void SetAdditionalArtifactHashes(const Aws::Vector<Hash>& value) { m_additionalArtifactHashesHasBeenSet = true; m_additionalArtifactHashes = value; }
    inline void SetAdditionalArtifactHashes(Aws::Vector<Hash>&& value) { m_additionalArtifactHashesHasBeenSet = true; m_additionalArtifactHashes = std::move(value); }
    inline AnalysisTemplateArtifactMetadata& WithAdditionalArtifactHashes(const Aws::Vector<Hash>& value) { SetAdditionalArtifactHashes(value); return *this;}
    inline AnalysisTemplateArtifactMetadata& WithAdditionalArtifactHashes(Aws::Vector<Hash>&& value) { SetAdditionalArtifactHashes(std::move(value)); return *this;}
    inline AnalysisTemplateArtifactMetadata& AddAdditionalArtifactHashes(const Hash& value) { m_additionalArtifactHashesHasBeenSet = true; m_additionalArtifactHashes.push_back(value); return *this; }
    inline AnalysisTemplateArtifactMetadata& AddAdditionalArtifactHashes(Hash&& value) { m_additionalArtifactHashesHasBeenSet = true; m_additionalArtifactHashes.push_back(std::move(value)); return *this; }
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
