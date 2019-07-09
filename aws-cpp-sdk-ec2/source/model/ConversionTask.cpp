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

#include <aws/ec2/model/ConversionTask.h>
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

ConversionTask::ConversionTask() : 
    m_conversionTaskIdHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_importInstanceHasBeenSet(false),
    m_importVolumeHasBeenSet(false),
    m_state(ConversionTaskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ConversionTask::ConversionTask(const XmlNode& xmlNode) : 
    m_conversionTaskIdHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_importInstanceHasBeenSet(false),
    m_importVolumeHasBeenSet(false),
    m_state(ConversionTaskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ConversionTask& ConversionTask::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode conversionTaskIdNode = resultNode.FirstChild("conversionTaskId");
    if(!conversionTaskIdNode.IsNull())
    {
      m_conversionTaskId = conversionTaskIdNode.GetText();
      m_conversionTaskIdHasBeenSet = true;
    }
    XmlNode expirationTimeNode = resultNode.FirstChild("expirationTime");
    if(!expirationTimeNode.IsNull())
    {
      m_expirationTime = expirationTimeNode.GetText();
      m_expirationTimeHasBeenSet = true;
    }
    XmlNode importInstanceNode = resultNode.FirstChild("importInstance");
    if(!importInstanceNode.IsNull())
    {
      m_importInstance = importInstanceNode;
      m_importInstanceHasBeenSet = true;
    }
    XmlNode importVolumeNode = resultNode.FirstChild("importVolume");
    if(!importVolumeNode.IsNull())
    {
      m_importVolume = importVolumeNode;
      m_importVolumeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = ConversionTaskStateMapper::GetConversionTaskStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = statusMessageNode.GetText();
      m_statusMessageHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void ConversionTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_conversionTaskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConversionTaskId=" << StringUtils::URLEncode(m_conversionTaskId.c_str()) << "&";
  }

  if(m_expirationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.c_str()) << "&";
  }

  if(m_importInstanceHasBeenSet)
  {
      Aws::StringStream importInstanceLocationAndMemberSs;
      importInstanceLocationAndMemberSs << location << index << locationValue << ".ImportInstance";
      m_importInstance.OutputToStream(oStream, importInstanceLocationAndMemberSs.str().c_str());
  }

  if(m_importVolumeHasBeenSet)
  {
      Aws::StringStream importVolumeLocationAndMemberSs;
      importVolumeLocationAndMemberSs << location << index << locationValue << ".ImportVolume";
      m_importVolume.OutputToStream(oStream, importVolumeLocationAndMemberSs.str().c_str());
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << ConversionTaskStateMapper::GetNameForConversionTaskState(m_state) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void ConversionTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_conversionTaskIdHasBeenSet)
  {
      oStream << location << ".ConversionTaskId=" << StringUtils::URLEncode(m_conversionTaskId.c_str()) << "&";
  }
  if(m_expirationTimeHasBeenSet)
  {
      oStream << location << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.c_str()) << "&";
  }
  if(m_importInstanceHasBeenSet)
  {
      Aws::String importInstanceLocationAndMember(location);
      importInstanceLocationAndMember += ".ImportInstance";
      m_importInstance.OutputToStream(oStream, importInstanceLocationAndMember.c_str());
  }
  if(m_importVolumeHasBeenSet)
  {
      Aws::String importVolumeLocationAndMember(location);
      importVolumeLocationAndMember += ".ImportVolume";
      m_importVolume.OutputToStream(oStream, importVolumeLocationAndMember.c_str());
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << ConversionTaskStateMapper::GetNameForConversionTaskState(m_state) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
