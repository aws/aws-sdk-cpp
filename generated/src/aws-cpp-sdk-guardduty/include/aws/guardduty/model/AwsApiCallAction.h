/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DomainDetails.h>
#include <aws/guardduty/model/RemoteAccountDetails.h>
#include <aws/guardduty/model/RemoteIpDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about the API action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AwsApiCallAction">AWS
 * API Reference</a></p>
 */
class AwsApiCallAction {
 public:
  AWS_GUARDDUTY_API AwsApiCallAction() = default;
  AWS_GUARDDUTY_API AwsApiCallAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API AwsApiCallAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services API name.</p>
   */
  inline const Aws::String& GetApi() const { return m_api; }
  inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }
  template <typename ApiT = Aws::String>
  void SetApi(ApiT&& value) {
    m_apiHasBeenSet = true;
    m_api = std::forward<ApiT>(value);
  }
  template <typename ApiT = Aws::String>
  AwsApiCallAction& WithApi(ApiT&& value) {
    SetApi(std::forward<ApiT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services API caller type.</p>
   */
  inline const Aws::String& GetCallerType() const { return m_callerType; }
  inline bool CallerTypeHasBeenSet() const { return m_callerTypeHasBeenSet; }
  template <typename CallerTypeT = Aws::String>
  void SetCallerType(CallerTypeT&& value) {
    m_callerTypeHasBeenSet = true;
    m_callerType = std::forward<CallerTypeT>(value);
  }
  template <typename CallerTypeT = Aws::String>
  AwsApiCallAction& WithCallerType(CallerTypeT&& value) {
    SetCallerType(std::forward<CallerTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain information for the Amazon Web Services API call.</p>
   */
  inline const DomainDetails& GetDomainDetails() const { return m_domainDetails; }
  inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }
  template <typename DomainDetailsT = DomainDetails>
  void SetDomainDetails(DomainDetailsT&& value) {
    m_domainDetailsHasBeenSet = true;
    m_domainDetails = std::forward<DomainDetailsT>(value);
  }
  template <typename DomainDetailsT = DomainDetails>
  AwsApiCallAction& WithDomainDetails(DomainDetailsT&& value) {
    SetDomainDetails(std::forward<DomainDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code of the failed Amazon Web Services API action.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  AwsApiCallAction& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent through which the API request was made.</p>
   */
  inline const Aws::String& GetUserAgent() const { return m_userAgent; }
  inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
  template <typename UserAgentT = Aws::String>
  void SetUserAgent(UserAgentT&& value) {
    m_userAgentHasBeenSet = true;
    m_userAgent = std::forward<UserAgentT>(value);
  }
  template <typename UserAgentT = Aws::String>
  AwsApiCallAction& WithUserAgent(UserAgentT&& value) {
    SetUserAgent(std::forward<UserAgentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remote IP information of the connection that initiated the Amazon Web
   * Services API call.</p>
   */
  inline const RemoteIpDetails& GetRemoteIpDetails() const { return m_remoteIpDetails; }
  inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
  template <typename RemoteIpDetailsT = RemoteIpDetails>
  void SetRemoteIpDetails(RemoteIpDetailsT&& value) {
    m_remoteIpDetailsHasBeenSet = true;
    m_remoteIpDetails = std::forward<RemoteIpDetailsT>(value);
  }
  template <typename RemoteIpDetailsT = RemoteIpDetails>
  AwsApiCallAction& WithRemoteIpDetails(RemoteIpDetailsT&& value) {
    SetRemoteIpDetails(std::forward<RemoteIpDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services service name whose API was invoked.</p>
   */
  inline const Aws::String& GetServiceName() const { return m_serviceName; }
  inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
  template <typename ServiceNameT = Aws::String>
  void SetServiceName(ServiceNameT&& value) {
    m_serviceNameHasBeenSet = true;
    m_serviceName = std::forward<ServiceNameT>(value);
  }
  template <typename ServiceNameT = Aws::String>
  AwsApiCallAction& WithServiceName(ServiceNameT&& value) {
    SetServiceName(std::forward<ServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the Amazon Web Services account that made the API call. This
   * field appears if the call was made from outside your account.</p>
   */
  inline const RemoteAccountDetails& GetRemoteAccountDetails() const { return m_remoteAccountDetails; }
  inline bool RemoteAccountDetailsHasBeenSet() const { return m_remoteAccountDetailsHasBeenSet; }
  template <typename RemoteAccountDetailsT = RemoteAccountDetails>
  void SetRemoteAccountDetails(RemoteAccountDetailsT&& value) {
    m_remoteAccountDetailsHasBeenSet = true;
    m_remoteAccountDetails = std::forward<RemoteAccountDetailsT>(value);
  }
  template <typename RemoteAccountDetailsT = RemoteAccountDetails>
  AwsApiCallAction& WithRemoteAccountDetails(RemoteAccountDetailsT&& value) {
    SetRemoteAccountDetails(std::forward<RemoteAccountDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the Amazon Web Services account that made the API call. This
   * field identifies the resources that were affected by this API call.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAffectedResources() const { return m_affectedResources; }
  inline bool AffectedResourcesHasBeenSet() const { return m_affectedResourcesHasBeenSet; }
  template <typename AffectedResourcesT = Aws::Map<Aws::String, Aws::String>>
  void SetAffectedResources(AffectedResourcesT&& value) {
    m_affectedResourcesHasBeenSet = true;
    m_affectedResources = std::forward<AffectedResourcesT>(value);
  }
  template <typename AffectedResourcesT = Aws::Map<Aws::String, Aws::String>>
  AwsApiCallAction& WithAffectedResources(AffectedResourcesT&& value) {
    SetAffectedResources(std::forward<AffectedResourcesT>(value));
    return *this;
  }
  template <typename AffectedResourcesKeyT = Aws::String, typename AffectedResourcesValueT = Aws::String>
  AwsApiCallAction& AddAffectedResources(AffectedResourcesKeyT&& key, AffectedResourcesValueT&& value) {
    m_affectedResourcesHasBeenSet = true;
    m_affectedResources.emplace(std::forward<AffectedResourcesKeyT>(key), std::forward<AffectedResourcesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_api;

  Aws::String m_callerType;

  DomainDetails m_domainDetails;

  Aws::String m_errorCode;

  Aws::String m_userAgent;

  RemoteIpDetails m_remoteIpDetails;

  Aws::String m_serviceName;

  RemoteAccountDetails m_remoteAccountDetails;

  Aws::Map<Aws::String, Aws::String> m_affectedResources;
  bool m_apiHasBeenSet = false;
  bool m_callerTypeHasBeenSet = false;
  bool m_domainDetailsHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_userAgentHasBeenSet = false;
  bool m_remoteIpDetailsHasBeenSet = false;
  bool m_serviceNameHasBeenSet = false;
  bool m_remoteAccountDetailsHasBeenSet = false;
  bool m_affectedResourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
