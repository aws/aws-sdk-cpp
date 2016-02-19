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
#include <aws/iam/model/EvaluationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

EvaluationResult::EvaluationResult() : 
    m_evalActionNameHasBeenSet(false),
    m_evalResourceNameHasBeenSet(false),
    m_evalDecisionHasBeenSet(false),
    m_matchedStatementsHasBeenSet(false),
    m_missingContextValuesHasBeenSet(false)
{
}

EvaluationResult::EvaluationResult(const XmlNode& xmlNode) : 
    m_evalActionNameHasBeenSet(false),
    m_evalResourceNameHasBeenSet(false),
    m_evalDecisionHasBeenSet(false),
    m_matchedStatementsHasBeenSet(false),
    m_missingContextValuesHasBeenSet(false)
{
  *this = xmlNode;
}

EvaluationResult& EvaluationResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode evalActionNameNode = resultNode.FirstChild("EvalActionName");
    if(!evalActionNameNode.IsNull())
    {
      m_evalActionName = StringUtils::Trim(evalActionNameNode.GetText().c_str());
      m_evalActionNameHasBeenSet = true;
    }
    XmlNode evalResourceNameNode = resultNode.FirstChild("EvalResourceName");
    if(!evalResourceNameNode.IsNull())
    {
      m_evalResourceName = StringUtils::Trim(evalResourceNameNode.GetText().c_str());
      m_evalResourceNameHasBeenSet = true;
    }
    XmlNode evalDecisionNode = resultNode.FirstChild("EvalDecision");
    if(!evalDecisionNode.IsNull())
    {
      m_evalDecision = PolicyEvaluationDecisionTypeMapper::GetPolicyEvaluationDecisionTypeForName(StringUtils::Trim(evalDecisionNode.GetText().c_str()).c_str());
      m_evalDecisionHasBeenSet = true;
    }
    XmlNode matchedStatementsNode = resultNode.FirstChild("MatchedStatements");
    if(!matchedStatementsNode.IsNull())
    {
      XmlNode matchedStatementsMember = matchedStatementsNode.FirstChild("member");
      while(!matchedStatementsMember.IsNull())
      {
        m_matchedStatements.push_back(matchedStatementsMember);
        matchedStatementsMember = matchedStatementsMember.NextNode("member");
      }

      m_matchedStatementsHasBeenSet = true;
    }
    XmlNode missingContextValuesNode = resultNode.FirstChild("MissingContextValues");
    if(!missingContextValuesNode.IsNull())
    {
      XmlNode missingContextValuesMember = missingContextValuesNode.FirstChild("member");
      while(!missingContextValuesMember.IsNull())
      {
        m_missingContextValues.push_back(missingContextValuesMember);
        missingContextValuesMember = missingContextValuesMember.NextNode("member");
      }

      m_missingContextValuesHasBeenSet = true;
    }
  }

  return *this;
}

void EvaluationResult::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_evalActionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EvalActionName=" << StringUtils::URLEncode(m_evalActionName.c_str()) << "&";
  }
  if(m_evalResourceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EvalResourceName=" << StringUtils::URLEncode(m_evalResourceName.c_str()) << "&";
  }
  if(m_evalDecisionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EvalDecision=" << PolicyEvaluationDecisionTypeMapper::GetNameForPolicyEvaluationDecisionType(m_evalDecision) << "&";
  }
  if(m_matchedStatementsHasBeenSet)
  {
      unsigned matchedStatementsIdx = 1;
      for(auto& item : m_matchedStatements)
      {
        Aws::StringStream matchedStatementsSs;
        matchedStatementsSs << location << index << locationValue << ".MatchedStatements.member." << matchedStatementsIdx++;
        item.OutputToStream(oStream, matchedStatementsSs.str().c_str());
      }
  }
  if(m_missingContextValuesHasBeenSet)
  {
      unsigned missingContextValuesIdx = 1;
      for(auto& item : m_missingContextValues)
      {
        Aws::StringStream missingContextValuesSs;
        missingContextValuesSs << location << index << locationValue << ".MissingContextValues.member." << missingContextValuesIdx++;
        item.OutputToStream(oStream, missingContextValuesSs.str().c_str());
      }
  }
}

void EvaluationResult::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_evalActionNameHasBeenSet)
  {
      oStream << location << ".EvalActionName=" << StringUtils::URLEncode(m_evalActionName.c_str()) << "&";
  }
  if(m_evalResourceNameHasBeenSet)
  {
      oStream << location << ".EvalResourceName=" << StringUtils::URLEncode(m_evalResourceName.c_str()) << "&";
  }
  if(m_evalDecisionHasBeenSet)
  {
      oStream << location << ".EvalDecision=" << PolicyEvaluationDecisionTypeMapper::GetNameForPolicyEvaluationDecisionType(m_evalDecision) << "&";
  }
  if(m_matchedStatementsHasBeenSet)
  {
      unsigned matchedStatementsIdx = 1;
      for(auto& item : m_matchedStatements)
      {
        Aws::StringStream matchedStatementsSs;
        matchedStatementsSs << location <<  ".MatchedStatements.member." << matchedStatementsIdx++;
        item.OutputToStream(oStream, matchedStatementsSs.str().c_str());
      }
  }
  if(m_missingContextValuesHasBeenSet)
  {
      unsigned missingContextValuesIdx = 1;
      for(auto& item : m_missingContextValues)
      {
        Aws::StringStream missingContextValuesSs;
        missingContextValuesSs << location <<  ".MissingContextValues.member." << missingContextValuesIdx++;
        item.OutputToStream(oStream, missingContextValuesSs.str().c_str());
      }
  }
}
