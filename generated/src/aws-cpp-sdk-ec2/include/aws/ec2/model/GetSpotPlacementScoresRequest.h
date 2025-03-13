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
    AWS_EC2_API GetSpotPlacementScoresRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSpotPlacementScores"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The instance types. We recommend that you specify at least three instance
     * types. If you specify one or two instance types, or specify variations of a
     * single instance type (for example, an <code>m3.xlarge</code> with and without
     * instance storage), the returned placement score will always be low. </p> <p>If
     * you specify <code>InstanceTypes</code>, you can't specify
     * <code>InstanceRequirementsWithMetadata</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const { return m_instanceTypes; }
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    void SetInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::forward<InstanceTypesT>(value); }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    GetSpotPlacementScoresRequest& WithInstanceTypes(InstanceTypesT&& value) { SetInstanceTypes(std::forward<InstanceTypesT>(value)); return *this;}
    template<typename InstanceTypesT = Aws::String>
    GetSpotPlacementScoresRequest& AddInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target capacity.</p>
     */
    inline int GetTargetCapacity() const { return m_targetCapacity; }
    inline bool TargetCapacityHasBeenSet() const { return m_targetCapacityHasBeenSet; }
    inline void SetTargetCapacity(int value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }
    inline GetSpotPlacementScoresRequest& WithTargetCapacity(int value) { SetTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for the target capacity.</p>
     */
    inline TargetCapacityUnitType GetTargetCapacityUnitType() const { return m_targetCapacityUnitType; }
    inline bool TargetCapacityUnitTypeHasBeenSet() const { return m_targetCapacityUnitTypeHasBeenSet; }
    inline void SetTargetCapacityUnitType(TargetCapacityUnitType value) { m_targetCapacityUnitTypeHasBeenSet = true; m_targetCapacityUnitType = value; }
    inline GetSpotPlacementScoresRequest& WithTargetCapacityUnitType(TargetCapacityUnitType value) { SetTargetCapacityUnitType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> so that the response returns a list of scored
     * Availability Zones. Otherwise, the response returns a list of scored
     * Regions.</p> <p>A list of scored Availability Zones is useful if you want to
     * launch all of your Spot capacity into a single Availability Zone.</p>
     */
    inline bool GetSingleAvailabilityZone() const { return m_singleAvailabilityZone; }
    inline bool SingleAvailabilityZoneHasBeenSet() const { return m_singleAvailabilityZoneHasBeenSet; }
    inline void SetSingleAvailabilityZone(bool value) { m_singleAvailabilityZoneHasBeenSet = true; m_singleAvailabilityZone = value; }
    inline GetSpotPlacementScoresRequest& WithSingleAvailabilityZone(bool value) { SetSingleAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Regions used to narrow down the list of Regions to be scored. Enter the
     * Region code, for example, <code>us-east-1</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionNames() const { return m_regionNames; }
    inline bool RegionNamesHasBeenSet() const { return m_regionNamesHasBeenSet; }
    template<typename RegionNamesT = Aws::Vector<Aws::String>>
    void SetRegionNames(RegionNamesT&& value) { m_regionNamesHasBeenSet = true; m_regionNames = std::forward<RegionNamesT>(value); }
    template<typename RegionNamesT = Aws::Vector<Aws::String>>
    GetSpotPlacementScoresRequest& WithRegionNames(RegionNamesT&& value) { SetRegionNames(std::forward<RegionNamesT>(value)); return *this;}
    template<typename RegionNamesT = Aws::String>
    GetSpotPlacementScoresRequest& AddRegionNames(RegionNamesT&& value) { m_regionNamesHasBeenSet = true; m_regionNames.emplace_back(std::forward<RegionNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p> <p>If you
     * specify <code>InstanceRequirementsWithMetadata</code>, you can't specify
     * <code>InstanceTypes</code>.</p>
     */
    inline const InstanceRequirementsWithMetadataRequest& GetInstanceRequirementsWithMetadata() const { return m_instanceRequirementsWithMetadata; }
    inline bool InstanceRequirementsWithMetadataHasBeenSet() const { return m_instanceRequirementsWithMetadataHasBeenSet; }
    template<typename InstanceRequirementsWithMetadataT = InstanceRequirementsWithMetadataRequest>
    void SetInstanceRequirementsWithMetadata(InstanceRequirementsWithMetadataT&& value) { m_instanceRequirementsWithMetadataHasBeenSet = true; m_instanceRequirementsWithMetadata = std::forward<InstanceRequirementsWithMetadataT>(value); }
    template<typename InstanceRequirementsWithMetadataT = InstanceRequirementsWithMetadataRequest>
    GetSpotPlacementScoresRequest& WithInstanceRequirementsWithMetadata(InstanceRequirementsWithMetadataT&& value) { SetInstanceRequirementsWithMetadata(std::forward<InstanceRequirementsWithMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GetSpotPlacementScoresRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetSpotPlacementScoresRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSpotPlacementScoresRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    int m_targetCapacity{0};
    bool m_targetCapacityHasBeenSet = false;

    TargetCapacityUnitType m_targetCapacityUnitType{TargetCapacityUnitType::NOT_SET};
    bool m_targetCapacityUnitTypeHasBeenSet = false;

    bool m_singleAvailabilityZone{false};
    bool m_singleAvailabilityZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_regionNames;
    bool m_regionNamesHasBeenSet = false;

    InstanceRequirementsWithMetadataRequest m_instanceRequirementsWithMetadata;
    bool m_instanceRequirementsWithMetadataHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
