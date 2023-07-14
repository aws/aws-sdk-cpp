﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetAccessPointPolicyStatusForObjectLambdaResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetAccessPointPolicyStatusForObjectLambdaResult::GetAccessPointPolicyStatusForObjectLambdaResult()
{
}

GetAccessPointPolicyStatusForObjectLambdaResult::GetAccessPointPolicyStatusForObjectLambdaResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetAccessPointPolicyStatusForObjectLambdaResult& GetAccessPointPolicyStatusForObjectLambdaResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode policyStatusNode = resultNode.FirstChild("PolicyStatus");
    if(!policyStatusNode.IsNull())
    {
      m_policyStatus = policyStatusNode;
    }
  }

  return *this;
}
