﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks-auth/model/AssumeRoleForPodIdentityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKSAuth::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssumeRoleForPodIdentityResult::AssumeRoleForPodIdentityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssumeRoleForPodIdentityResult& AssumeRoleForPodIdentityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("subject"))
  {
    m_subject = jsonValue.GetObject("subject");
    m_subjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audience"))
  {
    m_audience = jsonValue.GetString("audience");
    m_audienceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("podIdentityAssociation"))
  {
    m_podIdentityAssociation = jsonValue.GetObject("podIdentityAssociation");
    m_podIdentityAssociationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assumedRoleUser"))
  {
    m_assumedRoleUser = jsonValue.GetObject("assumedRoleUser");
    m_assumedRoleUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentials"))
  {
    m_credentials = jsonValue.GetObject("credentials");
    m_credentialsHasBeenSet = true;
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
