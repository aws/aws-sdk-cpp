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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/EvaluationResult.h>

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
  class AWS_IAM_API EvaluatedScenario
  {
  public:
    EvaluatedScenario();
    EvaluatedScenario(const Aws::Utils::Xml::XmlNode& xmlNode);
    EvaluatedScenario& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetScenarioId() const{ return m_scenarioId; }
    
    inline void SetScenarioId(const Aws::String& value) { m_scenarioIdHasBeenSet = true; m_scenarioId = value; }

    
    inline void SetScenarioId(const char* value) { m_scenarioIdHasBeenSet = true; m_scenarioId.assign(value); }

    
    inline EvaluatedScenario&  WithScenarioId(const Aws::String& value) { SetScenarioId(value); return *this;}

    
    inline EvaluatedScenario& WithScenarioId(const char* value) { SetScenarioId(value); return *this;}

    
    inline const Aws::Vector<EvaluationResult>& GetEvaluationResults() const{ return m_evaluationResults; }
    
    inline void SetEvaluationResults(const Aws::Vector<EvaluationResult>& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults = value; }

    
    inline EvaluatedScenario&  WithEvaluationResults(const Aws::Vector<EvaluationResult>& value) { SetEvaluationResults(value); return *this;}

    
    inline EvaluatedScenario& AddEvaluationResults(const EvaluationResult& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults.push_back(value); return *this; }

  private:
    Aws::String m_scenarioId;
    bool m_scenarioIdHasBeenSet;
    Aws::Vector<EvaluationResult> m_evaluationResults;
    bool m_evaluationResultsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
