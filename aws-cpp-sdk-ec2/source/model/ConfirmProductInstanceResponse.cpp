﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/ConfirmProductInstanceResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ConfirmProductInstanceResponse::ConfirmProductInstanceResponse() : 
    m_return(false)
{
}

ConfirmProductInstanceResponse::ConfirmProductInstanceResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_return(false)
{
  *this = result;
}

ConfirmProductInstanceResponse& ConfirmProductInstanceResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ConfirmProductInstanceResponse"))
  {
    resultNode = rootNode.FirstChild("ConfirmProductInstanceResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = StringUtils::Trim(ownerIdNode.GetText().c_str());
    }
    XmlNode returnNode = resultNode.FirstChild("return");
    if(!returnNode.IsNull())
    {
      m_return = StringUtils::ConvertToBool(StringUtils::Trim(returnNode.GetText().c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ConfirmProductInstanceResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
