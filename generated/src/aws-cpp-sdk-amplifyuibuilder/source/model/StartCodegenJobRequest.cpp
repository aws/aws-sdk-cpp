/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/StartCodegenJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

StartCodegenJobRequest::StartCodegenJobRequest() : 
    m_appIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_codegenJobToCreateHasBeenSet(false)
{
}

Aws::String StartCodegenJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_codegenJobToCreateHasBeenSet)
  {
   payload = m_codegenJobToCreate.Jsonize();
  }

  return payload.View().WriteReadable();
}

void StartCodegenJobRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}



