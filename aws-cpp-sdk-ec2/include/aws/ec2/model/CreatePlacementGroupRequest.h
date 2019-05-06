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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PlacementStrategy.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreatePlacementGroupRequest : public EC2Request
  {
  public:
    CreatePlacementGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlacementGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreatePlacementGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>A name for the placement group. Must be unique within the scope of your
     * account for the Region.</p> <p>Constraints: Up to 255 ASCII characters</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>A name for the placement group. Must be unique within the scope of your
     * account for the Region.</p> <p>Constraints: Up to 255 ASCII characters</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>A name for the placement group. Must be unique within the scope of your
     * account for the Region.</p> <p>Constraints: Up to 255 ASCII characters</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>A name for the placement group. Must be unique within the scope of your
     * account for the Region.</p> <p>Constraints: Up to 255 ASCII characters</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>A name for the placement group. Must be unique within the scope of your
     * account for the Region.</p> <p>Constraints: Up to 255 ASCII characters</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>A name for the placement group. Must be unique within the scope of your
     * account for the Region.</p> <p>Constraints: Up to 255 ASCII characters</p>
     */
    inline CreatePlacementGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>A name for the placement group. Must be unique within the scope of your
     * account for the Region.</p> <p>Constraints: Up to 255 ASCII characters</p>
     */
    inline CreatePlacementGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>A name for the placement group. Must be unique within the scope of your
     * account for the Region.</p> <p>Constraints: Up to 255 ASCII characters</p>
     */
    inline CreatePlacementGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The placement strategy.</p>
     */
    inline const PlacementStrategy& GetStrategy() const{ return m_strategy; }

    /**
     * <p>The placement strategy.</p>
     */
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }

    /**
     * <p>The placement strategy.</p>
     */
    inline void SetStrategy(const PlacementStrategy& value) { m_strategyHasBeenSet = true; m_strategy = value; }

    /**
     * <p>The placement strategy.</p>
     */
    inline void SetStrategy(PlacementStrategy&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }

    /**
     * <p>The placement strategy.</p>
     */
    inline CreatePlacementGroupRequest& WithStrategy(const PlacementStrategy& value) { SetStrategy(value); return *this;}

    /**
     * <p>The placement strategy.</p>
     */
    inline CreatePlacementGroupRequest& WithStrategy(PlacementStrategy&& value) { SetStrategy(std::move(value)); return *this;}


    /**
     * <p>The number of partitions. Valid only when <b>Strategy</b> is set to
     * <code>partition</code>.</p>
     */
    inline int GetPartitionCount() const{ return m_partitionCount; }

    /**
     * <p>The number of partitions. Valid only when <b>Strategy</b> is set to
     * <code>partition</code>.</p>
     */
    inline bool PartitionCountHasBeenSet() const { return m_partitionCountHasBeenSet; }

    /**
     * <p>The number of partitions. Valid only when <b>Strategy</b> is set to
     * <code>partition</code>.</p>
     */
    inline void SetPartitionCount(int value) { m_partitionCountHasBeenSet = true; m_partitionCount = value; }

    /**
     * <p>The number of partitions. Valid only when <b>Strategy</b> is set to
     * <code>partition</code>.</p>
     */
    inline CreatePlacementGroupRequest& WithPartitionCount(int value) { SetPartitionCount(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    PlacementStrategy m_strategy;
    bool m_strategyHasBeenSet;

    int m_partitionCount;
    bool m_partitionCountHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
