﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GroupedResourceCount
  {
  public:
    AWS_CONFIGSERVICE_API GroupedResourceCount() = default;
    AWS_CONFIGSERVICE_API GroupedResourceCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API GroupedResourceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the group that can be region, account ID, or resource type. For
     * example, region1, region2 if the region was chosen as
     * <code>GroupByKey</code>.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    GroupedResourceCount& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources in the group.</p>
     */
    inline long long GetResourceCount() const { return m_resourceCount; }
    inline bool ResourceCountHasBeenSet() const { return m_resourceCountHasBeenSet; }
    inline void SetResourceCount(long long value) { m_resourceCountHasBeenSet = true; m_resourceCount = value; }
    inline GroupedResourceCount& WithResourceCount(long long value) { SetResourceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    long long m_resourceCount{0};
    bool m_resourceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
