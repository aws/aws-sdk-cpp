/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InferenceDeviceInfo.h>
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

InferenceDeviceInfo::InferenceDeviceInfo() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_manufacturerHasBeenSet(false)
{
}

InferenceDeviceInfo::InferenceDeviceInfo(const XmlNode& xmlNode) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_manufacturerHasBeenSet(false)
{
  *this = xmlNode;
}

InferenceDeviceInfo& InferenceDeviceInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode countNode = resultNode.FirstChild("count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(countNode.GetText()).c_str()).c_str());
      m_countHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode manufacturerNode = resultNode.FirstChild("manufacturer");
    if(!manufacturerNode.IsNull())
    {
      m_manufacturer = Aws::Utils::Xml::DecodeEscapedXmlText(manufacturerNode.GetText());
      m_manufacturerHasBeenSet = true;
    }
  }

  return *this;
}

void InferenceDeviceInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_manufacturerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Manufacturer=" << StringUtils::URLEncode(m_manufacturer.c_str()) << "&";
  }

}

void InferenceDeviceInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_manufacturerHasBeenSet)
  {
      oStream << location << ".Manufacturer=" << StringUtils::URLEncode(m_manufacturer.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
