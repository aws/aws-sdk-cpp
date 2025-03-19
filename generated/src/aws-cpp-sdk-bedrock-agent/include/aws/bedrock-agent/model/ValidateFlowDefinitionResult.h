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
    AWS_BEDROCKAGENT_API ValidateFlowDefinitionResult() = default;
    AWS_BEDROCKAGENT_API ValidateFlowDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ValidateFlowDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains an array of objects, each of which contains an error identified by
     * validation.</p>
     */
    inline const Aws::Vector<FlowValidation>& GetValidations() const { return m_validations; }
    template<typename ValidationsT = Aws::Vector<FlowValidation>>
    void SetValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations = std::forward<ValidationsT>(value); }
    template<typename ValidationsT = Aws::Vector<FlowValidation>>
    ValidateFlowDefinitionResult& WithValidations(ValidationsT&& value) { SetValidations(std::forward<ValidationsT>(value)); return *this;}
    template<typename ValidationsT = FlowValidation>
    ValidateFlowDefinitionResult& AddValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations.emplace_back(std::forward<ValidationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidateFlowDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowValidation> m_validations;
    bool m_validationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
