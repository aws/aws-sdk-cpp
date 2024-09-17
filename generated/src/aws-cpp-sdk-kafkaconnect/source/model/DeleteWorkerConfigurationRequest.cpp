/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DeleteWorkerConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWorkerConfigurationRequest::DeleteWorkerConfigurationRequest() : 
    m_workerConfigurationArnHasBeenSet(false)
{
}

Aws::String DeleteWorkerConfigurationRequest::SerializePayload() const
{
  return {};
}




