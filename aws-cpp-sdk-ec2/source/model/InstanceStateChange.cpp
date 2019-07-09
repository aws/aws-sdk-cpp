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

#include <aws/ec2/model/InstanceStateChange.h>
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

InstanceStateChange::InstanceStateChange() : 
    m_currentStateHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_previousStateHasBeenSet(false)
{
}

InstanceStateChange::InstanceStateChange(const XmlNode& xmlNode) : 
    m_currentStateHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_previousStateHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceStateChange& InstanceStateChange::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode currentStateNode = resultNode.FirstChild("currentState");
    if(!currentStateNode.IsNull())
    {
      m_currentState = currentStateNode;
      m_currentStateHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode previousStateNode = resultNode.FirstChild("previousState");
    if(!previousStateNode.IsNull())
    {
      m_previousState = previousStateNode;
      m_previousStateHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceStateChange::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_currentStateHasBeenSet)
  {
      Aws::StringStream currentStateLocationAndMemberSs;
      currentStateLocationAndMemberSs << location << index << locationValue << ".CurrentState";
      m_currentState.OutputToStream(oStream, currentStateLocationAndMemberSs.str().c_str());
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_previousStateHasBeenSet)
  {
      Aws::StringStream previousStateLocationAndMemberSs;
      previousStateLocationAndMemberSs << location << index << locationValue << ".PreviousState";
      m_previousState.OutputToStream(oStream, previousStateLocationAndMemberSs.str().c_str());
  }

}

void InstanceStateChange::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_currentStateHasBeenSet)
  {
      Aws::String currentStateLocationAndMember(location);
      currentStateLocationAndMember += ".CurrentState";
      m_currentState.OutputToStream(oStream, currentStateLocationAndMember.c_str());
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_previousStateHasBeenSet)
  {
      Aws::String previousStateLocationAndMember(location);
      previousStateLocationAndMember += ".PreviousState";
      m_previousState.OutputToStream(oStream, previousStateLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
