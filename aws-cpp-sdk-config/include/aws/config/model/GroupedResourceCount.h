/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The count of resources that are grouped by the group name.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GroupedResourceCount">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API GroupedResourceCount
  {
  public:
    GroupedResourceCount();
    GroupedResourceCount(Aws::Utils::Json::JsonView jsonValue);
    GroupedResourceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the group that can be region, account ID, or resource type. For
     * example, region1, region2 if the region was chosen as
     * <code>GroupByKey</code>.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group that can be region, account ID, or resource type. For
     * example, region1, region2 if the region was chosen as
     * <code>GroupByKey</code>.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the group that can be region, account ID, or resource type. For
     * example, region1, region2 if the region was chosen as
     * <code>GroupByKey</code>.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group that can be region, account ID, or resource type. For
     * example, region1, region2 if the region was chosen as
     * <code>GroupByKey</code>.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the group that can be region, account ID, or resource type. For
     * example, region1, region2 if the region was chosen as
     * <code>GroupByKey</code>.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group that can be region, account ID, or resource type. For
     * example, region1, region2 if the region was chosen as
     * <code>GroupByKey</code>.</p>
     */
    inline GroupedResourceCount& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group that can be region, account ID, or resource type. For
     * example, region1, region2 if the region was chosen as
     * <code>GroupByKey</code>.</p>
     */
    inline GroupedResourceCount& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group that can be region, account ID, or resource type. For
     * example, region1, region2 if the region was chosen as
     * <code>GroupByKey</code>.</p>
     */
    inline GroupedResourceCount& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The number of resources in the group.</p>
     */
    inline long long GetResourceCount() const{ return m_resourceCount; }

    /**
     * <p>The number of resources in the group.</p>
     */
    inline bool ResourceCountHasBeenSet() const { return m_resourceCountHasBeenSet; }

    /**
     * <p>The number of resources in the group.</p>
     */
    inline void SetResourceCount(long long value) { m_resourceCountHasBeenSet = true; m_resourceCount = value; }

    /**
     * <p>The number of resources in the group.</p>
     */
    inline GroupedResourceCount& WithResourceCount(long long value) { SetResourceCount(value); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    long long m_resourceCount;
    bool m_resourceCountHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
