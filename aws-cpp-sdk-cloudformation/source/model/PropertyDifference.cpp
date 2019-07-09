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

#include <aws/cloudformation/model/PropertyDifference.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

PropertyDifference::PropertyDifference() : 
    m_propertyPathHasBeenSet(false),
    m_expectedValueHasBeenSet(false),
    m_actualValueHasBeenSet(false),
    m_differenceType(DifferenceType::NOT_SET),
    m_differenceTypeHasBeenSet(false)
{
}

PropertyDifference::PropertyDifference(const XmlNode& xmlNode) : 
    m_propertyPathHasBeenSet(false),
    m_expectedValueHasBeenSet(false),
    m_actualValueHasBeenSet(false),
    m_differenceType(DifferenceType::NOT_SET),
    m_differenceTypeHasBeenSet(false)
{
  *this = xmlNode;
}

PropertyDifference& PropertyDifference::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode propertyPathNode = resultNode.FirstChild("PropertyPath");
    if(!propertyPathNode.IsNull())
    {
      m_propertyPath = propertyPathNode.GetText();
      m_propertyPathHasBeenSet = true;
    }
    XmlNode expectedValueNode = resultNode.FirstChild("ExpectedValue");
    if(!expectedValueNode.IsNull())
    {
      m_expectedValue = expectedValueNode.GetText();
      m_expectedValueHasBeenSet = true;
    }
    XmlNode actualValueNode = resultNode.FirstChild("ActualValue");
    if(!actualValueNode.IsNull())
    {
      m_actualValue = actualValueNode.GetText();
      m_actualValueHasBeenSet = true;
    }
    XmlNode differenceTypeNode = resultNode.FirstChild("DifferenceType");
    if(!differenceTypeNode.IsNull())
    {
      m_differenceType = DifferenceTypeMapper::GetDifferenceTypeForName(StringUtils::Trim(differenceTypeNode.GetText().c_str()).c_str());
      m_differenceTypeHasBeenSet = true;
    }
  }

  return *this;
}

void PropertyDifference::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_propertyPathHasBeenSet)
  {
      oStream << location << index << locationValue << ".PropertyPath=" << StringUtils::URLEncode(m_propertyPath.c_str()) << "&";
  }

  if(m_expectedValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExpectedValue=" << StringUtils::URLEncode(m_expectedValue.c_str()) << "&";
  }

  if(m_actualValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActualValue=" << StringUtils::URLEncode(m_actualValue.c_str()) << "&";
  }

  if(m_differenceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DifferenceType=" << DifferenceTypeMapper::GetNameForDifferenceType(m_differenceType) << "&";
  }

}

void PropertyDifference::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_propertyPathHasBeenSet)
  {
      oStream << location << ".PropertyPath=" << StringUtils::URLEncode(m_propertyPath.c_str()) << "&";
  }
  if(m_expectedValueHasBeenSet)
  {
      oStream << location << ".ExpectedValue=" << StringUtils::URLEncode(m_expectedValue.c_str()) << "&";
  }
  if(m_actualValueHasBeenSet)
  {
      oStream << location << ".ActualValue=" << StringUtils::URLEncode(m_actualValue.c_str()) << "&";
  }
  if(m_differenceTypeHasBeenSet)
  {
      oStream << location << ".DifferenceType=" << DifferenceTypeMapper::GetNameForDifferenceType(m_differenceType) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
