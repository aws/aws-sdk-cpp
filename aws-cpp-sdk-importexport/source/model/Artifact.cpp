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

#include <aws/importexport/model/Artifact.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ImportExport
{
namespace Model
{

Artifact::Artifact() : 
    m_descriptionHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

Artifact::Artifact(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
  *this = xmlNode;
}

Artifact& Artifact::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode uRLNode = resultNode.FirstChild("URL");
    if(!uRLNode.IsNull())
    {
      m_uRL = uRLNode.GetText();
      m_uRLHasBeenSet = true;
    }
  }

  return *this;
}

void Artifact::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_uRLHasBeenSet)
  {
      oStream << location << index << locationValue << ".URL=" << StringUtils::URLEncode(m_uRL.c_str()) << "&";
  }

}

void Artifact::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_uRLHasBeenSet)
  {
      oStream << location << ".URL=" << StringUtils::URLEncode(m_uRL.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ImportExport
} // namespace Aws
