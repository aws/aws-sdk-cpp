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
    AWS_GUARDDUTY_API CreateFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFilter"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the detector belonging to the GuardDuty account that you want to
     * create a filter for.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector belonging to the GuardDuty account that you want to
     * create a filter for.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector belonging to the GuardDuty account that you want to
     * create a filter for.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector belonging to the GuardDuty account that you want to
     * create a filter for.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector belonging to the GuardDuty account that you want to
     * create a filter for.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector belonging to the GuardDuty account that you want to
     * create a filter for.</p>
     */
    inline CreateFilterRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector belonging to the GuardDuty account that you want to
     * create a filter for.</p>
     */
    inline CreateFilterRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector belonging to the GuardDuty account that you want to
     * create a filter for.</p>
     */
    inline CreateFilterRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The name of the filter. Valid characters include period (.), underscore (_),
     * dash (-), and alphanumeric characters. A whitespace is considered to be an
     * invalid character.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter. Valid characters include period (.), underscore (_),
     * dash (-), and alphanumeric characters. A whitespace is considered to be an
     * invalid character.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter. Valid characters include period (.), underscore (_),
     * dash (-), and alphanumeric characters. A whitespace is considered to be an
     * invalid character.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter. Valid characters include period (.), underscore (_),
     * dash (-), and alphanumeric characters. A whitespace is considered to be an
     * invalid character.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter. Valid characters include period (.), underscore (_),
     * dash (-), and alphanumeric characters. A whitespace is considered to be an
     * invalid character.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter. Valid characters include period (.), underscore (_),
     * dash (-), and alphanumeric characters. A whitespace is considered to be an
     * invalid character.</p>
     */
    inline CreateFilterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter. Valid characters include period (.), underscore (_),
     * dash (-), and alphanumeric characters. A whitespace is considered to be an
     * invalid character.</p>
     */
    inline CreateFilterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter. Valid characters include period (.), underscore (_),
     * dash (-), and alphanumeric characters. A whitespace is considered to be an
     * invalid character.</p>
     */
    inline CreateFilterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline CreateFilterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline CreateFilterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline CreateFilterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline const FilterAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(const FilterAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(FilterAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline CreateFilterRequest& WithAction(const FilterAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline CreateFilterRequest& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline CreateFilterRequest& WithRank(int value) { SetRank(value); return *this;}


    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     * <p>You can only use the following attributes to query findings:</p> <ul> <li>
     * <p>accountId</p> </li> <li> <p>region</p> </li> <li> <p>confidence</p> </li>
     * <li> <p>id</p> </li> <li> <p>resource.accessKeyDetails.accessKeyId</p> </li>
     * <li> <p>resource.accessKeyDetails.principalId</p> </li> <li>
     * <p>resource.accessKeyDetails.userName</p> </li> <li>
     * <p>resource.accessKeyDetails.userType</p> </li> <li>
     * <p>resource.instanceDetails.iamInstanceProfile.id</p> </li> <li>
     * <p>resource.instanceDetails.imageId</p> </li> <li>
     * <p>resource.instanceDetails.instanceId</p> </li> <li>
     * <p>resource.instanceDetails.outpostArn</p> </li> <li>
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
     * <p>service.action.awsApiCallAction.errorCode</p> </li> <li>
     * <p>service.action.awsApiCallAction.userAgent</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.city.cityName</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.country.countryName</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.organization.asnOrg</p> </li>
     * <li> <p>service.action.awsApiCallAction.serviceName</p> </li> <li>
     * <p>service.action.dnsRequestAction.domain</p> </li> <li>
     * <p>service.action.networkConnectionAction.blocked</p> </li> <li>
     * <p>service.action.networkConnectionAction.connectionDirection</p> </li> <li>
     * <p>service.action.networkConnectionAction.localPortDetails.port</p> </li> <li>
     * <p>service.action.networkConnectionAction.protocol</p> </li> <li>
     * <p>service.action.networkConnectionAction.localIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.networkConnectionAction.remoteIpDetails.city.cityName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.country.countryName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asnOrg</p>
     * </li> <li> <p>service.action.networkConnectionAction.remotePortDetails.port</p>
     * </li> <li> <p>service.additionalInfo.threatListName</p> </li> <li>
     * <p>resource.s3BucketDetails.publicAccess.effectivePermissions</p> </li> <li>
     * <p>resource.s3BucketDetails.name</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.key</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.value</p> </li> <li>
     * <p>resource.s3BucketDetails.type</p> </li> <li> <p>service.archived</p> <p>When
     * this attribute is set to TRUE, only archived findings are listed. When it's set
     * to FALSE, only unarchived findings are listed. When this attribute is not set,
     * all existing findings are listed.</p> </li> <li> <p>service.resourceRole</p>
     * </li> <li> <p>severity</p> </li> <li> <p>type</p> </li> <li> <p>updatedAt</p>
     * <p>Type: ISO 8601 string format: YYYY-MM-DDTHH:MM:SS.SSSZ or
     * YYYY-MM-DDTHH:MM:SSZ depending on whether the value contains milliseconds.</p>
     * </li> </ul>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     * <p>You can only use the following attributes to query findings:</p> <ul> <li>
     * <p>accountId</p> </li> <li> <p>region</p> </li> <li> <p>confidence</p> </li>
     * <li> <p>id</p> </li> <li> <p>resource.accessKeyDetails.accessKeyId</p> </li>
     * <li> <p>resource.accessKeyDetails.principalId</p> </li> <li>
     * <p>resource.accessKeyDetails.userName</p> </li> <li>
     * <p>resource.accessKeyDetails.userType</p> </li> <li>
     * <p>resource.instanceDetails.iamInstanceProfile.id</p> </li> <li>
     * <p>resource.instanceDetails.imageId</p> </li> <li>
     * <p>resource.instanceDetails.instanceId</p> </li> <li>
     * <p>resource.instanceDetails.outpostArn</p> </li> <li>
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
     * <p>service.action.awsApiCallAction.errorCode</p> </li> <li>
     * <p>service.action.awsApiCallAction.userAgent</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.city.cityName</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.country.countryName</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.organization.asnOrg</p> </li>
     * <li> <p>service.action.awsApiCallAction.serviceName</p> </li> <li>
     * <p>service.action.dnsRequestAction.domain</p> </li> <li>
     * <p>service.action.networkConnectionAction.blocked</p> </li> <li>
     * <p>service.action.networkConnectionAction.connectionDirection</p> </li> <li>
     * <p>service.action.networkConnectionAction.localPortDetails.port</p> </li> <li>
     * <p>service.action.networkConnectionAction.protocol</p> </li> <li>
     * <p>service.action.networkConnectionAction.localIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.networkConnectionAction.remoteIpDetails.city.cityName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.country.countryName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asnOrg</p>
     * </li> <li> <p>service.action.networkConnectionAction.remotePortDetails.port</p>
     * </li> <li> <p>service.additionalInfo.threatListName</p> </li> <li>
     * <p>resource.s3BucketDetails.publicAccess.effectivePermissions</p> </li> <li>
     * <p>resource.s3BucketDetails.name</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.key</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.value</p> </li> <li>
     * <p>resource.s3BucketDetails.type</p> </li> <li> <p>service.archived</p> <p>When
     * this attribute is set to TRUE, only archived findings are listed. When it's set
     * to FALSE, only unarchived findings are listed. When this attribute is not set,
     * all existing findings are listed.</p> </li> <li> <p>service.resourceRole</p>
     * </li> <li> <p>severity</p> </li> <li> <p>type</p> </li> <li> <p>updatedAt</p>
     * <p>Type: ISO 8601 string format: YYYY-MM-DDTHH:MM:SS.SSSZ or
     * YYYY-MM-DDTHH:MM:SSZ depending on whether the value contains milliseconds.</p>
     * </li> </ul>
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     * <p>You can only use the following attributes to query findings:</p> <ul> <li>
     * <p>accountId</p> </li> <li> <p>region</p> </li> <li> <p>confidence</p> </li>
     * <li> <p>id</p> </li> <li> <p>resource.accessKeyDetails.accessKeyId</p> </li>
     * <li> <p>resource.accessKeyDetails.principalId</p> </li> <li>
     * <p>resource.accessKeyDetails.userName</p> </li> <li>
     * <p>resource.accessKeyDetails.userType</p> </li> <li>
     * <p>resource.instanceDetails.iamInstanceProfile.id</p> </li> <li>
     * <p>resource.instanceDetails.imageId</p> </li> <li>
     * <p>resource.instanceDetails.instanceId</p> </li> <li>
     * <p>resource.instanceDetails.outpostArn</p> </li> <li>
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
     * <p>service.action.awsApiCallAction.errorCode</p> </li> <li>
     * <p>service.action.awsApiCallAction.userAgent</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.city.cityName</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.country.countryName</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.organization.asnOrg</p> </li>
     * <li> <p>service.action.awsApiCallAction.serviceName</p> </li> <li>
     * <p>service.action.dnsRequestAction.domain</p> </li> <li>
     * <p>service.action.networkConnectionAction.blocked</p> </li> <li>
     * <p>service.action.networkConnectionAction.connectionDirection</p> </li> <li>
     * <p>service.action.networkConnectionAction.localPortDetails.port</p> </li> <li>
     * <p>service.action.networkConnectionAction.protocol</p> </li> <li>
     * <p>service.action.networkConnectionAction.localIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.networkConnectionAction.remoteIpDetails.city.cityName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.country.countryName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asnOrg</p>
     * </li> <li> <p>service.action.networkConnectionAction.remotePortDetails.port</p>
     * </li> <li> <p>service.additionalInfo.threatListName</p> </li> <li>
     * <p>resource.s3BucketDetails.publicAccess.effectivePermissions</p> </li> <li>
     * <p>resource.s3BucketDetails.name</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.key</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.value</p> </li> <li>
     * <p>resource.s3BucketDetails.type</p> </li> <li> <p>service.archived</p> <p>When
     * this attribute is set to TRUE, only archived findings are listed. When it's set
     * to FALSE, only unarchived findings are listed. When this attribute is not set,
     * all existing findings are listed.</p> </li> <li> <p>service.resourceRole</p>
     * </li> <li> <p>severity</p> </li> <li> <p>type</p> </li> <li> <p>updatedAt</p>
     * <p>Type: ISO 8601 string format: YYYY-MM-DDTHH:MM:SS.SSSZ or
     * YYYY-MM-DDTHH:MM:SSZ depending on whether the value contains milliseconds.</p>
     * </li> </ul>
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     * <p>You can only use the following attributes to query findings:</p> <ul> <li>
     * <p>accountId</p> </li> <li> <p>region</p> </li> <li> <p>confidence</p> </li>
     * <li> <p>id</p> </li> <li> <p>resource.accessKeyDetails.accessKeyId</p> </li>
     * <li> <p>resource.accessKeyDetails.principalId</p> </li> <li>
     * <p>resource.accessKeyDetails.userName</p> </li> <li>
     * <p>resource.accessKeyDetails.userType</p> </li> <li>
     * <p>resource.instanceDetails.iamInstanceProfile.id</p> </li> <li>
     * <p>resource.instanceDetails.imageId</p> </li> <li>
     * <p>resource.instanceDetails.instanceId</p> </li> <li>
     * <p>resource.instanceDetails.outpostArn</p> </li> <li>
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
     * <p>service.action.awsApiCallAction.errorCode</p> </li> <li>
     * <p>service.action.awsApiCallAction.userAgent</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.city.cityName</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.country.countryName</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.organization.asnOrg</p> </li>
     * <li> <p>service.action.awsApiCallAction.serviceName</p> </li> <li>
     * <p>service.action.dnsRequestAction.domain</p> </li> <li>
     * <p>service.action.networkConnectionAction.blocked</p> </li> <li>
     * <p>service.action.networkConnectionAction.connectionDirection</p> </li> <li>
     * <p>service.action.networkConnectionAction.localPortDetails.port</p> </li> <li>
     * <p>service.action.networkConnectionAction.protocol</p> </li> <li>
     * <p>service.action.networkConnectionAction.localIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.networkConnectionAction.remoteIpDetails.city.cityName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.country.countryName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asnOrg</p>
     * </li> <li> <p>service.action.networkConnectionAction.remotePortDetails.port</p>
     * </li> <li> <p>service.additionalInfo.threatListName</p> </li> <li>
     * <p>resource.s3BucketDetails.publicAccess.effectivePermissions</p> </li> <li>
     * <p>resource.s3BucketDetails.name</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.key</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.value</p> </li> <li>
     * <p>resource.s3BucketDetails.type</p> </li> <li> <p>service.archived</p> <p>When
     * this attribute is set to TRUE, only archived findings are listed. When it's set
     * to FALSE, only unarchived findings are listed. When this attribute is not set,
     * all existing findings are listed.</p> </li> <li> <p>service.resourceRole</p>
     * </li> <li> <p>severity</p> </li> <li> <p>type</p> </li> <li> <p>updatedAt</p>
     * <p>Type: ISO 8601 string format: YYYY-MM-DDTHH:MM:SS.SSSZ or
     * YYYY-MM-DDTHH:MM:SSZ depending on whether the value contains milliseconds.</p>
     * </li> </ul>
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     * <p>You can only use the following attributes to query findings:</p> <ul> <li>
     * <p>accountId</p> </li> <li> <p>region</p> </li> <li> <p>confidence</p> </li>
     * <li> <p>id</p> </li> <li> <p>resource.accessKeyDetails.accessKeyId</p> </li>
     * <li> <p>resource.accessKeyDetails.principalId</p> </li> <li>
     * <p>resource.accessKeyDetails.userName</p> </li> <li>
     * <p>resource.accessKeyDetails.userType</p> </li> <li>
     * <p>resource.instanceDetails.iamInstanceProfile.id</p> </li> <li>
     * <p>resource.instanceDetails.imageId</p> </li> <li>
     * <p>resource.instanceDetails.instanceId</p> </li> <li>
     * <p>resource.instanceDetails.outpostArn</p> </li> <li>
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
     * <p>service.action.awsApiCallAction.errorCode</p> </li> <li>
     * <p>service.action.awsApiCallAction.userAgent</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.city.cityName</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.country.countryName</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.organization.asnOrg</p> </li>
     * <li> <p>service.action.awsApiCallAction.serviceName</p> </li> <li>
     * <p>service.action.dnsRequestAction.domain</p> </li> <li>
     * <p>service.action.networkConnectionAction.blocked</p> </li> <li>
     * <p>service.action.networkConnectionAction.connectionDirection</p> </li> <li>
     * <p>service.action.networkConnectionAction.localPortDetails.port</p> </li> <li>
     * <p>service.action.networkConnectionAction.protocol</p> </li> <li>
     * <p>service.action.networkConnectionAction.localIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.networkConnectionAction.remoteIpDetails.city.cityName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.country.countryName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asnOrg</p>
     * </li> <li> <p>service.action.networkConnectionAction.remotePortDetails.port</p>
     * </li> <li> <p>service.additionalInfo.threatListName</p> </li> <li>
     * <p>resource.s3BucketDetails.publicAccess.effectivePermissions</p> </li> <li>
     * <p>resource.s3BucketDetails.name</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.key</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.value</p> </li> <li>
     * <p>resource.s3BucketDetails.type</p> </li> <li> <p>service.archived</p> <p>When
     * this attribute is set to TRUE, only archived findings are listed. When it's set
     * to FALSE, only unarchived findings are listed. When this attribute is not set,
     * all existing findings are listed.</p> </li> <li> <p>service.resourceRole</p>
     * </li> <li> <p>severity</p> </li> <li> <p>type</p> </li> <li> <p>updatedAt</p>
     * <p>Type: ISO 8601 string format: YYYY-MM-DDTHH:MM:SS.SSSZ or
     * YYYY-MM-DDTHH:MM:SSZ depending on whether the value contains milliseconds.</p>
     * </li> </ul>
     */
    inline CreateFilterRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     * <p>You can only use the following attributes to query findings:</p> <ul> <li>
     * <p>accountId</p> </li> <li> <p>region</p> </li> <li> <p>confidence</p> </li>
     * <li> <p>id</p> </li> <li> <p>resource.accessKeyDetails.accessKeyId</p> </li>
     * <li> <p>resource.accessKeyDetails.principalId</p> </li> <li>
     * <p>resource.accessKeyDetails.userName</p> </li> <li>
     * <p>resource.accessKeyDetails.userType</p> </li> <li>
     * <p>resource.instanceDetails.iamInstanceProfile.id</p> </li> <li>
     * <p>resource.instanceDetails.imageId</p> </li> <li>
     * <p>resource.instanceDetails.instanceId</p> </li> <li>
     * <p>resource.instanceDetails.outpostArn</p> </li> <li>
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
     * <p>service.action.awsApiCallAction.errorCode</p> </li> <li>
     * <p>service.action.awsApiCallAction.userAgent</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.city.cityName</p> </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.country.countryName</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.awsApiCallAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.awsApiCallAction.remoteIpDetails.organization.asnOrg</p> </li>
     * <li> <p>service.action.awsApiCallAction.serviceName</p> </li> <li>
     * <p>service.action.dnsRequestAction.domain</p> </li> <li>
     * <p>service.action.networkConnectionAction.blocked</p> </li> <li>
     * <p>service.action.networkConnectionAction.connectionDirection</p> </li> <li>
     * <p>service.action.networkConnectionAction.localPortDetails.port</p> </li> <li>
     * <p>service.action.networkConnectionAction.protocol</p> </li> <li>
     * <p>service.action.networkConnectionAction.localIpDetails.ipAddressV4</p> </li>
     * <li> <p>service.action.networkConnectionAction.remoteIpDetails.city.cityName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.country.countryName</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.ipAddressV4</p> </li>
     * <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asn</p>
     * </li> <li>
     * <p>service.action.networkConnectionAction.remoteIpDetails.organization.asnOrg</p>
     * </li> <li> <p>service.action.networkConnectionAction.remotePortDetails.port</p>
     * </li> <li> <p>service.additionalInfo.threatListName</p> </li> <li>
     * <p>resource.s3BucketDetails.publicAccess.effectivePermissions</p> </li> <li>
     * <p>resource.s3BucketDetails.name</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.key</p> </li> <li>
     * <p>resource.s3BucketDetails.tags.value</p> </li> <li>
     * <p>resource.s3BucketDetails.type</p> </li> <li> <p>service.archived</p> <p>When
     * this attribute is set to TRUE, only archived findings are listed. When it's set
     * to FALSE, only unarchived findings are listed. When this attribute is not set,
     * all existing findings are listed.</p> </li> <li> <p>service.resourceRole</p>
     * </li> <li> <p>severity</p> </li> <li> <p>type</p> </li> <li> <p>updatedAt</p>
     * <p>Type: ISO 8601 string format: YYYY-MM-DDTHH:MM:SS.SSSZ or
     * YYYY-MM-DDTHH:MM:SSZ depending on whether the value contains milliseconds.</p>
     * </li> </ul>
     */
    inline CreateFilterRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateFilterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateFilterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateFilterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FilterAction m_action;
    bool m_actionHasBeenSet = false;

    int m_rank;
    bool m_rankHasBeenSet = false;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
