/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ResourceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ResourceDetails::ResourceDetails(JsonView jsonValue) { *this = jsonValue; }

ResourceDetails& ResourceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("awsEc2Instance")) {
    m_awsEc2Instance = jsonValue.GetObject("awsEc2Instance");
    m_awsEc2InstanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsEcrContainerImage")) {
    m_awsEcrContainerImage = jsonValue.GetObject("awsEcrContainerImage");
    m_awsEcrContainerImageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsLambdaFunction")) {
    m_awsLambdaFunction = jsonValue.GetObject("awsLambdaFunction");
    m_awsLambdaFunctionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeRepository")) {
    m_codeRepository = jsonValue.GetObject("codeRepository");
    m_codeRepositoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vm")) {
    m_vm = jsonValue.GetObject("vm");
    m_vmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("image")) {
    m_image = jsonValue.GetObject("image");
    m_imageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serverlessFunction")) {
    m_serverlessFunction = jsonValue.GetObject("serverlessFunction");
    m_serverlessFunctionHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_awsEc2InstanceHasBeenSet) {
    payload.WithObject("awsEc2Instance", m_awsEc2Instance.Jsonize());
  }

  if (m_awsEcrContainerImageHasBeenSet) {
    payload.WithObject("awsEcrContainerImage", m_awsEcrContainerImage.Jsonize());
  }

  if (m_awsLambdaFunctionHasBeenSet) {
    payload.WithObject("awsLambdaFunction", m_awsLambdaFunction.Jsonize());
  }

  if (m_codeRepositoryHasBeenSet) {
    payload.WithObject("codeRepository", m_codeRepository.Jsonize());
  }

  if (m_vmHasBeenSet) {
    payload.WithObject("vm", m_vm.Jsonize());
  }

  if (m_imageHasBeenSet) {
    payload.WithObject("image", m_image.Jsonize());
  }

  if (m_serverlessFunctionHasBeenSet) {
    payload.WithObject("serverlessFunction", m_serverlessFunction.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
