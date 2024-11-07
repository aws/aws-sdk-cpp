/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowValidation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{
  class ValidateFlowDefinitionResult
  {
  public:
    AWS_BEDROCKAGENT_API ValidateFlowDefinitionResult();
    AWS_BEDROCKAGENT_API ValidateFlowDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ValidateFlowDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains an array of objects, each of which contains an error identified by
     * validation.</p>
     */
    inline const Aws::Vector<FlowValidation>& GetValidations() const{ return m_validations; }
    inline void SetValidations(const Aws::Vector<FlowValidation>& value) { m_validations = value; }
    inline void SetValidations(Aws::Vector<FlowValidation>&& value) { m_validations = std::move(value); }
    inline ValidateFlowDefinitionResult& WithValidations(const Aws::Vector<FlowValidation>& value) { SetValidations(value); return *this;}
    inline ValidateFlowDefinitionResult& WithValidations(Aws::Vector<FlowValidation>&& value) { SetValidations(std::move(value)); return *this;}
    inline ValidateFlowDefinitionResult& AddValidations(const FlowValidation& value) { m_validations.push_back(value); return *this; }
    inline ValidateFlowDefinitionResult& AddValidations(FlowValidation&& value) { m_validations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ValidateFlowDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ValidateFlowDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ValidateFlowDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FlowValidation> m_validations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
