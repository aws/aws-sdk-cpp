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

#include <aws/ec2/model/SubnetCidrBlockState.h>
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

SubnetCidrBlockState::SubnetCidrBlockState() : 
    m_state(SubnetCidrBlockStateCode::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

SubnetCidrBlockState::SubnetCidrBlockState(const XmlNode& xmlNode) : 
    m_state(SubnetCidrBlockStateCode::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = xmlNode;
}

SubnetCidrBlockState& SubnetCidrBlockState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = SubnetCidrBlockStateCodeMapper::GetSubnetCidrBlockStateCodeForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = statusMessageNode.GetText();
      m_statusMessageHasBeenSet = true;
    }
  }

  return *this;
}

void SubnetCidrBlockState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << SubnetCidrBlockStateCodeMapper::GetNameForSubnetCidrBlockStateCode(m_state) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

}

void SubnetCidrBlockState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << SubnetCidrBlockStateCodeMapper::GetNameForSubnetCidrBlockStateCode(m_state) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
