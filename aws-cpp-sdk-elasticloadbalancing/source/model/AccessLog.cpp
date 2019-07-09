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

#include <aws/elasticloadbalancing/model/AccessLog.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

AccessLog::AccessLog() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_emitInterval(0),
    m_emitIntervalHasBeenSet(false),
    m_s3BucketPrefixHasBeenSet(false)
{
}

AccessLog::AccessLog(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_emitInterval(0),
    m_emitIntervalHasBeenSet(false),
    m_s3BucketPrefixHasBeenSet(false)
{
  *this = xmlNode;
}

AccessLog& AccessLog::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode s3BucketNameNode = resultNode.FirstChild("S3BucketName");
    if(!s3BucketNameNode.IsNull())
    {
      m_s3BucketName = s3BucketNameNode.GetText();
      m_s3BucketNameHasBeenSet = true;
    }
    XmlNode emitIntervalNode = resultNode.FirstChild("EmitInterval");
    if(!emitIntervalNode.IsNull())
    {
      m_emitInterval = StringUtils::ConvertToInt32(StringUtils::Trim(emitIntervalNode.GetText().c_str()).c_str());
      m_emitIntervalHasBeenSet = true;
    }
    XmlNode s3BucketPrefixNode = resultNode.FirstChild("S3BucketPrefix");
    if(!s3BucketPrefixNode.IsNull())
    {
      m_s3BucketPrefix = s3BucketPrefixNode.GetText();
      m_s3BucketPrefixHasBeenSet = true;
    }
  }

  return *this;
}

void AccessLog::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_s3BucketNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3BucketName=" << StringUtils::URLEncode(m_s3BucketName.c_str()) << "&";
  }

  if(m_emitIntervalHasBeenSet)
  {
      oStream << location << index << locationValue << ".EmitInterval=" << m_emitInterval << "&";
  }

  if(m_s3BucketPrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3BucketPrefix=" << StringUtils::URLEncode(m_s3BucketPrefix.c_str()) << "&";
  }

}

void AccessLog::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_s3BucketNameHasBeenSet)
  {
      oStream << location << ".S3BucketName=" << StringUtils::URLEncode(m_s3BucketName.c_str()) << "&";
  }
  if(m_emitIntervalHasBeenSet)
  {
      oStream << location << ".EmitInterval=" << m_emitInterval << "&";
  }
  if(m_s3BucketPrefixHasBeenSet)
  {
      oStream << location << ".S3BucketPrefix=" << StringUtils::URLEncode(m_s3BucketPrefix.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
