/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/AccountQuotas.h>
#include <aws/lambda-web/model/AccountUsage.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {
/**
 * <p>Contains your AWS Lambda Web Functions account quotas and usage for the
 * current AWS Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/GetWebAccountSettingsResponse">AWS
 * API Reference</a></p>
 */
class GetWebAccountSettingsResult {
 public:
  AWS_LAMBDAWEB_API GetWebAccountSettingsResult() = default;
  AWS_LAMBDAWEB_API GetWebAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAWEB_API GetWebAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The quotas that apply to web functions in your account in the current AWS
   * Region.</p>
   */
  inline const AccountQuotas& GetAccountQuotas() const { return m_accountQuotas; }
  template <typename AccountQuotasT = AccountQuotas>
  void SetAccountQuotas(AccountQuotasT&& value) {
    m_accountQuotasHasBeenSet = true;
    m_accountQuotas = std::forward<AccountQuotasT>(value);
  }
  template <typename AccountQuotasT = AccountQuotas>
  GetWebAccountSettingsResult& WithAccountQuotas(AccountQuotasT&& value) {
    SetAccountQuotas(std::forward<AccountQuotasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current web function usage for your account in the current AWS
   * Region.</p>
   */
  inline const AccountUsage& GetAccountUsage() const { return m_accountUsage; }
  template <typename AccountUsageT = AccountUsage>
  void SetAccountUsage(AccountUsageT&& value) {
    m_accountUsageHasBeenSet = true;
    m_accountUsage = std::forward<AccountUsageT>(value);
  }
  template <typename AccountUsageT = AccountUsage>
  GetWebAccountSettingsResult& WithAccountUsage(AccountUsageT&& value) {
    SetAccountUsage(std::forward<AccountUsageT>(value));
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
  GetWebAccountSettingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AccountQuotas m_accountQuotas;

  AccountUsage m_accountUsage;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accountQuotasHasBeenSet = false;
  bool m_accountUsageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
