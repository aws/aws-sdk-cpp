/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ResourceScanMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ResourceScanMetadata::ResourceScanMetadata(JsonView jsonValue) { *this = jsonValue; }

ResourceScanMetadata& ResourceScanMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ecrRepository")) {
    m_ecrRepository = jsonValue.GetObject("ecrRepository");
    m_ecrRepositoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImage")) {
    m_ecrImage = jsonValue.GetObject("ecrImage");
    m_ecrImageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ec2")) {
    m_ec2 = jsonValue.GetObject("ec2");
    m_ec2HasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunction")) {
    m_lambdaFunction = jsonValue.GetObject("lambdaFunction");
    m_lambdaFunctionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeRepository")) {
    m_codeRepository = jsonValue.GetObject("codeRepository");
    m_codeRepositoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmInstance")) {
    m_vmInstance = jsonValue.GetObject("vmInstance");
    m_vmInstanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerImage")) {
    m_containerImage = jsonValue.GetObject("containerImage");
    m_containerImageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerRepository")) {
    m_containerRepository = jsonValue.GetObject("containerRepository");
    m_containerRepositoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerRegistry")) {
    m_containerRegistry = jsonValue.GetObject("containerRegistry");
    m_containerRegistryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serverlessFunction")) {
    m_serverlessFunction = jsonValue.GetObject("serverlessFunction");
    m_serverlessFunctionHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceScanMetadata::Jsonize() const {
  JsonValue payload;

  if (m_ecrRepositoryHasBeenSet) {
    payload.WithObject("ecrRepository", m_ecrRepository.Jsonize());
  }

  if (m_ecrImageHasBeenSet) {
    payload.WithObject("ecrImage", m_ecrImage.Jsonize());
  }

  if (m_ec2HasBeenSet) {
    payload.WithObject("ec2", m_ec2.Jsonize());
  }

  if (m_lambdaFunctionHasBeenSet) {
    payload.WithObject("lambdaFunction", m_lambdaFunction.Jsonize());
  }

  if (m_codeRepositoryHasBeenSet) {
    payload.WithObject("codeRepository", m_codeRepository.Jsonize());
  }

  if (m_vmInstanceHasBeenSet) {
    payload.WithObject("vmInstance", m_vmInstance.Jsonize());
  }

  if (m_containerImageHasBeenSet) {
    payload.WithObject("containerImage", m_containerImage.Jsonize());
  }

  if (m_containerRepositoryHasBeenSet) {
    payload.WithObject("containerRepository", m_containerRepository.Jsonize());
  }

  if (m_containerRegistryHasBeenSet) {
    payload.WithObject("containerRegistry", m_containerRegistry.Jsonize());
  }

  if (m_serverlessFunctionHasBeenSet) {
    payload.WithObject("serverlessFunction", m_serverlessFunction.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
