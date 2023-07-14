/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/AssociatePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociatePackageRequest::AssociatePackageRequest() : 
    m_packageIDHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

Aws::String AssociatePackageRequest::SerializePayload() const
{
  return {};
}




