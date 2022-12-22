/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PlacementStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SpreadLevel.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreatePlacementGroupRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreatePlacementGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlacementGroup"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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


    /**
     * <p>The tags to apply to the new placement group.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the new placement group.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the new placement group.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the new placement group.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the new placement group.</p>
     */
    inline CreatePlacementGroupRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the new placement group.</p>
     */
    inline CreatePlacementGroupRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the new placement group.</p>
     */
    inline CreatePlacementGroupRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the new placement group.</p>
     */
    inline CreatePlacementGroupRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Determines how placement groups spread instances. </p> <ul> <li> <p>Host –
     * You can use <code>host</code> only with Outpost placement groups.</p> </li> <li>
     * <p>Rack – No usage restrictions.</p> </li> </ul>
     */
    inline const SpreadLevel& GetSpreadLevel() const{ return m_spreadLevel; }

    /**
     * <p>Determines how placement groups spread instances. </p> <ul> <li> <p>Host –
     * You can use <code>host</code> only with Outpost placement groups.</p> </li> <li>
     * <p>Rack – No usage restrictions.</p> </li> </ul>
     */
    inline bool SpreadLevelHasBeenSet() const { return m_spreadLevelHasBeenSet; }

    /**
     * <p>Determines how placement groups spread instances. </p> <ul> <li> <p>Host –
     * You can use <code>host</code> only with Outpost placement groups.</p> </li> <li>
     * <p>Rack – No usage restrictions.</p> </li> </ul>
     */
    inline void SetSpreadLevel(const SpreadLevel& value) { m_spreadLevelHasBeenSet = true; m_spreadLevel = value; }

    /**
     * <p>Determines how placement groups spread instances. </p> <ul> <li> <p>Host –
     * You can use <code>host</code> only with Outpost placement groups.</p> </li> <li>
     * <p>Rack – No usage restrictions.</p> </li> </ul>
     */
    inline void SetSpreadLevel(SpreadLevel&& value) { m_spreadLevelHasBeenSet = true; m_spreadLevel = std::move(value); }

    /**
     * <p>Determines how placement groups spread instances. </p> <ul> <li> <p>Host –
     * You can use <code>host</code> only with Outpost placement groups.</p> </li> <li>
     * <p>Rack – No usage restrictions.</p> </li> </ul>
     */
    inline CreatePlacementGroupRequest& WithSpreadLevel(const SpreadLevel& value) { SetSpreadLevel(value); return *this;}

    /**
     * <p>Determines how placement groups spread instances. </p> <ul> <li> <p>Host –
     * You can use <code>host</code> only with Outpost placement groups.</p> </li> <li>
     * <p>Rack – No usage restrictions.</p> </li> </ul>
     */
    inline CreatePlacementGroupRequest& WithSpreadLevel(SpreadLevel&& value) { SetSpreadLevel(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    PlacementStrategy m_strategy;
    bool m_strategyHasBeenSet = false;

    int m_partitionCount;
    bool m_partitionCountHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    SpreadLevel m_spreadLevel;
    bool m_spreadLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
