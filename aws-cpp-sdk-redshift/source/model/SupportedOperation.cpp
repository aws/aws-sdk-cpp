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

#include <aws/redshift/model/SupportedOperation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

SupportedOperation::SupportedOperation() : 
    m_operationNameHasBeenSet(false)
{
}

SupportedOperation::SupportedOperation(const XmlNode& xmlNode) : 
    m_operationNameHasBeenSet(false)
{
  *this = xmlNode;
}

SupportedOperation& SupportedOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode operationNameNode = resultNode.FirstChild("OperationName");
    if(!operationNameNode.IsNull())
    {
      m_operationName = operationNameNode.GetText();
      m_operationNameHasBeenSet = true;
    }
  }

  return *this;
}

void SupportedOperation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_operationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OperationName=" << StringUtils::URLEncode(m_operationName.c_str()) << "&";
  }

}

void SupportedOperation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_operationNameHasBeenSet)
  {
      oStream << location << ".OperationName=" << StringUtils::URLEncode(m_operationName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
