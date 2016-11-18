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
#include <aws/ec2/model/Storage.h>
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

Storage::Storage() : 
    m_s3HasBeenSet(false)
{
}

Storage::Storage(const XmlNode& xmlNode) : 
    m_s3HasBeenSet(false)
{
  *this = xmlNode;
}

Storage& Storage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode s3Node = resultNode.FirstChild("S3");
    if(!s3Node.IsNull())
    {
      m_s3 = s3Node;
      m_s3HasBeenSet = true;
    }
  }

  return *this;
}

void Storage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_s3HasBeenSet)
  {
      Aws::StringStream s3LocationAndMemberSs;
      s3LocationAndMemberSs << location << index << locationValue << ".S3";
      m_s3.OutputToStream(oStream, s3LocationAndMemberSs.str().c_str());
  }

}

void Storage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_s3HasBeenSet)
  {
      Aws::String s3LocationAndMember(location);
      s3LocationAndMember += ".S3";
      m_s3.OutputToStream(oStream, s3LocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
