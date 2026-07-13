/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/FilterCriteria.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

FilterCriteria::FilterCriteria(JsonView jsonValue) { *this = jsonValue; }

FilterCriteria& FilterCriteria::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingArn")) {
    Aws::Utils::Array<JsonView> findingArnJsonList = jsonValue.GetArray("findingArn");
    for (unsigned findingArnIndex = 0; findingArnIndex < findingArnJsonList.GetLength(); ++findingArnIndex) {
      m_findingArn.push_back(findingArnJsonList[findingArnIndex].AsObject());
    }
    m_findingArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsAccountId")) {
    Aws::Utils::Array<JsonView> awsAccountIdJsonList = jsonValue.GetArray("awsAccountId");
    for (unsigned awsAccountIdIndex = 0; awsAccountIdIndex < awsAccountIdJsonList.GetLength(); ++awsAccountIdIndex) {
      m_awsAccountId.push_back(awsAccountIdJsonList[awsAccountIdIndex].AsObject());
    }
    m_awsAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingType")) {
    Aws::Utils::Array<JsonView> findingTypeJsonList = jsonValue.GetArray("findingType");
    for (unsigned findingTypeIndex = 0; findingTypeIndex < findingTypeJsonList.GetLength(); ++findingTypeIndex) {
      m_findingType.push_back(findingTypeJsonList[findingTypeIndex].AsObject());
    }
    m_findingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    Aws::Utils::Array<JsonView> severityJsonList = jsonValue.GetArray("severity");
    for (unsigned severityIndex = 0; severityIndex < severityJsonList.GetLength(); ++severityIndex) {
      m_severity.push_back(severityJsonList[severityIndex].AsObject());
    }
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firstObservedAt")) {
    Aws::Utils::Array<JsonView> firstObservedAtJsonList = jsonValue.GetArray("firstObservedAt");
    for (unsigned firstObservedAtIndex = 0; firstObservedAtIndex < firstObservedAtJsonList.GetLength(); ++firstObservedAtIndex) {
      m_firstObservedAt.push_back(firstObservedAtJsonList[firstObservedAtIndex].AsObject());
    }
    m_firstObservedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastObservedAt")) {
    Aws::Utils::Array<JsonView> lastObservedAtJsonList = jsonValue.GetArray("lastObservedAt");
    for (unsigned lastObservedAtIndex = 0; lastObservedAtIndex < lastObservedAtJsonList.GetLength(); ++lastObservedAtIndex) {
      m_lastObservedAt.push_back(lastObservedAtJsonList[lastObservedAtIndex].AsObject());
    }
    m_lastObservedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    Aws::Utils::Array<JsonView> updatedAtJsonList = jsonValue.GetArray("updatedAt");
    for (unsigned updatedAtIndex = 0; updatedAtIndex < updatedAtJsonList.GetLength(); ++updatedAtIndex) {
      m_updatedAt.push_back(updatedAtJsonList[updatedAtIndex].AsObject());
    }
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingStatus")) {
    Aws::Utils::Array<JsonView> findingStatusJsonList = jsonValue.GetArray("findingStatus");
    for (unsigned findingStatusIndex = 0; findingStatusIndex < findingStatusJsonList.GetLength(); ++findingStatusIndex) {
      m_findingStatus.push_back(findingStatusJsonList[findingStatusIndex].AsObject());
    }
    m_findingStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    Aws::Utils::Array<JsonView> titleJsonList = jsonValue.GetArray("title");
    for (unsigned titleIndex = 0; titleIndex < titleJsonList.GetLength(); ++titleIndex) {
      m_title.push_back(titleJsonList[titleIndex].AsObject());
    }
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inspectorScore")) {
    Aws::Utils::Array<JsonView> inspectorScoreJsonList = jsonValue.GetArray("inspectorScore");
    for (unsigned inspectorScoreIndex = 0; inspectorScoreIndex < inspectorScoreJsonList.GetLength(); ++inspectorScoreIndex) {
      m_inspectorScore.push_back(inspectorScoreJsonList[inspectorScoreIndex].AsObject());
    }
    m_inspectorScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    Aws::Utils::Array<JsonView> resourceTypeJsonList = jsonValue.GetArray("resourceType");
    for (unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex) {
      m_resourceType.push_back(resourceTypeJsonList[resourceTypeIndex].AsObject());
    }
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    Aws::Utils::Array<JsonView> resourceIdJsonList = jsonValue.GetArray("resourceId");
    for (unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex) {
      m_resourceId.push_back(resourceIdJsonList[resourceIdIndex].AsObject());
    }
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceTags")) {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("resourceTags");
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ec2InstanceImageId")) {
    Aws::Utils::Array<JsonView> ec2InstanceImageIdJsonList = jsonValue.GetArray("ec2InstanceImageId");
    for (unsigned ec2InstanceImageIdIndex = 0; ec2InstanceImageIdIndex < ec2InstanceImageIdJsonList.GetLength();
         ++ec2InstanceImageIdIndex) {
      m_ec2InstanceImageId.push_back(ec2InstanceImageIdJsonList[ec2InstanceImageIdIndex].AsObject());
    }
    m_ec2InstanceImageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ec2InstanceVpcId")) {
    Aws::Utils::Array<JsonView> ec2InstanceVpcIdJsonList = jsonValue.GetArray("ec2InstanceVpcId");
    for (unsigned ec2InstanceVpcIdIndex = 0; ec2InstanceVpcIdIndex < ec2InstanceVpcIdJsonList.GetLength(); ++ec2InstanceVpcIdIndex) {
      m_ec2InstanceVpcId.push_back(ec2InstanceVpcIdJsonList[ec2InstanceVpcIdIndex].AsObject());
    }
    m_ec2InstanceVpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ec2InstanceSubnetId")) {
    Aws::Utils::Array<JsonView> ec2InstanceSubnetIdJsonList = jsonValue.GetArray("ec2InstanceSubnetId");
    for (unsigned ec2InstanceSubnetIdIndex = 0; ec2InstanceSubnetIdIndex < ec2InstanceSubnetIdJsonList.GetLength();
         ++ec2InstanceSubnetIdIndex) {
      m_ec2InstanceSubnetId.push_back(ec2InstanceSubnetIdJsonList[ec2InstanceSubnetIdIndex].AsObject());
    }
    m_ec2InstanceSubnetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImagePushedAt")) {
    Aws::Utils::Array<JsonView> ecrImagePushedAtJsonList = jsonValue.GetArray("ecrImagePushedAt");
    for (unsigned ecrImagePushedAtIndex = 0; ecrImagePushedAtIndex < ecrImagePushedAtJsonList.GetLength(); ++ecrImagePushedAtIndex) {
      m_ecrImagePushedAt.push_back(ecrImagePushedAtJsonList[ecrImagePushedAtIndex].AsObject());
    }
    m_ecrImagePushedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImageArchitecture")) {
    Aws::Utils::Array<JsonView> ecrImageArchitectureJsonList = jsonValue.GetArray("ecrImageArchitecture");
    for (unsigned ecrImageArchitectureIndex = 0; ecrImageArchitectureIndex < ecrImageArchitectureJsonList.GetLength();
         ++ecrImageArchitectureIndex) {
      m_ecrImageArchitecture.push_back(ecrImageArchitectureJsonList[ecrImageArchitectureIndex].AsObject());
    }
    m_ecrImageArchitectureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImageRegistry")) {
    Aws::Utils::Array<JsonView> ecrImageRegistryJsonList = jsonValue.GetArray("ecrImageRegistry");
    for (unsigned ecrImageRegistryIndex = 0; ecrImageRegistryIndex < ecrImageRegistryJsonList.GetLength(); ++ecrImageRegistryIndex) {
      m_ecrImageRegistry.push_back(ecrImageRegistryJsonList[ecrImageRegistryIndex].AsObject());
    }
    m_ecrImageRegistryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImageRepositoryName")) {
    Aws::Utils::Array<JsonView> ecrImageRepositoryNameJsonList = jsonValue.GetArray("ecrImageRepositoryName");
    for (unsigned ecrImageRepositoryNameIndex = 0; ecrImageRepositoryNameIndex < ecrImageRepositoryNameJsonList.GetLength();
         ++ecrImageRepositoryNameIndex) {
      m_ecrImageRepositoryName.push_back(ecrImageRepositoryNameJsonList[ecrImageRepositoryNameIndex].AsObject());
    }
    m_ecrImageRepositoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImageTags")) {
    Aws::Utils::Array<JsonView> ecrImageTagsJsonList = jsonValue.GetArray("ecrImageTags");
    for (unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex) {
      m_ecrImageTags.push_back(ecrImageTagsJsonList[ecrImageTagsIndex].AsObject());
    }
    m_ecrImageTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImageHash")) {
    Aws::Utils::Array<JsonView> ecrImageHashJsonList = jsonValue.GetArray("ecrImageHash");
    for (unsigned ecrImageHashIndex = 0; ecrImageHashIndex < ecrImageHashJsonList.GetLength(); ++ecrImageHashIndex) {
      m_ecrImageHash.push_back(ecrImageHashJsonList[ecrImageHashIndex].AsObject());
    }
    m_ecrImageHashHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImageLastInUseAt")) {
    Aws::Utils::Array<JsonView> ecrImageLastInUseAtJsonList = jsonValue.GetArray("ecrImageLastInUseAt");
    for (unsigned ecrImageLastInUseAtIndex = 0; ecrImageLastInUseAtIndex < ecrImageLastInUseAtJsonList.GetLength();
         ++ecrImageLastInUseAtIndex) {
      m_ecrImageLastInUseAt.push_back(ecrImageLastInUseAtJsonList[ecrImageLastInUseAtIndex].AsObject());
    }
    m_ecrImageLastInUseAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImageInUseCount")) {
    Aws::Utils::Array<JsonView> ecrImageInUseCountJsonList = jsonValue.GetArray("ecrImageInUseCount");
    for (unsigned ecrImageInUseCountIndex = 0; ecrImageInUseCountIndex < ecrImageInUseCountJsonList.GetLength();
         ++ecrImageInUseCountIndex) {
      m_ecrImageInUseCount.push_back(ecrImageInUseCountJsonList[ecrImageInUseCountIndex].AsObject());
    }
    m_ecrImageInUseCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portRange")) {
    Aws::Utils::Array<JsonView> portRangeJsonList = jsonValue.GetArray("portRange");
    for (unsigned portRangeIndex = 0; portRangeIndex < portRangeJsonList.GetLength(); ++portRangeIndex) {
      m_portRange.push_back(portRangeJsonList[portRangeIndex].AsObject());
    }
    m_portRangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkProtocol")) {
    Aws::Utils::Array<JsonView> networkProtocolJsonList = jsonValue.GetArray("networkProtocol");
    for (unsigned networkProtocolIndex = 0; networkProtocolIndex < networkProtocolJsonList.GetLength(); ++networkProtocolIndex) {
      m_networkProtocol.push_back(networkProtocolJsonList[networkProtocolIndex].AsObject());
    }
    m_networkProtocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("componentId")) {
    Aws::Utils::Array<JsonView> componentIdJsonList = jsonValue.GetArray("componentId");
    for (unsigned componentIdIndex = 0; componentIdIndex < componentIdJsonList.GetLength(); ++componentIdIndex) {
      m_componentId.push_back(componentIdJsonList[componentIdIndex].AsObject());
    }
    m_componentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("componentType")) {
    Aws::Utils::Array<JsonView> componentTypeJsonList = jsonValue.GetArray("componentType");
    for (unsigned componentTypeIndex = 0; componentTypeIndex < componentTypeJsonList.GetLength(); ++componentTypeIndex) {
      m_componentType.push_back(componentTypeJsonList[componentTypeIndex].AsObject());
    }
    m_componentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vulnerabilityId")) {
    Aws::Utils::Array<JsonView> vulnerabilityIdJsonList = jsonValue.GetArray("vulnerabilityId");
    for (unsigned vulnerabilityIdIndex = 0; vulnerabilityIdIndex < vulnerabilityIdJsonList.GetLength(); ++vulnerabilityIdIndex) {
      m_vulnerabilityId.push_back(vulnerabilityIdJsonList[vulnerabilityIdIndex].AsObject());
    }
    m_vulnerabilityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vulnerabilitySource")) {
    Aws::Utils::Array<JsonView> vulnerabilitySourceJsonList = jsonValue.GetArray("vulnerabilitySource");
    for (unsigned vulnerabilitySourceIndex = 0; vulnerabilitySourceIndex < vulnerabilitySourceJsonList.GetLength();
         ++vulnerabilitySourceIndex) {
      m_vulnerabilitySource.push_back(vulnerabilitySourceJsonList[vulnerabilitySourceIndex].AsObject());
    }
    m_vulnerabilitySourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vendorSeverity")) {
    Aws::Utils::Array<JsonView> vendorSeverityJsonList = jsonValue.GetArray("vendorSeverity");
    for (unsigned vendorSeverityIndex = 0; vendorSeverityIndex < vendorSeverityJsonList.GetLength(); ++vendorSeverityIndex) {
      m_vendorSeverity.push_back(vendorSeverityJsonList[vendorSeverityIndex].AsObject());
    }
    m_vendorSeverityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vulnerablePackages")) {
    Aws::Utils::Array<JsonView> vulnerablePackagesJsonList = jsonValue.GetArray("vulnerablePackages");
    for (unsigned vulnerablePackagesIndex = 0; vulnerablePackagesIndex < vulnerablePackagesJsonList.GetLength();
         ++vulnerablePackagesIndex) {
      m_vulnerablePackages.push_back(vulnerablePackagesJsonList[vulnerablePackagesIndex].AsObject());
    }
    m_vulnerablePackagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relatedVulnerabilities")) {
    Aws::Utils::Array<JsonView> relatedVulnerabilitiesJsonList = jsonValue.GetArray("relatedVulnerabilities");
    for (unsigned relatedVulnerabilitiesIndex = 0; relatedVulnerabilitiesIndex < relatedVulnerabilitiesJsonList.GetLength();
         ++relatedVulnerabilitiesIndex) {
      m_relatedVulnerabilities.push_back(relatedVulnerabilitiesJsonList[relatedVulnerabilitiesIndex].AsObject());
    }
    m_relatedVulnerabilitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fixAvailable")) {
    Aws::Utils::Array<JsonView> fixAvailableJsonList = jsonValue.GetArray("fixAvailable");
    for (unsigned fixAvailableIndex = 0; fixAvailableIndex < fixAvailableJsonList.GetLength(); ++fixAvailableIndex) {
      m_fixAvailable.push_back(fixAvailableJsonList[fixAvailableIndex].AsObject());
    }
    m_fixAvailableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunctionName")) {
    Aws::Utils::Array<JsonView> lambdaFunctionNameJsonList = jsonValue.GetArray("lambdaFunctionName");
    for (unsigned lambdaFunctionNameIndex = 0; lambdaFunctionNameIndex < lambdaFunctionNameJsonList.GetLength();
         ++lambdaFunctionNameIndex) {
      m_lambdaFunctionName.push_back(lambdaFunctionNameJsonList[lambdaFunctionNameIndex].AsObject());
    }
    m_lambdaFunctionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunctionLayers")) {
    Aws::Utils::Array<JsonView> lambdaFunctionLayersJsonList = jsonValue.GetArray("lambdaFunctionLayers");
    for (unsigned lambdaFunctionLayersIndex = 0; lambdaFunctionLayersIndex < lambdaFunctionLayersJsonList.GetLength();
         ++lambdaFunctionLayersIndex) {
      m_lambdaFunctionLayers.push_back(lambdaFunctionLayersJsonList[lambdaFunctionLayersIndex].AsObject());
    }
    m_lambdaFunctionLayersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunctionRuntime")) {
    Aws::Utils::Array<JsonView> lambdaFunctionRuntimeJsonList = jsonValue.GetArray("lambdaFunctionRuntime");
    for (unsigned lambdaFunctionRuntimeIndex = 0; lambdaFunctionRuntimeIndex < lambdaFunctionRuntimeJsonList.GetLength();
         ++lambdaFunctionRuntimeIndex) {
      m_lambdaFunctionRuntime.push_back(lambdaFunctionRuntimeJsonList[lambdaFunctionRuntimeIndex].AsObject());
    }
    m_lambdaFunctionRuntimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunctionLastModifiedAt")) {
    Aws::Utils::Array<JsonView> lambdaFunctionLastModifiedAtJsonList = jsonValue.GetArray("lambdaFunctionLastModifiedAt");
    for (unsigned lambdaFunctionLastModifiedAtIndex = 0;
         lambdaFunctionLastModifiedAtIndex < lambdaFunctionLastModifiedAtJsonList.GetLength(); ++lambdaFunctionLastModifiedAtIndex) {
      m_lambdaFunctionLastModifiedAt.push_back(lambdaFunctionLastModifiedAtJsonList[lambdaFunctionLastModifiedAtIndex].AsObject());
    }
    m_lambdaFunctionLastModifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunctionExecutionRoleArn")) {
    Aws::Utils::Array<JsonView> lambdaFunctionExecutionRoleArnJsonList = jsonValue.GetArray("lambdaFunctionExecutionRoleArn");
    for (unsigned lambdaFunctionExecutionRoleArnIndex = 0;
         lambdaFunctionExecutionRoleArnIndex < lambdaFunctionExecutionRoleArnJsonList.GetLength(); ++lambdaFunctionExecutionRoleArnIndex) {
      m_lambdaFunctionExecutionRoleArn.push_back(lambdaFunctionExecutionRoleArnJsonList[lambdaFunctionExecutionRoleArnIndex].AsObject());
    }
    m_lambdaFunctionExecutionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exploitAvailable")) {
    Aws::Utils::Array<JsonView> exploitAvailableJsonList = jsonValue.GetArray("exploitAvailable");
    for (unsigned exploitAvailableIndex = 0; exploitAvailableIndex < exploitAvailableJsonList.GetLength(); ++exploitAvailableIndex) {
      m_exploitAvailable.push_back(exploitAvailableJsonList[exploitAvailableIndex].AsObject());
    }
    m_exploitAvailableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeVulnerabilityDetectorName")) {
    Aws::Utils::Array<JsonView> codeVulnerabilityDetectorNameJsonList = jsonValue.GetArray("codeVulnerabilityDetectorName");
    for (unsigned codeVulnerabilityDetectorNameIndex = 0;
         codeVulnerabilityDetectorNameIndex < codeVulnerabilityDetectorNameJsonList.GetLength(); ++codeVulnerabilityDetectorNameIndex) {
      m_codeVulnerabilityDetectorName.push_back(codeVulnerabilityDetectorNameJsonList[codeVulnerabilityDetectorNameIndex].AsObject());
    }
    m_codeVulnerabilityDetectorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeVulnerabilityDetectorTags")) {
    Aws::Utils::Array<JsonView> codeVulnerabilityDetectorTagsJsonList = jsonValue.GetArray("codeVulnerabilityDetectorTags");
    for (unsigned codeVulnerabilityDetectorTagsIndex = 0;
         codeVulnerabilityDetectorTagsIndex < codeVulnerabilityDetectorTagsJsonList.GetLength(); ++codeVulnerabilityDetectorTagsIndex) {
      m_codeVulnerabilityDetectorTags.push_back(codeVulnerabilityDetectorTagsJsonList[codeVulnerabilityDetectorTagsIndex].AsObject());
    }
    m_codeVulnerabilityDetectorTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeVulnerabilityFilePath")) {
    Aws::Utils::Array<JsonView> codeVulnerabilityFilePathJsonList = jsonValue.GetArray("codeVulnerabilityFilePath");
    for (unsigned codeVulnerabilityFilePathIndex = 0; codeVulnerabilityFilePathIndex < codeVulnerabilityFilePathJsonList.GetLength();
         ++codeVulnerabilityFilePathIndex) {
      m_codeVulnerabilityFilePath.push_back(codeVulnerabilityFilePathJsonList[codeVulnerabilityFilePathIndex].AsObject());
    }
    m_codeVulnerabilityFilePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("epssScore")) {
    Aws::Utils::Array<JsonView> epssScoreJsonList = jsonValue.GetArray("epssScore");
    for (unsigned epssScoreIndex = 0; epssScoreIndex < epssScoreJsonList.GetLength(); ++epssScoreIndex) {
      m_epssScore.push_back(epssScoreJsonList[epssScoreIndex].AsObject());
    }
    m_epssScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeRepositoryProjectName")) {
    Aws::Utils::Array<JsonView> codeRepositoryProjectNameJsonList = jsonValue.GetArray("codeRepositoryProjectName");
    for (unsigned codeRepositoryProjectNameIndex = 0; codeRepositoryProjectNameIndex < codeRepositoryProjectNameJsonList.GetLength();
         ++codeRepositoryProjectNameIndex) {
      m_codeRepositoryProjectName.push_back(codeRepositoryProjectNameJsonList[codeRepositoryProjectNameIndex].AsObject());
    }
    m_codeRepositoryProjectNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeRepositoryProviderType")) {
    Aws::Utils::Array<JsonView> codeRepositoryProviderTypeJsonList = jsonValue.GetArray("codeRepositoryProviderType");
    for (unsigned codeRepositoryProviderTypeIndex = 0; codeRepositoryProviderTypeIndex < codeRepositoryProviderTypeJsonList.GetLength();
         ++codeRepositoryProviderTypeIndex) {
      m_codeRepositoryProviderType.push_back(codeRepositoryProviderTypeJsonList[codeRepositoryProviderTypeIndex].AsObject());
    }
    m_codeRepositoryProviderTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProvider")) {
    Aws::Utils::Array<JsonView> cloudProviderJsonList = jsonValue.GetArray("cloudProvider");
    for (unsigned cloudProviderIndex = 0; cloudProviderIndex < cloudProviderJsonList.GetLength(); ++cloudProviderIndex) {
      m_cloudProvider.push_back(cloudProviderJsonList[cloudProviderIndex].AsObject());
    }
    m_cloudProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProviderRegion")) {
    Aws::Utils::Array<JsonView> cloudProviderRegionJsonList = jsonValue.GetArray("cloudProviderRegion");
    for (unsigned cloudProviderRegionIndex = 0; cloudProviderRegionIndex < cloudProviderRegionJsonList.GetLength();
         ++cloudProviderRegionIndex) {
      m_cloudProviderRegion.push_back(cloudProviderRegionJsonList[cloudProviderRegionIndex].AsObject());
    }
    m_cloudProviderRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProviderAccountId")) {
    Aws::Utils::Array<JsonView> cloudProviderAccountIdJsonList = jsonValue.GetArray("cloudProviderAccountId");
    for (unsigned cloudProviderAccountIdIndex = 0; cloudProviderAccountIdIndex < cloudProviderAccountIdJsonList.GetLength();
         ++cloudProviderAccountIdIndex) {
      m_cloudProviderAccountId.push_back(cloudProviderAccountIdJsonList[cloudProviderAccountIdIndex].AsObject());
    }
    m_cloudProviderAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProviderOrgId")) {
    Aws::Utils::Array<JsonView> cloudProviderOrgIdJsonList = jsonValue.GetArray("cloudProviderOrgId");
    for (unsigned cloudProviderOrgIdIndex = 0; cloudProviderOrgIdIndex < cloudProviderOrgIdJsonList.GetLength();
         ++cloudProviderOrgIdIndex) {
      m_cloudProviderOrgId.push_back(cloudProviderOrgIdJsonList[cloudProviderOrgIdIndex].AsObject());
    }
    m_cloudProviderOrgIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudVmImageReference")) {
    Aws::Utils::Array<JsonView> cloudVmImageReferenceJsonList = jsonValue.GetArray("cloudVmImageReference");
    for (unsigned cloudVmImageReferenceIndex = 0; cloudVmImageReferenceIndex < cloudVmImageReferenceJsonList.GetLength();
         ++cloudVmImageReferenceIndex) {
      m_cloudVmImageReference.push_back(cloudVmImageReferenceJsonList[cloudVmImageReferenceIndex].AsObject());
    }
    m_cloudVmImageReferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudVmNetworkId")) {
    Aws::Utils::Array<JsonView> cloudVmNetworkIdJsonList = jsonValue.GetArray("cloudVmNetworkId");
    for (unsigned cloudVmNetworkIdIndex = 0; cloudVmNetworkIdIndex < cloudVmNetworkIdJsonList.GetLength(); ++cloudVmNetworkIdIndex) {
      m_cloudVmNetworkId.push_back(cloudVmNetworkIdJsonList[cloudVmNetworkIdIndex].AsObject());
    }
    m_cloudVmNetworkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudVmSubnetIds")) {
    Aws::Utils::Array<JsonView> cloudVmSubnetIdsJsonList = jsonValue.GetArray("cloudVmSubnetIds");
    for (unsigned cloudVmSubnetIdsIndex = 0; cloudVmSubnetIdsIndex < cloudVmSubnetIdsJsonList.GetLength(); ++cloudVmSubnetIdsIndex) {
      m_cloudVmSubnetIds.push_back(cloudVmSubnetIdsJsonList[cloudVmSubnetIdsIndex].AsObject());
    }
    m_cloudVmSubnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudImageRepositoryName")) {
    Aws::Utils::Array<JsonView> cloudImageRepositoryNameJsonList = jsonValue.GetArray("cloudImageRepositoryName");
    for (unsigned cloudImageRepositoryNameIndex = 0; cloudImageRepositoryNameIndex < cloudImageRepositoryNameJsonList.GetLength();
         ++cloudImageRepositoryNameIndex) {
      m_cloudImageRepositoryName.push_back(cloudImageRepositoryNameJsonList[cloudImageRepositoryNameIndex].AsObject());
    }
    m_cloudImageRepositoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudImageRegistry")) {
    Aws::Utils::Array<JsonView> cloudImageRegistryJsonList = jsonValue.GetArray("cloudImageRegistry");
    for (unsigned cloudImageRegistryIndex = 0; cloudImageRegistryIndex < cloudImageRegistryJsonList.GetLength();
         ++cloudImageRegistryIndex) {
      m_cloudImageRegistry.push_back(cloudImageRegistryJsonList[cloudImageRegistryIndex].AsObject());
    }
    m_cloudImageRegistryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudImageDigest")) {
    Aws::Utils::Array<JsonView> cloudImageDigestJsonList = jsonValue.GetArray("cloudImageDigest");
    for (unsigned cloudImageDigestIndex = 0; cloudImageDigestIndex < cloudImageDigestJsonList.GetLength(); ++cloudImageDigestIndex) {
      m_cloudImageDigest.push_back(cloudImageDigestJsonList[cloudImageDigestIndex].AsObject());
    }
    m_cloudImageDigestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudImageTags")) {
    Aws::Utils::Array<JsonView> cloudImageTagsJsonList = jsonValue.GetArray("cloudImageTags");
    for (unsigned cloudImageTagsIndex = 0; cloudImageTagsIndex < cloudImageTagsJsonList.GetLength(); ++cloudImageTagsIndex) {
      m_cloudImageTags.push_back(cloudImageTagsJsonList[cloudImageTagsIndex].AsObject());
    }
    m_cloudImageTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudImagePushedAt")) {
    Aws::Utils::Array<JsonView> cloudImagePushedAtJsonList = jsonValue.GetArray("cloudImagePushedAt");
    for (unsigned cloudImagePushedAtIndex = 0; cloudImagePushedAtIndex < cloudImagePushedAtJsonList.GetLength();
         ++cloudImagePushedAtIndex) {
      m_cloudImagePushedAt.push_back(cloudImagePushedAtJsonList[cloudImagePushedAtIndex].AsObject());
    }
    m_cloudImagePushedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudImageArchitecture")) {
    Aws::Utils::Array<JsonView> cloudImageArchitectureJsonList = jsonValue.GetArray("cloudImageArchitecture");
    for (unsigned cloudImageArchitectureIndex = 0; cloudImageArchitectureIndex < cloudImageArchitectureJsonList.GetLength();
         ++cloudImageArchitectureIndex) {
      m_cloudImageArchitecture.push_back(cloudImageArchitectureJsonList[cloudImageArchitectureIndex].AsObject());
    }
    m_cloudImageArchitectureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudImageLastInUseAt")) {
    Aws::Utils::Array<JsonView> cloudImageLastInUseAtJsonList = jsonValue.GetArray("cloudImageLastInUseAt");
    for (unsigned cloudImageLastInUseAtIndex = 0; cloudImageLastInUseAtIndex < cloudImageLastInUseAtJsonList.GetLength();
         ++cloudImageLastInUseAtIndex) {
      m_cloudImageLastInUseAt.push_back(cloudImageLastInUseAtJsonList[cloudImageLastInUseAtIndex].AsObject());
    }
    m_cloudImageLastInUseAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudImageInUseCount")) {
    Aws::Utils::Array<JsonView> cloudImageInUseCountJsonList = jsonValue.GetArray("cloudImageInUseCount");
    for (unsigned cloudImageInUseCountIndex = 0; cloudImageInUseCountIndex < cloudImageInUseCountJsonList.GetLength();
         ++cloudImageInUseCountIndex) {
      m_cloudImageInUseCount.push_back(cloudImageInUseCountJsonList[cloudImageInUseCountIndex].AsObject());
    }
    m_cloudImageInUseCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudServerlessFunctionName")) {
    Aws::Utils::Array<JsonView> cloudServerlessFunctionNameJsonList = jsonValue.GetArray("cloudServerlessFunctionName");
    for (unsigned cloudServerlessFunctionNameIndex = 0; cloudServerlessFunctionNameIndex < cloudServerlessFunctionNameJsonList.GetLength();
         ++cloudServerlessFunctionNameIndex) {
      m_cloudServerlessFunctionName.push_back(cloudServerlessFunctionNameJsonList[cloudServerlessFunctionNameIndex].AsObject());
    }
    m_cloudServerlessFunctionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudServerlessFunctionRuntime")) {
    Aws::Utils::Array<JsonView> cloudServerlessFunctionRuntimeJsonList = jsonValue.GetArray("cloudServerlessFunctionRuntime");
    for (unsigned cloudServerlessFunctionRuntimeIndex = 0;
         cloudServerlessFunctionRuntimeIndex < cloudServerlessFunctionRuntimeJsonList.GetLength(); ++cloudServerlessFunctionRuntimeIndex) {
      m_cloudServerlessFunctionRuntime.push_back(cloudServerlessFunctionRuntimeJsonList[cloudServerlessFunctionRuntimeIndex].AsObject());
    }
    m_cloudServerlessFunctionRuntimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudServerlessFunctionLastModifiedAt")) {
    Aws::Utils::Array<JsonView> cloudServerlessFunctionLastModifiedAtJsonList = jsonValue.GetArray("cloudServerlessFunctionLastModifiedAt");
    for (unsigned cloudServerlessFunctionLastModifiedAtIndex = 0;
         cloudServerlessFunctionLastModifiedAtIndex < cloudServerlessFunctionLastModifiedAtJsonList.GetLength();
         ++cloudServerlessFunctionLastModifiedAtIndex) {
      m_cloudServerlessFunctionLastModifiedAt.push_back(
          cloudServerlessFunctionLastModifiedAtJsonList[cloudServerlessFunctionLastModifiedAtIndex].AsObject());
    }
    m_cloudServerlessFunctionLastModifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudServerlessFunctionExecutionRole")) {
    Aws::Utils::Array<JsonView> cloudServerlessFunctionExecutionRoleJsonList = jsonValue.GetArray("cloudServerlessFunctionExecutionRole");
    for (unsigned cloudServerlessFunctionExecutionRoleIndex = 0;
         cloudServerlessFunctionExecutionRoleIndex < cloudServerlessFunctionExecutionRoleJsonList.GetLength();
         ++cloudServerlessFunctionExecutionRoleIndex) {
      m_cloudServerlessFunctionExecutionRole.push_back(
          cloudServerlessFunctionExecutionRoleJsonList[cloudServerlessFunctionExecutionRoleIndex].AsObject());
    }
    m_cloudServerlessFunctionExecutionRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterCriteria::Jsonize() const {
  JsonValue payload;

  if (m_findingArnHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingArnJsonList(m_findingArn.size());
    for (unsigned findingArnIndex = 0; findingArnIndex < findingArnJsonList.GetLength(); ++findingArnIndex) {
      findingArnJsonList[findingArnIndex].AsObject(m_findingArn[findingArnIndex].Jsonize());
    }
    payload.WithArray("findingArn", std::move(findingArnJsonList));
  }

  if (m_awsAccountIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsAccountIdJsonList(m_awsAccountId.size());
    for (unsigned awsAccountIdIndex = 0; awsAccountIdIndex < awsAccountIdJsonList.GetLength(); ++awsAccountIdIndex) {
      awsAccountIdJsonList[awsAccountIdIndex].AsObject(m_awsAccountId[awsAccountIdIndex].Jsonize());
    }
    payload.WithArray("awsAccountId", std::move(awsAccountIdJsonList));
  }

  if (m_findingTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingTypeJsonList(m_findingType.size());
    for (unsigned findingTypeIndex = 0; findingTypeIndex < findingTypeJsonList.GetLength(); ++findingTypeIndex) {
      findingTypeJsonList[findingTypeIndex].AsObject(m_findingType[findingTypeIndex].Jsonize());
    }
    payload.WithArray("findingType", std::move(findingTypeJsonList));
  }

  if (m_severityHasBeenSet) {
    Aws::Utils::Array<JsonValue> severityJsonList(m_severity.size());
    for (unsigned severityIndex = 0; severityIndex < severityJsonList.GetLength(); ++severityIndex) {
      severityJsonList[severityIndex].AsObject(m_severity[severityIndex].Jsonize());
    }
    payload.WithArray("severity", std::move(severityJsonList));
  }

  if (m_firstObservedAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> firstObservedAtJsonList(m_firstObservedAt.size());
    for (unsigned firstObservedAtIndex = 0; firstObservedAtIndex < firstObservedAtJsonList.GetLength(); ++firstObservedAtIndex) {
      firstObservedAtJsonList[firstObservedAtIndex].AsObject(m_firstObservedAt[firstObservedAtIndex].Jsonize());
    }
    payload.WithArray("firstObservedAt", std::move(firstObservedAtJsonList));
  }

  if (m_lastObservedAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> lastObservedAtJsonList(m_lastObservedAt.size());
    for (unsigned lastObservedAtIndex = 0; lastObservedAtIndex < lastObservedAtJsonList.GetLength(); ++lastObservedAtIndex) {
      lastObservedAtJsonList[lastObservedAtIndex].AsObject(m_lastObservedAt[lastObservedAtIndex].Jsonize());
    }
    payload.WithArray("lastObservedAt", std::move(lastObservedAtJsonList));
  }

  if (m_updatedAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> updatedAtJsonList(m_updatedAt.size());
    for (unsigned updatedAtIndex = 0; updatedAtIndex < updatedAtJsonList.GetLength(); ++updatedAtIndex) {
      updatedAtJsonList[updatedAtIndex].AsObject(m_updatedAt[updatedAtIndex].Jsonize());
    }
    payload.WithArray("updatedAt", std::move(updatedAtJsonList));
  }

  if (m_findingStatusHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingStatusJsonList(m_findingStatus.size());
    for (unsigned findingStatusIndex = 0; findingStatusIndex < findingStatusJsonList.GetLength(); ++findingStatusIndex) {
      findingStatusJsonList[findingStatusIndex].AsObject(m_findingStatus[findingStatusIndex].Jsonize());
    }
    payload.WithArray("findingStatus", std::move(findingStatusJsonList));
  }

  if (m_titleHasBeenSet) {
    Aws::Utils::Array<JsonValue> titleJsonList(m_title.size());
    for (unsigned titleIndex = 0; titleIndex < titleJsonList.GetLength(); ++titleIndex) {
      titleJsonList[titleIndex].AsObject(m_title[titleIndex].Jsonize());
    }
    payload.WithArray("title", std::move(titleJsonList));
  }

  if (m_inspectorScoreHasBeenSet) {
    Aws::Utils::Array<JsonValue> inspectorScoreJsonList(m_inspectorScore.size());
    for (unsigned inspectorScoreIndex = 0; inspectorScoreIndex < inspectorScoreJsonList.GetLength(); ++inspectorScoreIndex) {
      inspectorScoreJsonList[inspectorScoreIndex].AsObject(m_inspectorScore[inspectorScoreIndex].Jsonize());
    }
    payload.WithArray("inspectorScore", std::move(inspectorScoreJsonList));
  }

  if (m_resourceTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTypeJsonList(m_resourceType.size());
    for (unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex) {
      resourceTypeJsonList[resourceTypeIndex].AsObject(m_resourceType[resourceTypeIndex].Jsonize());
    }
    payload.WithArray("resourceType", std::move(resourceTypeJsonList));
  }

  if (m_resourceIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceIdJsonList(m_resourceId.size());
    for (unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex) {
      resourceIdJsonList[resourceIdIndex].AsObject(m_resourceId[resourceIdIndex].Jsonize());
    }
    payload.WithArray("resourceId", std::move(resourceIdJsonList));
  }

  if (m_resourceTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
    }
    payload.WithArray("resourceTags", std::move(resourceTagsJsonList));
  }

  if (m_ec2InstanceImageIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> ec2InstanceImageIdJsonList(m_ec2InstanceImageId.size());
    for (unsigned ec2InstanceImageIdIndex = 0; ec2InstanceImageIdIndex < ec2InstanceImageIdJsonList.GetLength();
         ++ec2InstanceImageIdIndex) {
      ec2InstanceImageIdJsonList[ec2InstanceImageIdIndex].AsObject(m_ec2InstanceImageId[ec2InstanceImageIdIndex].Jsonize());
    }
    payload.WithArray("ec2InstanceImageId", std::move(ec2InstanceImageIdJsonList));
  }

  if (m_ec2InstanceVpcIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> ec2InstanceVpcIdJsonList(m_ec2InstanceVpcId.size());
    for (unsigned ec2InstanceVpcIdIndex = 0; ec2InstanceVpcIdIndex < ec2InstanceVpcIdJsonList.GetLength(); ++ec2InstanceVpcIdIndex) {
      ec2InstanceVpcIdJsonList[ec2InstanceVpcIdIndex].AsObject(m_ec2InstanceVpcId[ec2InstanceVpcIdIndex].Jsonize());
    }
    payload.WithArray("ec2InstanceVpcId", std::move(ec2InstanceVpcIdJsonList));
  }

  if (m_ec2InstanceSubnetIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> ec2InstanceSubnetIdJsonList(m_ec2InstanceSubnetId.size());
    for (unsigned ec2InstanceSubnetIdIndex = 0; ec2InstanceSubnetIdIndex < ec2InstanceSubnetIdJsonList.GetLength();
         ++ec2InstanceSubnetIdIndex) {
      ec2InstanceSubnetIdJsonList[ec2InstanceSubnetIdIndex].AsObject(m_ec2InstanceSubnetId[ec2InstanceSubnetIdIndex].Jsonize());
    }
    payload.WithArray("ec2InstanceSubnetId", std::move(ec2InstanceSubnetIdJsonList));
  }

  if (m_ecrImagePushedAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrImagePushedAtJsonList(m_ecrImagePushedAt.size());
    for (unsigned ecrImagePushedAtIndex = 0; ecrImagePushedAtIndex < ecrImagePushedAtJsonList.GetLength(); ++ecrImagePushedAtIndex) {
      ecrImagePushedAtJsonList[ecrImagePushedAtIndex].AsObject(m_ecrImagePushedAt[ecrImagePushedAtIndex].Jsonize());
    }
    payload.WithArray("ecrImagePushedAt", std::move(ecrImagePushedAtJsonList));
  }

  if (m_ecrImageArchitectureHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrImageArchitectureJsonList(m_ecrImageArchitecture.size());
    for (unsigned ecrImageArchitectureIndex = 0; ecrImageArchitectureIndex < ecrImageArchitectureJsonList.GetLength();
         ++ecrImageArchitectureIndex) {
      ecrImageArchitectureJsonList[ecrImageArchitectureIndex].AsObject(m_ecrImageArchitecture[ecrImageArchitectureIndex].Jsonize());
    }
    payload.WithArray("ecrImageArchitecture", std::move(ecrImageArchitectureJsonList));
  }

  if (m_ecrImageRegistryHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrImageRegistryJsonList(m_ecrImageRegistry.size());
    for (unsigned ecrImageRegistryIndex = 0; ecrImageRegistryIndex < ecrImageRegistryJsonList.GetLength(); ++ecrImageRegistryIndex) {
      ecrImageRegistryJsonList[ecrImageRegistryIndex].AsObject(m_ecrImageRegistry[ecrImageRegistryIndex].Jsonize());
    }
    payload.WithArray("ecrImageRegistry", std::move(ecrImageRegistryJsonList));
  }

  if (m_ecrImageRepositoryNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrImageRepositoryNameJsonList(m_ecrImageRepositoryName.size());
    for (unsigned ecrImageRepositoryNameIndex = 0; ecrImageRepositoryNameIndex < ecrImageRepositoryNameJsonList.GetLength();
         ++ecrImageRepositoryNameIndex) {
      ecrImageRepositoryNameJsonList[ecrImageRepositoryNameIndex].AsObject(m_ecrImageRepositoryName[ecrImageRepositoryNameIndex].Jsonize());
    }
    payload.WithArray("ecrImageRepositoryName", std::move(ecrImageRepositoryNameJsonList));
  }

  if (m_ecrImageTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrImageTagsJsonList(m_ecrImageTags.size());
    for (unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex) {
      ecrImageTagsJsonList[ecrImageTagsIndex].AsObject(m_ecrImageTags[ecrImageTagsIndex].Jsonize());
    }
    payload.WithArray("ecrImageTags", std::move(ecrImageTagsJsonList));
  }

  if (m_ecrImageHashHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrImageHashJsonList(m_ecrImageHash.size());
    for (unsigned ecrImageHashIndex = 0; ecrImageHashIndex < ecrImageHashJsonList.GetLength(); ++ecrImageHashIndex) {
      ecrImageHashJsonList[ecrImageHashIndex].AsObject(m_ecrImageHash[ecrImageHashIndex].Jsonize());
    }
    payload.WithArray("ecrImageHash", std::move(ecrImageHashJsonList));
  }

  if (m_ecrImageLastInUseAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrImageLastInUseAtJsonList(m_ecrImageLastInUseAt.size());
    for (unsigned ecrImageLastInUseAtIndex = 0; ecrImageLastInUseAtIndex < ecrImageLastInUseAtJsonList.GetLength();
         ++ecrImageLastInUseAtIndex) {
      ecrImageLastInUseAtJsonList[ecrImageLastInUseAtIndex].AsObject(m_ecrImageLastInUseAt[ecrImageLastInUseAtIndex].Jsonize());
    }
    payload.WithArray("ecrImageLastInUseAt", std::move(ecrImageLastInUseAtJsonList));
  }

  if (m_ecrImageInUseCountHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrImageInUseCountJsonList(m_ecrImageInUseCount.size());
    for (unsigned ecrImageInUseCountIndex = 0; ecrImageInUseCountIndex < ecrImageInUseCountJsonList.GetLength();
         ++ecrImageInUseCountIndex) {
      ecrImageInUseCountJsonList[ecrImageInUseCountIndex].AsObject(m_ecrImageInUseCount[ecrImageInUseCountIndex].Jsonize());
    }
    payload.WithArray("ecrImageInUseCount", std::move(ecrImageInUseCountJsonList));
  }

  if (m_portRangeHasBeenSet) {
    Aws::Utils::Array<JsonValue> portRangeJsonList(m_portRange.size());
    for (unsigned portRangeIndex = 0; portRangeIndex < portRangeJsonList.GetLength(); ++portRangeIndex) {
      portRangeJsonList[portRangeIndex].AsObject(m_portRange[portRangeIndex].Jsonize());
    }
    payload.WithArray("portRange", std::move(portRangeJsonList));
  }

  if (m_networkProtocolHasBeenSet) {
    Aws::Utils::Array<JsonValue> networkProtocolJsonList(m_networkProtocol.size());
    for (unsigned networkProtocolIndex = 0; networkProtocolIndex < networkProtocolJsonList.GetLength(); ++networkProtocolIndex) {
      networkProtocolJsonList[networkProtocolIndex].AsObject(m_networkProtocol[networkProtocolIndex].Jsonize());
    }
    payload.WithArray("networkProtocol", std::move(networkProtocolJsonList));
  }

  if (m_componentIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> componentIdJsonList(m_componentId.size());
    for (unsigned componentIdIndex = 0; componentIdIndex < componentIdJsonList.GetLength(); ++componentIdIndex) {
      componentIdJsonList[componentIdIndex].AsObject(m_componentId[componentIdIndex].Jsonize());
    }
    payload.WithArray("componentId", std::move(componentIdJsonList));
  }

  if (m_componentTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> componentTypeJsonList(m_componentType.size());
    for (unsigned componentTypeIndex = 0; componentTypeIndex < componentTypeJsonList.GetLength(); ++componentTypeIndex) {
      componentTypeJsonList[componentTypeIndex].AsObject(m_componentType[componentTypeIndex].Jsonize());
    }
    payload.WithArray("componentType", std::move(componentTypeJsonList));
  }

  if (m_vulnerabilityIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> vulnerabilityIdJsonList(m_vulnerabilityId.size());
    for (unsigned vulnerabilityIdIndex = 0; vulnerabilityIdIndex < vulnerabilityIdJsonList.GetLength(); ++vulnerabilityIdIndex) {
      vulnerabilityIdJsonList[vulnerabilityIdIndex].AsObject(m_vulnerabilityId[vulnerabilityIdIndex].Jsonize());
    }
    payload.WithArray("vulnerabilityId", std::move(vulnerabilityIdJsonList));
  }

  if (m_vulnerabilitySourceHasBeenSet) {
    Aws::Utils::Array<JsonValue> vulnerabilitySourceJsonList(m_vulnerabilitySource.size());
    for (unsigned vulnerabilitySourceIndex = 0; vulnerabilitySourceIndex < vulnerabilitySourceJsonList.GetLength();
         ++vulnerabilitySourceIndex) {
      vulnerabilitySourceJsonList[vulnerabilitySourceIndex].AsObject(m_vulnerabilitySource[vulnerabilitySourceIndex].Jsonize());
    }
    payload.WithArray("vulnerabilitySource", std::move(vulnerabilitySourceJsonList));
  }

  if (m_vendorSeverityHasBeenSet) {
    Aws::Utils::Array<JsonValue> vendorSeverityJsonList(m_vendorSeverity.size());
    for (unsigned vendorSeverityIndex = 0; vendorSeverityIndex < vendorSeverityJsonList.GetLength(); ++vendorSeverityIndex) {
      vendorSeverityJsonList[vendorSeverityIndex].AsObject(m_vendorSeverity[vendorSeverityIndex].Jsonize());
    }
    payload.WithArray("vendorSeverity", std::move(vendorSeverityJsonList));
  }

  if (m_vulnerablePackagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> vulnerablePackagesJsonList(m_vulnerablePackages.size());
    for (unsigned vulnerablePackagesIndex = 0; vulnerablePackagesIndex < vulnerablePackagesJsonList.GetLength();
         ++vulnerablePackagesIndex) {
      vulnerablePackagesJsonList[vulnerablePackagesIndex].AsObject(m_vulnerablePackages[vulnerablePackagesIndex].Jsonize());
    }
    payload.WithArray("vulnerablePackages", std::move(vulnerablePackagesJsonList));
  }

  if (m_relatedVulnerabilitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> relatedVulnerabilitiesJsonList(m_relatedVulnerabilities.size());
    for (unsigned relatedVulnerabilitiesIndex = 0; relatedVulnerabilitiesIndex < relatedVulnerabilitiesJsonList.GetLength();
         ++relatedVulnerabilitiesIndex) {
      relatedVulnerabilitiesJsonList[relatedVulnerabilitiesIndex].AsObject(m_relatedVulnerabilities[relatedVulnerabilitiesIndex].Jsonize());
    }
    payload.WithArray("relatedVulnerabilities", std::move(relatedVulnerabilitiesJsonList));
  }

  if (m_fixAvailableHasBeenSet) {
    Aws::Utils::Array<JsonValue> fixAvailableJsonList(m_fixAvailable.size());
    for (unsigned fixAvailableIndex = 0; fixAvailableIndex < fixAvailableJsonList.GetLength(); ++fixAvailableIndex) {
      fixAvailableJsonList[fixAvailableIndex].AsObject(m_fixAvailable[fixAvailableIndex].Jsonize());
    }
    payload.WithArray("fixAvailable", std::move(fixAvailableJsonList));
  }

  if (m_lambdaFunctionNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> lambdaFunctionNameJsonList(m_lambdaFunctionName.size());
    for (unsigned lambdaFunctionNameIndex = 0; lambdaFunctionNameIndex < lambdaFunctionNameJsonList.GetLength();
         ++lambdaFunctionNameIndex) {
      lambdaFunctionNameJsonList[lambdaFunctionNameIndex].AsObject(m_lambdaFunctionName[lambdaFunctionNameIndex].Jsonize());
    }
    payload.WithArray("lambdaFunctionName", std::move(lambdaFunctionNameJsonList));
  }

  if (m_lambdaFunctionLayersHasBeenSet) {
    Aws::Utils::Array<JsonValue> lambdaFunctionLayersJsonList(m_lambdaFunctionLayers.size());
    for (unsigned lambdaFunctionLayersIndex = 0; lambdaFunctionLayersIndex < lambdaFunctionLayersJsonList.GetLength();
         ++lambdaFunctionLayersIndex) {
      lambdaFunctionLayersJsonList[lambdaFunctionLayersIndex].AsObject(m_lambdaFunctionLayers[lambdaFunctionLayersIndex].Jsonize());
    }
    payload.WithArray("lambdaFunctionLayers", std::move(lambdaFunctionLayersJsonList));
  }

  if (m_lambdaFunctionRuntimeHasBeenSet) {
    Aws::Utils::Array<JsonValue> lambdaFunctionRuntimeJsonList(m_lambdaFunctionRuntime.size());
    for (unsigned lambdaFunctionRuntimeIndex = 0; lambdaFunctionRuntimeIndex < lambdaFunctionRuntimeJsonList.GetLength();
         ++lambdaFunctionRuntimeIndex) {
      lambdaFunctionRuntimeJsonList[lambdaFunctionRuntimeIndex].AsObject(m_lambdaFunctionRuntime[lambdaFunctionRuntimeIndex].Jsonize());
    }
    payload.WithArray("lambdaFunctionRuntime", std::move(lambdaFunctionRuntimeJsonList));
  }

  if (m_lambdaFunctionLastModifiedAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> lambdaFunctionLastModifiedAtJsonList(m_lambdaFunctionLastModifiedAt.size());
    for (unsigned lambdaFunctionLastModifiedAtIndex = 0;
         lambdaFunctionLastModifiedAtIndex < lambdaFunctionLastModifiedAtJsonList.GetLength(); ++lambdaFunctionLastModifiedAtIndex) {
      lambdaFunctionLastModifiedAtJsonList[lambdaFunctionLastModifiedAtIndex].AsObject(
          m_lambdaFunctionLastModifiedAt[lambdaFunctionLastModifiedAtIndex].Jsonize());
    }
    payload.WithArray("lambdaFunctionLastModifiedAt", std::move(lambdaFunctionLastModifiedAtJsonList));
  }

  if (m_lambdaFunctionExecutionRoleArnHasBeenSet) {
    Aws::Utils::Array<JsonValue> lambdaFunctionExecutionRoleArnJsonList(m_lambdaFunctionExecutionRoleArn.size());
    for (unsigned lambdaFunctionExecutionRoleArnIndex = 0;
         lambdaFunctionExecutionRoleArnIndex < lambdaFunctionExecutionRoleArnJsonList.GetLength(); ++lambdaFunctionExecutionRoleArnIndex) {
      lambdaFunctionExecutionRoleArnJsonList[lambdaFunctionExecutionRoleArnIndex].AsObject(
          m_lambdaFunctionExecutionRoleArn[lambdaFunctionExecutionRoleArnIndex].Jsonize());
    }
    payload.WithArray("lambdaFunctionExecutionRoleArn", std::move(lambdaFunctionExecutionRoleArnJsonList));
  }

  if (m_exploitAvailableHasBeenSet) {
    Aws::Utils::Array<JsonValue> exploitAvailableJsonList(m_exploitAvailable.size());
    for (unsigned exploitAvailableIndex = 0; exploitAvailableIndex < exploitAvailableJsonList.GetLength(); ++exploitAvailableIndex) {
      exploitAvailableJsonList[exploitAvailableIndex].AsObject(m_exploitAvailable[exploitAvailableIndex].Jsonize());
    }
    payload.WithArray("exploitAvailable", std::move(exploitAvailableJsonList));
  }

  if (m_codeVulnerabilityDetectorNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> codeVulnerabilityDetectorNameJsonList(m_codeVulnerabilityDetectorName.size());
    for (unsigned codeVulnerabilityDetectorNameIndex = 0;
         codeVulnerabilityDetectorNameIndex < codeVulnerabilityDetectorNameJsonList.GetLength(); ++codeVulnerabilityDetectorNameIndex) {
      codeVulnerabilityDetectorNameJsonList[codeVulnerabilityDetectorNameIndex].AsObject(
          m_codeVulnerabilityDetectorName[codeVulnerabilityDetectorNameIndex].Jsonize());
    }
    payload.WithArray("codeVulnerabilityDetectorName", std::move(codeVulnerabilityDetectorNameJsonList));
  }

  if (m_codeVulnerabilityDetectorTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> codeVulnerabilityDetectorTagsJsonList(m_codeVulnerabilityDetectorTags.size());
    for (unsigned codeVulnerabilityDetectorTagsIndex = 0;
         codeVulnerabilityDetectorTagsIndex < codeVulnerabilityDetectorTagsJsonList.GetLength(); ++codeVulnerabilityDetectorTagsIndex) {
      codeVulnerabilityDetectorTagsJsonList[codeVulnerabilityDetectorTagsIndex].AsObject(
          m_codeVulnerabilityDetectorTags[codeVulnerabilityDetectorTagsIndex].Jsonize());
    }
    payload.WithArray("codeVulnerabilityDetectorTags", std::move(codeVulnerabilityDetectorTagsJsonList));
  }

  if (m_codeVulnerabilityFilePathHasBeenSet) {
    Aws::Utils::Array<JsonValue> codeVulnerabilityFilePathJsonList(m_codeVulnerabilityFilePath.size());
    for (unsigned codeVulnerabilityFilePathIndex = 0; codeVulnerabilityFilePathIndex < codeVulnerabilityFilePathJsonList.GetLength();
         ++codeVulnerabilityFilePathIndex) {
      codeVulnerabilityFilePathJsonList[codeVulnerabilityFilePathIndex].AsObject(
          m_codeVulnerabilityFilePath[codeVulnerabilityFilePathIndex].Jsonize());
    }
    payload.WithArray("codeVulnerabilityFilePath", std::move(codeVulnerabilityFilePathJsonList));
  }

  if (m_epssScoreHasBeenSet) {
    Aws::Utils::Array<JsonValue> epssScoreJsonList(m_epssScore.size());
    for (unsigned epssScoreIndex = 0; epssScoreIndex < epssScoreJsonList.GetLength(); ++epssScoreIndex) {
      epssScoreJsonList[epssScoreIndex].AsObject(m_epssScore[epssScoreIndex].Jsonize());
    }
    payload.WithArray("epssScore", std::move(epssScoreJsonList));
  }

  if (m_codeRepositoryProjectNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> codeRepositoryProjectNameJsonList(m_codeRepositoryProjectName.size());
    for (unsigned codeRepositoryProjectNameIndex = 0; codeRepositoryProjectNameIndex < codeRepositoryProjectNameJsonList.GetLength();
         ++codeRepositoryProjectNameIndex) {
      codeRepositoryProjectNameJsonList[codeRepositoryProjectNameIndex].AsObject(
          m_codeRepositoryProjectName[codeRepositoryProjectNameIndex].Jsonize());
    }
    payload.WithArray("codeRepositoryProjectName", std::move(codeRepositoryProjectNameJsonList));
  }

  if (m_codeRepositoryProviderTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> codeRepositoryProviderTypeJsonList(m_codeRepositoryProviderType.size());
    for (unsigned codeRepositoryProviderTypeIndex = 0; codeRepositoryProviderTypeIndex < codeRepositoryProviderTypeJsonList.GetLength();
         ++codeRepositoryProviderTypeIndex) {
      codeRepositoryProviderTypeJsonList[codeRepositoryProviderTypeIndex].AsObject(
          m_codeRepositoryProviderType[codeRepositoryProviderTypeIndex].Jsonize());
    }
    payload.WithArray("codeRepositoryProviderType", std::move(codeRepositoryProviderTypeJsonList));
  }

  if (m_cloudProviderHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProviderJsonList(m_cloudProvider.size());
    for (unsigned cloudProviderIndex = 0; cloudProviderIndex < cloudProviderJsonList.GetLength(); ++cloudProviderIndex) {
      cloudProviderJsonList[cloudProviderIndex].AsObject(m_cloudProvider[cloudProviderIndex].Jsonize());
    }
    payload.WithArray("cloudProvider", std::move(cloudProviderJsonList));
  }

  if (m_cloudProviderRegionHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProviderRegionJsonList(m_cloudProviderRegion.size());
    for (unsigned cloudProviderRegionIndex = 0; cloudProviderRegionIndex < cloudProviderRegionJsonList.GetLength();
         ++cloudProviderRegionIndex) {
      cloudProviderRegionJsonList[cloudProviderRegionIndex].AsObject(m_cloudProviderRegion[cloudProviderRegionIndex].Jsonize());
    }
    payload.WithArray("cloudProviderRegion", std::move(cloudProviderRegionJsonList));
  }

  if (m_cloudProviderAccountIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProviderAccountIdJsonList(m_cloudProviderAccountId.size());
    for (unsigned cloudProviderAccountIdIndex = 0; cloudProviderAccountIdIndex < cloudProviderAccountIdJsonList.GetLength();
         ++cloudProviderAccountIdIndex) {
      cloudProviderAccountIdJsonList[cloudProviderAccountIdIndex].AsObject(m_cloudProviderAccountId[cloudProviderAccountIdIndex].Jsonize());
    }
    payload.WithArray("cloudProviderAccountId", std::move(cloudProviderAccountIdJsonList));
  }

  if (m_cloudProviderOrgIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProviderOrgIdJsonList(m_cloudProviderOrgId.size());
    for (unsigned cloudProviderOrgIdIndex = 0; cloudProviderOrgIdIndex < cloudProviderOrgIdJsonList.GetLength();
         ++cloudProviderOrgIdIndex) {
      cloudProviderOrgIdJsonList[cloudProviderOrgIdIndex].AsObject(m_cloudProviderOrgId[cloudProviderOrgIdIndex].Jsonize());
    }
    payload.WithArray("cloudProviderOrgId", std::move(cloudProviderOrgIdJsonList));
  }

  if (m_cloudVmImageReferenceHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudVmImageReferenceJsonList(m_cloudVmImageReference.size());
    for (unsigned cloudVmImageReferenceIndex = 0; cloudVmImageReferenceIndex < cloudVmImageReferenceJsonList.GetLength();
         ++cloudVmImageReferenceIndex) {
      cloudVmImageReferenceJsonList[cloudVmImageReferenceIndex].AsObject(m_cloudVmImageReference[cloudVmImageReferenceIndex].Jsonize());
    }
    payload.WithArray("cloudVmImageReference", std::move(cloudVmImageReferenceJsonList));
  }

  if (m_cloudVmNetworkIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudVmNetworkIdJsonList(m_cloudVmNetworkId.size());
    for (unsigned cloudVmNetworkIdIndex = 0; cloudVmNetworkIdIndex < cloudVmNetworkIdJsonList.GetLength(); ++cloudVmNetworkIdIndex) {
      cloudVmNetworkIdJsonList[cloudVmNetworkIdIndex].AsObject(m_cloudVmNetworkId[cloudVmNetworkIdIndex].Jsonize());
    }
    payload.WithArray("cloudVmNetworkId", std::move(cloudVmNetworkIdJsonList));
  }

  if (m_cloudVmSubnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudVmSubnetIdsJsonList(m_cloudVmSubnetIds.size());
    for (unsigned cloudVmSubnetIdsIndex = 0; cloudVmSubnetIdsIndex < cloudVmSubnetIdsJsonList.GetLength(); ++cloudVmSubnetIdsIndex) {
      cloudVmSubnetIdsJsonList[cloudVmSubnetIdsIndex].AsObject(m_cloudVmSubnetIds[cloudVmSubnetIdsIndex].Jsonize());
    }
    payload.WithArray("cloudVmSubnetIds", std::move(cloudVmSubnetIdsJsonList));
  }

  if (m_cloudImageRepositoryNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudImageRepositoryNameJsonList(m_cloudImageRepositoryName.size());
    for (unsigned cloudImageRepositoryNameIndex = 0; cloudImageRepositoryNameIndex < cloudImageRepositoryNameJsonList.GetLength();
         ++cloudImageRepositoryNameIndex) {
      cloudImageRepositoryNameJsonList[cloudImageRepositoryNameIndex].AsObject(
          m_cloudImageRepositoryName[cloudImageRepositoryNameIndex].Jsonize());
    }
    payload.WithArray("cloudImageRepositoryName", std::move(cloudImageRepositoryNameJsonList));
  }

  if (m_cloudImageRegistryHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudImageRegistryJsonList(m_cloudImageRegistry.size());
    for (unsigned cloudImageRegistryIndex = 0; cloudImageRegistryIndex < cloudImageRegistryJsonList.GetLength();
         ++cloudImageRegistryIndex) {
      cloudImageRegistryJsonList[cloudImageRegistryIndex].AsObject(m_cloudImageRegistry[cloudImageRegistryIndex].Jsonize());
    }
    payload.WithArray("cloudImageRegistry", std::move(cloudImageRegistryJsonList));
  }

  if (m_cloudImageDigestHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudImageDigestJsonList(m_cloudImageDigest.size());
    for (unsigned cloudImageDigestIndex = 0; cloudImageDigestIndex < cloudImageDigestJsonList.GetLength(); ++cloudImageDigestIndex) {
      cloudImageDigestJsonList[cloudImageDigestIndex].AsObject(m_cloudImageDigest[cloudImageDigestIndex].Jsonize());
    }
    payload.WithArray("cloudImageDigest", std::move(cloudImageDigestJsonList));
  }

  if (m_cloudImageTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudImageTagsJsonList(m_cloudImageTags.size());
    for (unsigned cloudImageTagsIndex = 0; cloudImageTagsIndex < cloudImageTagsJsonList.GetLength(); ++cloudImageTagsIndex) {
      cloudImageTagsJsonList[cloudImageTagsIndex].AsObject(m_cloudImageTags[cloudImageTagsIndex].Jsonize());
    }
    payload.WithArray("cloudImageTags", std::move(cloudImageTagsJsonList));
  }

  if (m_cloudImagePushedAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudImagePushedAtJsonList(m_cloudImagePushedAt.size());
    for (unsigned cloudImagePushedAtIndex = 0; cloudImagePushedAtIndex < cloudImagePushedAtJsonList.GetLength();
         ++cloudImagePushedAtIndex) {
      cloudImagePushedAtJsonList[cloudImagePushedAtIndex].AsObject(m_cloudImagePushedAt[cloudImagePushedAtIndex].Jsonize());
    }
    payload.WithArray("cloudImagePushedAt", std::move(cloudImagePushedAtJsonList));
  }

  if (m_cloudImageArchitectureHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudImageArchitectureJsonList(m_cloudImageArchitecture.size());
    for (unsigned cloudImageArchitectureIndex = 0; cloudImageArchitectureIndex < cloudImageArchitectureJsonList.GetLength();
         ++cloudImageArchitectureIndex) {
      cloudImageArchitectureJsonList[cloudImageArchitectureIndex].AsObject(m_cloudImageArchitecture[cloudImageArchitectureIndex].Jsonize());
    }
    payload.WithArray("cloudImageArchitecture", std::move(cloudImageArchitectureJsonList));
  }

  if (m_cloudImageLastInUseAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudImageLastInUseAtJsonList(m_cloudImageLastInUseAt.size());
    for (unsigned cloudImageLastInUseAtIndex = 0; cloudImageLastInUseAtIndex < cloudImageLastInUseAtJsonList.GetLength();
         ++cloudImageLastInUseAtIndex) {
      cloudImageLastInUseAtJsonList[cloudImageLastInUseAtIndex].AsObject(m_cloudImageLastInUseAt[cloudImageLastInUseAtIndex].Jsonize());
    }
    payload.WithArray("cloudImageLastInUseAt", std::move(cloudImageLastInUseAtJsonList));
  }

  if (m_cloudImageInUseCountHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudImageInUseCountJsonList(m_cloudImageInUseCount.size());
    for (unsigned cloudImageInUseCountIndex = 0; cloudImageInUseCountIndex < cloudImageInUseCountJsonList.GetLength();
         ++cloudImageInUseCountIndex) {
      cloudImageInUseCountJsonList[cloudImageInUseCountIndex].AsObject(m_cloudImageInUseCount[cloudImageInUseCountIndex].Jsonize());
    }
    payload.WithArray("cloudImageInUseCount", std::move(cloudImageInUseCountJsonList));
  }

  if (m_cloudServerlessFunctionNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudServerlessFunctionNameJsonList(m_cloudServerlessFunctionName.size());
    for (unsigned cloudServerlessFunctionNameIndex = 0; cloudServerlessFunctionNameIndex < cloudServerlessFunctionNameJsonList.GetLength();
         ++cloudServerlessFunctionNameIndex) {
      cloudServerlessFunctionNameJsonList[cloudServerlessFunctionNameIndex].AsObject(
          m_cloudServerlessFunctionName[cloudServerlessFunctionNameIndex].Jsonize());
    }
    payload.WithArray("cloudServerlessFunctionName", std::move(cloudServerlessFunctionNameJsonList));
  }

  if (m_cloudServerlessFunctionRuntimeHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudServerlessFunctionRuntimeJsonList(m_cloudServerlessFunctionRuntime.size());
    for (unsigned cloudServerlessFunctionRuntimeIndex = 0;
         cloudServerlessFunctionRuntimeIndex < cloudServerlessFunctionRuntimeJsonList.GetLength(); ++cloudServerlessFunctionRuntimeIndex) {
      cloudServerlessFunctionRuntimeJsonList[cloudServerlessFunctionRuntimeIndex].AsObject(
          m_cloudServerlessFunctionRuntime[cloudServerlessFunctionRuntimeIndex].Jsonize());
    }
    payload.WithArray("cloudServerlessFunctionRuntime", std::move(cloudServerlessFunctionRuntimeJsonList));
  }

  if (m_cloudServerlessFunctionLastModifiedAtHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudServerlessFunctionLastModifiedAtJsonList(m_cloudServerlessFunctionLastModifiedAt.size());
    for (unsigned cloudServerlessFunctionLastModifiedAtIndex = 0;
         cloudServerlessFunctionLastModifiedAtIndex < cloudServerlessFunctionLastModifiedAtJsonList.GetLength();
         ++cloudServerlessFunctionLastModifiedAtIndex) {
      cloudServerlessFunctionLastModifiedAtJsonList[cloudServerlessFunctionLastModifiedAtIndex].AsObject(
          m_cloudServerlessFunctionLastModifiedAt[cloudServerlessFunctionLastModifiedAtIndex].Jsonize());
    }
    payload.WithArray("cloudServerlessFunctionLastModifiedAt", std::move(cloudServerlessFunctionLastModifiedAtJsonList));
  }

  if (m_cloudServerlessFunctionExecutionRoleHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudServerlessFunctionExecutionRoleJsonList(m_cloudServerlessFunctionExecutionRole.size());
    for (unsigned cloudServerlessFunctionExecutionRoleIndex = 0;
         cloudServerlessFunctionExecutionRoleIndex < cloudServerlessFunctionExecutionRoleJsonList.GetLength();
         ++cloudServerlessFunctionExecutionRoleIndex) {
      cloudServerlessFunctionExecutionRoleJsonList[cloudServerlessFunctionExecutionRoleIndex].AsObject(
          m_cloudServerlessFunctionExecutionRole[cloudServerlessFunctionExecutionRoleIndex].Jsonize());
    }
    payload.WithArray("cloudServerlessFunctionExecutionRole", std::move(cloudServerlessFunctionExecutionRoleJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
