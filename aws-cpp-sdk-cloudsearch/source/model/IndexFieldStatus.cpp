/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearch/model/IndexFieldStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

IndexFieldStatus::IndexFieldStatus() : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

IndexFieldStatus::IndexFieldStatus(const XmlNode& xmlNode) : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

IndexFieldStatus& IndexFieldStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionsNode = resultNode.FirstChild("Options");
    if(!optionsNode.IsNull())
    {
      m_options = optionsNode;
      m_optionsHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void IndexFieldStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionsHasBeenSet)
  {
      Aws::StringStream optionsLocationAndMemberSs;
      optionsLocationAndMemberSs << location << index << locationValue << ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMemberSs.str().c_str());
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

}

void IndexFieldStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionsHasBeenSet)
  {
      Aws::String optionsLocationAndMember(location);
      optionsLocationAndMember += ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMember.c_str());
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
