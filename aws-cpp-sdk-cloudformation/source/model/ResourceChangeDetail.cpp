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

#include <aws/cloudformation/model/ResourceChangeDetail.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

ResourceChangeDetail::ResourceChangeDetail() : 
    m_targetHasBeenSet(false),
    m_evaluation(EvaluationType::NOT_SET),
    m_evaluationHasBeenSet(false),
    m_changeSource(ChangeSource::NOT_SET),
    m_changeSourceHasBeenSet(false),
    m_causingEntityHasBeenSet(false)
{
}

ResourceChangeDetail::ResourceChangeDetail(const XmlNode& xmlNode) : 
    m_targetHasBeenSet(false),
    m_evaluation(EvaluationType::NOT_SET),
    m_evaluationHasBeenSet(false),
    m_changeSource(ChangeSource::NOT_SET),
    m_changeSourceHasBeenSet(false),
    m_causingEntityHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceChangeDetail& ResourceChangeDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetNode = resultNode.FirstChild("Target");
    if(!targetNode.IsNull())
    {
      m_target = targetNode;
      m_targetHasBeenSet = true;
    }
    XmlNode evaluationNode = resultNode.FirstChild("Evaluation");
    if(!evaluationNode.IsNull())
    {
      m_evaluation = EvaluationTypeMapper::GetEvaluationTypeForName(StringUtils::Trim(evaluationNode.GetText().c_str()).c_str());
      m_evaluationHasBeenSet = true;
    }
    XmlNode changeSourceNode = resultNode.FirstChild("ChangeSource");
    if(!changeSourceNode.IsNull())
    {
      m_changeSource = ChangeSourceMapper::GetChangeSourceForName(StringUtils::Trim(changeSourceNode.GetText().c_str()).c_str());
      m_changeSourceHasBeenSet = true;
    }
    XmlNode causingEntityNode = resultNode.FirstChild("CausingEntity");
    if(!causingEntityNode.IsNull())
    {
      m_causingEntity = causingEntityNode.GetText();
      m_causingEntityHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceChangeDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetHasBeenSet)
  {
      Aws::StringStream targetLocationAndMemberSs;
      targetLocationAndMemberSs << location << index << locationValue << ".Target";
      m_target.OutputToStream(oStream, targetLocationAndMemberSs.str().c_str());
  }

  if(m_evaluationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Evaluation=" << EvaluationTypeMapper::GetNameForEvaluationType(m_evaluation) << "&";
  }

  if(m_changeSourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".ChangeSource=" << ChangeSourceMapper::GetNameForChangeSource(m_changeSource) << "&";
  }

  if(m_causingEntityHasBeenSet)
  {
      oStream << location << index << locationValue << ".CausingEntity=" << StringUtils::URLEncode(m_causingEntity.c_str()) << "&";
  }

}

void ResourceChangeDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetHasBeenSet)
  {
      Aws::String targetLocationAndMember(location);
      targetLocationAndMember += ".Target";
      m_target.OutputToStream(oStream, targetLocationAndMember.c_str());
  }
  if(m_evaluationHasBeenSet)
  {
      oStream << location << ".Evaluation=" << EvaluationTypeMapper::GetNameForEvaluationType(m_evaluation) << "&";
  }
  if(m_changeSourceHasBeenSet)
  {
      oStream << location << ".ChangeSource=" << ChangeSourceMapper::GetNameForChangeSource(m_changeSource) << "&";
  }
  if(m_causingEntityHasBeenSet)
  {
      oStream << location << ".CausingEntity=" << StringUtils::URLEncode(m_causingEntity.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
