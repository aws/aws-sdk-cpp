/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetBucketPolicyResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetBucketPolicyResult::GetBucketPolicyResult()
{
}

GetBucketPolicyResult::GetBucketPolicyResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetBucketPolicyResult& GetBucketPolicyResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode policyNode = resultNode.FirstChild("Policy");
    if(!policyNode.IsNull())
    {
      m_policy = Aws::Utils::Xml::DecodeEscapedXmlText(policyNode.GetText());
    }
  }

  return *this;
}
