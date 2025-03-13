/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Bedrock
{
namespace Model
{
  class UpdateGuardrailResult
  {
  public:
    AWS_BEDROCK_API UpdateGuardrailResult() = default;
    AWS_BEDROCK_API UpdateGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API UpdateGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the guardrail</p>
     */
    inline const Aws::String& GetGuardrailId() const { return m_guardrailId; }
    template<typename GuardrailIdT = Aws::String>
    void SetGuardrailId(GuardrailIdT&& value) { m_guardrailIdHasBeenSet = true; m_guardrailId = std::forward<GuardrailIdT>(value); }
    template<typename GuardrailIdT = Aws::String>
    UpdateGuardrailResult& WithGuardrailId(GuardrailIdT&& value) { SetGuardrailId(std::forward<GuardrailIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailArn() const { return m_guardrailArn; }
    template<typename GuardrailArnT = Aws::String>
    void SetGuardrailArn(GuardrailArnT&& value) { m_guardrailArnHasBeenSet = true; m_guardrailArn = std::forward<GuardrailArnT>(value); }
    template<typename GuardrailArnT = Aws::String>
    UpdateGuardrailResult& WithGuardrailArn(GuardrailArnT&& value) { SetGuardrailArn(std::forward<GuardrailArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the guardrail.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    UpdateGuardrailResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the guardrail was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    UpdateGuardrailResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateGuardrailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_guardrailId;
    bool m_guardrailIdHasBeenSet = false;

    Aws::String m_guardrailArn;
    bool m_guardrailArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
