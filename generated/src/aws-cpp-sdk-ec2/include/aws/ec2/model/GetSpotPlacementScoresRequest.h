/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TargetCapacityUnitType.h>
#include <aws/ec2/model/InstanceRequirementsWithMetadataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetSpotPlacementScoresRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetSpotPlacementScoresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSpotPlacementScores"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The target capacity.</p>
     */
    inline int GetTargetCapacity() const{ return m_targetCapacity; }

    /**
     * <p>The target capacity.</p>
     */
    inline bool TargetCapacityHasBeenSet() const { return m_targetCapacityHasBeenSet; }

    /**
     * <p>The target capacity.</p>
     */
    inline void SetTargetCapacity(int value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }

    /**
     * <p>The target capacity.</p>
     */
    inline GetSpotPlacementScoresRequest& WithTargetCapacity(int value) { SetTargetCapacity(value); return *this;}


    /**
     * <p>The unit for the target capacity.</p> <p>Default: <code>units</code>
     * (translates to number of instances)</p>
     */
    inline const TargetCapacityUnitType& GetTargetCapacityUnitType() const{ return m_targetCapacityUnitType; }

    /**
     * <p>The unit for the target capacity.</p> <p>Default: <code>units</code>
     * (translates to number of instances)</p>
     */
    inline bool TargetCapacityUnitTypeHasBeenSet() const { return m_targetCapacityUnitTypeHasBeenSet; }

    /**
     * <p>The unit for the target capacity.</p> <p>Default: <code>units</code>
     * (translates to number of instances)</p>
     */
    inline void SetTargetCapacityUnitType(const TargetCapacityUnitType& value) { m_targetCapacityUnitTypeHasBeenSet = true; m_targetCapacityUnitType = value; }

    /**
     * <p>The unit for the target capacity.</p> <p>Default: <code>units</code>
     * (translates to number of instances)</p>
     */
    inline void SetTargetCapacityUnitType(TargetCapacityUnitType&& value) { m_targetCapacityUnitTypeHasBeenSet = true; m_targetCapacityUnitType = std::move(value); }

    /**
     * <p>The unit for the target capacity.</p> <p>Default: <code>units</code>
     * (translates to number of instances)</p>
     */
    inline GetSpotPlacementScoresRequest& WithTargetCapacityUnitType(const TargetCapacityUnitType& value) { SetTargetCapacityUnitType(value); return *this;}

    /**
     * <p>The unit for the target capacity.</p> <p>Default: <code>units</code>
     * (translates to number of instances)</p>
     */
    inline GetSpotPlacementScoresRequest& WithTargetCapacityUnitType(TargetCapacityUnitType&& value) { SetTargetCapacityUnitType(std::move(value)); return *this;}


    /**
     * <p>Specify <code>true</code> so that the response returns a list of scored
     * Availability Zones. Otherwise, the response returns a list of scored
     * Regions.</p> <p>A list of scored Availability Zones is useful if you want to
     * launch all of your Spot capacity into a single Availability Zone.</p>
     */
    inline bool GetSingleAvailabilityZone() const{ return m_singleAvailabilityZone; }

    /**
     * <p>Specify <code>true</code> so that the response returns a list of scored
     * Availability Zones. Otherwise, the response returns a list of scored
     * Regions.</p> <p>A list of scored Availability Zones is useful if you want to
     * launch all of your Spot capacity into a single Availability Zone.</p>
     */
    inline bool SingleAvailabilityZoneHasBeenSet() const { return m_singleAvailabilityZoneHasBeenSet; }

    /**
     * <p>Specify <code>true</code> so that the response returns a list of scored
     * Availability Zones. Otherwise, the response returns a list of scored
     * Regions.</p> <p>A list of scored Availability Zones is useful if you want to
     * launch all of your Spot capacity into a single Availability Zone.</p>
     */
    inline void SetSingleAvailabilityZone(bool value) { m_singleAvailabilityZoneHasBeenSet = true; m_singleAvailabilityZone = value; }

    /**
     * <p>Specify <code>true</code> so that the response returns a list of scored
     * Availability Zones. Otherwise, the response returns a list of scored
     * Regions.</p> <p>A list of scored Availability Zones is useful if you want to
     * launch all of your Spot capacity into a single Availability Zone.</p>
     */
    inline GetSpotPlacementScoresRequest& WithSingleAvailabilityZone(bool value) { SetSingleAvailabilityZone(value); return *this;}


    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionNames() const{ return m_regionNames; }

    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline bool RegionNamesHasBeenSet() const { return m_regionNamesHasBeenSet; }

    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline void SetRegionNames(const Aws::Vector<Aws::String>& value) { m_regionNamesHasBeenSet = true; m_regionNames = value; }

    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline void SetRegionNames(Aws::Vector<Aws::String>&& value) { m_regionNamesHasBeenSet = true; m_regionNames = std::move(value); }

    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& WithRegionNames(const Aws::Vector<Aws::String>& value) { SetRegionNames(value); return *this;}

    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& WithRegionNames(Aws::Vector<Aws::String>&& value) { SetRegionNames(std::move(value)); return *this;}

    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& AddRegionNames(const Aws::String& value) { m_regionNamesHasBeenSet = true; m_regionNames.push_back(value); return *this; }

    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& AddRegionNames(Aws::String&& value) { m_regionNamesHasBeenSet = true; m_regionNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& AddRegionNames(const char* value) { m_regionNamesHasBeenSet = true; m_regionNames.push_back(value); return *this; }


    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p> <p>If you
     * specify <code>InstanceRequirementsWithMetadata</code>, you can't specify
     * <code>InstanceTypes</code>.</p>
     */
    inline const InstanceRequirementsWithMetadataRequest& GetInstanceRequirementsWithMetadata() const{ return m_instanceRequirementsWithMetadata; }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p> <p>If you
     * specify <code>InstanceRequirementsWithMetadata</code>, you can't specify
     * <code>InstanceTypes</code>.</p>
     */
    inline bool InstanceRequirementsWithMetadataHasBeenSet() const { return m_instanceRequirementsWithMetadataHasBeenSet; }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p> <p>If you
     * specify <code>InstanceRequirementsWithMetadata</code>, you can't specify
     * <code>InstanceTypes</code>.</p>
     */
    inline void SetInstanceRequirementsWithMetadata(const InstanceRequirementsWithMetadataRequest& value) { m_instanceRequirementsWithMetadataHasBeenSet = true; m_instanceRequirementsWithMetadata = value; }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p> <p>If you
     * specify <code>InstanceRequirementsWithMetadata</code>, you can't specify
     * <code>InstanceTypes</code>.</p>
     */
    inline void SetInstanceRequirementsWithMetadata(InstanceRequirementsWithMetadataRequest&& value) { m_instanceRequirementsWithMetadataHasBeenSet = true; m_instanceRequirementsWithMetadata = std::move(value); }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p> <p>If you
     * specify <code>InstanceRequirementsWithMetadata</code>, you can't specify
     * <code>InstanceTypes</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& WithInstanceRequirementsWithMetadata(const InstanceRequirementsWithMetadataRequest& value) { SetInstanceRequirementsWithMetadata(value); return *this;}

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p> <p>If you
     * specify <code>InstanceRequirementsWithMetadata</code>, you can't specify
     * <code>InstanceTypes</code>.</p>
     */
    inline GetSpotPlacementScoresRequest& WithInstanceRequirementsWithMetadata(InstanceRequirementsWithMetadataRequest&& value) { SetInstanceRequirementsWithMetadata(std::move(value)); return *this;}


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
    inline GetSpotPlacementScoresRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and&#x2028; 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with&#x2028; the returned <code>NextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and&#x2028; 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with&#x2028; the returned <code>NextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and&#x2028; 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with&#x2028; the returned <code>NextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and&#x2028; 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with&#x2028; the returned <code>NextToken</code>
     * value.</p>
     */
    inline GetSpotPlacementScoresRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetSpotPlacementScoresRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetSpotPlacementScoresRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetSpotPlacementScoresRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    int m_targetCapacity;
    bool m_targetCapacityHasBeenSet = false;

    TargetCapacityUnitType m_targetCapacityUnitType;
    bool m_targetCapacityUnitTypeHasBeenSet = false;

    bool m_singleAvailabilityZone;
    bool m_singleAvailabilityZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_regionNames;
    bool m_regionNamesHasBeenSet = false;

    InstanceRequirementsWithMetadataRequest m_instanceRequirementsWithMetadata;
    bool m_instanceRequirementsWithMetadataHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
