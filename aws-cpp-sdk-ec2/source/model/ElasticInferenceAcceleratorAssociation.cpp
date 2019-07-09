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

#include <aws/ec2/model/ElasticInferenceAcceleratorAssociation.h>
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

ElasticInferenceAcceleratorAssociation::ElasticInferenceAcceleratorAssociation() : 
    m_elasticInferenceAcceleratorArnHasBeenSet(false),
    m_elasticInferenceAcceleratorAssociationIdHasBeenSet(false),
    m_elasticInferenceAcceleratorAssociationStateHasBeenSet(false),
    m_elasticInferenceAcceleratorAssociationTimeHasBeenSet(false)
{
}

ElasticInferenceAcceleratorAssociation::ElasticInferenceAcceleratorAssociation(const XmlNode& xmlNode) : 
    m_elasticInferenceAcceleratorArnHasBeenSet(false),
    m_elasticInferenceAcceleratorAssociationIdHasBeenSet(false),
    m_elasticInferenceAcceleratorAssociationStateHasBeenSet(false),
    m_elasticInferenceAcceleratorAssociationTimeHasBeenSet(false)
{
  *this = xmlNode;
}

ElasticInferenceAcceleratorAssociation& ElasticInferenceAcceleratorAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode elasticInferenceAcceleratorArnNode = resultNode.FirstChild("elasticInferenceAcceleratorArn");
    if(!elasticInferenceAcceleratorArnNode.IsNull())
    {
      m_elasticInferenceAcceleratorArn = elasticInferenceAcceleratorArnNode.GetText();
      m_elasticInferenceAcceleratorArnHasBeenSet = true;
    }
    XmlNode elasticInferenceAcceleratorAssociationIdNode = resultNode.FirstChild("elasticInferenceAcceleratorAssociationId");
    if(!elasticInferenceAcceleratorAssociationIdNode.IsNull())
    {
      m_elasticInferenceAcceleratorAssociationId = elasticInferenceAcceleratorAssociationIdNode.GetText();
      m_elasticInferenceAcceleratorAssociationIdHasBeenSet = true;
    }
    XmlNode elasticInferenceAcceleratorAssociationStateNode = resultNode.FirstChild("elasticInferenceAcceleratorAssociationState");
    if(!elasticInferenceAcceleratorAssociationStateNode.IsNull())
    {
      m_elasticInferenceAcceleratorAssociationState = elasticInferenceAcceleratorAssociationStateNode.GetText();
      m_elasticInferenceAcceleratorAssociationStateHasBeenSet = true;
    }
    XmlNode elasticInferenceAcceleratorAssociationTimeNode = resultNode.FirstChild("elasticInferenceAcceleratorAssociationTime");
    if(!elasticInferenceAcceleratorAssociationTimeNode.IsNull())
    {
      m_elasticInferenceAcceleratorAssociationTime = DateTime(StringUtils::Trim(elasticInferenceAcceleratorAssociationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_elasticInferenceAcceleratorAssociationTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ElasticInferenceAcceleratorAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_elasticInferenceAcceleratorArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticInferenceAcceleratorArn=" << StringUtils::URLEncode(m_elasticInferenceAcceleratorArn.c_str()) << "&";
  }

  if(m_elasticInferenceAcceleratorAssociationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticInferenceAcceleratorAssociationId=" << StringUtils::URLEncode(m_elasticInferenceAcceleratorAssociationId.c_str()) << "&";
  }

  if(m_elasticInferenceAcceleratorAssociationStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticInferenceAcceleratorAssociationState=" << StringUtils::URLEncode(m_elasticInferenceAcceleratorAssociationState.c_str()) << "&";
  }

  if(m_elasticInferenceAcceleratorAssociationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticInferenceAcceleratorAssociationTime=" << StringUtils::URLEncode(m_elasticInferenceAcceleratorAssociationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ElasticInferenceAcceleratorAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_elasticInferenceAcceleratorArnHasBeenSet)
  {
      oStream << location << ".ElasticInferenceAcceleratorArn=" << StringUtils::URLEncode(m_elasticInferenceAcceleratorArn.c_str()) << "&";
  }
  if(m_elasticInferenceAcceleratorAssociationIdHasBeenSet)
  {
      oStream << location << ".ElasticInferenceAcceleratorAssociationId=" << StringUtils::URLEncode(m_elasticInferenceAcceleratorAssociationId.c_str()) << "&";
  }
  if(m_elasticInferenceAcceleratorAssociationStateHasBeenSet)
  {
      oStream << location << ".ElasticInferenceAcceleratorAssociationState=" << StringUtils::URLEncode(m_elasticInferenceAcceleratorAssociationState.c_str()) << "&";
  }
  if(m_elasticInferenceAcceleratorAssociationTimeHasBeenSet)
  {
      oStream << location << ".ElasticInferenceAcceleratorAssociationTime=" << StringUtils::URLEncode(m_elasticInferenceAcceleratorAssociationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
