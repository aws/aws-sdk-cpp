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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/EvaluationResult.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_IAM_API SimulatePolicyResult
  {
  public:
    SimulatePolicyResult();
    SimulatePolicyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    SimulatePolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Aws::Vector<EvaluationResult>& GetEvaluationResults() const{ return m_evaluationResults; }

    
    inline void SetEvaluationResults(const Aws::Vector<EvaluationResult>& value) { m_evaluationResults = value; }

    
    inline void SetEvaluationResults(Aws::Vector<EvaluationResult>&& value) { m_evaluationResults = value; }

    
    inline SimulatePolicyResult& WithEvaluationResults(const Aws::Vector<EvaluationResult>& value) { SetEvaluationResults(value); return *this;}

    
    inline SimulatePolicyResult& WithEvaluationResults(Aws::Vector<EvaluationResult>&& value) { SetEvaluationResults(value); return *this;}

    
    inline SimulatePolicyResult& AddEvaluationResults(const EvaluationResult& value) { m_evaluationResults.push_back(value); return *this; }

    
    inline SimulatePolicyResult& AddEvaluationResults(EvaluationResult&& value) { m_evaluationResults.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline SimulatePolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SimulatePolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<EvaluationResult> m_evaluationResults;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws