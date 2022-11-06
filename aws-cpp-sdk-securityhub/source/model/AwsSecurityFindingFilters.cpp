/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsSecurityFindingFilters::AwsSecurityFindingFilters() : 
    m_productArnHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_generatorIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_severityLabelHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_criticalityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationTextHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_productFieldsHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_userDefinedFieldsHasBeenSet(false),
    m_malwareNameHasBeenSet(false),
    m_malwareTypeHasBeenSet(false),
    m_malwarePathHasBeenSet(false),
    m_malwareStateHasBeenSet(false),
    m_networkDirectionHasBeenSet(false),
    m_networkProtocolHasBeenSet(false),
    m_networkSourceIpV4HasBeenSet(false),
    m_networkSourceIpV6HasBeenSet(false),
    m_networkSourcePortHasBeenSet(false),
    m_networkSourceDomainHasBeenSet(false),
    m_networkSourceMacHasBeenSet(false),
    m_networkDestinationIpV4HasBeenSet(false),
    m_networkDestinationIpV6HasBeenSet(false),
    m_networkDestinationPortHasBeenSet(false),
    m_networkDestinationDomainHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_processPidHasBeenSet(false),
    m_processParentPidHasBeenSet(false),
    m_processLaunchedAtHasBeenSet(false),
    m_processTerminatedAtHasBeenSet(false),
    m_threatIntelIndicatorTypeHasBeenSet(false),
    m_threatIntelIndicatorValueHasBeenSet(false),
    m_threatIntelIndicatorCategoryHasBeenSet(false),
    m_threatIntelIndicatorLastObservedAtHasBeenSet(false),
    m_threatIntelIndicatorSourceHasBeenSet(false),
    m_threatIntelIndicatorSourceUrlHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourcePartitionHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_resourceAwsEc2InstanceTypeHasBeenSet(false),
    m_resourceAwsEc2InstanceImageIdHasBeenSet(false),
    m_resourceAwsEc2InstanceIpV4AddressesHasBeenSet(false),
    m_resourceAwsEc2InstanceIpV6AddressesHasBeenSet(false),
    m_resourceAwsEc2InstanceKeyNameHasBeenSet(false),
    m_resourceAwsEc2InstanceIamInstanceProfileArnHasBeenSet(false),
    m_resourceAwsEc2InstanceVpcIdHasBeenSet(false),
    m_resourceAwsEc2InstanceSubnetIdHasBeenSet(false),
    m_resourceAwsEc2InstanceLaunchedAtHasBeenSet(false),
    m_resourceAwsS3BucketOwnerIdHasBeenSet(false),
    m_resourceAwsS3BucketOwnerNameHasBeenSet(false),
    m_resourceAwsIamAccessKeyPrincipalNameHasBeenSet(false),
    m_resourceAwsIamAccessKeyStatusHasBeenSet(false),
    m_resourceAwsIamAccessKeyCreatedAtHasBeenSet(false),
    m_resourceAwsIamUserUserNameHasBeenSet(false),
    m_resourceContainerNameHasBeenSet(false),
    m_resourceContainerImageIdHasBeenSet(false),
    m_resourceContainerImageNameHasBeenSet(false),
    m_resourceContainerLaunchedAtHasBeenSet(false),
    m_resourceDetailsOtherHasBeenSet(false),
    m_complianceStatusHasBeenSet(false),
    m_verificationStateHasBeenSet(false),
    m_workflowStateHasBeenSet(false),
    m_workflowStatusHasBeenSet(false),
    m_recordStateHasBeenSet(false),
    m_relatedFindingsProductArnHasBeenSet(false),
    m_relatedFindingsIdHasBeenSet(false),
    m_noteTextHasBeenSet(false),
    m_noteUpdatedAtHasBeenSet(false),
    m_noteUpdatedByHasBeenSet(false),
    m_findingProviderFieldsConfidenceHasBeenSet(false),
    m_findingProviderFieldsCriticalityHasBeenSet(false),
    m_findingProviderFieldsRelatedFindingsIdHasBeenSet(false),
    m_findingProviderFieldsRelatedFindingsProductArnHasBeenSet(false),
    m_findingProviderFieldsSeverityLabelHasBeenSet(false),
    m_findingProviderFieldsSeverityOriginalHasBeenSet(false),
    m_findingProviderFieldsTypesHasBeenSet(false),
    m_sampleHasBeenSet(false)
{
}

AwsSecurityFindingFilters::AwsSecurityFindingFilters(JsonView jsonValue) : 
    m_productArnHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_generatorIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_severityLabelHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_criticalityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationTextHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_productFieldsHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_userDefinedFieldsHasBeenSet(false),
    m_malwareNameHasBeenSet(false),
    m_malwareTypeHasBeenSet(false),
    m_malwarePathHasBeenSet(false),
    m_malwareStateHasBeenSet(false),
    m_networkDirectionHasBeenSet(false),
    m_networkProtocolHasBeenSet(false),
    m_networkSourceIpV4HasBeenSet(false),
    m_networkSourceIpV6HasBeenSet(false),
    m_networkSourcePortHasBeenSet(false),
    m_networkSourceDomainHasBeenSet(false),
    m_networkSourceMacHasBeenSet(false),
    m_networkDestinationIpV4HasBeenSet(false),
    m_networkDestinationIpV6HasBeenSet(false),
    m_networkDestinationPortHasBeenSet(false),
    m_networkDestinationDomainHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_processPidHasBeenSet(false),
    m_processParentPidHasBeenSet(false),
    m_processLaunchedAtHasBeenSet(false),
    m_processTerminatedAtHasBeenSet(false),
    m_threatIntelIndicatorTypeHasBeenSet(false),
    m_threatIntelIndicatorValueHasBeenSet(false),
    m_threatIntelIndicatorCategoryHasBeenSet(false),
    m_threatIntelIndicatorLastObservedAtHasBeenSet(false),
    m_threatIntelIndicatorSourceHasBeenSet(false),
    m_threatIntelIndicatorSourceUrlHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourcePartitionHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_resourceAwsEc2InstanceTypeHasBeenSet(false),
    m_resourceAwsEc2InstanceImageIdHasBeenSet(false),
    m_resourceAwsEc2InstanceIpV4AddressesHasBeenSet(false),
    m_resourceAwsEc2InstanceIpV6AddressesHasBeenSet(false),
    m_resourceAwsEc2InstanceKeyNameHasBeenSet(false),
    m_resourceAwsEc2InstanceIamInstanceProfileArnHasBeenSet(false),
    m_resourceAwsEc2InstanceVpcIdHasBeenSet(false),
    m_resourceAwsEc2InstanceSubnetIdHasBeenSet(false),
    m_resourceAwsEc2InstanceLaunchedAtHasBeenSet(false),
    m_resourceAwsS3BucketOwnerIdHasBeenSet(false),
    m_resourceAwsS3BucketOwnerNameHasBeenSet(false),
    m_resourceAwsIamAccessKeyPrincipalNameHasBeenSet(false),
    m_resourceAwsIamAccessKeyStatusHasBeenSet(false),
    m_resourceAwsIamAccessKeyCreatedAtHasBeenSet(false),
    m_resourceAwsIamUserUserNameHasBeenSet(false),
    m_resourceContainerNameHasBeenSet(false),
    m_resourceContainerImageIdHasBeenSet(false),
    m_resourceContainerImageNameHasBeenSet(false),
    m_resourceContainerLaunchedAtHasBeenSet(false),
    m_resourceDetailsOtherHasBeenSet(false),
    m_complianceStatusHasBeenSet(false),
    m_verificationStateHasBeenSet(false),
    m_workflowStateHasBeenSet(false),
    m_workflowStatusHasBeenSet(false),
    m_recordStateHasBeenSet(false),
    m_relatedFindingsProductArnHasBeenSet(false),
    m_relatedFindingsIdHasBeenSet(false),
    m_noteTextHasBeenSet(false),
    m_noteUpdatedAtHasBeenSet(false),
    m_noteUpdatedByHasBeenSet(false),
    m_findingProviderFieldsConfidenceHasBeenSet(false),
    m_findingProviderFieldsCriticalityHasBeenSet(false),
    m_findingProviderFieldsRelatedFindingsIdHasBeenSet(false),
    m_findingProviderFieldsRelatedFindingsProductArnHasBeenSet(false),
    m_findingProviderFieldsSeverityLabelHasBeenSet(false),
    m_findingProviderFieldsSeverityOriginalHasBeenSet(false),
    m_findingProviderFieldsTypesHasBeenSet(false),
    m_sampleHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSecurityFindingFilters& AwsSecurityFindingFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductArn"))
  {
    Aws::Utils::Array<JsonView> productArnJsonList = jsonValue.GetArray("ProductArn");
    for(unsigned productArnIndex = 0; productArnIndex < productArnJsonList.GetLength(); ++productArnIndex)
    {
      m_productArn.push_back(productArnJsonList[productArnIndex].AsObject());
    }
    m_productArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsAccountId"))
  {
    Aws::Utils::Array<JsonView> awsAccountIdJsonList = jsonValue.GetArray("AwsAccountId");
    for(unsigned awsAccountIdIndex = 0; awsAccountIdIndex < awsAccountIdJsonList.GetLength(); ++awsAccountIdIndex)
    {
      m_awsAccountId.push_back(awsAccountIdJsonList[awsAccountIdIndex].AsObject());
    }
    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    Aws::Utils::Array<JsonView> idJsonList = jsonValue.GetArray("Id");
    for(unsigned idIndex = 0; idIndex < idJsonList.GetLength(); ++idIndex)
    {
      m_id.push_back(idJsonList[idIndex].AsObject());
    }
    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratorId"))
  {
    Aws::Utils::Array<JsonView> generatorIdJsonList = jsonValue.GetArray("GeneratorId");
    for(unsigned generatorIdIndex = 0; generatorIdIndex < generatorIdJsonList.GetLength(); ++generatorIdIndex)
    {
      m_generatorId.push_back(generatorIdJsonList[generatorIdIndex].AsObject());
    }
    m_generatorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    Aws::Utils::Array<JsonView> regionJsonList = jsonValue.GetArray("Region");
    for(unsigned regionIndex = 0; regionIndex < regionJsonList.GetLength(); ++regionIndex)
    {
      m_region.push_back(regionJsonList[regionIndex].AsObject());
    }
    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    Aws::Utils::Array<JsonView> typeJsonList = jsonValue.GetArray("Type");
    for(unsigned typeIndex = 0; typeIndex < typeJsonList.GetLength(); ++typeIndex)
    {
      m_type.push_back(typeJsonList[typeIndex].AsObject());
    }
    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstObservedAt"))
  {
    Aws::Utils::Array<JsonView> firstObservedAtJsonList = jsonValue.GetArray("FirstObservedAt");
    for(unsigned firstObservedAtIndex = 0; firstObservedAtIndex < firstObservedAtJsonList.GetLength(); ++firstObservedAtIndex)
    {
      m_firstObservedAt.push_back(firstObservedAtJsonList[firstObservedAtIndex].AsObject());
    }
    m_firstObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastObservedAt"))
  {
    Aws::Utils::Array<JsonView> lastObservedAtJsonList = jsonValue.GetArray("LastObservedAt");
    for(unsigned lastObservedAtIndex = 0; lastObservedAtIndex < lastObservedAtJsonList.GetLength(); ++lastObservedAtIndex)
    {
      m_lastObservedAt.push_back(lastObservedAtJsonList[lastObservedAtIndex].AsObject());
    }
    m_lastObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    Aws::Utils::Array<JsonView> createdAtJsonList = jsonValue.GetArray("CreatedAt");
    for(unsigned createdAtIndex = 0; createdAtIndex < createdAtJsonList.GetLength(); ++createdAtIndex)
    {
      m_createdAt.push_back(createdAtJsonList[createdAtIndex].AsObject());
    }
    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    Aws::Utils::Array<JsonView> updatedAtJsonList = jsonValue.GetArray("UpdatedAt");
    for(unsigned updatedAtIndex = 0; updatedAtIndex < updatedAtJsonList.GetLength(); ++updatedAtIndex)
    {
      m_updatedAt.push_back(updatedAtJsonList[updatedAtIndex].AsObject());
    }
    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SeverityLabel"))
  {
    Aws::Utils::Array<JsonView> severityLabelJsonList = jsonValue.GetArray("SeverityLabel");
    for(unsigned severityLabelIndex = 0; severityLabelIndex < severityLabelJsonList.GetLength(); ++severityLabelIndex)
    {
      m_severityLabel.push_back(severityLabelJsonList[severityLabelIndex].AsObject());
    }
    m_severityLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    Aws::Utils::Array<JsonView> confidenceJsonList = jsonValue.GetArray("Confidence");
    for(unsigned confidenceIndex = 0; confidenceIndex < confidenceJsonList.GetLength(); ++confidenceIndex)
    {
      m_confidence.push_back(confidenceJsonList[confidenceIndex].AsObject());
    }
    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Criticality"))
  {
    Aws::Utils::Array<JsonView> criticalityJsonList = jsonValue.GetArray("Criticality");
    for(unsigned criticalityIndex = 0; criticalityIndex < criticalityJsonList.GetLength(); ++criticalityIndex)
    {
      m_criticality.push_back(criticalityJsonList[criticalityIndex].AsObject());
    }
    m_criticalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    Aws::Utils::Array<JsonView> titleJsonList = jsonValue.GetArray("Title");
    for(unsigned titleIndex = 0; titleIndex < titleJsonList.GetLength(); ++titleIndex)
    {
      m_title.push_back(titleJsonList[titleIndex].AsObject());
    }
    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    Aws::Utils::Array<JsonView> descriptionJsonList = jsonValue.GetArray("Description");
    for(unsigned descriptionIndex = 0; descriptionIndex < descriptionJsonList.GetLength(); ++descriptionIndex)
    {
      m_description.push_back(descriptionJsonList[descriptionIndex].AsObject());
    }
    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationText"))
  {
    Aws::Utils::Array<JsonView> recommendationTextJsonList = jsonValue.GetArray("RecommendationText");
    for(unsigned recommendationTextIndex = 0; recommendationTextIndex < recommendationTextJsonList.GetLength(); ++recommendationTextIndex)
    {
      m_recommendationText.push_back(recommendationTextJsonList[recommendationTextIndex].AsObject());
    }
    m_recommendationTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceUrl"))
  {
    Aws::Utils::Array<JsonView> sourceUrlJsonList = jsonValue.GetArray("SourceUrl");
    for(unsigned sourceUrlIndex = 0; sourceUrlIndex < sourceUrlJsonList.GetLength(); ++sourceUrlIndex)
    {
      m_sourceUrl.push_back(sourceUrlJsonList[sourceUrlIndex].AsObject());
    }
    m_sourceUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductFields"))
  {
    Aws::Utils::Array<JsonView> productFieldsJsonList = jsonValue.GetArray("ProductFields");
    for(unsigned productFieldsIndex = 0; productFieldsIndex < productFieldsJsonList.GetLength(); ++productFieldsIndex)
    {
      m_productFields.push_back(productFieldsJsonList[productFieldsIndex].AsObject());
    }
    m_productFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductName"))
  {
    Aws::Utils::Array<JsonView> productNameJsonList = jsonValue.GetArray("ProductName");
    for(unsigned productNameIndex = 0; productNameIndex < productNameJsonList.GetLength(); ++productNameIndex)
    {
      m_productName.push_back(productNameJsonList[productNameIndex].AsObject());
    }
    m_productNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompanyName"))
  {
    Aws::Utils::Array<JsonView> companyNameJsonList = jsonValue.GetArray("CompanyName");
    for(unsigned companyNameIndex = 0; companyNameIndex < companyNameJsonList.GetLength(); ++companyNameIndex)
    {
      m_companyName.push_back(companyNameJsonList[companyNameIndex].AsObject());
    }
    m_companyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserDefinedFields"))
  {
    Aws::Utils::Array<JsonView> userDefinedFieldsJsonList = jsonValue.GetArray("UserDefinedFields");
    for(unsigned userDefinedFieldsIndex = 0; userDefinedFieldsIndex < userDefinedFieldsJsonList.GetLength(); ++userDefinedFieldsIndex)
    {
      m_userDefinedFields.push_back(userDefinedFieldsJsonList[userDefinedFieldsIndex].AsObject());
    }
    m_userDefinedFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MalwareName"))
  {
    Aws::Utils::Array<JsonView> malwareNameJsonList = jsonValue.GetArray("MalwareName");
    for(unsigned malwareNameIndex = 0; malwareNameIndex < malwareNameJsonList.GetLength(); ++malwareNameIndex)
    {
      m_malwareName.push_back(malwareNameJsonList[malwareNameIndex].AsObject());
    }
    m_malwareNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MalwareType"))
  {
    Aws::Utils::Array<JsonView> malwareTypeJsonList = jsonValue.GetArray("MalwareType");
    for(unsigned malwareTypeIndex = 0; malwareTypeIndex < malwareTypeJsonList.GetLength(); ++malwareTypeIndex)
    {
      m_malwareType.push_back(malwareTypeJsonList[malwareTypeIndex].AsObject());
    }
    m_malwareTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MalwarePath"))
  {
    Aws::Utils::Array<JsonView> malwarePathJsonList = jsonValue.GetArray("MalwarePath");
    for(unsigned malwarePathIndex = 0; malwarePathIndex < malwarePathJsonList.GetLength(); ++malwarePathIndex)
    {
      m_malwarePath.push_back(malwarePathJsonList[malwarePathIndex].AsObject());
    }
    m_malwarePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MalwareState"))
  {
    Aws::Utils::Array<JsonView> malwareStateJsonList = jsonValue.GetArray("MalwareState");
    for(unsigned malwareStateIndex = 0; malwareStateIndex < malwareStateJsonList.GetLength(); ++malwareStateIndex)
    {
      m_malwareState.push_back(malwareStateJsonList[malwareStateIndex].AsObject());
    }
    m_malwareStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkDirection"))
  {
    Aws::Utils::Array<JsonView> networkDirectionJsonList = jsonValue.GetArray("NetworkDirection");
    for(unsigned networkDirectionIndex = 0; networkDirectionIndex < networkDirectionJsonList.GetLength(); ++networkDirectionIndex)
    {
      m_networkDirection.push_back(networkDirectionJsonList[networkDirectionIndex].AsObject());
    }
    m_networkDirectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkProtocol"))
  {
    Aws::Utils::Array<JsonView> networkProtocolJsonList = jsonValue.GetArray("NetworkProtocol");
    for(unsigned networkProtocolIndex = 0; networkProtocolIndex < networkProtocolJsonList.GetLength(); ++networkProtocolIndex)
    {
      m_networkProtocol.push_back(networkProtocolJsonList[networkProtocolIndex].AsObject());
    }
    m_networkProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkSourceIpV4"))
  {
    Aws::Utils::Array<JsonView> networkSourceIpV4JsonList = jsonValue.GetArray("NetworkSourceIpV4");
    for(unsigned networkSourceIpV4Index = 0; networkSourceIpV4Index < networkSourceIpV4JsonList.GetLength(); ++networkSourceIpV4Index)
    {
      m_networkSourceIpV4.push_back(networkSourceIpV4JsonList[networkSourceIpV4Index].AsObject());
    }
    m_networkSourceIpV4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkSourceIpV6"))
  {
    Aws::Utils::Array<JsonView> networkSourceIpV6JsonList = jsonValue.GetArray("NetworkSourceIpV6");
    for(unsigned networkSourceIpV6Index = 0; networkSourceIpV6Index < networkSourceIpV6JsonList.GetLength(); ++networkSourceIpV6Index)
    {
      m_networkSourceIpV6.push_back(networkSourceIpV6JsonList[networkSourceIpV6Index].AsObject());
    }
    m_networkSourceIpV6HasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkSourcePort"))
  {
    Aws::Utils::Array<JsonView> networkSourcePortJsonList = jsonValue.GetArray("NetworkSourcePort");
    for(unsigned networkSourcePortIndex = 0; networkSourcePortIndex < networkSourcePortJsonList.GetLength(); ++networkSourcePortIndex)
    {
      m_networkSourcePort.push_back(networkSourcePortJsonList[networkSourcePortIndex].AsObject());
    }
    m_networkSourcePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkSourceDomain"))
  {
    Aws::Utils::Array<JsonView> networkSourceDomainJsonList = jsonValue.GetArray("NetworkSourceDomain");
    for(unsigned networkSourceDomainIndex = 0; networkSourceDomainIndex < networkSourceDomainJsonList.GetLength(); ++networkSourceDomainIndex)
    {
      m_networkSourceDomain.push_back(networkSourceDomainJsonList[networkSourceDomainIndex].AsObject());
    }
    m_networkSourceDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkSourceMac"))
  {
    Aws::Utils::Array<JsonView> networkSourceMacJsonList = jsonValue.GetArray("NetworkSourceMac");
    for(unsigned networkSourceMacIndex = 0; networkSourceMacIndex < networkSourceMacJsonList.GetLength(); ++networkSourceMacIndex)
    {
      m_networkSourceMac.push_back(networkSourceMacJsonList[networkSourceMacIndex].AsObject());
    }
    m_networkSourceMacHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkDestinationIpV4"))
  {
    Aws::Utils::Array<JsonView> networkDestinationIpV4JsonList = jsonValue.GetArray("NetworkDestinationIpV4");
    for(unsigned networkDestinationIpV4Index = 0; networkDestinationIpV4Index < networkDestinationIpV4JsonList.GetLength(); ++networkDestinationIpV4Index)
    {
      m_networkDestinationIpV4.push_back(networkDestinationIpV4JsonList[networkDestinationIpV4Index].AsObject());
    }
    m_networkDestinationIpV4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkDestinationIpV6"))
  {
    Aws::Utils::Array<JsonView> networkDestinationIpV6JsonList = jsonValue.GetArray("NetworkDestinationIpV6");
    for(unsigned networkDestinationIpV6Index = 0; networkDestinationIpV6Index < networkDestinationIpV6JsonList.GetLength(); ++networkDestinationIpV6Index)
    {
      m_networkDestinationIpV6.push_back(networkDestinationIpV6JsonList[networkDestinationIpV6Index].AsObject());
    }
    m_networkDestinationIpV6HasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkDestinationPort"))
  {
    Aws::Utils::Array<JsonView> networkDestinationPortJsonList = jsonValue.GetArray("NetworkDestinationPort");
    for(unsigned networkDestinationPortIndex = 0; networkDestinationPortIndex < networkDestinationPortJsonList.GetLength(); ++networkDestinationPortIndex)
    {
      m_networkDestinationPort.push_back(networkDestinationPortJsonList[networkDestinationPortIndex].AsObject());
    }
    m_networkDestinationPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkDestinationDomain"))
  {
    Aws::Utils::Array<JsonView> networkDestinationDomainJsonList = jsonValue.GetArray("NetworkDestinationDomain");
    for(unsigned networkDestinationDomainIndex = 0; networkDestinationDomainIndex < networkDestinationDomainJsonList.GetLength(); ++networkDestinationDomainIndex)
    {
      m_networkDestinationDomain.push_back(networkDestinationDomainJsonList[networkDestinationDomainIndex].AsObject());
    }
    m_networkDestinationDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessName"))
  {
    Aws::Utils::Array<JsonView> processNameJsonList = jsonValue.GetArray("ProcessName");
    for(unsigned processNameIndex = 0; processNameIndex < processNameJsonList.GetLength(); ++processNameIndex)
    {
      m_processName.push_back(processNameJsonList[processNameIndex].AsObject());
    }
    m_processNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessPath"))
  {
    Aws::Utils::Array<JsonView> processPathJsonList = jsonValue.GetArray("ProcessPath");
    for(unsigned processPathIndex = 0; processPathIndex < processPathJsonList.GetLength(); ++processPathIndex)
    {
      m_processPath.push_back(processPathJsonList[processPathIndex].AsObject());
    }
    m_processPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessPid"))
  {
    Aws::Utils::Array<JsonView> processPidJsonList = jsonValue.GetArray("ProcessPid");
    for(unsigned processPidIndex = 0; processPidIndex < processPidJsonList.GetLength(); ++processPidIndex)
    {
      m_processPid.push_back(processPidJsonList[processPidIndex].AsObject());
    }
    m_processPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessParentPid"))
  {
    Aws::Utils::Array<JsonView> processParentPidJsonList = jsonValue.GetArray("ProcessParentPid");
    for(unsigned processParentPidIndex = 0; processParentPidIndex < processParentPidJsonList.GetLength(); ++processParentPidIndex)
    {
      m_processParentPid.push_back(processParentPidJsonList[processParentPidIndex].AsObject());
    }
    m_processParentPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessLaunchedAt"))
  {
    Aws::Utils::Array<JsonView> processLaunchedAtJsonList = jsonValue.GetArray("ProcessLaunchedAt");
    for(unsigned processLaunchedAtIndex = 0; processLaunchedAtIndex < processLaunchedAtJsonList.GetLength(); ++processLaunchedAtIndex)
    {
      m_processLaunchedAt.push_back(processLaunchedAtJsonList[processLaunchedAtIndex].AsObject());
    }
    m_processLaunchedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessTerminatedAt"))
  {
    Aws::Utils::Array<JsonView> processTerminatedAtJsonList = jsonValue.GetArray("ProcessTerminatedAt");
    for(unsigned processTerminatedAtIndex = 0; processTerminatedAtIndex < processTerminatedAtJsonList.GetLength(); ++processTerminatedAtIndex)
    {
      m_processTerminatedAt.push_back(processTerminatedAtJsonList[processTerminatedAtIndex].AsObject());
    }
    m_processTerminatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreatIntelIndicatorType"))
  {
    Aws::Utils::Array<JsonView> threatIntelIndicatorTypeJsonList = jsonValue.GetArray("ThreatIntelIndicatorType");
    for(unsigned threatIntelIndicatorTypeIndex = 0; threatIntelIndicatorTypeIndex < threatIntelIndicatorTypeJsonList.GetLength(); ++threatIntelIndicatorTypeIndex)
    {
      m_threatIntelIndicatorType.push_back(threatIntelIndicatorTypeJsonList[threatIntelIndicatorTypeIndex].AsObject());
    }
    m_threatIntelIndicatorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreatIntelIndicatorValue"))
  {
    Aws::Utils::Array<JsonView> threatIntelIndicatorValueJsonList = jsonValue.GetArray("ThreatIntelIndicatorValue");
    for(unsigned threatIntelIndicatorValueIndex = 0; threatIntelIndicatorValueIndex < threatIntelIndicatorValueJsonList.GetLength(); ++threatIntelIndicatorValueIndex)
    {
      m_threatIntelIndicatorValue.push_back(threatIntelIndicatorValueJsonList[threatIntelIndicatorValueIndex].AsObject());
    }
    m_threatIntelIndicatorValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreatIntelIndicatorCategory"))
  {
    Aws::Utils::Array<JsonView> threatIntelIndicatorCategoryJsonList = jsonValue.GetArray("ThreatIntelIndicatorCategory");
    for(unsigned threatIntelIndicatorCategoryIndex = 0; threatIntelIndicatorCategoryIndex < threatIntelIndicatorCategoryJsonList.GetLength(); ++threatIntelIndicatorCategoryIndex)
    {
      m_threatIntelIndicatorCategory.push_back(threatIntelIndicatorCategoryJsonList[threatIntelIndicatorCategoryIndex].AsObject());
    }
    m_threatIntelIndicatorCategoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreatIntelIndicatorLastObservedAt"))
  {
    Aws::Utils::Array<JsonView> threatIntelIndicatorLastObservedAtJsonList = jsonValue.GetArray("ThreatIntelIndicatorLastObservedAt");
    for(unsigned threatIntelIndicatorLastObservedAtIndex = 0; threatIntelIndicatorLastObservedAtIndex < threatIntelIndicatorLastObservedAtJsonList.GetLength(); ++threatIntelIndicatorLastObservedAtIndex)
    {
      m_threatIntelIndicatorLastObservedAt.push_back(threatIntelIndicatorLastObservedAtJsonList[threatIntelIndicatorLastObservedAtIndex].AsObject());
    }
    m_threatIntelIndicatorLastObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreatIntelIndicatorSource"))
  {
    Aws::Utils::Array<JsonView> threatIntelIndicatorSourceJsonList = jsonValue.GetArray("ThreatIntelIndicatorSource");
    for(unsigned threatIntelIndicatorSourceIndex = 0; threatIntelIndicatorSourceIndex < threatIntelIndicatorSourceJsonList.GetLength(); ++threatIntelIndicatorSourceIndex)
    {
      m_threatIntelIndicatorSource.push_back(threatIntelIndicatorSourceJsonList[threatIntelIndicatorSourceIndex].AsObject());
    }
    m_threatIntelIndicatorSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreatIntelIndicatorSourceUrl"))
  {
    Aws::Utils::Array<JsonView> threatIntelIndicatorSourceUrlJsonList = jsonValue.GetArray("ThreatIntelIndicatorSourceUrl");
    for(unsigned threatIntelIndicatorSourceUrlIndex = 0; threatIntelIndicatorSourceUrlIndex < threatIntelIndicatorSourceUrlJsonList.GetLength(); ++threatIntelIndicatorSourceUrlIndex)
    {
      m_threatIntelIndicatorSourceUrl.push_back(threatIntelIndicatorSourceUrlJsonList[threatIntelIndicatorSourceUrlIndex].AsObject());
    }
    m_threatIntelIndicatorSourceUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    Aws::Utils::Array<JsonView> resourceTypeJsonList = jsonValue.GetArray("ResourceType");
    for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
    {
      m_resourceType.push_back(resourceTypeJsonList[resourceTypeIndex].AsObject());
    }
    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    Aws::Utils::Array<JsonView> resourceIdJsonList = jsonValue.GetArray("ResourceId");
    for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
    {
      m_resourceId.push_back(resourceIdJsonList[resourceIdIndex].AsObject());
    }
    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourcePartition"))
  {
    Aws::Utils::Array<JsonView> resourcePartitionJsonList = jsonValue.GetArray("ResourcePartition");
    for(unsigned resourcePartitionIndex = 0; resourcePartitionIndex < resourcePartitionJsonList.GetLength(); ++resourcePartitionIndex)
    {
      m_resourcePartition.push_back(resourcePartitionJsonList[resourcePartitionIndex].AsObject());
    }
    m_resourcePartitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceRegion"))
  {
    Aws::Utils::Array<JsonView> resourceRegionJsonList = jsonValue.GetArray("ResourceRegion");
    for(unsigned resourceRegionIndex = 0; resourceRegionIndex < resourceRegionJsonList.GetLength(); ++resourceRegionIndex)
    {
      m_resourceRegion.push_back(resourceRegionJsonList[resourceRegionIndex].AsObject());
    }
    m_resourceRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTags"))
  {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("ResourceTags");
    for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
    {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsEc2InstanceType"))
  {
    Aws::Utils::Array<JsonView> resourceAwsEc2InstanceTypeJsonList = jsonValue.GetArray("ResourceAwsEc2InstanceType");
    for(unsigned resourceAwsEc2InstanceTypeIndex = 0; resourceAwsEc2InstanceTypeIndex < resourceAwsEc2InstanceTypeJsonList.GetLength(); ++resourceAwsEc2InstanceTypeIndex)
    {
      m_resourceAwsEc2InstanceType.push_back(resourceAwsEc2InstanceTypeJsonList[resourceAwsEc2InstanceTypeIndex].AsObject());
    }
    m_resourceAwsEc2InstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsEc2InstanceImageId"))
  {
    Aws::Utils::Array<JsonView> resourceAwsEc2InstanceImageIdJsonList = jsonValue.GetArray("ResourceAwsEc2InstanceImageId");
    for(unsigned resourceAwsEc2InstanceImageIdIndex = 0; resourceAwsEc2InstanceImageIdIndex < resourceAwsEc2InstanceImageIdJsonList.GetLength(); ++resourceAwsEc2InstanceImageIdIndex)
    {
      m_resourceAwsEc2InstanceImageId.push_back(resourceAwsEc2InstanceImageIdJsonList[resourceAwsEc2InstanceImageIdIndex].AsObject());
    }
    m_resourceAwsEc2InstanceImageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsEc2InstanceIpV4Addresses"))
  {
    Aws::Utils::Array<JsonView> resourceAwsEc2InstanceIpV4AddressesJsonList = jsonValue.GetArray("ResourceAwsEc2InstanceIpV4Addresses");
    for(unsigned resourceAwsEc2InstanceIpV4AddressesIndex = 0; resourceAwsEc2InstanceIpV4AddressesIndex < resourceAwsEc2InstanceIpV4AddressesJsonList.GetLength(); ++resourceAwsEc2InstanceIpV4AddressesIndex)
    {
      m_resourceAwsEc2InstanceIpV4Addresses.push_back(resourceAwsEc2InstanceIpV4AddressesJsonList[resourceAwsEc2InstanceIpV4AddressesIndex].AsObject());
    }
    m_resourceAwsEc2InstanceIpV4AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsEc2InstanceIpV6Addresses"))
  {
    Aws::Utils::Array<JsonView> resourceAwsEc2InstanceIpV6AddressesJsonList = jsonValue.GetArray("ResourceAwsEc2InstanceIpV6Addresses");
    for(unsigned resourceAwsEc2InstanceIpV6AddressesIndex = 0; resourceAwsEc2InstanceIpV6AddressesIndex < resourceAwsEc2InstanceIpV6AddressesJsonList.GetLength(); ++resourceAwsEc2InstanceIpV6AddressesIndex)
    {
      m_resourceAwsEc2InstanceIpV6Addresses.push_back(resourceAwsEc2InstanceIpV6AddressesJsonList[resourceAwsEc2InstanceIpV6AddressesIndex].AsObject());
    }
    m_resourceAwsEc2InstanceIpV6AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsEc2InstanceKeyName"))
  {
    Aws::Utils::Array<JsonView> resourceAwsEc2InstanceKeyNameJsonList = jsonValue.GetArray("ResourceAwsEc2InstanceKeyName");
    for(unsigned resourceAwsEc2InstanceKeyNameIndex = 0; resourceAwsEc2InstanceKeyNameIndex < resourceAwsEc2InstanceKeyNameJsonList.GetLength(); ++resourceAwsEc2InstanceKeyNameIndex)
    {
      m_resourceAwsEc2InstanceKeyName.push_back(resourceAwsEc2InstanceKeyNameJsonList[resourceAwsEc2InstanceKeyNameIndex].AsObject());
    }
    m_resourceAwsEc2InstanceKeyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsEc2InstanceIamInstanceProfileArn"))
  {
    Aws::Utils::Array<JsonView> resourceAwsEc2InstanceIamInstanceProfileArnJsonList = jsonValue.GetArray("ResourceAwsEc2InstanceIamInstanceProfileArn");
    for(unsigned resourceAwsEc2InstanceIamInstanceProfileArnIndex = 0; resourceAwsEc2InstanceIamInstanceProfileArnIndex < resourceAwsEc2InstanceIamInstanceProfileArnJsonList.GetLength(); ++resourceAwsEc2InstanceIamInstanceProfileArnIndex)
    {
      m_resourceAwsEc2InstanceIamInstanceProfileArn.push_back(resourceAwsEc2InstanceIamInstanceProfileArnJsonList[resourceAwsEc2InstanceIamInstanceProfileArnIndex].AsObject());
    }
    m_resourceAwsEc2InstanceIamInstanceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsEc2InstanceVpcId"))
  {
    Aws::Utils::Array<JsonView> resourceAwsEc2InstanceVpcIdJsonList = jsonValue.GetArray("ResourceAwsEc2InstanceVpcId");
    for(unsigned resourceAwsEc2InstanceVpcIdIndex = 0; resourceAwsEc2InstanceVpcIdIndex < resourceAwsEc2InstanceVpcIdJsonList.GetLength(); ++resourceAwsEc2InstanceVpcIdIndex)
    {
      m_resourceAwsEc2InstanceVpcId.push_back(resourceAwsEc2InstanceVpcIdJsonList[resourceAwsEc2InstanceVpcIdIndex].AsObject());
    }
    m_resourceAwsEc2InstanceVpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsEc2InstanceSubnetId"))
  {
    Aws::Utils::Array<JsonView> resourceAwsEc2InstanceSubnetIdJsonList = jsonValue.GetArray("ResourceAwsEc2InstanceSubnetId");
    for(unsigned resourceAwsEc2InstanceSubnetIdIndex = 0; resourceAwsEc2InstanceSubnetIdIndex < resourceAwsEc2InstanceSubnetIdJsonList.GetLength(); ++resourceAwsEc2InstanceSubnetIdIndex)
    {
      m_resourceAwsEc2InstanceSubnetId.push_back(resourceAwsEc2InstanceSubnetIdJsonList[resourceAwsEc2InstanceSubnetIdIndex].AsObject());
    }
    m_resourceAwsEc2InstanceSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsEc2InstanceLaunchedAt"))
  {
    Aws::Utils::Array<JsonView> resourceAwsEc2InstanceLaunchedAtJsonList = jsonValue.GetArray("ResourceAwsEc2InstanceLaunchedAt");
    for(unsigned resourceAwsEc2InstanceLaunchedAtIndex = 0; resourceAwsEc2InstanceLaunchedAtIndex < resourceAwsEc2InstanceLaunchedAtJsonList.GetLength(); ++resourceAwsEc2InstanceLaunchedAtIndex)
    {
      m_resourceAwsEc2InstanceLaunchedAt.push_back(resourceAwsEc2InstanceLaunchedAtJsonList[resourceAwsEc2InstanceLaunchedAtIndex].AsObject());
    }
    m_resourceAwsEc2InstanceLaunchedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsS3BucketOwnerId"))
  {
    Aws::Utils::Array<JsonView> resourceAwsS3BucketOwnerIdJsonList = jsonValue.GetArray("ResourceAwsS3BucketOwnerId");
    for(unsigned resourceAwsS3BucketOwnerIdIndex = 0; resourceAwsS3BucketOwnerIdIndex < resourceAwsS3BucketOwnerIdJsonList.GetLength(); ++resourceAwsS3BucketOwnerIdIndex)
    {
      m_resourceAwsS3BucketOwnerId.push_back(resourceAwsS3BucketOwnerIdJsonList[resourceAwsS3BucketOwnerIdIndex].AsObject());
    }
    m_resourceAwsS3BucketOwnerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsS3BucketOwnerName"))
  {
    Aws::Utils::Array<JsonView> resourceAwsS3BucketOwnerNameJsonList = jsonValue.GetArray("ResourceAwsS3BucketOwnerName");
    for(unsigned resourceAwsS3BucketOwnerNameIndex = 0; resourceAwsS3BucketOwnerNameIndex < resourceAwsS3BucketOwnerNameJsonList.GetLength(); ++resourceAwsS3BucketOwnerNameIndex)
    {
      m_resourceAwsS3BucketOwnerName.push_back(resourceAwsS3BucketOwnerNameJsonList[resourceAwsS3BucketOwnerNameIndex].AsObject());
    }
    m_resourceAwsS3BucketOwnerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsIamAccessKeyPrincipalName"))
  {
    Aws::Utils::Array<JsonView> resourceAwsIamAccessKeyPrincipalNameJsonList = jsonValue.GetArray("ResourceAwsIamAccessKeyPrincipalName");
    for(unsigned resourceAwsIamAccessKeyPrincipalNameIndex = 0; resourceAwsIamAccessKeyPrincipalNameIndex < resourceAwsIamAccessKeyPrincipalNameJsonList.GetLength(); ++resourceAwsIamAccessKeyPrincipalNameIndex)
    {
      m_resourceAwsIamAccessKeyPrincipalName.push_back(resourceAwsIamAccessKeyPrincipalNameJsonList[resourceAwsIamAccessKeyPrincipalNameIndex].AsObject());
    }
    m_resourceAwsIamAccessKeyPrincipalNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsIamAccessKeyStatus"))
  {
    Aws::Utils::Array<JsonView> resourceAwsIamAccessKeyStatusJsonList = jsonValue.GetArray("ResourceAwsIamAccessKeyStatus");
    for(unsigned resourceAwsIamAccessKeyStatusIndex = 0; resourceAwsIamAccessKeyStatusIndex < resourceAwsIamAccessKeyStatusJsonList.GetLength(); ++resourceAwsIamAccessKeyStatusIndex)
    {
      m_resourceAwsIamAccessKeyStatus.push_back(resourceAwsIamAccessKeyStatusJsonList[resourceAwsIamAccessKeyStatusIndex].AsObject());
    }
    m_resourceAwsIamAccessKeyStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsIamAccessKeyCreatedAt"))
  {
    Aws::Utils::Array<JsonView> resourceAwsIamAccessKeyCreatedAtJsonList = jsonValue.GetArray("ResourceAwsIamAccessKeyCreatedAt");
    for(unsigned resourceAwsIamAccessKeyCreatedAtIndex = 0; resourceAwsIamAccessKeyCreatedAtIndex < resourceAwsIamAccessKeyCreatedAtJsonList.GetLength(); ++resourceAwsIamAccessKeyCreatedAtIndex)
    {
      m_resourceAwsIamAccessKeyCreatedAt.push_back(resourceAwsIamAccessKeyCreatedAtJsonList[resourceAwsIamAccessKeyCreatedAtIndex].AsObject());
    }
    m_resourceAwsIamAccessKeyCreatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAwsIamUserUserName"))
  {
    Aws::Utils::Array<JsonView> resourceAwsIamUserUserNameJsonList = jsonValue.GetArray("ResourceAwsIamUserUserName");
    for(unsigned resourceAwsIamUserUserNameIndex = 0; resourceAwsIamUserUserNameIndex < resourceAwsIamUserUserNameJsonList.GetLength(); ++resourceAwsIamUserUserNameIndex)
    {
      m_resourceAwsIamUserUserName.push_back(resourceAwsIamUserUserNameJsonList[resourceAwsIamUserUserNameIndex].AsObject());
    }
    m_resourceAwsIamUserUserNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceContainerName"))
  {
    Aws::Utils::Array<JsonView> resourceContainerNameJsonList = jsonValue.GetArray("ResourceContainerName");
    for(unsigned resourceContainerNameIndex = 0; resourceContainerNameIndex < resourceContainerNameJsonList.GetLength(); ++resourceContainerNameIndex)
    {
      m_resourceContainerName.push_back(resourceContainerNameJsonList[resourceContainerNameIndex].AsObject());
    }
    m_resourceContainerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceContainerImageId"))
  {
    Aws::Utils::Array<JsonView> resourceContainerImageIdJsonList = jsonValue.GetArray("ResourceContainerImageId");
    for(unsigned resourceContainerImageIdIndex = 0; resourceContainerImageIdIndex < resourceContainerImageIdJsonList.GetLength(); ++resourceContainerImageIdIndex)
    {
      m_resourceContainerImageId.push_back(resourceContainerImageIdJsonList[resourceContainerImageIdIndex].AsObject());
    }
    m_resourceContainerImageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceContainerImageName"))
  {
    Aws::Utils::Array<JsonView> resourceContainerImageNameJsonList = jsonValue.GetArray("ResourceContainerImageName");
    for(unsigned resourceContainerImageNameIndex = 0; resourceContainerImageNameIndex < resourceContainerImageNameJsonList.GetLength(); ++resourceContainerImageNameIndex)
    {
      m_resourceContainerImageName.push_back(resourceContainerImageNameJsonList[resourceContainerImageNameIndex].AsObject());
    }
    m_resourceContainerImageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceContainerLaunchedAt"))
  {
    Aws::Utils::Array<JsonView> resourceContainerLaunchedAtJsonList = jsonValue.GetArray("ResourceContainerLaunchedAt");
    for(unsigned resourceContainerLaunchedAtIndex = 0; resourceContainerLaunchedAtIndex < resourceContainerLaunchedAtJsonList.GetLength(); ++resourceContainerLaunchedAtIndex)
    {
      m_resourceContainerLaunchedAt.push_back(resourceContainerLaunchedAtJsonList[resourceContainerLaunchedAtIndex].AsObject());
    }
    m_resourceContainerLaunchedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceDetailsOther"))
  {
    Aws::Utils::Array<JsonView> resourceDetailsOtherJsonList = jsonValue.GetArray("ResourceDetailsOther");
    for(unsigned resourceDetailsOtherIndex = 0; resourceDetailsOtherIndex < resourceDetailsOtherJsonList.GetLength(); ++resourceDetailsOtherIndex)
    {
      m_resourceDetailsOther.push_back(resourceDetailsOtherJsonList[resourceDetailsOtherIndex].AsObject());
    }
    m_resourceDetailsOtherHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceStatus"))
  {
    Aws::Utils::Array<JsonView> complianceStatusJsonList = jsonValue.GetArray("ComplianceStatus");
    for(unsigned complianceStatusIndex = 0; complianceStatusIndex < complianceStatusJsonList.GetLength(); ++complianceStatusIndex)
    {
      m_complianceStatus.push_back(complianceStatusJsonList[complianceStatusIndex].AsObject());
    }
    m_complianceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerificationState"))
  {
    Aws::Utils::Array<JsonView> verificationStateJsonList = jsonValue.GetArray("VerificationState");
    for(unsigned verificationStateIndex = 0; verificationStateIndex < verificationStateJsonList.GetLength(); ++verificationStateIndex)
    {
      m_verificationState.push_back(verificationStateJsonList[verificationStateIndex].AsObject());
    }
    m_verificationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowState"))
  {
    Aws::Utils::Array<JsonView> workflowStateJsonList = jsonValue.GetArray("WorkflowState");
    for(unsigned workflowStateIndex = 0; workflowStateIndex < workflowStateJsonList.GetLength(); ++workflowStateIndex)
    {
      m_workflowState.push_back(workflowStateJsonList[workflowStateIndex].AsObject());
    }
    m_workflowStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowStatus"))
  {
    Aws::Utils::Array<JsonView> workflowStatusJsonList = jsonValue.GetArray("WorkflowStatus");
    for(unsigned workflowStatusIndex = 0; workflowStatusIndex < workflowStatusJsonList.GetLength(); ++workflowStatusIndex)
    {
      m_workflowStatus.push_back(workflowStatusJsonList[workflowStatusIndex].AsObject());
    }
    m_workflowStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordState"))
  {
    Aws::Utils::Array<JsonView> recordStateJsonList = jsonValue.GetArray("RecordState");
    for(unsigned recordStateIndex = 0; recordStateIndex < recordStateJsonList.GetLength(); ++recordStateIndex)
    {
      m_recordState.push_back(recordStateJsonList[recordStateIndex].AsObject());
    }
    m_recordStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedFindingsProductArn"))
  {
    Aws::Utils::Array<JsonView> relatedFindingsProductArnJsonList = jsonValue.GetArray("RelatedFindingsProductArn");
    for(unsigned relatedFindingsProductArnIndex = 0; relatedFindingsProductArnIndex < relatedFindingsProductArnJsonList.GetLength(); ++relatedFindingsProductArnIndex)
    {
      m_relatedFindingsProductArn.push_back(relatedFindingsProductArnJsonList[relatedFindingsProductArnIndex].AsObject());
    }
    m_relatedFindingsProductArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedFindingsId"))
  {
    Aws::Utils::Array<JsonView> relatedFindingsIdJsonList = jsonValue.GetArray("RelatedFindingsId");
    for(unsigned relatedFindingsIdIndex = 0; relatedFindingsIdIndex < relatedFindingsIdJsonList.GetLength(); ++relatedFindingsIdIndex)
    {
      m_relatedFindingsId.push_back(relatedFindingsIdJsonList[relatedFindingsIdIndex].AsObject());
    }
    m_relatedFindingsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoteText"))
  {
    Aws::Utils::Array<JsonView> noteTextJsonList = jsonValue.GetArray("NoteText");
    for(unsigned noteTextIndex = 0; noteTextIndex < noteTextJsonList.GetLength(); ++noteTextIndex)
    {
      m_noteText.push_back(noteTextJsonList[noteTextIndex].AsObject());
    }
    m_noteTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoteUpdatedAt"))
  {
    Aws::Utils::Array<JsonView> noteUpdatedAtJsonList = jsonValue.GetArray("NoteUpdatedAt");
    for(unsigned noteUpdatedAtIndex = 0; noteUpdatedAtIndex < noteUpdatedAtJsonList.GetLength(); ++noteUpdatedAtIndex)
    {
      m_noteUpdatedAt.push_back(noteUpdatedAtJsonList[noteUpdatedAtIndex].AsObject());
    }
    m_noteUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoteUpdatedBy"))
  {
    Aws::Utils::Array<JsonView> noteUpdatedByJsonList = jsonValue.GetArray("NoteUpdatedBy");
    for(unsigned noteUpdatedByIndex = 0; noteUpdatedByIndex < noteUpdatedByJsonList.GetLength(); ++noteUpdatedByIndex)
    {
      m_noteUpdatedBy.push_back(noteUpdatedByJsonList[noteUpdatedByIndex].AsObject());
    }
    m_noteUpdatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingProviderFieldsConfidence"))
  {
    Aws::Utils::Array<JsonView> findingProviderFieldsConfidenceJsonList = jsonValue.GetArray("FindingProviderFieldsConfidence");
    for(unsigned findingProviderFieldsConfidenceIndex = 0; findingProviderFieldsConfidenceIndex < findingProviderFieldsConfidenceJsonList.GetLength(); ++findingProviderFieldsConfidenceIndex)
    {
      m_findingProviderFieldsConfidence.push_back(findingProviderFieldsConfidenceJsonList[findingProviderFieldsConfidenceIndex].AsObject());
    }
    m_findingProviderFieldsConfidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingProviderFieldsCriticality"))
  {
    Aws::Utils::Array<JsonView> findingProviderFieldsCriticalityJsonList = jsonValue.GetArray("FindingProviderFieldsCriticality");
    for(unsigned findingProviderFieldsCriticalityIndex = 0; findingProviderFieldsCriticalityIndex < findingProviderFieldsCriticalityJsonList.GetLength(); ++findingProviderFieldsCriticalityIndex)
    {
      m_findingProviderFieldsCriticality.push_back(findingProviderFieldsCriticalityJsonList[findingProviderFieldsCriticalityIndex].AsObject());
    }
    m_findingProviderFieldsCriticalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingProviderFieldsRelatedFindingsId"))
  {
    Aws::Utils::Array<JsonView> findingProviderFieldsRelatedFindingsIdJsonList = jsonValue.GetArray("FindingProviderFieldsRelatedFindingsId");
    for(unsigned findingProviderFieldsRelatedFindingsIdIndex = 0; findingProviderFieldsRelatedFindingsIdIndex < findingProviderFieldsRelatedFindingsIdJsonList.GetLength(); ++findingProviderFieldsRelatedFindingsIdIndex)
    {
      m_findingProviderFieldsRelatedFindingsId.push_back(findingProviderFieldsRelatedFindingsIdJsonList[findingProviderFieldsRelatedFindingsIdIndex].AsObject());
    }
    m_findingProviderFieldsRelatedFindingsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingProviderFieldsRelatedFindingsProductArn"))
  {
    Aws::Utils::Array<JsonView> findingProviderFieldsRelatedFindingsProductArnJsonList = jsonValue.GetArray("FindingProviderFieldsRelatedFindingsProductArn");
    for(unsigned findingProviderFieldsRelatedFindingsProductArnIndex = 0; findingProviderFieldsRelatedFindingsProductArnIndex < findingProviderFieldsRelatedFindingsProductArnJsonList.GetLength(); ++findingProviderFieldsRelatedFindingsProductArnIndex)
    {
      m_findingProviderFieldsRelatedFindingsProductArn.push_back(findingProviderFieldsRelatedFindingsProductArnJsonList[findingProviderFieldsRelatedFindingsProductArnIndex].AsObject());
    }
    m_findingProviderFieldsRelatedFindingsProductArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingProviderFieldsSeverityLabel"))
  {
    Aws::Utils::Array<JsonView> findingProviderFieldsSeverityLabelJsonList = jsonValue.GetArray("FindingProviderFieldsSeverityLabel");
    for(unsigned findingProviderFieldsSeverityLabelIndex = 0; findingProviderFieldsSeverityLabelIndex < findingProviderFieldsSeverityLabelJsonList.GetLength(); ++findingProviderFieldsSeverityLabelIndex)
    {
      m_findingProviderFieldsSeverityLabel.push_back(findingProviderFieldsSeverityLabelJsonList[findingProviderFieldsSeverityLabelIndex].AsObject());
    }
    m_findingProviderFieldsSeverityLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingProviderFieldsSeverityOriginal"))
  {
    Aws::Utils::Array<JsonView> findingProviderFieldsSeverityOriginalJsonList = jsonValue.GetArray("FindingProviderFieldsSeverityOriginal");
    for(unsigned findingProviderFieldsSeverityOriginalIndex = 0; findingProviderFieldsSeverityOriginalIndex < findingProviderFieldsSeverityOriginalJsonList.GetLength(); ++findingProviderFieldsSeverityOriginalIndex)
    {
      m_findingProviderFieldsSeverityOriginal.push_back(findingProviderFieldsSeverityOriginalJsonList[findingProviderFieldsSeverityOriginalIndex].AsObject());
    }
    m_findingProviderFieldsSeverityOriginalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingProviderFieldsTypes"))
  {
    Aws::Utils::Array<JsonView> findingProviderFieldsTypesJsonList = jsonValue.GetArray("FindingProviderFieldsTypes");
    for(unsigned findingProviderFieldsTypesIndex = 0; findingProviderFieldsTypesIndex < findingProviderFieldsTypesJsonList.GetLength(); ++findingProviderFieldsTypesIndex)
    {
      m_findingProviderFieldsTypes.push_back(findingProviderFieldsTypesJsonList[findingProviderFieldsTypesIndex].AsObject());
    }
    m_findingProviderFieldsTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sample"))
  {
    Aws::Utils::Array<JsonView> sampleJsonList = jsonValue.GetArray("Sample");
    for(unsigned sampleIndex = 0; sampleIndex < sampleJsonList.GetLength(); ++sampleIndex)
    {
      m_sample.push_back(sampleJsonList[sampleIndex].AsObject());
    }
    m_sampleHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSecurityFindingFilters::Jsonize() const
{
  JsonValue payload;

  if(m_productArnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productArnJsonList(m_productArn.size());
   for(unsigned productArnIndex = 0; productArnIndex < productArnJsonList.GetLength(); ++productArnIndex)
   {
     productArnJsonList[productArnIndex].AsObject(m_productArn[productArnIndex].Jsonize());
   }
   payload.WithArray("ProductArn", std::move(productArnJsonList));

  }

  if(m_awsAccountIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsAccountIdJsonList(m_awsAccountId.size());
   for(unsigned awsAccountIdIndex = 0; awsAccountIdIndex < awsAccountIdJsonList.GetLength(); ++awsAccountIdIndex)
   {
     awsAccountIdJsonList[awsAccountIdIndex].AsObject(m_awsAccountId[awsAccountIdIndex].Jsonize());
   }
   payload.WithArray("AwsAccountId", std::move(awsAccountIdJsonList));

  }

  if(m_idHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idJsonList(m_id.size());
   for(unsigned idIndex = 0; idIndex < idJsonList.GetLength(); ++idIndex)
   {
     idJsonList[idIndex].AsObject(m_id[idIndex].Jsonize());
   }
   payload.WithArray("Id", std::move(idJsonList));

  }

  if(m_generatorIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> generatorIdJsonList(m_generatorId.size());
   for(unsigned generatorIdIndex = 0; generatorIdIndex < generatorIdJsonList.GetLength(); ++generatorIdIndex)
   {
     generatorIdJsonList[generatorIdIndex].AsObject(m_generatorId[generatorIdIndex].Jsonize());
   }
   payload.WithArray("GeneratorId", std::move(generatorIdJsonList));

  }

  if(m_regionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionJsonList(m_region.size());
   for(unsigned regionIndex = 0; regionIndex < regionJsonList.GetLength(); ++regionIndex)
   {
     regionJsonList[regionIndex].AsObject(m_region[regionIndex].Jsonize());
   }
   payload.WithArray("Region", std::move(regionJsonList));

  }

  if(m_typeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typeJsonList(m_type.size());
   for(unsigned typeIndex = 0; typeIndex < typeJsonList.GetLength(); ++typeIndex)
   {
     typeJsonList[typeIndex].AsObject(m_type[typeIndex].Jsonize());
   }
   payload.WithArray("Type", std::move(typeJsonList));

  }

  if(m_firstObservedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> firstObservedAtJsonList(m_firstObservedAt.size());
   for(unsigned firstObservedAtIndex = 0; firstObservedAtIndex < firstObservedAtJsonList.GetLength(); ++firstObservedAtIndex)
   {
     firstObservedAtJsonList[firstObservedAtIndex].AsObject(m_firstObservedAt[firstObservedAtIndex].Jsonize());
   }
   payload.WithArray("FirstObservedAt", std::move(firstObservedAtJsonList));

  }

  if(m_lastObservedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastObservedAtJsonList(m_lastObservedAt.size());
   for(unsigned lastObservedAtIndex = 0; lastObservedAtIndex < lastObservedAtJsonList.GetLength(); ++lastObservedAtIndex)
   {
     lastObservedAtJsonList[lastObservedAtIndex].AsObject(m_lastObservedAt[lastObservedAtIndex].Jsonize());
   }
   payload.WithArray("LastObservedAt", std::move(lastObservedAtJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> createdAtJsonList(m_createdAt.size());
   for(unsigned createdAtIndex = 0; createdAtIndex < createdAtJsonList.GetLength(); ++createdAtIndex)
   {
     createdAtJsonList[createdAtIndex].AsObject(m_createdAt[createdAtIndex].Jsonize());
   }
   payload.WithArray("CreatedAt", std::move(createdAtJsonList));

  }

  if(m_updatedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updatedAtJsonList(m_updatedAt.size());
   for(unsigned updatedAtIndex = 0; updatedAtIndex < updatedAtJsonList.GetLength(); ++updatedAtIndex)
   {
     updatedAtJsonList[updatedAtIndex].AsObject(m_updatedAt[updatedAtIndex].Jsonize());
   }
   payload.WithArray("UpdatedAt", std::move(updatedAtJsonList));

  }

  if(m_severityLabelHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> severityLabelJsonList(m_severityLabel.size());
   for(unsigned severityLabelIndex = 0; severityLabelIndex < severityLabelJsonList.GetLength(); ++severityLabelIndex)
   {
     severityLabelJsonList[severityLabelIndex].AsObject(m_severityLabel[severityLabelIndex].Jsonize());
   }
   payload.WithArray("SeverityLabel", std::move(severityLabelJsonList));

  }

  if(m_confidenceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> confidenceJsonList(m_confidence.size());
   for(unsigned confidenceIndex = 0; confidenceIndex < confidenceJsonList.GetLength(); ++confidenceIndex)
   {
     confidenceJsonList[confidenceIndex].AsObject(m_confidence[confidenceIndex].Jsonize());
   }
   payload.WithArray("Confidence", std::move(confidenceJsonList));

  }

  if(m_criticalityHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> criticalityJsonList(m_criticality.size());
   for(unsigned criticalityIndex = 0; criticalityIndex < criticalityJsonList.GetLength(); ++criticalityIndex)
   {
     criticalityJsonList[criticalityIndex].AsObject(m_criticality[criticalityIndex].Jsonize());
   }
   payload.WithArray("Criticality", std::move(criticalityJsonList));

  }

  if(m_titleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> titleJsonList(m_title.size());
   for(unsigned titleIndex = 0; titleIndex < titleJsonList.GetLength(); ++titleIndex)
   {
     titleJsonList[titleIndex].AsObject(m_title[titleIndex].Jsonize());
   }
   payload.WithArray("Title", std::move(titleJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> descriptionJsonList(m_description.size());
   for(unsigned descriptionIndex = 0; descriptionIndex < descriptionJsonList.GetLength(); ++descriptionIndex)
   {
     descriptionJsonList[descriptionIndex].AsObject(m_description[descriptionIndex].Jsonize());
   }
   payload.WithArray("Description", std::move(descriptionJsonList));

  }

  if(m_recommendationTextHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationTextJsonList(m_recommendationText.size());
   for(unsigned recommendationTextIndex = 0; recommendationTextIndex < recommendationTextJsonList.GetLength(); ++recommendationTextIndex)
   {
     recommendationTextJsonList[recommendationTextIndex].AsObject(m_recommendationText[recommendationTextIndex].Jsonize());
   }
   payload.WithArray("RecommendationText", std::move(recommendationTextJsonList));

  }

  if(m_sourceUrlHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceUrlJsonList(m_sourceUrl.size());
   for(unsigned sourceUrlIndex = 0; sourceUrlIndex < sourceUrlJsonList.GetLength(); ++sourceUrlIndex)
   {
     sourceUrlJsonList[sourceUrlIndex].AsObject(m_sourceUrl[sourceUrlIndex].Jsonize());
   }
   payload.WithArray("SourceUrl", std::move(sourceUrlJsonList));

  }

  if(m_productFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productFieldsJsonList(m_productFields.size());
   for(unsigned productFieldsIndex = 0; productFieldsIndex < productFieldsJsonList.GetLength(); ++productFieldsIndex)
   {
     productFieldsJsonList[productFieldsIndex].AsObject(m_productFields[productFieldsIndex].Jsonize());
   }
   payload.WithArray("ProductFields", std::move(productFieldsJsonList));

  }

  if(m_productNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productNameJsonList(m_productName.size());
   for(unsigned productNameIndex = 0; productNameIndex < productNameJsonList.GetLength(); ++productNameIndex)
   {
     productNameJsonList[productNameIndex].AsObject(m_productName[productNameIndex].Jsonize());
   }
   payload.WithArray("ProductName", std::move(productNameJsonList));

  }

  if(m_companyNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> companyNameJsonList(m_companyName.size());
   for(unsigned companyNameIndex = 0; companyNameIndex < companyNameJsonList.GetLength(); ++companyNameIndex)
   {
     companyNameJsonList[companyNameIndex].AsObject(m_companyName[companyNameIndex].Jsonize());
   }
   payload.WithArray("CompanyName", std::move(companyNameJsonList));

  }

  if(m_userDefinedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userDefinedFieldsJsonList(m_userDefinedFields.size());
   for(unsigned userDefinedFieldsIndex = 0; userDefinedFieldsIndex < userDefinedFieldsJsonList.GetLength(); ++userDefinedFieldsIndex)
   {
     userDefinedFieldsJsonList[userDefinedFieldsIndex].AsObject(m_userDefinedFields[userDefinedFieldsIndex].Jsonize());
   }
   payload.WithArray("UserDefinedFields", std::move(userDefinedFieldsJsonList));

  }

  if(m_malwareNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> malwareNameJsonList(m_malwareName.size());
   for(unsigned malwareNameIndex = 0; malwareNameIndex < malwareNameJsonList.GetLength(); ++malwareNameIndex)
   {
     malwareNameJsonList[malwareNameIndex].AsObject(m_malwareName[malwareNameIndex].Jsonize());
   }
   payload.WithArray("MalwareName", std::move(malwareNameJsonList));

  }

  if(m_malwareTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> malwareTypeJsonList(m_malwareType.size());
   for(unsigned malwareTypeIndex = 0; malwareTypeIndex < malwareTypeJsonList.GetLength(); ++malwareTypeIndex)
   {
     malwareTypeJsonList[malwareTypeIndex].AsObject(m_malwareType[malwareTypeIndex].Jsonize());
   }
   payload.WithArray("MalwareType", std::move(malwareTypeJsonList));

  }

  if(m_malwarePathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> malwarePathJsonList(m_malwarePath.size());
   for(unsigned malwarePathIndex = 0; malwarePathIndex < malwarePathJsonList.GetLength(); ++malwarePathIndex)
   {
     malwarePathJsonList[malwarePathIndex].AsObject(m_malwarePath[malwarePathIndex].Jsonize());
   }
   payload.WithArray("MalwarePath", std::move(malwarePathJsonList));

  }

  if(m_malwareStateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> malwareStateJsonList(m_malwareState.size());
   for(unsigned malwareStateIndex = 0; malwareStateIndex < malwareStateJsonList.GetLength(); ++malwareStateIndex)
   {
     malwareStateJsonList[malwareStateIndex].AsObject(m_malwareState[malwareStateIndex].Jsonize());
   }
   payload.WithArray("MalwareState", std::move(malwareStateJsonList));

  }

  if(m_networkDirectionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkDirectionJsonList(m_networkDirection.size());
   for(unsigned networkDirectionIndex = 0; networkDirectionIndex < networkDirectionJsonList.GetLength(); ++networkDirectionIndex)
   {
     networkDirectionJsonList[networkDirectionIndex].AsObject(m_networkDirection[networkDirectionIndex].Jsonize());
   }
   payload.WithArray("NetworkDirection", std::move(networkDirectionJsonList));

  }

  if(m_networkProtocolHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkProtocolJsonList(m_networkProtocol.size());
   for(unsigned networkProtocolIndex = 0; networkProtocolIndex < networkProtocolJsonList.GetLength(); ++networkProtocolIndex)
   {
     networkProtocolJsonList[networkProtocolIndex].AsObject(m_networkProtocol[networkProtocolIndex].Jsonize());
   }
   payload.WithArray("NetworkProtocol", std::move(networkProtocolJsonList));

  }

  if(m_networkSourceIpV4HasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkSourceIpV4JsonList(m_networkSourceIpV4.size());
   for(unsigned networkSourceIpV4Index = 0; networkSourceIpV4Index < networkSourceIpV4JsonList.GetLength(); ++networkSourceIpV4Index)
   {
     networkSourceIpV4JsonList[networkSourceIpV4Index].AsObject(m_networkSourceIpV4[networkSourceIpV4Index].Jsonize());
   }
   payload.WithArray("NetworkSourceIpV4", std::move(networkSourceIpV4JsonList));

  }

  if(m_networkSourceIpV6HasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkSourceIpV6JsonList(m_networkSourceIpV6.size());
   for(unsigned networkSourceIpV6Index = 0; networkSourceIpV6Index < networkSourceIpV6JsonList.GetLength(); ++networkSourceIpV6Index)
   {
     networkSourceIpV6JsonList[networkSourceIpV6Index].AsObject(m_networkSourceIpV6[networkSourceIpV6Index].Jsonize());
   }
   payload.WithArray("NetworkSourceIpV6", std::move(networkSourceIpV6JsonList));

  }

  if(m_networkSourcePortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkSourcePortJsonList(m_networkSourcePort.size());
   for(unsigned networkSourcePortIndex = 0; networkSourcePortIndex < networkSourcePortJsonList.GetLength(); ++networkSourcePortIndex)
   {
     networkSourcePortJsonList[networkSourcePortIndex].AsObject(m_networkSourcePort[networkSourcePortIndex].Jsonize());
   }
   payload.WithArray("NetworkSourcePort", std::move(networkSourcePortJsonList));

  }

  if(m_networkSourceDomainHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkSourceDomainJsonList(m_networkSourceDomain.size());
   for(unsigned networkSourceDomainIndex = 0; networkSourceDomainIndex < networkSourceDomainJsonList.GetLength(); ++networkSourceDomainIndex)
   {
     networkSourceDomainJsonList[networkSourceDomainIndex].AsObject(m_networkSourceDomain[networkSourceDomainIndex].Jsonize());
   }
   payload.WithArray("NetworkSourceDomain", std::move(networkSourceDomainJsonList));

  }

  if(m_networkSourceMacHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkSourceMacJsonList(m_networkSourceMac.size());
   for(unsigned networkSourceMacIndex = 0; networkSourceMacIndex < networkSourceMacJsonList.GetLength(); ++networkSourceMacIndex)
   {
     networkSourceMacJsonList[networkSourceMacIndex].AsObject(m_networkSourceMac[networkSourceMacIndex].Jsonize());
   }
   payload.WithArray("NetworkSourceMac", std::move(networkSourceMacJsonList));

  }

  if(m_networkDestinationIpV4HasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkDestinationIpV4JsonList(m_networkDestinationIpV4.size());
   for(unsigned networkDestinationIpV4Index = 0; networkDestinationIpV4Index < networkDestinationIpV4JsonList.GetLength(); ++networkDestinationIpV4Index)
   {
     networkDestinationIpV4JsonList[networkDestinationIpV4Index].AsObject(m_networkDestinationIpV4[networkDestinationIpV4Index].Jsonize());
   }
   payload.WithArray("NetworkDestinationIpV4", std::move(networkDestinationIpV4JsonList));

  }

  if(m_networkDestinationIpV6HasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkDestinationIpV6JsonList(m_networkDestinationIpV6.size());
   for(unsigned networkDestinationIpV6Index = 0; networkDestinationIpV6Index < networkDestinationIpV6JsonList.GetLength(); ++networkDestinationIpV6Index)
   {
     networkDestinationIpV6JsonList[networkDestinationIpV6Index].AsObject(m_networkDestinationIpV6[networkDestinationIpV6Index].Jsonize());
   }
   payload.WithArray("NetworkDestinationIpV6", std::move(networkDestinationIpV6JsonList));

  }

  if(m_networkDestinationPortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkDestinationPortJsonList(m_networkDestinationPort.size());
   for(unsigned networkDestinationPortIndex = 0; networkDestinationPortIndex < networkDestinationPortJsonList.GetLength(); ++networkDestinationPortIndex)
   {
     networkDestinationPortJsonList[networkDestinationPortIndex].AsObject(m_networkDestinationPort[networkDestinationPortIndex].Jsonize());
   }
   payload.WithArray("NetworkDestinationPort", std::move(networkDestinationPortJsonList));

  }

  if(m_networkDestinationDomainHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkDestinationDomainJsonList(m_networkDestinationDomain.size());
   for(unsigned networkDestinationDomainIndex = 0; networkDestinationDomainIndex < networkDestinationDomainJsonList.GetLength(); ++networkDestinationDomainIndex)
   {
     networkDestinationDomainJsonList[networkDestinationDomainIndex].AsObject(m_networkDestinationDomain[networkDestinationDomainIndex].Jsonize());
   }
   payload.WithArray("NetworkDestinationDomain", std::move(networkDestinationDomainJsonList));

  }

  if(m_processNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processNameJsonList(m_processName.size());
   for(unsigned processNameIndex = 0; processNameIndex < processNameJsonList.GetLength(); ++processNameIndex)
   {
     processNameJsonList[processNameIndex].AsObject(m_processName[processNameIndex].Jsonize());
   }
   payload.WithArray("ProcessName", std::move(processNameJsonList));

  }

  if(m_processPathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processPathJsonList(m_processPath.size());
   for(unsigned processPathIndex = 0; processPathIndex < processPathJsonList.GetLength(); ++processPathIndex)
   {
     processPathJsonList[processPathIndex].AsObject(m_processPath[processPathIndex].Jsonize());
   }
   payload.WithArray("ProcessPath", std::move(processPathJsonList));

  }

  if(m_processPidHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processPidJsonList(m_processPid.size());
   for(unsigned processPidIndex = 0; processPidIndex < processPidJsonList.GetLength(); ++processPidIndex)
   {
     processPidJsonList[processPidIndex].AsObject(m_processPid[processPidIndex].Jsonize());
   }
   payload.WithArray("ProcessPid", std::move(processPidJsonList));

  }

  if(m_processParentPidHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processParentPidJsonList(m_processParentPid.size());
   for(unsigned processParentPidIndex = 0; processParentPidIndex < processParentPidJsonList.GetLength(); ++processParentPidIndex)
   {
     processParentPidJsonList[processParentPidIndex].AsObject(m_processParentPid[processParentPidIndex].Jsonize());
   }
   payload.WithArray("ProcessParentPid", std::move(processParentPidJsonList));

  }

  if(m_processLaunchedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processLaunchedAtJsonList(m_processLaunchedAt.size());
   for(unsigned processLaunchedAtIndex = 0; processLaunchedAtIndex < processLaunchedAtJsonList.GetLength(); ++processLaunchedAtIndex)
   {
     processLaunchedAtJsonList[processLaunchedAtIndex].AsObject(m_processLaunchedAt[processLaunchedAtIndex].Jsonize());
   }
   payload.WithArray("ProcessLaunchedAt", std::move(processLaunchedAtJsonList));

  }

  if(m_processTerminatedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processTerminatedAtJsonList(m_processTerminatedAt.size());
   for(unsigned processTerminatedAtIndex = 0; processTerminatedAtIndex < processTerminatedAtJsonList.GetLength(); ++processTerminatedAtIndex)
   {
     processTerminatedAtJsonList[processTerminatedAtIndex].AsObject(m_processTerminatedAt[processTerminatedAtIndex].Jsonize());
   }
   payload.WithArray("ProcessTerminatedAt", std::move(processTerminatedAtJsonList));

  }

  if(m_threatIntelIndicatorTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatIntelIndicatorTypeJsonList(m_threatIntelIndicatorType.size());
   for(unsigned threatIntelIndicatorTypeIndex = 0; threatIntelIndicatorTypeIndex < threatIntelIndicatorTypeJsonList.GetLength(); ++threatIntelIndicatorTypeIndex)
   {
     threatIntelIndicatorTypeJsonList[threatIntelIndicatorTypeIndex].AsObject(m_threatIntelIndicatorType[threatIntelIndicatorTypeIndex].Jsonize());
   }
   payload.WithArray("ThreatIntelIndicatorType", std::move(threatIntelIndicatorTypeJsonList));

  }

  if(m_threatIntelIndicatorValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatIntelIndicatorValueJsonList(m_threatIntelIndicatorValue.size());
   for(unsigned threatIntelIndicatorValueIndex = 0; threatIntelIndicatorValueIndex < threatIntelIndicatorValueJsonList.GetLength(); ++threatIntelIndicatorValueIndex)
   {
     threatIntelIndicatorValueJsonList[threatIntelIndicatorValueIndex].AsObject(m_threatIntelIndicatorValue[threatIntelIndicatorValueIndex].Jsonize());
   }
   payload.WithArray("ThreatIntelIndicatorValue", std::move(threatIntelIndicatorValueJsonList));

  }

  if(m_threatIntelIndicatorCategoryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatIntelIndicatorCategoryJsonList(m_threatIntelIndicatorCategory.size());
   for(unsigned threatIntelIndicatorCategoryIndex = 0; threatIntelIndicatorCategoryIndex < threatIntelIndicatorCategoryJsonList.GetLength(); ++threatIntelIndicatorCategoryIndex)
   {
     threatIntelIndicatorCategoryJsonList[threatIntelIndicatorCategoryIndex].AsObject(m_threatIntelIndicatorCategory[threatIntelIndicatorCategoryIndex].Jsonize());
   }
   payload.WithArray("ThreatIntelIndicatorCategory", std::move(threatIntelIndicatorCategoryJsonList));

  }

  if(m_threatIntelIndicatorLastObservedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatIntelIndicatorLastObservedAtJsonList(m_threatIntelIndicatorLastObservedAt.size());
   for(unsigned threatIntelIndicatorLastObservedAtIndex = 0; threatIntelIndicatorLastObservedAtIndex < threatIntelIndicatorLastObservedAtJsonList.GetLength(); ++threatIntelIndicatorLastObservedAtIndex)
   {
     threatIntelIndicatorLastObservedAtJsonList[threatIntelIndicatorLastObservedAtIndex].AsObject(m_threatIntelIndicatorLastObservedAt[threatIntelIndicatorLastObservedAtIndex].Jsonize());
   }
   payload.WithArray("ThreatIntelIndicatorLastObservedAt", std::move(threatIntelIndicatorLastObservedAtJsonList));

  }

  if(m_threatIntelIndicatorSourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatIntelIndicatorSourceJsonList(m_threatIntelIndicatorSource.size());
   for(unsigned threatIntelIndicatorSourceIndex = 0; threatIntelIndicatorSourceIndex < threatIntelIndicatorSourceJsonList.GetLength(); ++threatIntelIndicatorSourceIndex)
   {
     threatIntelIndicatorSourceJsonList[threatIntelIndicatorSourceIndex].AsObject(m_threatIntelIndicatorSource[threatIntelIndicatorSourceIndex].Jsonize());
   }
   payload.WithArray("ThreatIntelIndicatorSource", std::move(threatIntelIndicatorSourceJsonList));

  }

  if(m_threatIntelIndicatorSourceUrlHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatIntelIndicatorSourceUrlJsonList(m_threatIntelIndicatorSourceUrl.size());
   for(unsigned threatIntelIndicatorSourceUrlIndex = 0; threatIntelIndicatorSourceUrlIndex < threatIntelIndicatorSourceUrlJsonList.GetLength(); ++threatIntelIndicatorSourceUrlIndex)
   {
     threatIntelIndicatorSourceUrlJsonList[threatIntelIndicatorSourceUrlIndex].AsObject(m_threatIntelIndicatorSourceUrl[threatIntelIndicatorSourceUrlIndex].Jsonize());
   }
   payload.WithArray("ThreatIntelIndicatorSourceUrl", std::move(threatIntelIndicatorSourceUrlJsonList));

  }

  if(m_resourceTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypeJsonList(m_resourceType.size());
   for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
   {
     resourceTypeJsonList[resourceTypeIndex].AsObject(m_resourceType[resourceTypeIndex].Jsonize());
   }
   payload.WithArray("ResourceType", std::move(resourceTypeJsonList));

  }

  if(m_resourceIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdJsonList(m_resourceId.size());
   for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
   {
     resourceIdJsonList[resourceIdIndex].AsObject(m_resourceId[resourceIdIndex].Jsonize());
   }
   payload.WithArray("ResourceId", std::move(resourceIdJsonList));

  }

  if(m_resourcePartitionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcePartitionJsonList(m_resourcePartition.size());
   for(unsigned resourcePartitionIndex = 0; resourcePartitionIndex < resourcePartitionJsonList.GetLength(); ++resourcePartitionIndex)
   {
     resourcePartitionJsonList[resourcePartitionIndex].AsObject(m_resourcePartition[resourcePartitionIndex].Jsonize());
   }
   payload.WithArray("ResourcePartition", std::move(resourcePartitionJsonList));

  }

  if(m_resourceRegionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceRegionJsonList(m_resourceRegion.size());
   for(unsigned resourceRegionIndex = 0; resourceRegionIndex < resourceRegionJsonList.GetLength(); ++resourceRegionIndex)
   {
     resourceRegionJsonList[resourceRegionIndex].AsObject(m_resourceRegion[resourceRegionIndex].Jsonize());
   }
   payload.WithArray("ResourceRegion", std::move(resourceRegionJsonList));

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("ResourceTags", std::move(resourceTagsJsonList));

  }

  if(m_resourceAwsEc2InstanceTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsEc2InstanceTypeJsonList(m_resourceAwsEc2InstanceType.size());
   for(unsigned resourceAwsEc2InstanceTypeIndex = 0; resourceAwsEc2InstanceTypeIndex < resourceAwsEc2InstanceTypeJsonList.GetLength(); ++resourceAwsEc2InstanceTypeIndex)
   {
     resourceAwsEc2InstanceTypeJsonList[resourceAwsEc2InstanceTypeIndex].AsObject(m_resourceAwsEc2InstanceType[resourceAwsEc2InstanceTypeIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsEc2InstanceType", std::move(resourceAwsEc2InstanceTypeJsonList));

  }

  if(m_resourceAwsEc2InstanceImageIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsEc2InstanceImageIdJsonList(m_resourceAwsEc2InstanceImageId.size());
   for(unsigned resourceAwsEc2InstanceImageIdIndex = 0; resourceAwsEc2InstanceImageIdIndex < resourceAwsEc2InstanceImageIdJsonList.GetLength(); ++resourceAwsEc2InstanceImageIdIndex)
   {
     resourceAwsEc2InstanceImageIdJsonList[resourceAwsEc2InstanceImageIdIndex].AsObject(m_resourceAwsEc2InstanceImageId[resourceAwsEc2InstanceImageIdIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsEc2InstanceImageId", std::move(resourceAwsEc2InstanceImageIdJsonList));

  }

  if(m_resourceAwsEc2InstanceIpV4AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsEc2InstanceIpV4AddressesJsonList(m_resourceAwsEc2InstanceIpV4Addresses.size());
   for(unsigned resourceAwsEc2InstanceIpV4AddressesIndex = 0; resourceAwsEc2InstanceIpV4AddressesIndex < resourceAwsEc2InstanceIpV4AddressesJsonList.GetLength(); ++resourceAwsEc2InstanceIpV4AddressesIndex)
   {
     resourceAwsEc2InstanceIpV4AddressesJsonList[resourceAwsEc2InstanceIpV4AddressesIndex].AsObject(m_resourceAwsEc2InstanceIpV4Addresses[resourceAwsEc2InstanceIpV4AddressesIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsEc2InstanceIpV4Addresses", std::move(resourceAwsEc2InstanceIpV4AddressesJsonList));

  }

  if(m_resourceAwsEc2InstanceIpV6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsEc2InstanceIpV6AddressesJsonList(m_resourceAwsEc2InstanceIpV6Addresses.size());
   for(unsigned resourceAwsEc2InstanceIpV6AddressesIndex = 0; resourceAwsEc2InstanceIpV6AddressesIndex < resourceAwsEc2InstanceIpV6AddressesJsonList.GetLength(); ++resourceAwsEc2InstanceIpV6AddressesIndex)
   {
     resourceAwsEc2InstanceIpV6AddressesJsonList[resourceAwsEc2InstanceIpV6AddressesIndex].AsObject(m_resourceAwsEc2InstanceIpV6Addresses[resourceAwsEc2InstanceIpV6AddressesIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsEc2InstanceIpV6Addresses", std::move(resourceAwsEc2InstanceIpV6AddressesJsonList));

  }

  if(m_resourceAwsEc2InstanceKeyNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsEc2InstanceKeyNameJsonList(m_resourceAwsEc2InstanceKeyName.size());
   for(unsigned resourceAwsEc2InstanceKeyNameIndex = 0; resourceAwsEc2InstanceKeyNameIndex < resourceAwsEc2InstanceKeyNameJsonList.GetLength(); ++resourceAwsEc2InstanceKeyNameIndex)
   {
     resourceAwsEc2InstanceKeyNameJsonList[resourceAwsEc2InstanceKeyNameIndex].AsObject(m_resourceAwsEc2InstanceKeyName[resourceAwsEc2InstanceKeyNameIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsEc2InstanceKeyName", std::move(resourceAwsEc2InstanceKeyNameJsonList));

  }

  if(m_resourceAwsEc2InstanceIamInstanceProfileArnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsEc2InstanceIamInstanceProfileArnJsonList(m_resourceAwsEc2InstanceIamInstanceProfileArn.size());
   for(unsigned resourceAwsEc2InstanceIamInstanceProfileArnIndex = 0; resourceAwsEc2InstanceIamInstanceProfileArnIndex < resourceAwsEc2InstanceIamInstanceProfileArnJsonList.GetLength(); ++resourceAwsEc2InstanceIamInstanceProfileArnIndex)
   {
     resourceAwsEc2InstanceIamInstanceProfileArnJsonList[resourceAwsEc2InstanceIamInstanceProfileArnIndex].AsObject(m_resourceAwsEc2InstanceIamInstanceProfileArn[resourceAwsEc2InstanceIamInstanceProfileArnIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsEc2InstanceIamInstanceProfileArn", std::move(resourceAwsEc2InstanceIamInstanceProfileArnJsonList));

  }

  if(m_resourceAwsEc2InstanceVpcIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsEc2InstanceVpcIdJsonList(m_resourceAwsEc2InstanceVpcId.size());
   for(unsigned resourceAwsEc2InstanceVpcIdIndex = 0; resourceAwsEc2InstanceVpcIdIndex < resourceAwsEc2InstanceVpcIdJsonList.GetLength(); ++resourceAwsEc2InstanceVpcIdIndex)
   {
     resourceAwsEc2InstanceVpcIdJsonList[resourceAwsEc2InstanceVpcIdIndex].AsObject(m_resourceAwsEc2InstanceVpcId[resourceAwsEc2InstanceVpcIdIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsEc2InstanceVpcId", std::move(resourceAwsEc2InstanceVpcIdJsonList));

  }

  if(m_resourceAwsEc2InstanceSubnetIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsEc2InstanceSubnetIdJsonList(m_resourceAwsEc2InstanceSubnetId.size());
   for(unsigned resourceAwsEc2InstanceSubnetIdIndex = 0; resourceAwsEc2InstanceSubnetIdIndex < resourceAwsEc2InstanceSubnetIdJsonList.GetLength(); ++resourceAwsEc2InstanceSubnetIdIndex)
   {
     resourceAwsEc2InstanceSubnetIdJsonList[resourceAwsEc2InstanceSubnetIdIndex].AsObject(m_resourceAwsEc2InstanceSubnetId[resourceAwsEc2InstanceSubnetIdIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsEc2InstanceSubnetId", std::move(resourceAwsEc2InstanceSubnetIdJsonList));

  }

  if(m_resourceAwsEc2InstanceLaunchedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsEc2InstanceLaunchedAtJsonList(m_resourceAwsEc2InstanceLaunchedAt.size());
   for(unsigned resourceAwsEc2InstanceLaunchedAtIndex = 0; resourceAwsEc2InstanceLaunchedAtIndex < resourceAwsEc2InstanceLaunchedAtJsonList.GetLength(); ++resourceAwsEc2InstanceLaunchedAtIndex)
   {
     resourceAwsEc2InstanceLaunchedAtJsonList[resourceAwsEc2InstanceLaunchedAtIndex].AsObject(m_resourceAwsEc2InstanceLaunchedAt[resourceAwsEc2InstanceLaunchedAtIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsEc2InstanceLaunchedAt", std::move(resourceAwsEc2InstanceLaunchedAtJsonList));

  }

  if(m_resourceAwsS3BucketOwnerIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsS3BucketOwnerIdJsonList(m_resourceAwsS3BucketOwnerId.size());
   for(unsigned resourceAwsS3BucketOwnerIdIndex = 0; resourceAwsS3BucketOwnerIdIndex < resourceAwsS3BucketOwnerIdJsonList.GetLength(); ++resourceAwsS3BucketOwnerIdIndex)
   {
     resourceAwsS3BucketOwnerIdJsonList[resourceAwsS3BucketOwnerIdIndex].AsObject(m_resourceAwsS3BucketOwnerId[resourceAwsS3BucketOwnerIdIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsS3BucketOwnerId", std::move(resourceAwsS3BucketOwnerIdJsonList));

  }

  if(m_resourceAwsS3BucketOwnerNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsS3BucketOwnerNameJsonList(m_resourceAwsS3BucketOwnerName.size());
   for(unsigned resourceAwsS3BucketOwnerNameIndex = 0; resourceAwsS3BucketOwnerNameIndex < resourceAwsS3BucketOwnerNameJsonList.GetLength(); ++resourceAwsS3BucketOwnerNameIndex)
   {
     resourceAwsS3BucketOwnerNameJsonList[resourceAwsS3BucketOwnerNameIndex].AsObject(m_resourceAwsS3BucketOwnerName[resourceAwsS3BucketOwnerNameIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsS3BucketOwnerName", std::move(resourceAwsS3BucketOwnerNameJsonList));

  }

  if(m_resourceAwsIamAccessKeyPrincipalNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsIamAccessKeyPrincipalNameJsonList(m_resourceAwsIamAccessKeyPrincipalName.size());
   for(unsigned resourceAwsIamAccessKeyPrincipalNameIndex = 0; resourceAwsIamAccessKeyPrincipalNameIndex < resourceAwsIamAccessKeyPrincipalNameJsonList.GetLength(); ++resourceAwsIamAccessKeyPrincipalNameIndex)
   {
     resourceAwsIamAccessKeyPrincipalNameJsonList[resourceAwsIamAccessKeyPrincipalNameIndex].AsObject(m_resourceAwsIamAccessKeyPrincipalName[resourceAwsIamAccessKeyPrincipalNameIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsIamAccessKeyPrincipalName", std::move(resourceAwsIamAccessKeyPrincipalNameJsonList));

  }

  if(m_resourceAwsIamAccessKeyStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsIamAccessKeyStatusJsonList(m_resourceAwsIamAccessKeyStatus.size());
   for(unsigned resourceAwsIamAccessKeyStatusIndex = 0; resourceAwsIamAccessKeyStatusIndex < resourceAwsIamAccessKeyStatusJsonList.GetLength(); ++resourceAwsIamAccessKeyStatusIndex)
   {
     resourceAwsIamAccessKeyStatusJsonList[resourceAwsIamAccessKeyStatusIndex].AsObject(m_resourceAwsIamAccessKeyStatus[resourceAwsIamAccessKeyStatusIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsIamAccessKeyStatus", std::move(resourceAwsIamAccessKeyStatusJsonList));

  }

  if(m_resourceAwsIamAccessKeyCreatedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsIamAccessKeyCreatedAtJsonList(m_resourceAwsIamAccessKeyCreatedAt.size());
   for(unsigned resourceAwsIamAccessKeyCreatedAtIndex = 0; resourceAwsIamAccessKeyCreatedAtIndex < resourceAwsIamAccessKeyCreatedAtJsonList.GetLength(); ++resourceAwsIamAccessKeyCreatedAtIndex)
   {
     resourceAwsIamAccessKeyCreatedAtJsonList[resourceAwsIamAccessKeyCreatedAtIndex].AsObject(m_resourceAwsIamAccessKeyCreatedAt[resourceAwsIamAccessKeyCreatedAtIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsIamAccessKeyCreatedAt", std::move(resourceAwsIamAccessKeyCreatedAtJsonList));

  }

  if(m_resourceAwsIamUserUserNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAwsIamUserUserNameJsonList(m_resourceAwsIamUserUserName.size());
   for(unsigned resourceAwsIamUserUserNameIndex = 0; resourceAwsIamUserUserNameIndex < resourceAwsIamUserUserNameJsonList.GetLength(); ++resourceAwsIamUserUserNameIndex)
   {
     resourceAwsIamUserUserNameJsonList[resourceAwsIamUserUserNameIndex].AsObject(m_resourceAwsIamUserUserName[resourceAwsIamUserUserNameIndex].Jsonize());
   }
   payload.WithArray("ResourceAwsIamUserUserName", std::move(resourceAwsIamUserUserNameJsonList));

  }

  if(m_resourceContainerNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceContainerNameJsonList(m_resourceContainerName.size());
   for(unsigned resourceContainerNameIndex = 0; resourceContainerNameIndex < resourceContainerNameJsonList.GetLength(); ++resourceContainerNameIndex)
   {
     resourceContainerNameJsonList[resourceContainerNameIndex].AsObject(m_resourceContainerName[resourceContainerNameIndex].Jsonize());
   }
   payload.WithArray("ResourceContainerName", std::move(resourceContainerNameJsonList));

  }

  if(m_resourceContainerImageIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceContainerImageIdJsonList(m_resourceContainerImageId.size());
   for(unsigned resourceContainerImageIdIndex = 0; resourceContainerImageIdIndex < resourceContainerImageIdJsonList.GetLength(); ++resourceContainerImageIdIndex)
   {
     resourceContainerImageIdJsonList[resourceContainerImageIdIndex].AsObject(m_resourceContainerImageId[resourceContainerImageIdIndex].Jsonize());
   }
   payload.WithArray("ResourceContainerImageId", std::move(resourceContainerImageIdJsonList));

  }

  if(m_resourceContainerImageNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceContainerImageNameJsonList(m_resourceContainerImageName.size());
   for(unsigned resourceContainerImageNameIndex = 0; resourceContainerImageNameIndex < resourceContainerImageNameJsonList.GetLength(); ++resourceContainerImageNameIndex)
   {
     resourceContainerImageNameJsonList[resourceContainerImageNameIndex].AsObject(m_resourceContainerImageName[resourceContainerImageNameIndex].Jsonize());
   }
   payload.WithArray("ResourceContainerImageName", std::move(resourceContainerImageNameJsonList));

  }

  if(m_resourceContainerLaunchedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceContainerLaunchedAtJsonList(m_resourceContainerLaunchedAt.size());
   for(unsigned resourceContainerLaunchedAtIndex = 0; resourceContainerLaunchedAtIndex < resourceContainerLaunchedAtJsonList.GetLength(); ++resourceContainerLaunchedAtIndex)
   {
     resourceContainerLaunchedAtJsonList[resourceContainerLaunchedAtIndex].AsObject(m_resourceContainerLaunchedAt[resourceContainerLaunchedAtIndex].Jsonize());
   }
   payload.WithArray("ResourceContainerLaunchedAt", std::move(resourceContainerLaunchedAtJsonList));

  }

  if(m_resourceDetailsOtherHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceDetailsOtherJsonList(m_resourceDetailsOther.size());
   for(unsigned resourceDetailsOtherIndex = 0; resourceDetailsOtherIndex < resourceDetailsOtherJsonList.GetLength(); ++resourceDetailsOtherIndex)
   {
     resourceDetailsOtherJsonList[resourceDetailsOtherIndex].AsObject(m_resourceDetailsOther[resourceDetailsOtherIndex].Jsonize());
   }
   payload.WithArray("ResourceDetailsOther", std::move(resourceDetailsOtherJsonList));

  }

  if(m_complianceStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> complianceStatusJsonList(m_complianceStatus.size());
   for(unsigned complianceStatusIndex = 0; complianceStatusIndex < complianceStatusJsonList.GetLength(); ++complianceStatusIndex)
   {
     complianceStatusJsonList[complianceStatusIndex].AsObject(m_complianceStatus[complianceStatusIndex].Jsonize());
   }
   payload.WithArray("ComplianceStatus", std::move(complianceStatusJsonList));

  }

  if(m_verificationStateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> verificationStateJsonList(m_verificationState.size());
   for(unsigned verificationStateIndex = 0; verificationStateIndex < verificationStateJsonList.GetLength(); ++verificationStateIndex)
   {
     verificationStateJsonList[verificationStateIndex].AsObject(m_verificationState[verificationStateIndex].Jsonize());
   }
   payload.WithArray("VerificationState", std::move(verificationStateJsonList));

  }

  if(m_workflowStateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workflowStateJsonList(m_workflowState.size());
   for(unsigned workflowStateIndex = 0; workflowStateIndex < workflowStateJsonList.GetLength(); ++workflowStateIndex)
   {
     workflowStateJsonList[workflowStateIndex].AsObject(m_workflowState[workflowStateIndex].Jsonize());
   }
   payload.WithArray("WorkflowState", std::move(workflowStateJsonList));

  }

  if(m_workflowStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workflowStatusJsonList(m_workflowStatus.size());
   for(unsigned workflowStatusIndex = 0; workflowStatusIndex < workflowStatusJsonList.GetLength(); ++workflowStatusIndex)
   {
     workflowStatusJsonList[workflowStatusIndex].AsObject(m_workflowStatus[workflowStatusIndex].Jsonize());
   }
   payload.WithArray("WorkflowStatus", std::move(workflowStatusJsonList));

  }

  if(m_recordStateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordStateJsonList(m_recordState.size());
   for(unsigned recordStateIndex = 0; recordStateIndex < recordStateJsonList.GetLength(); ++recordStateIndex)
   {
     recordStateJsonList[recordStateIndex].AsObject(m_recordState[recordStateIndex].Jsonize());
   }
   payload.WithArray("RecordState", std::move(recordStateJsonList));

  }

  if(m_relatedFindingsProductArnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedFindingsProductArnJsonList(m_relatedFindingsProductArn.size());
   for(unsigned relatedFindingsProductArnIndex = 0; relatedFindingsProductArnIndex < relatedFindingsProductArnJsonList.GetLength(); ++relatedFindingsProductArnIndex)
   {
     relatedFindingsProductArnJsonList[relatedFindingsProductArnIndex].AsObject(m_relatedFindingsProductArn[relatedFindingsProductArnIndex].Jsonize());
   }
   payload.WithArray("RelatedFindingsProductArn", std::move(relatedFindingsProductArnJsonList));

  }

  if(m_relatedFindingsIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedFindingsIdJsonList(m_relatedFindingsId.size());
   for(unsigned relatedFindingsIdIndex = 0; relatedFindingsIdIndex < relatedFindingsIdJsonList.GetLength(); ++relatedFindingsIdIndex)
   {
     relatedFindingsIdJsonList[relatedFindingsIdIndex].AsObject(m_relatedFindingsId[relatedFindingsIdIndex].Jsonize());
   }
   payload.WithArray("RelatedFindingsId", std::move(relatedFindingsIdJsonList));

  }

  if(m_noteTextHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noteTextJsonList(m_noteText.size());
   for(unsigned noteTextIndex = 0; noteTextIndex < noteTextJsonList.GetLength(); ++noteTextIndex)
   {
     noteTextJsonList[noteTextIndex].AsObject(m_noteText[noteTextIndex].Jsonize());
   }
   payload.WithArray("NoteText", std::move(noteTextJsonList));

  }

  if(m_noteUpdatedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noteUpdatedAtJsonList(m_noteUpdatedAt.size());
   for(unsigned noteUpdatedAtIndex = 0; noteUpdatedAtIndex < noteUpdatedAtJsonList.GetLength(); ++noteUpdatedAtIndex)
   {
     noteUpdatedAtJsonList[noteUpdatedAtIndex].AsObject(m_noteUpdatedAt[noteUpdatedAtIndex].Jsonize());
   }
   payload.WithArray("NoteUpdatedAt", std::move(noteUpdatedAtJsonList));

  }

  if(m_noteUpdatedByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noteUpdatedByJsonList(m_noteUpdatedBy.size());
   for(unsigned noteUpdatedByIndex = 0; noteUpdatedByIndex < noteUpdatedByJsonList.GetLength(); ++noteUpdatedByIndex)
   {
     noteUpdatedByJsonList[noteUpdatedByIndex].AsObject(m_noteUpdatedBy[noteUpdatedByIndex].Jsonize());
   }
   payload.WithArray("NoteUpdatedBy", std::move(noteUpdatedByJsonList));

  }

  if(m_findingProviderFieldsConfidenceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingProviderFieldsConfidenceJsonList(m_findingProviderFieldsConfidence.size());
   for(unsigned findingProviderFieldsConfidenceIndex = 0; findingProviderFieldsConfidenceIndex < findingProviderFieldsConfidenceJsonList.GetLength(); ++findingProviderFieldsConfidenceIndex)
   {
     findingProviderFieldsConfidenceJsonList[findingProviderFieldsConfidenceIndex].AsObject(m_findingProviderFieldsConfidence[findingProviderFieldsConfidenceIndex].Jsonize());
   }
   payload.WithArray("FindingProviderFieldsConfidence", std::move(findingProviderFieldsConfidenceJsonList));

  }

  if(m_findingProviderFieldsCriticalityHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingProviderFieldsCriticalityJsonList(m_findingProviderFieldsCriticality.size());
   for(unsigned findingProviderFieldsCriticalityIndex = 0; findingProviderFieldsCriticalityIndex < findingProviderFieldsCriticalityJsonList.GetLength(); ++findingProviderFieldsCriticalityIndex)
   {
     findingProviderFieldsCriticalityJsonList[findingProviderFieldsCriticalityIndex].AsObject(m_findingProviderFieldsCriticality[findingProviderFieldsCriticalityIndex].Jsonize());
   }
   payload.WithArray("FindingProviderFieldsCriticality", std::move(findingProviderFieldsCriticalityJsonList));

  }

  if(m_findingProviderFieldsRelatedFindingsIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingProviderFieldsRelatedFindingsIdJsonList(m_findingProviderFieldsRelatedFindingsId.size());
   for(unsigned findingProviderFieldsRelatedFindingsIdIndex = 0; findingProviderFieldsRelatedFindingsIdIndex < findingProviderFieldsRelatedFindingsIdJsonList.GetLength(); ++findingProviderFieldsRelatedFindingsIdIndex)
   {
     findingProviderFieldsRelatedFindingsIdJsonList[findingProviderFieldsRelatedFindingsIdIndex].AsObject(m_findingProviderFieldsRelatedFindingsId[findingProviderFieldsRelatedFindingsIdIndex].Jsonize());
   }
   payload.WithArray("FindingProviderFieldsRelatedFindingsId", std::move(findingProviderFieldsRelatedFindingsIdJsonList));

  }

  if(m_findingProviderFieldsRelatedFindingsProductArnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingProviderFieldsRelatedFindingsProductArnJsonList(m_findingProviderFieldsRelatedFindingsProductArn.size());
   for(unsigned findingProviderFieldsRelatedFindingsProductArnIndex = 0; findingProviderFieldsRelatedFindingsProductArnIndex < findingProviderFieldsRelatedFindingsProductArnJsonList.GetLength(); ++findingProviderFieldsRelatedFindingsProductArnIndex)
   {
     findingProviderFieldsRelatedFindingsProductArnJsonList[findingProviderFieldsRelatedFindingsProductArnIndex].AsObject(m_findingProviderFieldsRelatedFindingsProductArn[findingProviderFieldsRelatedFindingsProductArnIndex].Jsonize());
   }
   payload.WithArray("FindingProviderFieldsRelatedFindingsProductArn", std::move(findingProviderFieldsRelatedFindingsProductArnJsonList));

  }

  if(m_findingProviderFieldsSeverityLabelHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingProviderFieldsSeverityLabelJsonList(m_findingProviderFieldsSeverityLabel.size());
   for(unsigned findingProviderFieldsSeverityLabelIndex = 0; findingProviderFieldsSeverityLabelIndex < findingProviderFieldsSeverityLabelJsonList.GetLength(); ++findingProviderFieldsSeverityLabelIndex)
   {
     findingProviderFieldsSeverityLabelJsonList[findingProviderFieldsSeverityLabelIndex].AsObject(m_findingProviderFieldsSeverityLabel[findingProviderFieldsSeverityLabelIndex].Jsonize());
   }
   payload.WithArray("FindingProviderFieldsSeverityLabel", std::move(findingProviderFieldsSeverityLabelJsonList));

  }

  if(m_findingProviderFieldsSeverityOriginalHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingProviderFieldsSeverityOriginalJsonList(m_findingProviderFieldsSeverityOriginal.size());
   for(unsigned findingProviderFieldsSeverityOriginalIndex = 0; findingProviderFieldsSeverityOriginalIndex < findingProviderFieldsSeverityOriginalJsonList.GetLength(); ++findingProviderFieldsSeverityOriginalIndex)
   {
     findingProviderFieldsSeverityOriginalJsonList[findingProviderFieldsSeverityOriginalIndex].AsObject(m_findingProviderFieldsSeverityOriginal[findingProviderFieldsSeverityOriginalIndex].Jsonize());
   }
   payload.WithArray("FindingProviderFieldsSeverityOriginal", std::move(findingProviderFieldsSeverityOriginalJsonList));

  }

  if(m_findingProviderFieldsTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingProviderFieldsTypesJsonList(m_findingProviderFieldsTypes.size());
   for(unsigned findingProviderFieldsTypesIndex = 0; findingProviderFieldsTypesIndex < findingProviderFieldsTypesJsonList.GetLength(); ++findingProviderFieldsTypesIndex)
   {
     findingProviderFieldsTypesJsonList[findingProviderFieldsTypesIndex].AsObject(m_findingProviderFieldsTypes[findingProviderFieldsTypesIndex].Jsonize());
   }
   payload.WithArray("FindingProviderFieldsTypes", std::move(findingProviderFieldsTypesJsonList));

  }

  if(m_sampleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sampleJsonList(m_sample.size());
   for(unsigned sampleIndex = 0; sampleIndex < sampleJsonList.GetLength(); ++sampleIndex)
   {
     sampleJsonList[sampleIndex].AsObject(m_sample[sampleIndex].Jsonize());
   }
   payload.WithArray("Sample", std::move(sampleJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
