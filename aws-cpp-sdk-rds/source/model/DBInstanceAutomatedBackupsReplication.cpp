/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBInstanceAutomatedBackupsReplication.h>
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

DBInstanceAutomatedBackupsReplication::DBInstanceAutomatedBackupsReplication() : 
    m_dBInstanceAutomatedBackupsArnHasBeenSet(false)
{
}

DBInstanceAutomatedBackupsReplication::DBInstanceAutomatedBackupsReplication(const XmlNode& xmlNode) : 
    m_dBInstanceAutomatedBackupsArnHasBeenSet(false)
{
  *this = xmlNode;
}

DBInstanceAutomatedBackupsReplication& DBInstanceAutomatedBackupsReplication::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBInstanceAutomatedBackupsArnNode = resultNode.FirstChild("DBInstanceAutomatedBackupsArn");
    if(!dBInstanceAutomatedBackupsArnNode.IsNull())
    {
      m_dBInstanceAutomatedBackupsArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceAutomatedBackupsArnNode.GetText());
      m_dBInstanceAutomatedBackupsArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBInstanceAutomatedBackupsReplication::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBInstanceAutomatedBackupsArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceAutomatedBackupsArn=" << StringUtils::URLEncode(m_dBInstanceAutomatedBackupsArn.c_str()) << "&";
  }

}

void DBInstanceAutomatedBackupsReplication::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBInstanceAutomatedBackupsArnHasBeenSet)
  {
      oStream << location << ".DBInstanceAutomatedBackupsArn=" << StringUtils::URLEncode(m_dBInstanceAutomatedBackupsArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
