/*
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

#include <aws/autoscaling/model/DescribeTerminationPolicyTypesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeTerminationPolicyTypesResult::DescribeTerminationPolicyTypesResult()
{
}

DescribeTerminationPolicyTypesResult::DescribeTerminationPolicyTypesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTerminationPolicyTypesResult& DescribeTerminationPolicyTypesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTerminationPolicyTypesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTerminationPolicyTypesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode terminationPolicyTypesNode = resultNode.FirstChild("TerminationPolicyTypes");
    if(!terminationPolicyTypesNode.IsNull())
    {
      XmlNode terminationPolicyTypesMember = terminationPolicyTypesNode.FirstChild("member");
      while(!terminationPolicyTypesMember.IsNull())
      {
        m_terminationPolicyTypes.push_back(terminationPolicyTypesMember.GetText());
        terminationPolicyTypesMember = terminationPolicyTypesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeTerminationPolicyTypesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
