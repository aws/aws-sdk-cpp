﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DeleteFormTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFormTypeRequest::DeleteFormTypeRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_formTypeIdentifierHasBeenSet(false)
{
}

Aws::String DeleteFormTypeRequest::SerializePayload() const
{
  return {};
}




