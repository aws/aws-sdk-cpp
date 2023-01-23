/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DissociatePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DissociatePackageRequest::DissociatePackageRequest() : 
    m_packageIDHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

Aws::String DissociatePackageRequest::SerializePayload() const
{
  return {};
}




