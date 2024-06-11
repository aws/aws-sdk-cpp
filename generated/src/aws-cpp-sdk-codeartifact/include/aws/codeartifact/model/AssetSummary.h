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
    AWS_CODEARTIFACT_API AssetSummary();
    AWS_CODEARTIFACT_API AssetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API AssetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the asset. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of the asset. </p>
     */
    inline long long GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline AssetSummary& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The hashes of the asset. </p>
     */
    inline const Aws::Map<HashAlgorithm, Aws::String>& GetHashes() const{ return m_hashes; }
    inline bool HashesHasBeenSet() const { return m_hashesHasBeenSet; }
    inline void SetHashes(const Aws::Map<HashAlgorithm, Aws::String>& value) { m_hashesHasBeenSet = true; m_hashes = value; }
    inline void SetHashes(Aws::Map<HashAlgorithm, Aws::String>&& value) { m_hashesHasBeenSet = true; m_hashes = std::move(value); }
    inline AssetSummary& WithHashes(const Aws::Map<HashAlgorithm, Aws::String>& value) { SetHashes(value); return *this;}
    inline AssetSummary& WithHashes(Aws::Map<HashAlgorithm, Aws::String>&& value) { SetHashes(std::move(value)); return *this;}
    inline AssetSummary& AddHashes(const HashAlgorithm& key, const Aws::String& value) { m_hashesHasBeenSet = true; m_hashes.emplace(key, value); return *this; }
    inline AssetSummary& AddHashes(HashAlgorithm&& key, const Aws::String& value) { m_hashesHasBeenSet = true; m_hashes.emplace(std::move(key), value); return *this; }
    inline AssetSummary& AddHashes(const HashAlgorithm& key, Aws::String&& value) { m_hashesHasBeenSet = true; m_hashes.emplace(key, std::move(value)); return *this; }
    inline AssetSummary& AddHashes(HashAlgorithm&& key, Aws::String&& value) { m_hashesHasBeenSet = true; m_hashes.emplace(std::move(key), std::move(value)); return *this; }
    inline AssetSummary& AddHashes(HashAlgorithm&& key, const char* value) { m_hashesHasBeenSet = true; m_hashes.emplace(std::move(key), value); return *this; }
    inline AssetSummary& AddHashes(const HashAlgorithm& key, const char* value) { m_hashesHasBeenSet = true; m_hashes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;

    Aws::Map<HashAlgorithm, Aws::String> m_hashes;
    bool m_hashesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
