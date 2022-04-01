/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetAccountLimitRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

GetAccountLimitRequest::GetAccountLimitRequest() : 
    m_type(AccountLimitType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String GetAccountLimitRequest::SerializePayload() const
{
  return {};
}


