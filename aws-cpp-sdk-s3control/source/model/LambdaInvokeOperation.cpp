/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/LambdaInvokeOperation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

LambdaInvokeOperation::LambdaInvokeOperation() : 
    m_functionArnHasBeenSet(false)
{
}

LambdaInvokeOperation::LambdaInvokeOperation(const XmlNode& xmlNode) : 
    m_functionArnHasBeenSet(false)
{
  *this = xmlNode;
}

LambdaInvokeOperation& LambdaInvokeOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode functionArnNode = resultNode.FirstChild("FunctionArn");
    if(!functionArnNode.IsNull())
    {
      m_functionArn = Aws::Utils::Xml::DecodeEscapedXmlText(functionArnNode.GetText());
      m_functionArnHasBeenSet = true;
    }
  }

  return *this;
}

void LambdaInvokeOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_functionArnHasBeenSet)
  {
   XmlNode functionArnNode = parentNode.CreateChildElement("FunctionArn");
   functionArnNode.SetText(m_functionArn);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
