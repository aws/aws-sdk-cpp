/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FilterAction.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class CreateFilterRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API CreateFilterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFilter"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The detector ID associated with the GuardDuty account for which you want to
     * create a filter.</p> <p>To find the <code>detectorId</code> in the current
     * Region, see the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    CreateFilterRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the filter. Valid characters include period (.), underscore (_),
     * dash (-), and alphanumeric characters. A whitespace is considered to be an
     * invalid character.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateFilterRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the filter. Valid characters include alphanumeric
     * characters, and special characters such as hyphen, period, colon, underscore,
     * parentheses (<code>{ }</code>, <code>[ ]</code>, and <code>( )</code>), forward
     * slash, horizontal tab, vertical tab, newline, form feed, return, and
     * whitespace.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFilterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline FilterAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(FilterAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline CreateFilterRequest& WithAction(FilterAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline int GetRank() const { return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline CreateFilterRequest& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     * <p>You can only use the following attributes to query findings:</p> <ul> <li>
     * <p>accountId</p> </li> <li> <p>id</p> </li> <li> <p>region</p> </li> <li>
     * <p>severity</p> <p>To filter on the basis of severity, the API and CLI use the
     * following input list for the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_FindingCriteria.html">FindingCriteria</a>
     * condition:</p> <ul> <li> <p> <b>Low</b>: <code>["1", "2", "3"]</code> </p> </li>
     * <li> <p> <b>Medium</b>: <code>["4", "5", "6"]</code> </p> </li> <li> <p>
     * <b>High</b>: <code>["7", "8"]</code> </p> </li> <li> <p> <b>Critical</b>:
     * <code>["9", "10"]</code> </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_findings-severity.html">Findings
     * severity levels</a> in the <i>Amazon GuardDuty User Guide</i>.</p> </li> <li>
     * <p>type</p> </li> <li> <p>updatedAt</p> <p>Type: ISO 8601 string format:
     * YYYY-MM-DDTHH:MM:SS.SSSZ or YYYY-MM-DDTHH:MM:SSZ depending on whether the value
     * contains milliseconds.</p> </li> <li>
     * <p>resource.accessKeyDetails.accessKeyId</p> </li> <li>
     * <p>resource.accessKeyDetails.principalId</p> </li> <li>
     * <p>resource.accessKeyDetails.userName</p> </li> <li>
     * <p>resource.accessKeyDetails.userType</p> </li> <li>
     * <p>resource.instanceDetails.iamInstanceProfile.id</p> </li> <li>
     * <p>resource.instanceDetails.imageId</p> </li> <li>
     * <p>resource.instanceDetails.instanceId</p> </li> <li>
     * <p>resource.instanceDetails.tags.key</p> </li> <li>
     * <p>resource.instanceDetails.tags.value</p> </li> <li>
     * <p>resource.instanceDetails.networkInterfaces.ipv6Addresses</p> </li> <li>
     * <p>resource.instanceDetails.networkInterfaces.privateIpAddresses.privateIpAddress</p>
     * </li> <li> <p>resource.instanceDetails.networkInterfaces.publicDnsName</p> </li>
     * <li> <p>resource.instanceDetails.networkInterfaces.publicIp</p> </li> <li>
     * <p>resource.instanceDetails.networkInterfaces.securityGroups.groupId</p> </li>
     * <li> <p>resource.instanceDetails.networkInterfaces.securityGroups.groupName</p>
     * </li> <li> <p>resource.instanceDetails.networkInterfaces.subnetId</p> </li> <li>
     * <p>resource.instanceDetails.networkInterfaces.vpcId</p> </li> <li>
     * <p>resource.instanceDetails.outpostArn</p> </li> <li>
     * <p>resource.resourceType</p> </li> <li>
     * <p>resource.s3BucketDetails.publicAccess.effectivePermissions</p> </li> <li>
     * <p>resource.s3BucketDetails.name</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.key</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.value</p> </li> <li>
     * <p>resource.s3BucketDetails.type</p> </li> <li> <p>service.action.actionType</p>
     * </li> <li> <p>service.action.awsApiCallAction.api</p> </li> <li>
     * <p>service.action.awsApiCallAction.callerType</p> </li> <li>
     * <p>service.action.awsApiCallAction.errorCode</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.city.cityName</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.country.countryName</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.ipAddressV6</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.organization.asnOrg</p> </li>
     * <li> <p>service.action.awsApiCallAction.serviceName</p> </li> <li>
     * <p>service.action.dnsRequestAction.domain</p> </li> <li>
     * <p>service.action.dnsRequestAction.domainWithSuffix</p> </li> <li>
     * <p>service.action.dnsRequestAction.vpcOwnerAccountId</p> </li> <li>
     * <p>service.action.networkConnectionAction.blocked</p> </li> <li>
     * <p>service.action.networkConnectionAction.connectionDirection</p> </li> <li>
     * <p>service.action.networkConnectionAction.localPortDetails.port</p> </li> <li>
     * <p>service.action.networkConnectionAction.protocol</p> </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.city.cityName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.country.countryName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.networkConnectionAction.remoteIpDetails.ipAddressV6</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asnOrg</p>
     * </li> <li> <p>service.action.networkConnectionAction.remotePortDetails.port</p>
     * </li> <li>
     * <p>service.action.awsApiCallAction.remoteAccountDetails.affiliated</p> </li>
     * <li> <p>service.action.kubernetesApiCallAction.remoteIpDetails.ipAddressV4</p>
     * </li> <li>
     * <p>service.action.kubernetesApiCallAction.remoteIpDetails.ipAddressV6</p> </li>
     * <li> <p>service.action.kubernetesApiCallAction.namespace</p> </li> <li>
     * <p>service.action.kubernetesApiCallAction.remoteIpDetails.organization.asn</p>
     * </li> <li> <p>service.action.kubernetesApiCallAction.requestUri</p> </li> <li>
     * <p>service.action.kubernetesApiCallAction.statusCode</p> </li> <li>
     * <p>service.action.networkConnectionAction.localIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.networkConnectionAction.localIpDetails.ipAddressV6</p>
     * </li> <li> <p>service.action.networkConnectionAction.protocol</p> </li> <li>
     * <p>service.action.awsApiCallAction.serviceName</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteAccountDetails.accountId</p> </li> <li>
     * <p>service.additionalInfo.threatListName</p> </li> <li>
     * <p>service.resourceRole</p> </li> <li> <p>resource.eksClusterDetails.name</p>
     * </li> <li> <p>resource.kubernetesDetails.kubernetesWorkloadDetails.name</p>
     * </li> <li> <p>resource.kubernetesDetails.kubernetesWorkloadDetails.namespace</p>
     * </li> <li> <p>resource.kubernetesDetails.kubernetesUserDetails.username</p>
     * </li> <li>
     * <p>resource.kubernetesDetails.kubernetesWorkloadDetails.containers.image</p>
     * </li> <li>
     * <p>resource.kubernetesDetails.kubernetesWorkloadDetails.containers.imagePrefix</p>
     * </li> <li> <p>service.ebsVolumeScanDetails.scanId</p> </li> <li>
     * <p>service.ebsVolumeScanDetails.scanDetections.threatDetectedByName.threatNames.name</p>
     * </li> <li>
     * <p>service.ebsVolumeScanDetails.scanDetections.threatDetectedByName.threatNames.severity</p>
     * </li> <li>
     * <p>service.ebsVolumeScanDetails.scanDetections.threatDetectedByName.threatNames.filePaths.hash</p>
     * </li> <li> <p>resource.ecsClusterDetails.name</p> </li> <li>
     * <p>resource.ecsClusterDetails.taskDetails.containers.image</p> </li> <li>
     * <p>resource.ecsClusterDetails.taskDetails.definitionArn</p> </li> <li>
     * <p>resource.containerDetails.image</p> </li> <li>
     * <p>resource.rdsDbInstanceDetails.dbInstanceIdentifier</p> </li> <li>
     * <p>resource.rdsDbInstanceDetails.dbClusterIdentifier</p> </li> <li>
     * <p>resource.rdsDbInstanceDetails.engine</p> </li> <li>
     * <p>resource.rdsDbUserDetails.user</p> </li> <li>
     * <p>resource.rdsDbInstanceDetails.tags.key</p> </li> <li>
     * <p>resource.rdsDbInstanceDetails.tags.value</p> </li> <li>
     * <p>service.runtimeDetails.process.executableSha256</p> </li> <li>
     * <p>service.runtimeDetails.process.name</p> </li> <li>
     * <p>service.runtimeDetails.process.executablePath</p> </li> <li>
     * <p>resource.lambdaDetails.functionName</p> </li> <li>
     * <p>resource.lambdaDetails.functionArn</p> </li> <li>
     * <p>resource.lambdaDetails.tags.key</p> </li> <li>
     * <p>resource.lambdaDetails.tags.value</p> </li> </ul>
     */
    inline const FindingCriteria& GetFindingCriteria() const { return m_findingCriteria; }
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }
    template<typename FindingCriteriaT = FindingCriteria>
    void SetFindingCriteria(FindingCriteriaT&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::forward<FindingCriteriaT>(value); }
    template<typename FindingCriteriaT = FindingCriteria>
    CreateFilterRequest& WithFindingCriteria(FindingCriteriaT&& value) { SetFindingCriteria(std::forward<FindingCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateFilterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateFilterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateFilterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FilterAction m_action{FilterAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    int m_rank{0};
    bool m_rankHasBeenSet = false;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
