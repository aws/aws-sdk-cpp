/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/EvaluatedScenario.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

EvaluatedScenario::EvaluatedScenario() : 
    m_scenarioIdHasBeenSet(false),
    m_evaluationResultsHasBeenSet(false)
{
}

EvaluatedScenario::EvaluatedScenario(const XmlNode& xmlNode) : 
    m_scenarioIdHasBeenSet(false),
    m_evaluationResultsHasBeenSet(false)
{
  *this = xmlNode;
}

EvaluatedScenario& EvaluatedScenario::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode scenarioIdNode = resultNode.FirstChild("ScenarioId");
    if(!scenarioIdNode.IsNull())
    {
      m_scenarioId = StringUtils::Trim(scenarioIdNode.GetText().c_str());
      m_scenarioIdHasBeenSet = true;
    }
    XmlNode evaluationResultsNodeParent = resultNode.FirstChild("EvaluationResults");
    XmlNode evaluationResultsNode = evaluationResultsNodeParent.FirstChild("member");
    if(!evaluationResultsNode.IsNull())
    {
      while(!evaluationResultsNode.IsNull())
      {
        m_evaluationResults.push_back(evaluationResultsNode);
        evaluationResultsNode = evaluationResultsNode.NextNode("member");
      }

      m_evaluationResultsHasBeenSet = true;
    }
  }

  return *this;
}

void EvaluatedScenario::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_scenarioIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScenarioId=" << StringUtils::URLEncode(m_scenarioId.c_str()) << "&";
  }
  if(m_evaluationResultsHasBeenSet)
  {
      for(auto& item : m_evaluationResults)
      {
        Aws::StringStream evaluationResultsSs;
        evaluationResultsSs << location << index << locationValue << ".EvaluationResults";
        item.OutputToStream(oStream, evaluationResultsSs.str().c_str());
      }
  }
}

void EvaluatedScenario::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_scenarioIdHasBeenSet)
  {
      oStream << location << ".ScenarioId=" << StringUtils::URLEncode(m_scenarioId.c_str()) << "&";
  }
  if(m_evaluationResultsHasBeenSet)
  {
      for(auto& item : m_evaluationResults)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".EvaluationResults";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
