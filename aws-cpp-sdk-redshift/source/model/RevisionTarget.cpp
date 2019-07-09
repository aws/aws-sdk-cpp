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

#include <aws/redshift/model/RevisionTarget.h>
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

RevisionTarget::RevisionTarget() : 
    m_databaseRevisionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_databaseRevisionReleaseDateHasBeenSet(false)
{
}

RevisionTarget::RevisionTarget(const XmlNode& xmlNode) : 
    m_databaseRevisionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_databaseRevisionReleaseDateHasBeenSet(false)
{
  *this = xmlNode;
}

RevisionTarget& RevisionTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode databaseRevisionNode = resultNode.FirstChild("DatabaseRevision");
    if(!databaseRevisionNode.IsNull())
    {
      m_databaseRevision = databaseRevisionNode.GetText();
      m_databaseRevisionHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode databaseRevisionReleaseDateNode = resultNode.FirstChild("DatabaseRevisionReleaseDate");
    if(!databaseRevisionReleaseDateNode.IsNull())
    {
      m_databaseRevisionReleaseDate = DateTime(StringUtils::Trim(databaseRevisionReleaseDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_databaseRevisionReleaseDateHasBeenSet = true;
    }
  }

  return *this;
}

void RevisionTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_databaseRevisionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseRevision=" << StringUtils::URLEncode(m_databaseRevision.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_databaseRevisionReleaseDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseRevisionReleaseDate=" << StringUtils::URLEncode(m_databaseRevisionReleaseDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void RevisionTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_databaseRevisionHasBeenSet)
  {
      oStream << location << ".DatabaseRevision=" << StringUtils::URLEncode(m_databaseRevision.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_databaseRevisionReleaseDateHasBeenSet)
  {
      oStream << location << ".DatabaseRevisionReleaseDate=" << StringUtils::URLEncode(m_databaseRevisionReleaseDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
