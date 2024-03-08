/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteCertificateProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCertificateProviderRequest::DeleteCertificateProviderRequest() : 
    m_certificateProviderNameHasBeenSet(false)
{
}

Aws::String DeleteCertificateProviderRequest::SerializePayload() const
{
  return {};
}




