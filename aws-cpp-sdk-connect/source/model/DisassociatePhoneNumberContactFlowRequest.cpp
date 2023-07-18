/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociatePhoneNumberContactFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DisassociatePhoneNumberContactFlowRequest::DisassociatePhoneNumberContactFlowRequest() : 
    m_phoneNumberIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String DisassociatePhoneNumberContactFlowRequest::SerializePayload() const
{
  return {};
}

void DisassociatePhoneNumberContactFlowRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_instanceIdHasBeenSet)
    {
      ss << m_instanceId;
      uri.AddQueryStringParameter("instanceId", ss.str());
      ss.str("");
    }

}



