/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FilterCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

FilterCriteria::FilterCriteria() : 
    m_awsAccountIdHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_ec2InstanceImageIdHasBeenSet(false),
    m_ec2InstanceSubnetIdHasBeenSet(false),
    m_ec2InstanceVpcIdHasBeenSet(false),
    m_ecrImageArchitectureHasBeenSet(false),
    m_ecrImageHashHasBeenSet(false),
    m_ecrImagePushedAtHasBeenSet(false),
    m_ecrImageRegistryHasBeenSet(false),
    m_ecrImageRepositoryNameHasBeenSet(false),
    m_ecrImageTagsHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_findingStatusHasBeenSet(false),
    m_findingTypeHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_fixAvailableHasBeenSet(false),
    m_inspectorScoreHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_networkProtocolHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_relatedVulnerabilitiesHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_vendorSeverityHasBeenSet(false),
    m_vulnerabilityIdHasBeenSet(false),
    m_vulnerabilitySourceHasBeenSet(false),
    m_vulnerablePackagesHasBeenSet(false)
{
}

FilterCriteria::FilterCriteria(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_ec2InstanceImageIdHasBeenSet(false),
    m_ec2InstanceSubnetIdHasBeenSet(false),
    m_ec2InstanceVpcIdHasBeenSet(false),
    m_ecrImageArchitectureHasBeenSet(false),
    m_ecrImageHashHasBeenSet(false),
    m_ecrImagePushedAtHasBeenSet(false),
    m_ecrImageRegistryHasBeenSet(false),
    m_ecrImageRepositoryNameHasBeenSet(false),
    m_ecrImageTagsHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_findingStatusHasBeenSet(false),
    m_findingTypeHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_fixAvailableHasBeenSet(false),
    m_inspectorScoreHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_networkProtocolHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_relatedVulnerabilitiesHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_vendorSeverityHasBeenSet(false),
    m_vulnerabilityIdHasBeenSet(false),
    m_vulnerabilitySourceHasBeenSet(false),
    m_vulnerablePackagesHasBeenSet(false)
{
  *this = jsonValue;
}

FilterCriteria& FilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    Array<JsonView> awsAccountIdJsonList = jsonValue.GetArray("awsAccountId");
    for(unsigned awsAccountIdIndex = 0; awsAccountIdIndex < awsAccountIdJsonList.GetLength(); ++awsAccountIdIndex)
    {
      m_awsAccountId.push_back(awsAccountIdJsonList[awsAccountIdIndex].AsObject());
    }
    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentId"))
  {
    Array<JsonView> componentIdJsonList = jsonValue.GetArray("componentId");
    for(unsigned componentIdIndex = 0; componentIdIndex < componentIdJsonList.GetLength(); ++componentIdIndex)
    {
      m_componentId.push_back(componentIdJsonList[componentIdIndex].AsObject());
    }
    m_componentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentType"))
  {
    Array<JsonView> componentTypeJsonList = jsonValue.GetArray("componentType");
    for(unsigned componentTypeIndex = 0; componentTypeIndex < componentTypeJsonList.GetLength(); ++componentTypeIndex)
    {
      m_componentType.push_back(componentTypeJsonList[componentTypeIndex].AsObject());
    }
    m_componentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceImageId"))
  {
    Array<JsonView> ec2InstanceImageIdJsonList = jsonValue.GetArray("ec2InstanceImageId");
    for(unsigned ec2InstanceImageIdIndex = 0; ec2InstanceImageIdIndex < ec2InstanceImageIdJsonList.GetLength(); ++ec2InstanceImageIdIndex)
    {
      m_ec2InstanceImageId.push_back(ec2InstanceImageIdJsonList[ec2InstanceImageIdIndex].AsObject());
    }
    m_ec2InstanceImageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceSubnetId"))
  {
    Array<JsonView> ec2InstanceSubnetIdJsonList = jsonValue.GetArray("ec2InstanceSubnetId");
    for(unsigned ec2InstanceSubnetIdIndex = 0; ec2InstanceSubnetIdIndex < ec2InstanceSubnetIdJsonList.GetLength(); ++ec2InstanceSubnetIdIndex)
    {
      m_ec2InstanceSubnetId.push_back(ec2InstanceSubnetIdJsonList[ec2InstanceSubnetIdIndex].AsObject());
    }
    m_ec2InstanceSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceVpcId"))
  {
    Array<JsonView> ec2InstanceVpcIdJsonList = jsonValue.GetArray("ec2InstanceVpcId");
    for(unsigned ec2InstanceVpcIdIndex = 0; ec2InstanceVpcIdIndex < ec2InstanceVpcIdJsonList.GetLength(); ++ec2InstanceVpcIdIndex)
    {
      m_ec2InstanceVpcId.push_back(ec2InstanceVpcIdJsonList[ec2InstanceVpcIdIndex].AsObject());
    }
    m_ec2InstanceVpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrImageArchitecture"))
  {
    Array<JsonView> ecrImageArchitectureJsonList = jsonValue.GetArray("ecrImageArchitecture");
    for(unsigned ecrImageArchitectureIndex = 0; ecrImageArchitectureIndex < ecrImageArchitectureJsonList.GetLength(); ++ecrImageArchitectureIndex)
    {
      m_ecrImageArchitecture.push_back(ecrImageArchitectureJsonList[ecrImageArchitectureIndex].AsObject());
    }
    m_ecrImageArchitectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrImageHash"))
  {
    Array<JsonView> ecrImageHashJsonList = jsonValue.GetArray("ecrImageHash");
    for(unsigned ecrImageHashIndex = 0; ecrImageHashIndex < ecrImageHashJsonList.GetLength(); ++ecrImageHashIndex)
    {
      m_ecrImageHash.push_back(ecrImageHashJsonList[ecrImageHashIndex].AsObject());
    }
    m_ecrImageHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrImagePushedAt"))
  {
    Array<JsonView> ecrImagePushedAtJsonList = jsonValue.GetArray("ecrImagePushedAt");
    for(unsigned ecrImagePushedAtIndex = 0; ecrImagePushedAtIndex < ecrImagePushedAtJsonList.GetLength(); ++ecrImagePushedAtIndex)
    {
      m_ecrImagePushedAt.push_back(ecrImagePushedAtJsonList[ecrImagePushedAtIndex].AsObject());
    }
    m_ecrImagePushedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrImageRegistry"))
  {
    Array<JsonView> ecrImageRegistryJsonList = jsonValue.GetArray("ecrImageRegistry");
    for(unsigned ecrImageRegistryIndex = 0; ecrImageRegistryIndex < ecrImageRegistryJsonList.GetLength(); ++ecrImageRegistryIndex)
    {
      m_ecrImageRegistry.push_back(ecrImageRegistryJsonList[ecrImageRegistryIndex].AsObject());
    }
    m_ecrImageRegistryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrImageRepositoryName"))
  {
    Array<JsonView> ecrImageRepositoryNameJsonList = jsonValue.GetArray("ecrImageRepositoryName");
    for(unsigned ecrImageRepositoryNameIndex = 0; ecrImageRepositoryNameIndex < ecrImageRepositoryNameJsonList.GetLength(); ++ecrImageRepositoryNameIndex)
    {
      m_ecrImageRepositoryName.push_back(ecrImageRepositoryNameJsonList[ecrImageRepositoryNameIndex].AsObject());
    }
    m_ecrImageRepositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrImageTags"))
  {
    Array<JsonView> ecrImageTagsJsonList = jsonValue.GetArray("ecrImageTags");
    for(unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex)
    {
      m_ecrImageTags.push_back(ecrImageTagsJsonList[ecrImageTagsIndex].AsObject());
    }
    m_ecrImageTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingArn"))
  {
    Array<JsonView> findingArnJsonList = jsonValue.GetArray("findingArn");
    for(unsigned findingArnIndex = 0; findingArnIndex < findingArnJsonList.GetLength(); ++findingArnIndex)
    {
      m_findingArn.push_back(findingArnJsonList[findingArnIndex].AsObject());
    }
    m_findingArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingStatus"))
  {
    Array<JsonView> findingStatusJsonList = jsonValue.GetArray("findingStatus");
    for(unsigned findingStatusIndex = 0; findingStatusIndex < findingStatusJsonList.GetLength(); ++findingStatusIndex)
    {
      m_findingStatus.push_back(findingStatusJsonList[findingStatusIndex].AsObject());
    }
    m_findingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingType"))
  {
    Array<JsonView> findingTypeJsonList = jsonValue.GetArray("findingType");
    for(unsigned findingTypeIndex = 0; findingTypeIndex < findingTypeJsonList.GetLength(); ++findingTypeIndex)
    {
      m_findingType.push_back(findingTypeJsonList[findingTypeIndex].AsObject());
    }
    m_findingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstObservedAt"))
  {
    Array<JsonView> firstObservedAtJsonList = jsonValue.GetArray("firstObservedAt");
    for(unsigned firstObservedAtIndex = 0; firstObservedAtIndex < firstObservedAtJsonList.GetLength(); ++firstObservedAtIndex)
    {
      m_firstObservedAt.push_back(firstObservedAtJsonList[firstObservedAtIndex].AsObject());
    }
    m_firstObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fixAvailable"))
  {
    Array<JsonView> fixAvailableJsonList = jsonValue.GetArray("fixAvailable");
    for(unsigned fixAvailableIndex = 0; fixAvailableIndex < fixAvailableJsonList.GetLength(); ++fixAvailableIndex)
    {
      m_fixAvailable.push_back(fixAvailableJsonList[fixAvailableIndex].AsObject());
    }
    m_fixAvailableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inspectorScore"))
  {
    Array<JsonView> inspectorScoreJsonList = jsonValue.GetArray("inspectorScore");
    for(unsigned inspectorScoreIndex = 0; inspectorScoreIndex < inspectorScoreJsonList.GetLength(); ++inspectorScoreIndex)
    {
      m_inspectorScore.push_back(inspectorScoreJsonList[inspectorScoreIndex].AsObject());
    }
    m_inspectorScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastObservedAt"))
  {
    Array<JsonView> lastObservedAtJsonList = jsonValue.GetArray("lastObservedAt");
    for(unsigned lastObservedAtIndex = 0; lastObservedAtIndex < lastObservedAtJsonList.GetLength(); ++lastObservedAtIndex)
    {
      m_lastObservedAt.push_back(lastObservedAtJsonList[lastObservedAtIndex].AsObject());
    }
    m_lastObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkProtocol"))
  {
    Array<JsonView> networkProtocolJsonList = jsonValue.GetArray("networkProtocol");
    for(unsigned networkProtocolIndex = 0; networkProtocolIndex < networkProtocolJsonList.GetLength(); ++networkProtocolIndex)
    {
      m_networkProtocol.push_back(networkProtocolJsonList[networkProtocolIndex].AsObject());
    }
    m_networkProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portRange"))
  {
    Array<JsonView> portRangeJsonList = jsonValue.GetArray("portRange");
    for(unsigned portRangeIndex = 0; portRangeIndex < portRangeJsonList.GetLength(); ++portRangeIndex)
    {
      m_portRange.push_back(portRangeJsonList[portRangeIndex].AsObject());
    }
    m_portRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedVulnerabilities"))
  {
    Array<JsonView> relatedVulnerabilitiesJsonList = jsonValue.GetArray("relatedVulnerabilities");
    for(unsigned relatedVulnerabilitiesIndex = 0; relatedVulnerabilitiesIndex < relatedVulnerabilitiesJsonList.GetLength(); ++relatedVulnerabilitiesIndex)
    {
      m_relatedVulnerabilities.push_back(relatedVulnerabilitiesJsonList[relatedVulnerabilitiesIndex].AsObject());
    }
    m_relatedVulnerabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    Array<JsonView> resourceIdJsonList = jsonValue.GetArray("resourceId");
    for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
    {
      m_resourceId.push_back(resourceIdJsonList[resourceIdIndex].AsObject());
    }
    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceTags"))
  {
    Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("resourceTags");
    for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
    {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    Array<JsonView> resourceTypeJsonList = jsonValue.GetArray("resourceType");
    for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
    {
      m_resourceType.push_back(resourceTypeJsonList[resourceTypeIndex].AsObject());
    }
    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    Array<JsonView> severityJsonList = jsonValue.GetArray("severity");
    for(unsigned severityIndex = 0; severityIndex < severityJsonList.GetLength(); ++severityIndex)
    {
      m_severity.push_back(severityJsonList[severityIndex].AsObject());
    }
    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    Array<JsonView> titleJsonList = jsonValue.GetArray("title");
    for(unsigned titleIndex = 0; titleIndex < titleJsonList.GetLength(); ++titleIndex)
    {
      m_title.push_back(titleJsonList[titleIndex].AsObject());
    }
    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    Array<JsonView> updatedAtJsonList = jsonValue.GetArray("updatedAt");
    for(unsigned updatedAtIndex = 0; updatedAtIndex < updatedAtJsonList.GetLength(); ++updatedAtIndex)
    {
      m_updatedAt.push_back(updatedAtJsonList[updatedAtIndex].AsObject());
    }
    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vendorSeverity"))
  {
    Array<JsonView> vendorSeverityJsonList = jsonValue.GetArray("vendorSeverity");
    for(unsigned vendorSeverityIndex = 0; vendorSeverityIndex < vendorSeverityJsonList.GetLength(); ++vendorSeverityIndex)
    {
      m_vendorSeverity.push_back(vendorSeverityJsonList[vendorSeverityIndex].AsObject());
    }
    m_vendorSeverityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vulnerabilityId"))
  {
    Array<JsonView> vulnerabilityIdJsonList = jsonValue.GetArray("vulnerabilityId");
    for(unsigned vulnerabilityIdIndex = 0; vulnerabilityIdIndex < vulnerabilityIdJsonList.GetLength(); ++vulnerabilityIdIndex)
    {
      m_vulnerabilityId.push_back(vulnerabilityIdJsonList[vulnerabilityIdIndex].AsObject());
    }
    m_vulnerabilityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vulnerabilitySource"))
  {
    Array<JsonView> vulnerabilitySourceJsonList = jsonValue.GetArray("vulnerabilitySource");
    for(unsigned vulnerabilitySourceIndex = 0; vulnerabilitySourceIndex < vulnerabilitySourceJsonList.GetLength(); ++vulnerabilitySourceIndex)
    {
      m_vulnerabilitySource.push_back(vulnerabilitySourceJsonList[vulnerabilitySourceIndex].AsObject());
    }
    m_vulnerabilitySourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vulnerablePackages"))
  {
    Array<JsonView> vulnerablePackagesJsonList = jsonValue.GetArray("vulnerablePackages");
    for(unsigned vulnerablePackagesIndex = 0; vulnerablePackagesIndex < vulnerablePackagesJsonList.GetLength(); ++vulnerablePackagesIndex)
    {
      m_vulnerablePackages.push_back(vulnerablePackagesJsonList[vulnerablePackagesIndex].AsObject());
    }
    m_vulnerablePackagesHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   Array<JsonValue> awsAccountIdJsonList(m_awsAccountId.size());
   for(unsigned awsAccountIdIndex = 0; awsAccountIdIndex < awsAccountIdJsonList.GetLength(); ++awsAccountIdIndex)
   {
     awsAccountIdJsonList[awsAccountIdIndex].AsObject(m_awsAccountId[awsAccountIdIndex].Jsonize());
   }
   payload.WithArray("awsAccountId", std::move(awsAccountIdJsonList));

  }

  if(m_componentIdHasBeenSet)
  {
   Array<JsonValue> componentIdJsonList(m_componentId.size());
   for(unsigned componentIdIndex = 0; componentIdIndex < componentIdJsonList.GetLength(); ++componentIdIndex)
   {
     componentIdJsonList[componentIdIndex].AsObject(m_componentId[componentIdIndex].Jsonize());
   }
   payload.WithArray("componentId", std::move(componentIdJsonList));

  }

  if(m_componentTypeHasBeenSet)
  {
   Array<JsonValue> componentTypeJsonList(m_componentType.size());
   for(unsigned componentTypeIndex = 0; componentTypeIndex < componentTypeJsonList.GetLength(); ++componentTypeIndex)
   {
     componentTypeJsonList[componentTypeIndex].AsObject(m_componentType[componentTypeIndex].Jsonize());
   }
   payload.WithArray("componentType", std::move(componentTypeJsonList));

  }

  if(m_ec2InstanceImageIdHasBeenSet)
  {
   Array<JsonValue> ec2InstanceImageIdJsonList(m_ec2InstanceImageId.size());
   for(unsigned ec2InstanceImageIdIndex = 0; ec2InstanceImageIdIndex < ec2InstanceImageIdJsonList.GetLength(); ++ec2InstanceImageIdIndex)
   {
     ec2InstanceImageIdJsonList[ec2InstanceImageIdIndex].AsObject(m_ec2InstanceImageId[ec2InstanceImageIdIndex].Jsonize());
   }
   payload.WithArray("ec2InstanceImageId", std::move(ec2InstanceImageIdJsonList));

  }

  if(m_ec2InstanceSubnetIdHasBeenSet)
  {
   Array<JsonValue> ec2InstanceSubnetIdJsonList(m_ec2InstanceSubnetId.size());
   for(unsigned ec2InstanceSubnetIdIndex = 0; ec2InstanceSubnetIdIndex < ec2InstanceSubnetIdJsonList.GetLength(); ++ec2InstanceSubnetIdIndex)
   {
     ec2InstanceSubnetIdJsonList[ec2InstanceSubnetIdIndex].AsObject(m_ec2InstanceSubnetId[ec2InstanceSubnetIdIndex].Jsonize());
   }
   payload.WithArray("ec2InstanceSubnetId", std::move(ec2InstanceSubnetIdJsonList));

  }

  if(m_ec2InstanceVpcIdHasBeenSet)
  {
   Array<JsonValue> ec2InstanceVpcIdJsonList(m_ec2InstanceVpcId.size());
   for(unsigned ec2InstanceVpcIdIndex = 0; ec2InstanceVpcIdIndex < ec2InstanceVpcIdJsonList.GetLength(); ++ec2InstanceVpcIdIndex)
   {
     ec2InstanceVpcIdJsonList[ec2InstanceVpcIdIndex].AsObject(m_ec2InstanceVpcId[ec2InstanceVpcIdIndex].Jsonize());
   }
   payload.WithArray("ec2InstanceVpcId", std::move(ec2InstanceVpcIdJsonList));

  }

  if(m_ecrImageArchitectureHasBeenSet)
  {
   Array<JsonValue> ecrImageArchitectureJsonList(m_ecrImageArchitecture.size());
   for(unsigned ecrImageArchitectureIndex = 0; ecrImageArchitectureIndex < ecrImageArchitectureJsonList.GetLength(); ++ecrImageArchitectureIndex)
   {
     ecrImageArchitectureJsonList[ecrImageArchitectureIndex].AsObject(m_ecrImageArchitecture[ecrImageArchitectureIndex].Jsonize());
   }
   payload.WithArray("ecrImageArchitecture", std::move(ecrImageArchitectureJsonList));

  }

  if(m_ecrImageHashHasBeenSet)
  {
   Array<JsonValue> ecrImageHashJsonList(m_ecrImageHash.size());
   for(unsigned ecrImageHashIndex = 0; ecrImageHashIndex < ecrImageHashJsonList.GetLength(); ++ecrImageHashIndex)
   {
     ecrImageHashJsonList[ecrImageHashIndex].AsObject(m_ecrImageHash[ecrImageHashIndex].Jsonize());
   }
   payload.WithArray("ecrImageHash", std::move(ecrImageHashJsonList));

  }

  if(m_ecrImagePushedAtHasBeenSet)
  {
   Array<JsonValue> ecrImagePushedAtJsonList(m_ecrImagePushedAt.size());
   for(unsigned ecrImagePushedAtIndex = 0; ecrImagePushedAtIndex < ecrImagePushedAtJsonList.GetLength(); ++ecrImagePushedAtIndex)
   {
     ecrImagePushedAtJsonList[ecrImagePushedAtIndex].AsObject(m_ecrImagePushedAt[ecrImagePushedAtIndex].Jsonize());
   }
   payload.WithArray("ecrImagePushedAt", std::move(ecrImagePushedAtJsonList));

  }

  if(m_ecrImageRegistryHasBeenSet)
  {
   Array<JsonValue> ecrImageRegistryJsonList(m_ecrImageRegistry.size());
   for(unsigned ecrImageRegistryIndex = 0; ecrImageRegistryIndex < ecrImageRegistryJsonList.GetLength(); ++ecrImageRegistryIndex)
   {
     ecrImageRegistryJsonList[ecrImageRegistryIndex].AsObject(m_ecrImageRegistry[ecrImageRegistryIndex].Jsonize());
   }
   payload.WithArray("ecrImageRegistry", std::move(ecrImageRegistryJsonList));

  }

  if(m_ecrImageRepositoryNameHasBeenSet)
  {
   Array<JsonValue> ecrImageRepositoryNameJsonList(m_ecrImageRepositoryName.size());
   for(unsigned ecrImageRepositoryNameIndex = 0; ecrImageRepositoryNameIndex < ecrImageRepositoryNameJsonList.GetLength(); ++ecrImageRepositoryNameIndex)
   {
     ecrImageRepositoryNameJsonList[ecrImageRepositoryNameIndex].AsObject(m_ecrImageRepositoryName[ecrImageRepositoryNameIndex].Jsonize());
   }
   payload.WithArray("ecrImageRepositoryName", std::move(ecrImageRepositoryNameJsonList));

  }

  if(m_ecrImageTagsHasBeenSet)
  {
   Array<JsonValue> ecrImageTagsJsonList(m_ecrImageTags.size());
   for(unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex)
   {
     ecrImageTagsJsonList[ecrImageTagsIndex].AsObject(m_ecrImageTags[ecrImageTagsIndex].Jsonize());
   }
   payload.WithArray("ecrImageTags", std::move(ecrImageTagsJsonList));

  }

  if(m_findingArnHasBeenSet)
  {
   Array<JsonValue> findingArnJsonList(m_findingArn.size());
   for(unsigned findingArnIndex = 0; findingArnIndex < findingArnJsonList.GetLength(); ++findingArnIndex)
   {
     findingArnJsonList[findingArnIndex].AsObject(m_findingArn[findingArnIndex].Jsonize());
   }
   payload.WithArray("findingArn", std::move(findingArnJsonList));

  }

  if(m_findingStatusHasBeenSet)
  {
   Array<JsonValue> findingStatusJsonList(m_findingStatus.size());
   for(unsigned findingStatusIndex = 0; findingStatusIndex < findingStatusJsonList.GetLength(); ++findingStatusIndex)
   {
     findingStatusJsonList[findingStatusIndex].AsObject(m_findingStatus[findingStatusIndex].Jsonize());
   }
   payload.WithArray("findingStatus", std::move(findingStatusJsonList));

  }

  if(m_findingTypeHasBeenSet)
  {
   Array<JsonValue> findingTypeJsonList(m_findingType.size());
   for(unsigned findingTypeIndex = 0; findingTypeIndex < findingTypeJsonList.GetLength(); ++findingTypeIndex)
   {
     findingTypeJsonList[findingTypeIndex].AsObject(m_findingType[findingTypeIndex].Jsonize());
   }
   payload.WithArray("findingType", std::move(findingTypeJsonList));

  }

  if(m_firstObservedAtHasBeenSet)
  {
   Array<JsonValue> firstObservedAtJsonList(m_firstObservedAt.size());
   for(unsigned firstObservedAtIndex = 0; firstObservedAtIndex < firstObservedAtJsonList.GetLength(); ++firstObservedAtIndex)
   {
     firstObservedAtJsonList[firstObservedAtIndex].AsObject(m_firstObservedAt[firstObservedAtIndex].Jsonize());
   }
   payload.WithArray("firstObservedAt", std::move(firstObservedAtJsonList));

  }

  if(m_fixAvailableHasBeenSet)
  {
   Array<JsonValue> fixAvailableJsonList(m_fixAvailable.size());
   for(unsigned fixAvailableIndex = 0; fixAvailableIndex < fixAvailableJsonList.GetLength(); ++fixAvailableIndex)
   {
     fixAvailableJsonList[fixAvailableIndex].AsObject(m_fixAvailable[fixAvailableIndex].Jsonize());
   }
   payload.WithArray("fixAvailable", std::move(fixAvailableJsonList));

  }

  if(m_inspectorScoreHasBeenSet)
  {
   Array<JsonValue> inspectorScoreJsonList(m_inspectorScore.size());
   for(unsigned inspectorScoreIndex = 0; inspectorScoreIndex < inspectorScoreJsonList.GetLength(); ++inspectorScoreIndex)
   {
     inspectorScoreJsonList[inspectorScoreIndex].AsObject(m_inspectorScore[inspectorScoreIndex].Jsonize());
   }
   payload.WithArray("inspectorScore", std::move(inspectorScoreJsonList));

  }

  if(m_lastObservedAtHasBeenSet)
  {
   Array<JsonValue> lastObservedAtJsonList(m_lastObservedAt.size());
   for(unsigned lastObservedAtIndex = 0; lastObservedAtIndex < lastObservedAtJsonList.GetLength(); ++lastObservedAtIndex)
   {
     lastObservedAtJsonList[lastObservedAtIndex].AsObject(m_lastObservedAt[lastObservedAtIndex].Jsonize());
   }
   payload.WithArray("lastObservedAt", std::move(lastObservedAtJsonList));

  }

  if(m_networkProtocolHasBeenSet)
  {
   Array<JsonValue> networkProtocolJsonList(m_networkProtocol.size());
   for(unsigned networkProtocolIndex = 0; networkProtocolIndex < networkProtocolJsonList.GetLength(); ++networkProtocolIndex)
   {
     networkProtocolJsonList[networkProtocolIndex].AsObject(m_networkProtocol[networkProtocolIndex].Jsonize());
   }
   payload.WithArray("networkProtocol", std::move(networkProtocolJsonList));

  }

  if(m_portRangeHasBeenSet)
  {
   Array<JsonValue> portRangeJsonList(m_portRange.size());
   for(unsigned portRangeIndex = 0; portRangeIndex < portRangeJsonList.GetLength(); ++portRangeIndex)
   {
     portRangeJsonList[portRangeIndex].AsObject(m_portRange[portRangeIndex].Jsonize());
   }
   payload.WithArray("portRange", std::move(portRangeJsonList));

  }

  if(m_relatedVulnerabilitiesHasBeenSet)
  {
   Array<JsonValue> relatedVulnerabilitiesJsonList(m_relatedVulnerabilities.size());
   for(unsigned relatedVulnerabilitiesIndex = 0; relatedVulnerabilitiesIndex < relatedVulnerabilitiesJsonList.GetLength(); ++relatedVulnerabilitiesIndex)
   {
     relatedVulnerabilitiesJsonList[relatedVulnerabilitiesIndex].AsObject(m_relatedVulnerabilities[relatedVulnerabilitiesIndex].Jsonize());
   }
   payload.WithArray("relatedVulnerabilities", std::move(relatedVulnerabilitiesJsonList));

  }

  if(m_resourceIdHasBeenSet)
  {
   Array<JsonValue> resourceIdJsonList(m_resourceId.size());
   for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
   {
     resourceIdJsonList[resourceIdIndex].AsObject(m_resourceId[resourceIdIndex].Jsonize());
   }
   payload.WithArray("resourceId", std::move(resourceIdJsonList));

  }

  if(m_resourceTagsHasBeenSet)
  {
   Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("resourceTags", std::move(resourceTagsJsonList));

  }

  if(m_resourceTypeHasBeenSet)
  {
   Array<JsonValue> resourceTypeJsonList(m_resourceType.size());
   for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
   {
     resourceTypeJsonList[resourceTypeIndex].AsObject(m_resourceType[resourceTypeIndex].Jsonize());
   }
   payload.WithArray("resourceType", std::move(resourceTypeJsonList));

  }

  if(m_severityHasBeenSet)
  {
   Array<JsonValue> severityJsonList(m_severity.size());
   for(unsigned severityIndex = 0; severityIndex < severityJsonList.GetLength(); ++severityIndex)
   {
     severityJsonList[severityIndex].AsObject(m_severity[severityIndex].Jsonize());
   }
   payload.WithArray("severity", std::move(severityJsonList));

  }

  if(m_titleHasBeenSet)
  {
   Array<JsonValue> titleJsonList(m_title.size());
   for(unsigned titleIndex = 0; titleIndex < titleJsonList.GetLength(); ++titleIndex)
   {
     titleJsonList[titleIndex].AsObject(m_title[titleIndex].Jsonize());
   }
   payload.WithArray("title", std::move(titleJsonList));

  }

  if(m_updatedAtHasBeenSet)
  {
   Array<JsonValue> updatedAtJsonList(m_updatedAt.size());
   for(unsigned updatedAtIndex = 0; updatedAtIndex < updatedAtJsonList.GetLength(); ++updatedAtIndex)
   {
     updatedAtJsonList[updatedAtIndex].AsObject(m_updatedAt[updatedAtIndex].Jsonize());
   }
   payload.WithArray("updatedAt", std::move(updatedAtJsonList));

  }

  if(m_vendorSeverityHasBeenSet)
  {
   Array<JsonValue> vendorSeverityJsonList(m_vendorSeverity.size());
   for(unsigned vendorSeverityIndex = 0; vendorSeverityIndex < vendorSeverityJsonList.GetLength(); ++vendorSeverityIndex)
   {
     vendorSeverityJsonList[vendorSeverityIndex].AsObject(m_vendorSeverity[vendorSeverityIndex].Jsonize());
   }
   payload.WithArray("vendorSeverity", std::move(vendorSeverityJsonList));

  }

  if(m_vulnerabilityIdHasBeenSet)
  {
   Array<JsonValue> vulnerabilityIdJsonList(m_vulnerabilityId.size());
   for(unsigned vulnerabilityIdIndex = 0; vulnerabilityIdIndex < vulnerabilityIdJsonList.GetLength(); ++vulnerabilityIdIndex)
   {
     vulnerabilityIdJsonList[vulnerabilityIdIndex].AsObject(m_vulnerabilityId[vulnerabilityIdIndex].Jsonize());
   }
   payload.WithArray("vulnerabilityId", std::move(vulnerabilityIdJsonList));

  }

  if(m_vulnerabilitySourceHasBeenSet)
  {
   Array<JsonValue> vulnerabilitySourceJsonList(m_vulnerabilitySource.size());
   for(unsigned vulnerabilitySourceIndex = 0; vulnerabilitySourceIndex < vulnerabilitySourceJsonList.GetLength(); ++vulnerabilitySourceIndex)
   {
     vulnerabilitySourceJsonList[vulnerabilitySourceIndex].AsObject(m_vulnerabilitySource[vulnerabilitySourceIndex].Jsonize());
   }
   payload.WithArray("vulnerabilitySource", std::move(vulnerabilitySourceJsonList));

  }

  if(m_vulnerablePackagesHasBeenSet)
  {
   Array<JsonValue> vulnerablePackagesJsonList(m_vulnerablePackages.size());
   for(unsigned vulnerablePackagesIndex = 0; vulnerablePackagesIndex < vulnerablePackagesJsonList.GetLength(); ++vulnerablePackagesIndex)
   {
     vulnerablePackagesJsonList[vulnerablePackagesIndex].AsObject(m_vulnerablePackages[vulnerablePackagesIndex].Jsonize());
   }
   payload.WithArray("vulnerablePackages", std::move(vulnerablePackagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
