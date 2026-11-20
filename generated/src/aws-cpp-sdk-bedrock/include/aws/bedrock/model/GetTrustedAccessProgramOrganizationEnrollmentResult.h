/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/TrustedAccessProgramOptIn.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {
/**
 * <p>The organization's stored enrollment. updatedAt is present whenever a row
 * exists, including an explicit inherit setting.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetTrustedAccessProgramOrganizationEnrollmentResponse">AWS
 * API Reference</a></p>
 */
class GetTrustedAccessProgramOrganizationEnrollmentResult {
 public:
  AWS_BEDROCK_API GetTrustedAccessProgramOrganizationEnrollmentResult() = default;
  AWS_BEDROCK_API GetTrustedAccessProgramOrganizationEnrollmentResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API GetTrustedAccessProgramOrganizationEnrollmentResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Stored preference at the addressed scope. A missing enrollment returns
   * inherit without updatedAt.</p>
   */
  inline TrustedAccessProgramOptIn GetOptIn() const { return m_optIn; }
  inline void SetOptIn(TrustedAccessProgramOptIn value) {
    m_optInHasBeenSet = true;
    m_optIn = value;
  }
  inline GetTrustedAccessProgramOrganizationEnrollmentResult& WithOptIn(TrustedAccessProgramOptIn value) {
    SetOptIn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last change to the stored enrollment. Present whenever a row exists,
   * including an explicitly stored inherit setting.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetTrustedAccessProgramOrganizationEnrollmentResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetTrustedAccessProgramOrganizationEnrollmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TrustedAccessProgramOptIn m_optIn{TrustedAccessProgramOptIn::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_optInHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
