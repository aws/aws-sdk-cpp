/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CancelJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CancelJobRequest::CancelJobRequest() : 
    m_jobIdHasBeenSet(false),
    m_reasonCodeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String CancelJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reasonCodeHasBeenSet)
  {
   payload.WithString("reasonCode", m_reasonCode);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  return payload.View().WriteReadable();
}

void CancelJobRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_forceHasBeenSet)
    {
      ss << m_force;
      uri.AddQueryStringParameter("force", ss.str());
      ss.str("");
    }

}



