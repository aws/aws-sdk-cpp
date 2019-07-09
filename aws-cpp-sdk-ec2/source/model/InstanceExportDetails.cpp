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

#include <aws/ec2/model/InstanceExportDetails.h>
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

InstanceExportDetails::InstanceExportDetails() : 
    m_instanceIdHasBeenSet(false),
    m_targetEnvironment(ExportEnvironment::NOT_SET),
    m_targetEnvironmentHasBeenSet(false)
{
}

InstanceExportDetails::InstanceExportDetails(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_targetEnvironment(ExportEnvironment::NOT_SET),
    m_targetEnvironmentHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceExportDetails& InstanceExportDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode targetEnvironmentNode = resultNode.FirstChild("targetEnvironment");
    if(!targetEnvironmentNode.IsNull())
    {
      m_targetEnvironment = ExportEnvironmentMapper::GetExportEnvironmentForName(StringUtils::Trim(targetEnvironmentNode.GetText().c_str()).c_str());
      m_targetEnvironmentHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceExportDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_targetEnvironmentHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetEnvironment=" << ExportEnvironmentMapper::GetNameForExportEnvironment(m_targetEnvironment) << "&";
  }

}

void InstanceExportDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_targetEnvironmentHasBeenSet)
  {
      oStream << location << ".TargetEnvironment=" << ExportEnvironmentMapper::GetNameForExportEnvironment(m_targetEnvironment) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
