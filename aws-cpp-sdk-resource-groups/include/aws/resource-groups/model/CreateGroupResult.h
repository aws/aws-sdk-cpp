/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/Group.h>
#include <aws/resource-groups/model/ResourceQuery.h>
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
namespace ResourceGroups
{
namespace Model
{
  class AWS_RESOURCEGROUPS_API CreateGroupResult
  {
  public:
    CreateGroupResult();
    CreateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A full description of the resource group after it is created.</p>
     */
    inline const Group& GetGroup() const{ return m_group; }

    /**
     * <p>A full description of the resource group after it is created.</p>
     */
    inline void SetGroup(const Group& value) { m_group = value; }

    /**
     * <p>A full description of the resource group after it is created.</p>
     */
    inline void SetGroup(Group&& value) { m_group = std::move(value); }

    /**
     * <p>A full description of the resource group after it is created.</p>
     */
    inline CreateGroupResult& WithGroup(const Group& value) { SetGroup(value); return *this;}

    /**
     * <p>A full description of the resource group after it is created.</p>
     */
    inline CreateGroupResult& WithGroup(Group&& value) { SetGroup(std::move(value)); return *this;}


    /**
     * <p>The resource query associated with the group.</p>
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }

    /**
     * <p>The resource query associated with the group.</p>
     */
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQuery = value; }

    /**
     * <p>The resource query associated with the group.</p>
     */
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQuery = std::move(value); }

    /**
     * <p>The resource query associated with the group.</p>
     */
    inline CreateGroupResult& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}

    /**
     * <p>The resource query associated with the group.</p>
     */
    inline CreateGroupResult& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the group.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags associated with the group.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags associated with the group.</p>
     */
    inline CreateGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the group.</p>
     */
    inline CreateGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the group.</p>
     */
    inline CreateGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the group.</p>
     */
    inline CreateGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the group.</p>
     */
    inline CreateGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the group.</p>
     */
    inline CreateGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the group.</p>
     */
    inline CreateGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the group.</p>
     */
    inline CreateGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the group.</p>
     */
    inline CreateGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Group m_group;

    ResourceQuery m_resourceQuery;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
