/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/model/Job.h>
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

Job::Job() : 
    m_jobIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_isCanceled(false),
    m_isCanceledHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false)
{
}

Job::Job(const XmlNode& xmlNode) : 
    m_jobIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_isCanceled(false),
    m_isCanceledHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false)
{
  *this = xmlNode;
}

Job& Job::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode jobIdNode = resultNode.FirstChild("JobId");
    if(!jobIdNode.IsNull())
    {
      m_jobId = Aws::Utils::Xml::DecodeEscapedXmlText(jobIdNode.GetText());
      m_jobIdHasBeenSet = true;
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationDateHasBeenSet = true;
    }
    XmlNode isCanceledNode = resultNode.FirstChild("IsCanceled");
    if(!isCanceledNode.IsNull())
    {
      m_isCanceled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isCanceledNode.GetText()).c_str()).c_str());
      m_isCanceledHasBeenSet = true;
    }
    XmlNode jobTypeNode = resultNode.FirstChild("JobType");
    if(!jobTypeNode.IsNull())
    {
      m_jobType = JobTypeMapper::GetJobTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(jobTypeNode.GetText()).c_str()).c_str());
      m_jobTypeHasBeenSet = true;
    }
  }

  return *this;
}

void Job::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_jobIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".JobId=" << StringUtils::URLEncode(m_jobId.c_str()) << "&";
  }

  if(m_creationDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_isCanceledHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsCanceled=" << std::boolalpha << m_isCanceled << "&";
  }

  if(m_jobTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".JobType=" << JobTypeMapper::GetNameForJobType(m_jobType) << "&";
  }

}

void Job::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_jobIdHasBeenSet)
  {
      oStream << location << ".JobId=" << StringUtils::URLEncode(m_jobId.c_str()) << "&";
  }
  if(m_creationDateHasBeenSet)
  {
      oStream << location << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_isCanceledHasBeenSet)
  {
      oStream << location << ".IsCanceled=" << std::boolalpha << m_isCanceled << "&";
  }
  if(m_jobTypeHasBeenSet)
  {
      oStream << location << ".JobType=" << JobTypeMapper::GetNameForJobType(m_jobType) << "&";
  }
}

} // namespace Model
} // namespace ImportExport
} // namespace Aws
