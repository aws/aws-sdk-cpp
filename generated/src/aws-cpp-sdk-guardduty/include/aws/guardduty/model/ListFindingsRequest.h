/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <aws/guardduty/model/SortCriteria.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class ListFindingsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API ListFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFindings"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to list.</p> <p>To find the <code>detectorId</code> in the current
     * Region, see the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline ListFindingsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline ListFindingsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline ListFindingsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the criteria used for querying findings. Valid values include:</p>
     * <ul> <li> <p>JSON field name</p> </li> <li> <p>accountId</p> </li> <li>
     * <p>region</p> </li> <li> <p>confidence</p> </li> <li> <p>id</p> </li> <li>
     * <p>resource.accessKeyDetails.accessKeyId</p> </li> <li>
     * <p>resource.accessKeyDetails.principalId</p> </li> <li>
     * <p>resource.accessKeyDetails.userName</p> </li> <li>
     * <p>resource.accessKeyDetails.userType</p> </li> <li>
     * <p>resource.instanceDetails.iamInstanceProfile.id</p> </li> <li>
     * <p>resource.instanceDetails.imageId</p> </li> <li>
     * <p>resource.instanceDetails.instanceId</p> </li> <li>
     * <p>resource.instanceDetails.networkInterfaces.ipv6Addresses</p> </li> <li>
     * <p>resource.instanceDetails.networkInterfaces.privateIpAddresses.privateIpAddress</p>
     * </li> <li> <p>resource.instanceDetails.networkInterfaces.publicDnsName</p> </li>
     * <li> <p>resource.instanceDetails.networkInterfaces.publicIp</p> </li> <li>
     * <p>resource.instanceDetails.networkInterfaces.securityGroups.groupId</p> </li>
     * <li> <p>resource.instanceDetails.networkInterfaces.securityGroups.groupName</p>
     * </li> <li> <p>resource.instanceDetails.networkInterfaces.subnetId</p> </li> <li>
     * <p>resource.instanceDetails.networkInterfaces.vpcId</p> </li> <li>
     * <p>resource.instanceDetails.tags.key</p> </li> <li>
     * <p>resource.instanceDetails.tags.value</p> </li> <li>
     * <p>resource.resourceType</p> </li> <li> <p>service.action.actionType</p> </li>
     * <li> <p>service.action.awsApiCallAction.api</p> </li> <li>
     * <p>service.action.awsApiCallAction.callerType</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.city.cityName</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.country.countryName</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.organization.asnOrg</p> </li>
     * <li> <p>service.action.awsApiCallAction.serviceName</p> </li> <li>
     * <p>service.action.dnsRequestAction.domain</p> </li> <li>
     * <p>service.action.dnsRequestAction.domainWithSuffix</p> </li> <li>
     * <p>service.action.networkConnectionAction.blocked</p> </li> <li>
     * <p>service.action.networkConnectionAction.connectionDirection</p> </li> <li>
     * <p>service.action.networkConnectionAction.localPortDetails.port</p> </li> <li>
     * <p>service.action.networkConnectionAction.protocol</p> </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.country.countryName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asnOrg</p>
     * </li> <li> <p>service.action.networkConnectionAction.remotePortDetails.port</p>
     * </li> <li> <p>service.additionalInfo.threatListName</p> </li> <li>
     * <p>service.archived</p> <p>When this attribute is set to 'true', only archived
     * findings are listed. When it's set to 'false', only unarchived findings are
     * listed. When this attribute is not set, all existing findings are listed.</p>
     * </li> <li> <p>service.ebsVolumeScanDetails.scanId</p> </li> <li>
     * <p>service.resourceRole</p> </li> <li> <p>severity</p> </li> <li> <p>type</p>
     * </li> <li> <p>updatedAt</p> <p>Type: Timestamp in Unix Epoch millisecond format:
     * 1486685375000</p> </li> </ul>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }
    inline ListFindingsRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}
    inline ListFindingsRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the criteria used for sorting findings.</p>
     */
    inline const SortCriteria& GetSortCriteria() const{ return m_sortCriteria; }
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
    inline void SetSortCriteria(const SortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }
    inline void SetSortCriteria(SortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }
    inline ListFindingsRequest& WithSortCriteria(const SortCriteria& value) { SetSortCriteria(value); return *this;}
    inline ListFindingsRequest& WithSortCriteria(SortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 50. The maximum value is 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill nextToken in the request with the value of NextToken from the
     * previous response to continue listing data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFindingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;

    SortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
