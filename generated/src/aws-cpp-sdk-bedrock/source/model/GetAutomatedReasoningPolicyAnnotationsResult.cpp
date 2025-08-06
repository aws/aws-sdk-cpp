/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetAutomatedReasoningPolicyAnnotationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAutomatedReasoningPolicyAnnotationsResult::GetAutomatedReasoningPolicyAnnotationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAutomatedReasoningPolicyAnnotationsResult& GetAutomatedReasoningPolicyAnnotationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildWorkflowId"))
  {
    m_buildWorkflowId = jsonValue.GetString("buildWorkflowId");
    m_buildWorkflowIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("annotations"))
  {
    Aws::Utils::Array<JsonView> annotationsJsonList = jsonValue.GetArray("annotations");
    for(unsigned annotationsIndex = 0; annotationsIndex < annotationsJsonList.GetLength(); ++annotationsIndex)
    {
      m_annotations.push_back(annotationsJsonList[annotationsIndex].AsObject());
    }
    m_annotationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("annotationSetHash"))
  {
    m_annotationSetHash = jsonValue.GetString("annotationSetHash");
    m_annotationSetHashHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
