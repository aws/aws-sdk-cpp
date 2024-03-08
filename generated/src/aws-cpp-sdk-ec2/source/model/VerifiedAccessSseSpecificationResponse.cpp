/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessSseSpecificationResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

VerifiedAccessSseSpecificationResponse::VerifiedAccessSseSpecificationResponse() : 
    m_customerManagedKeyEnabled(false),
    m_customerManagedKeyEnabledHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

VerifiedAccessSseSpecificationResponse::VerifiedAccessSseSpecificationResponse(const XmlNode& xmlNode) : 
    m_customerManagedKeyEnabled(false),
    m_customerManagedKeyEnabledHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessSseSpecificationResponse& VerifiedAccessSseSpecificationResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode customerManagedKeyEnabledNode = resultNode.FirstChild("customerManagedKeyEnabled");
    if(!customerManagedKeyEnabledNode.IsNull())
    {
      m_customerManagedKeyEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(customerManagedKeyEnabledNode.GetText()).c_str()).c_str());
      m_customerManagedKeyEnabledHasBeenSet = true;
    }
    XmlNode kmsKeyArnNode = resultNode.FirstChild("kmsKeyArn");
    if(!kmsKeyArnNode.IsNull())
    {
      m_kmsKeyArn = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyArnNode.GetText());
      m_kmsKeyArnHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessSseSpecificationResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_customerManagedKeyEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomerManagedKeyEnabled=" << std::boolalpha << m_customerManagedKeyEnabled << "&";
  }

  if(m_kmsKeyArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyArn=" << StringUtils::URLEncode(m_kmsKeyArn.c_str()) << "&";
  }

}

void VerifiedAccessSseSpecificationResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_customerManagedKeyEnabledHasBeenSet)
  {
      oStream << location << ".CustomerManagedKeyEnabled=" << std::boolalpha << m_customerManagedKeyEnabled << "&";
  }
  if(m_kmsKeyArnHasBeenSet)
  {
      oStream << location << ".KmsKeyArn=" << StringUtils::URLEncode(m_kmsKeyArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
