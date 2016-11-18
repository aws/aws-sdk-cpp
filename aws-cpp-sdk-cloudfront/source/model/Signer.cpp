﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/model/Signer.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

Signer::Signer() : 
    m_awsAccountNumberHasBeenSet(false),
    m_keyPairIdsHasBeenSet(false)
{
}

Signer::Signer(const XmlNode& xmlNode) : 
    m_awsAccountNumberHasBeenSet(false),
    m_keyPairIdsHasBeenSet(false)
{
  *this = xmlNode;
}

Signer& Signer::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode awsAccountNumberNode = resultNode.FirstChild("AwsAccountNumber");
    if(!awsAccountNumberNode.IsNull())
    {
      m_awsAccountNumber = StringUtils::Trim(awsAccountNumberNode.GetText().c_str());
      m_awsAccountNumberHasBeenSet = true;
    }
    XmlNode keyPairIdsNode = resultNode.FirstChild("KeyPairIds");
    if(!keyPairIdsNode.IsNull())
    {
      m_keyPairIds = keyPairIdsNode;
      m_keyPairIdsHasBeenSet = true;
    }
  }

  return *this;
}

void Signer::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_awsAccountNumberHasBeenSet)
  {
   XmlNode awsAccountNumberNode = parentNode.CreateChildElement("AwsAccountNumber");
   awsAccountNumberNode.SetText(m_awsAccountNumber);
  }

  if(m_keyPairIdsHasBeenSet)
  {
   XmlNode keyPairIdsNode = parentNode.CreateChildElement("KeyPairIds");
   m_keyPairIds.AddToNode(keyPairIdsNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
