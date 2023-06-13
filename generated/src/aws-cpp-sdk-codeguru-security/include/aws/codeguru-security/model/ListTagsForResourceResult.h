/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_CODEGURUSECURITY_API ListTagsForResourceResult();
    AWS_CODEGURUSECURITY_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pairs used to tag an existing scan. A tag is a custom
     * attribute label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTagsForResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
