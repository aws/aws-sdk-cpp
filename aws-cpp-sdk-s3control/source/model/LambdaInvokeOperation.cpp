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
      m_functionArn = functionArnNode.GetText();
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
