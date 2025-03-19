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
  class CreateGuardrailResult
  {
  public:
    AWS_BEDROCK_API CreateGuardrailResult() = default;
    AWS_BEDROCK_API CreateGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreateGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the guardrail that was created.</p>
     */
    inline const Aws::String& GetGuardrailId() const { return m_guardrailId; }
    template<typename GuardrailIdT = Aws::String>
    void SetGuardrailId(GuardrailIdT&& value) { m_guardrailIdHasBeenSet = true; m_guardrailId = std::forward<GuardrailIdT>(value); }
    template<typename GuardrailIdT = Aws::String>
    CreateGuardrailResult& WithGuardrailId(GuardrailIdT&& value) { SetGuardrailId(std::forward<GuardrailIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailArn() const { return m_guardrailArn; }
    template<typename GuardrailArnT = Aws::String>
    void SetGuardrailArn(GuardrailArnT&& value) { m_guardrailArnHasBeenSet = true; m_guardrailArn = std::forward<GuardrailArnT>(value); }
    template<typename GuardrailArnT = Aws::String>
    CreateGuardrailResult& WithGuardrailArn(GuardrailArnT&& value) { SetGuardrailArn(std::forward<GuardrailArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the guardrail that was created. This value will always be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CreateGuardrailResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the guardrail was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateGuardrailResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGuardrailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_guardrailId;
    bool m_guardrailIdHasBeenSet = false;

    Aws::String m_guardrailArn;
    bool m_guardrailArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
