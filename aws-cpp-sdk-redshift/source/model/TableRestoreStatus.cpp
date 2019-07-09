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

#include <aws/redshift/model/TableRestoreStatus.h>
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

TableRestoreStatus::TableRestoreStatus() : 
    m_tableRestoreRequestIdHasBeenSet(false),
    m_status(TableRestoreStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_progressInMegaBytes(0),
    m_progressInMegaBytesHasBeenSet(false),
    m_totalDataInMegaBytes(0),
    m_totalDataInMegaBytesHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_snapshotIdentifierHasBeenSet(false),
    m_sourceDatabaseNameHasBeenSet(false),
    m_sourceSchemaNameHasBeenSet(false),
    m_sourceTableNameHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetSchemaNameHasBeenSet(false),
    m_newTableNameHasBeenSet(false)
{
}

TableRestoreStatus::TableRestoreStatus(const XmlNode& xmlNode) : 
    m_tableRestoreRequestIdHasBeenSet(false),
    m_status(TableRestoreStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_progressInMegaBytes(0),
    m_progressInMegaBytesHasBeenSet(false),
    m_totalDataInMegaBytes(0),
    m_totalDataInMegaBytesHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_snapshotIdentifierHasBeenSet(false),
    m_sourceDatabaseNameHasBeenSet(false),
    m_sourceSchemaNameHasBeenSet(false),
    m_sourceTableNameHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetSchemaNameHasBeenSet(false),
    m_newTableNameHasBeenSet(false)
{
  *this = xmlNode;
}

TableRestoreStatus& TableRestoreStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tableRestoreRequestIdNode = resultNode.FirstChild("TableRestoreRequestId");
    if(!tableRestoreRequestIdNode.IsNull())
    {
      m_tableRestoreRequestId = tableRestoreRequestIdNode.GetText();
      m_tableRestoreRequestIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = TableRestoreStatusTypeMapper::GetTableRestoreStatusTypeForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = messageNode.GetText();
      m_messageHasBeenSet = true;
    }
    XmlNode requestTimeNode = resultNode.FirstChild("RequestTime");
    if(!requestTimeNode.IsNull())
    {
      m_requestTime = DateTime(StringUtils::Trim(requestTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_requestTimeHasBeenSet = true;
    }
    XmlNode progressInMegaBytesNode = resultNode.FirstChild("ProgressInMegaBytes");
    if(!progressInMegaBytesNode.IsNull())
    {
      m_progressInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(progressInMegaBytesNode.GetText().c_str()).c_str());
      m_progressInMegaBytesHasBeenSet = true;
    }
    XmlNode totalDataInMegaBytesNode = resultNode.FirstChild("TotalDataInMegaBytes");
    if(!totalDataInMegaBytesNode.IsNull())
    {
      m_totalDataInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(totalDataInMegaBytesNode.GetText().c_str()).c_str());
      m_totalDataInMegaBytesHasBeenSet = true;
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = clusterIdentifierNode.GetText();
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode snapshotIdentifierNode = resultNode.FirstChild("SnapshotIdentifier");
    if(!snapshotIdentifierNode.IsNull())
    {
      m_snapshotIdentifier = snapshotIdentifierNode.GetText();
      m_snapshotIdentifierHasBeenSet = true;
    }
    XmlNode sourceDatabaseNameNode = resultNode.FirstChild("SourceDatabaseName");
    if(!sourceDatabaseNameNode.IsNull())
    {
      m_sourceDatabaseName = sourceDatabaseNameNode.GetText();
      m_sourceDatabaseNameHasBeenSet = true;
    }
    XmlNode sourceSchemaNameNode = resultNode.FirstChild("SourceSchemaName");
    if(!sourceSchemaNameNode.IsNull())
    {
      m_sourceSchemaName = sourceSchemaNameNode.GetText();
      m_sourceSchemaNameHasBeenSet = true;
    }
    XmlNode sourceTableNameNode = resultNode.FirstChild("SourceTableName");
    if(!sourceTableNameNode.IsNull())
    {
      m_sourceTableName = sourceTableNameNode.GetText();
      m_sourceTableNameHasBeenSet = true;
    }
    XmlNode targetDatabaseNameNode = resultNode.FirstChild("TargetDatabaseName");
    if(!targetDatabaseNameNode.IsNull())
    {
      m_targetDatabaseName = targetDatabaseNameNode.GetText();
      m_targetDatabaseNameHasBeenSet = true;
    }
    XmlNode targetSchemaNameNode = resultNode.FirstChild("TargetSchemaName");
    if(!targetSchemaNameNode.IsNull())
    {
      m_targetSchemaName = targetSchemaNameNode.GetText();
      m_targetSchemaNameHasBeenSet = true;
    }
    XmlNode newTableNameNode = resultNode.FirstChild("NewTableName");
    if(!newTableNameNode.IsNull())
    {
      m_newTableName = newTableNameNode.GetText();
      m_newTableNameHasBeenSet = true;
    }
  }

  return *this;
}

void TableRestoreStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_tableRestoreRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TableRestoreRequestId=" << StringUtils::URLEncode(m_tableRestoreRequestId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << TableRestoreStatusTypeMapper::GetNameForTableRestoreStatusType(m_status) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_requestTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequestTime=" << StringUtils::URLEncode(m_requestTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_progressInMegaBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProgressInMegaBytes=" << m_progressInMegaBytes << "&";
  }

  if(m_totalDataInMegaBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalDataInMegaBytes=" << m_totalDataInMegaBytes << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_snapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_sourceDatabaseNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceDatabaseName=" << StringUtils::URLEncode(m_sourceDatabaseName.c_str()) << "&";
  }

  if(m_sourceSchemaNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceSchemaName=" << StringUtils::URLEncode(m_sourceSchemaName.c_str()) << "&";
  }

  if(m_sourceTableNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceTableName=" << StringUtils::URLEncode(m_sourceTableName.c_str()) << "&";
  }

  if(m_targetDatabaseNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetDatabaseName=" << StringUtils::URLEncode(m_targetDatabaseName.c_str()) << "&";
  }

  if(m_targetSchemaNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetSchemaName=" << StringUtils::URLEncode(m_targetSchemaName.c_str()) << "&";
  }

  if(m_newTableNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".NewTableName=" << StringUtils::URLEncode(m_newTableName.c_str()) << "&";
  }

}

void TableRestoreStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_tableRestoreRequestIdHasBeenSet)
  {
      oStream << location << ".TableRestoreRequestId=" << StringUtils::URLEncode(m_tableRestoreRequestId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << TableRestoreStatusTypeMapper::GetNameForTableRestoreStatusType(m_status) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_requestTimeHasBeenSet)
  {
      oStream << location << ".RequestTime=" << StringUtils::URLEncode(m_requestTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_progressInMegaBytesHasBeenSet)
  {
      oStream << location << ".ProgressInMegaBytes=" << m_progressInMegaBytes << "&";
  }
  if(m_totalDataInMegaBytesHasBeenSet)
  {
      oStream << location << ".TotalDataInMegaBytes=" << m_totalDataInMegaBytes << "&";
  }
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_snapshotIdentifierHasBeenSet)
  {
      oStream << location << ".SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }
  if(m_sourceDatabaseNameHasBeenSet)
  {
      oStream << location << ".SourceDatabaseName=" << StringUtils::URLEncode(m_sourceDatabaseName.c_str()) << "&";
  }
  if(m_sourceSchemaNameHasBeenSet)
  {
      oStream << location << ".SourceSchemaName=" << StringUtils::URLEncode(m_sourceSchemaName.c_str()) << "&";
  }
  if(m_sourceTableNameHasBeenSet)
  {
      oStream << location << ".SourceTableName=" << StringUtils::URLEncode(m_sourceTableName.c_str()) << "&";
  }
  if(m_targetDatabaseNameHasBeenSet)
  {
      oStream << location << ".TargetDatabaseName=" << StringUtils::URLEncode(m_targetDatabaseName.c_str()) << "&";
  }
  if(m_targetSchemaNameHasBeenSet)
  {
      oStream << location << ".TargetSchemaName=" << StringUtils::URLEncode(m_targetSchemaName.c_str()) << "&";
  }
  if(m_newTableNameHasBeenSet)
  {
      oStream << location << ".NewTableName=" << StringUtils::URLEncode(m_newTableName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
