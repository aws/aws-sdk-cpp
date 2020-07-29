/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/Group.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resource-groups/model/GroupConfiguration.h>
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
     * <p>The description of the resource group.</p>
     */
    inline const Group& GetGroup() const{ return m_group; }

    /**
     * <p>The description of the resource group.</p>
     */
    inline void SetGroup(const Group& value) { m_group = value; }

    /**
     * <p>The description of the resource group.</p>
     */
    inline void SetGroup(Group&& value) { m_group = std::move(value); }

    /**
     * <p>The description of the resource group.</p>
     */
    inline CreateGroupResult& WithGroup(const Group& value) { SetGroup(value); return *this;}

    /**
     * <p>The description of the resource group.</p>
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


    /**
     * <p>The service configuration associated with the resource group. AWS Resource
     * Groups supports adding service configurations for the following resource group
     * types:</p> <ul> <li> <p> <code>AWS::EC2::CapacityReservationPool</code> - Amazon
     * EC2 capacity reservation pools. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline const GroupConfiguration& GetGroupConfiguration() const{ return m_groupConfiguration; }

    /**
     * <p>The service configuration associated with the resource group. AWS Resource
     * Groups supports adding service configurations for the following resource group
     * types:</p> <ul> <li> <p> <code>AWS::EC2::CapacityReservationPool</code> - Amazon
     * EC2 capacity reservation pools. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetGroupConfiguration(const GroupConfiguration& value) { m_groupConfiguration = value; }

    /**
     * <p>The service configuration associated with the resource group. AWS Resource
     * Groups supports adding service configurations for the following resource group
     * types:</p> <ul> <li> <p> <code>AWS::EC2::CapacityReservationPool</code> - Amazon
     * EC2 capacity reservation pools. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetGroupConfiguration(GroupConfiguration&& value) { m_groupConfiguration = std::move(value); }

    /**
     * <p>The service configuration associated with the resource group. AWS Resource
     * Groups supports adding service configurations for the following resource group
     * types:</p> <ul> <li> <p> <code>AWS::EC2::CapacityReservationPool</code> - Amazon
     * EC2 capacity reservation pools. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline CreateGroupResult& WithGroupConfiguration(const GroupConfiguration& value) { SetGroupConfiguration(value); return *this;}

    /**
     * <p>The service configuration associated with the resource group. AWS Resource
     * Groups supports adding service configurations for the following resource group
     * types:</p> <ul> <li> <p> <code>AWS::EC2::CapacityReservationPool</code> - Amazon
     * EC2 capacity reservation pools. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline CreateGroupResult& WithGroupConfiguration(GroupConfiguration&& value) { SetGroupConfiguration(std::move(value)); return *this;}

  private:

    Group m_group;

    ResourceQuery m_resourceQuery;

    Aws::Map<Aws::String, Aws::String> m_tags;

    GroupConfiguration m_groupConfiguration;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
