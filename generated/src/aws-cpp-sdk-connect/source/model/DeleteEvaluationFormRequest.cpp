/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteEvaluationFormRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteEvaluationFormRequest::DeleteEvaluationFormRequest() : 
    m_instanceIdHasBeenSet(false),
    m_evaluationFormIdHasBeenSet(false),
    m_evaluationFormVersion(0),
    m_evaluationFormVersionHasBeenSet(false)
{
}

Aws::String DeleteEvaluationFormRequest::SerializePayload() const
{
  return {};
}

void DeleteEvaluationFormRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_evaluationFormVersionHasBeenSet)
    {
      ss << m_evaluationFormVersion;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

}



