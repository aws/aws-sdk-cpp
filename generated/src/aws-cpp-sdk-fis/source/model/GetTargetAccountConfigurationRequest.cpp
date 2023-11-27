/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/GetTargetAccountConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTargetAccountConfigurationRequest::GetTargetAccountConfigurationRequest() : 
    m_experimentTemplateIdHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

Aws::String GetTargetAccountConfigurationRequest::SerializePayload() const
{
  return {};
}




