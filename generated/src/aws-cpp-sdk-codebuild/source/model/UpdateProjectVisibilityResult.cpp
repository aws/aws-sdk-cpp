/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/UpdateProjectVisibilityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateProjectVisibilityResult::UpdateProjectVisibilityResult() : 
    m_projectVisibility(ProjectVisibilityType::NOT_SET)
{
}

UpdateProjectVisibilityResult::UpdateProjectVisibilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_projectVisibility(ProjectVisibilityType::NOT_SET)
{
  *this = result;
}

UpdateProjectVisibilityResult& UpdateProjectVisibilityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("projectArn"))
  {
    m_projectArn = jsonValue.GetString("projectArn");

  }

  if(jsonValue.ValueExists("publicProjectAlias"))
  {
    m_publicProjectAlias = jsonValue.GetString("publicProjectAlias");

  }

  if(jsonValue.ValueExists("projectVisibility"))
  {
    m_projectVisibility = ProjectVisibilityTypeMapper::GetProjectVisibilityTypeForName(jsonValue.GetString("projectVisibility"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
