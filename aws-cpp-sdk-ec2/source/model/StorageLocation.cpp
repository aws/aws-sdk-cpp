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

#include <aws/ec2/model/StorageLocation.h>
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

StorageLocation::StorageLocation() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

StorageLocation::StorageLocation(const XmlNode& xmlNode) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false)
{
  *this = xmlNode;
}

StorageLocation& StorageLocation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = bucketNode.GetText();
      m_bucketHasBeenSet = true;
    }
    XmlNode keyNode = resultNode.FirstChild("Key");
    if(!keyNode.IsNull())
    {
      m_key = keyNode.GetText();
      m_keyHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLocation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_bucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }

  if(m_keyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }

}

void StorageLocation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_bucketHasBeenSet)
  {
      oStream << location << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }
  if(m_keyHasBeenSet)
  {
      oStream << location << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
