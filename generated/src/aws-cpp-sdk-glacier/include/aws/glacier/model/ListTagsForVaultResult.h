/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListTagsForVaultOutput">AWS
   * API Reference</a></p>
   */
  class ListTagsForVaultResult
  {
  public:
    AWS_GLACIER_API ListTagsForVaultResult();
    AWS_GLACIER_API ListTagsForVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListTagsForVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline ListTagsForVaultResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline ListTagsForVaultResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline ListTagsForVaultResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline ListTagsForVaultResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline ListTagsForVaultResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline ListTagsForVaultResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline ListTagsForVaultResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline ListTagsForVaultResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the vault. Each tag is composed of a key and a
     * value.</p>
     */
    inline ListTagsForVaultResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
