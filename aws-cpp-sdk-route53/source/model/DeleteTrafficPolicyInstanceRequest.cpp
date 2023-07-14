/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/DeleteTrafficPolicyInstanceRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

DeleteTrafficPolicyInstanceRequest::DeleteTrafficPolicyInstanceRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DeleteTrafficPolicyInstanceRequest::SerializePayload() const
{
  return {};
}


