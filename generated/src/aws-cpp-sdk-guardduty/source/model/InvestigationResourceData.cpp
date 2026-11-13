/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationResourceData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationResourceData::InvestigationResourceData(JsonView jsonValue) { *this = jsonValue; }

InvestigationResourceData& InvestigationResourceData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ec2Instance")) {
    m_ec2Instance = jsonValue.GetObject("ec2Instance");
    m_ec2InstanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunction")) {
    m_lambdaFunction = jsonValue.GetObject("lambdaFunction");
    m_lambdaFunctionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rdsDbInstance")) {
    m_rdsDbInstance = jsonValue.GetObject("rdsDbInstance");
    m_rdsDbInstanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rdsDbUser")) {
    m_rdsDbUser = jsonValue.GetObject("rdsDbUser");
    m_rdsDbUserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eksCluster")) {
    m_eksCluster = jsonValue.GetObject("eksCluster");
    m_eksClusterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecsCluster")) {
    m_ecsCluster = jsonValue.GetObject("ecsCluster");
    m_ecsClusterHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationResourceData::Jsonize() const {
  JsonValue payload;

  if (m_ec2InstanceHasBeenSet) {
    payload.WithObject("ec2Instance", m_ec2Instance.Jsonize());
  }

  if (m_lambdaFunctionHasBeenSet) {
    payload.WithObject("lambdaFunction", m_lambdaFunction.Jsonize());
  }

  if (m_rdsDbInstanceHasBeenSet) {
    payload.WithObject("rdsDbInstance", m_rdsDbInstance.Jsonize());
  }

  if (m_rdsDbUserHasBeenSet) {
    payload.WithObject("rdsDbUser", m_rdsDbUser.Jsonize());
  }

  if (m_eksClusterHasBeenSet) {
    payload.WithObject("eksCluster", m_eksCluster.Jsonize());
  }

  if (m_ecsClusterHasBeenSet) {
    payload.WithObject("ecsCluster", m_ecsCluster.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
