/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ObservationRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ObservationRecord::ObservationRecord(JsonView jsonValue) { *this = jsonValue; }

ObservationRecord& ObservationRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("observationType")) {
    m_observationType = ObservationTypeMapper::GetObservationTypeForName(jsonValue.GetString("observationType"));
    m_observationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingDetail")) {
    m_findingDetail = jsonValue.GetObject("findingDetail");
    m_findingDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkActivity")) {
    m_networkActivity = jsonValue.GetObject("networkActivity");
    m_networkActivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rdsLoginActivity")) {
    m_rdsLoginActivity = jsonValue.GetObject("rdsLoginActivity");
    m_rdsLoginActivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Activity")) {
    m_s3Activity = jsonValue.GetObject("s3Activity");
    m_s3ActivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kubernetesActivity")) {
    m_kubernetesActivity = jsonValue.GetObject("kubernetesActivity");
    m_kubernetesActivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("malwareScan")) {
    m_malwareScan = jsonValue.GetObject("malwareScan");
    m_malwareScanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relatedFindings")) {
    m_relatedFindings = jsonValue.GetObject("relatedFindings");
    m_relatedFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detectionCoverage")) {
    m_detectionCoverage = jsonValue.GetObject("detectionCoverage");
    m_detectionCoverageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountOverview")) {
    m_accountOverview = jsonValue.GetObject("accountOverview");
    m_accountOverviewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendations")) {
    Aws::Utils::Array<JsonView> recommendationsJsonList = jsonValue.GetArray("recommendations");
    for (unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex) {
      m_recommendations.push_back(recommendationsJsonList[recommendationsIndex].AsObject());
    }
    m_recommendationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runtimeSignals")) {
    m_runtimeSignals = jsonValue.GetObject("runtimeSignals");
    m_runtimeSignalsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("distribution")) {
    m_distribution = jsonValue.GetObject("distribution");
    m_distributionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("representativeResources")) {
    Aws::Utils::Array<JsonView> representativeResourcesJsonList = jsonValue.GetArray("representativeResources");
    for (unsigned representativeResourcesIndex = 0; representativeResourcesIndex < representativeResourcesJsonList.GetLength();
         ++representativeResourcesIndex) {
      m_representativeResources.push_back(representativeResourcesJsonList[representativeResourcesIndex].AsObject());
    }
    m_representativeResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("indicators")) {
    Aws::Utils::Array<JsonView> indicatorsJsonList = jsonValue.GetArray("indicators");
    for (unsigned indicatorsIndex = 0; indicatorsIndex < indicatorsJsonList.GetLength(); ++indicatorsIndex) {
      m_indicators.push_back(indicatorsJsonList[indicatorsIndex].AsObject());
    }
    m_indicatorsHasBeenSet = true;
  }
  return *this;
}

JsonValue ObservationRecord::Jsonize() const {
  JsonValue payload;

  if (m_observationTypeHasBeenSet) {
    payload.WithString("observationType", ObservationTypeMapper::GetNameForObservationType(m_observationType));
  }

  if (m_findingDetailHasBeenSet) {
    payload.WithObject("findingDetail", m_findingDetail.Jsonize());
  }

  if (m_resourceHasBeenSet) {
    payload.WithObject("resource", m_resource.Jsonize());
  }

  if (m_networkActivityHasBeenSet) {
    payload.WithObject("networkActivity", m_networkActivity.Jsonize());
  }

  if (m_rdsLoginActivityHasBeenSet) {
    payload.WithObject("rdsLoginActivity", m_rdsLoginActivity.Jsonize());
  }

  if (m_s3ActivityHasBeenSet) {
    payload.WithObject("s3Activity", m_s3Activity.Jsonize());
  }

  if (m_kubernetesActivityHasBeenSet) {
    payload.WithObject("kubernetesActivity", m_kubernetesActivity.Jsonize());
  }

  if (m_malwareScanHasBeenSet) {
    payload.WithObject("malwareScan", m_malwareScan.Jsonize());
  }

  if (m_relatedFindingsHasBeenSet) {
    payload.WithObject("relatedFindings", m_relatedFindings.Jsonize());
  }

  if (m_detectionCoverageHasBeenSet) {
    payload.WithObject("detectionCoverage", m_detectionCoverage.Jsonize());
  }

  if (m_accountOverviewHasBeenSet) {
    payload.WithObject("accountOverview", m_accountOverview.Jsonize());
  }

  if (m_recommendationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommendationsJsonList(m_recommendations.size());
    for (unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex) {
      recommendationsJsonList[recommendationsIndex].AsObject(m_recommendations[recommendationsIndex].Jsonize());
    }
    payload.WithArray("recommendations", std::move(recommendationsJsonList));
  }

  if (m_runtimeSignalsHasBeenSet) {
    payload.WithObject("runtimeSignals", m_runtimeSignals.Jsonize());
  }

  if (m_distributionHasBeenSet) {
    payload.WithObject("distribution", m_distribution.Jsonize());
  }

  if (m_representativeResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> representativeResourcesJsonList(m_representativeResources.size());
    for (unsigned representativeResourcesIndex = 0; representativeResourcesIndex < representativeResourcesJsonList.GetLength();
         ++representativeResourcesIndex) {
      representativeResourcesJsonList[representativeResourcesIndex].AsObject(
          m_representativeResources[representativeResourcesIndex].Jsonize());
    }
    payload.WithArray("representativeResources", std::move(representativeResourcesJsonList));
  }

  if (m_indicatorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> indicatorsJsonList(m_indicators.size());
    for (unsigned indicatorsIndex = 0; indicatorsIndex < indicatorsJsonList.GetLength(); ++indicatorsIndex) {
      indicatorsJsonList[indicatorsIndex].AsObject(m_indicators[indicatorsIndex].Jsonize());
    }
    payload.WithArray("indicators", std::move(indicatorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
