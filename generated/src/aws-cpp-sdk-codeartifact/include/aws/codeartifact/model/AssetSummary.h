/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codeartifact/model/HashAlgorithm.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> Contains details about a package version asset. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/AssetSummary">AWS
   * API Reference</a></p>
   */
  class AssetSummary
  {
  public:
    AWS_CODEARTIFACT_API AssetSummary() = default;
    AWS_CODEARTIFACT_API AssetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API AssetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the asset. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssetSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of the asset. </p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline AssetSummary& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The hashes of the asset. </p>
     */
    inline const Aws::Map<HashAlgorithm, Aws::String>& GetHashes() const { return m_hashes; }
    inline bool HashesHasBeenSet() const { return m_hashesHasBeenSet; }
    template<typename HashesT = Aws::Map<HashAlgorithm, Aws::String>>
    void SetHashes(HashesT&& value) { m_hashesHasBeenSet = true; m_hashes = std::forward<HashesT>(value); }
    template<typename HashesT = Aws::Map<HashAlgorithm, Aws::String>>
    AssetSummary& WithHashes(HashesT&& value) { SetHashes(std::forward<HashesT>(value)); return *this;}
    inline AssetSummary& AddHashes(HashAlgorithm key, Aws::String value) {
      m_hashesHasBeenSet = true; m_hashes.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;

    Aws::Map<HashAlgorithm, Aws::String> m_hashes;
    bool m_hashesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
