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
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/PolicyEvaluationDecisionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/Statement.h>
#include <aws/iam/model/ContextEntryResult.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_IAM_API EvaluationResult
  {
  public:
    EvaluationResult();
    EvaluationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    EvaluationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetEvalActionName() const{ return m_evalActionName; }
    
    inline void SetEvalActionName(const Aws::String& value) { m_evalActionNameHasBeenSet = true; m_evalActionName = value; }

    
    inline void SetEvalActionName(const char* value) { m_evalActionNameHasBeenSet = true; m_evalActionName.assign(value); }

    
    inline EvaluationResult&  WithEvalActionName(const Aws::String& value) { SetEvalActionName(value); return *this;}

    
    inline EvaluationResult& WithEvalActionName(const char* value) { SetEvalActionName(value); return *this;}

    
    inline const Aws::String& GetEvalResourceName() const{ return m_evalResourceName; }
    
    inline void SetEvalResourceName(const Aws::String& value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName = value; }

    
    inline void SetEvalResourceName(const char* value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName.assign(value); }

    
    inline EvaluationResult&  WithEvalResourceName(const Aws::String& value) { SetEvalResourceName(value); return *this;}

    
    inline EvaluationResult& WithEvalResourceName(const char* value) { SetEvalResourceName(value); return *this;}

    
    inline const PolicyEvaluationDecisionType& GetEvalDecision() const{ return m_evalDecision; }
    
    inline void SetEvalDecision(const PolicyEvaluationDecisionType& value) { m_evalDecisionHasBeenSet = true; m_evalDecision = value; }

    
    inline EvaluationResult&  WithEvalDecision(const PolicyEvaluationDecisionType& value) { SetEvalDecision(value); return *this;}

    
    inline const Aws::Vector<Statement>& GetMatchedStatements() const{ return m_matchedStatements; }
    
    inline void SetMatchedStatements(const Aws::Vector<Statement>& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements = value; }

    
    inline EvaluationResult&  WithMatchedStatements(const Aws::Vector<Statement>& value) { SetMatchedStatements(value); return *this;}

    
    inline EvaluationResult& AddMatchedStatements(const Statement& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements.push_back(value); return *this; }

    
    inline const Aws::Vector<ContextEntryResult>& GetMissingContextValues() const{ return m_missingContextValues; }
    
    inline void SetMissingContextValues(const Aws::Vector<ContextEntryResult>& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = value; }

    
    inline EvaluationResult&  WithMissingContextValues(const Aws::Vector<ContextEntryResult>& value) { SetMissingContextValues(value); return *this;}

    
    inline EvaluationResult& AddMissingContextValues(const ContextEntryResult& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }

  private:
    Aws::String m_evalActionName;
    bool m_evalActionNameHasBeenSet;
    Aws::String m_evalResourceName;
    bool m_evalResourceNameHasBeenSet;
    PolicyEvaluationDecisionType m_evalDecision;
    bool m_evalDecisionHasBeenSet;
    Aws::Vector<Statement> m_matchedStatements;
    bool m_matchedStatementsHasBeenSet;
    Aws::Vector<ContextEntryResult> m_missingContextValues;
    bool m_missingContextValuesHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
