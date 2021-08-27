/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBParameterGroupStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBParameterGroupStatus::DBParameterGroupStatus() : 
    m_dBParameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false)
{
}

DBParameterGroupStatus::DBParameterGroupStatus(const XmlNode& xmlNode) : 
    m_dBParameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false)
{
  *this = xmlNode;
}

DBParameterGroupStatus& DBParameterGroupStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBParameterGroupNameNode = resultNode.FirstChild("DBParameterGroupName");
    if(!dBParameterGroupNameNode.IsNull())
    {
      m_dBParameterGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(dBParameterGroupNameNode.GetText());
      m_dBParameterGroupNameHasBeenSet = true;
    }
    XmlNode parameterApplyStatusNode = resultNode.FirstChild("ParameterApplyStatus");
    if(!parameterApplyStatusNode.IsNull())
    {
      m_parameterApplyStatus = Aws::Utils::Xml::DecodeEscapedXmlText(parameterApplyStatusNode.GetText());
      m_parameterApplyStatusHasBeenSet = true;
    }
  }

  return *this;
}

void DBParameterGroupStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBParameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }

  if(m_parameterApplyStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterApplyStatus=" << StringUtils::URLEncode(m_parameterApplyStatus.c_str()) << "&";
  }

}

void DBParameterGroupStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBParameterGroupNameHasBeenSet)
  {
      oStream << location << ".DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }
  if(m_parameterApplyStatusHasBeenSet)
  {
      oStream << location << ".ParameterApplyStatus=" << StringUtils::URLEncode(m_parameterApplyStatus.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
