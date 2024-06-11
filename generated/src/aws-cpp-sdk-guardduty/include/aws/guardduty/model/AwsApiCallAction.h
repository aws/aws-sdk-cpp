/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/DomainDetails.h>
#include <aws/guardduty/model/RemoteIpDetails.h>
#include <aws/guardduty/model/RemoteAccountDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the API action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AwsApiCallAction">AWS
   * API Reference</a></p>
   */
  class AwsApiCallAction
  {
  public:
    AWS_GUARDDUTY_API AwsApiCallAction();
    AWS_GUARDDUTY_API AwsApiCallAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AwsApiCallAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services API name.</p>
     */
    inline const Aws::String& GetApi() const{ return m_api; }
    inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }
    inline void SetApi(const Aws::String& value) { m_apiHasBeenSet = true; m_api = value; }
    inline void SetApi(Aws::String&& value) { m_apiHasBeenSet = true; m_api = std::move(value); }
    inline void SetApi(const char* value) { m_apiHasBeenSet = true; m_api.assign(value); }
    inline AwsApiCallAction& WithApi(const Aws::String& value) { SetApi(value); return *this;}
    inline AwsApiCallAction& WithApi(Aws::String&& value) { SetApi(std::move(value)); return *this;}
    inline AwsApiCallAction& WithApi(const char* value) { SetApi(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services API caller type.</p>
     */
    inline const Aws::String& GetCallerType() const{ return m_callerType; }
    inline bool CallerTypeHasBeenSet() const { return m_callerTypeHasBeenSet; }
    inline void SetCallerType(const Aws::String& value) { m_callerTypeHasBeenSet = true; m_callerType = value; }
    inline void SetCallerType(Aws::String&& value) { m_callerTypeHasBeenSet = true; m_callerType = std::move(value); }
    inline void SetCallerType(const char* value) { m_callerTypeHasBeenSet = true; m_callerType.assign(value); }
    inline AwsApiCallAction& WithCallerType(const Aws::String& value) { SetCallerType(value); return *this;}
    inline AwsApiCallAction& WithCallerType(Aws::String&& value) { SetCallerType(std::move(value)); return *this;}
    inline AwsApiCallAction& WithCallerType(const char* value) { SetCallerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain information for the Amazon Web Services API call.</p>
     */
    inline const DomainDetails& GetDomainDetails() const{ return m_domainDetails; }
    inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }
    inline void SetDomainDetails(const DomainDetails& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = value; }
    inline void SetDomainDetails(DomainDetails&& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = std::move(value); }
    inline AwsApiCallAction& WithDomainDetails(const DomainDetails& value) { SetDomainDetails(value); return *this;}
    inline AwsApiCallAction& WithDomainDetails(DomainDetails&& value) { SetDomainDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code of the failed Amazon Web Services API action.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline AwsApiCallAction& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline AwsApiCallAction& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline AwsApiCallAction& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent through which the API request was made.</p>
     */
    inline const Aws::String& GetUserAgent() const{ return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    inline void SetUserAgent(const Aws::String& value) { m_userAgentHasBeenSet = true; m_userAgent = value; }
    inline void SetUserAgent(Aws::String&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::move(value); }
    inline void SetUserAgent(const char* value) { m_userAgentHasBeenSet = true; m_userAgent.assign(value); }
    inline AwsApiCallAction& WithUserAgent(const Aws::String& value) { SetUserAgent(value); return *this;}
    inline AwsApiCallAction& WithUserAgent(Aws::String&& value) { SetUserAgent(std::move(value)); return *this;}
    inline AwsApiCallAction& WithUserAgent(const char* value) { SetUserAgent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remote IP information of the connection that initiated the Amazon Web
     * Services API call.</p>
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }
    inline AwsApiCallAction& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}
    inline AwsApiCallAction& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service name whose API was invoked.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline AwsApiCallAction& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline AwsApiCallAction& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline AwsApiCallAction& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the Amazon Web Services account that made the API call. This
     * field appears if the call was made from outside your account.</p>
     */
    inline const RemoteAccountDetails& GetRemoteAccountDetails() const{ return m_remoteAccountDetails; }
    inline bool RemoteAccountDetailsHasBeenSet() const { return m_remoteAccountDetailsHasBeenSet; }
    inline void SetRemoteAccountDetails(const RemoteAccountDetails& value) { m_remoteAccountDetailsHasBeenSet = true; m_remoteAccountDetails = value; }
    inline void SetRemoteAccountDetails(RemoteAccountDetails&& value) { m_remoteAccountDetailsHasBeenSet = true; m_remoteAccountDetails = std::move(value); }
    inline AwsApiCallAction& WithRemoteAccountDetails(const RemoteAccountDetails& value) { SetRemoteAccountDetails(value); return *this;}
    inline AwsApiCallAction& WithRemoteAccountDetails(RemoteAccountDetails&& value) { SetRemoteAccountDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the Amazon Web Services account that made the API call. This
     * field identifies the resources that were affected by this API call.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAffectedResources() const{ return m_affectedResources; }
    inline bool AffectedResourcesHasBeenSet() const { return m_affectedResourcesHasBeenSet; }
    inline void SetAffectedResources(const Aws::Map<Aws::String, Aws::String>& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources = value; }
    inline void SetAffectedResources(Aws::Map<Aws::String, Aws::String>&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources = std::move(value); }
    inline AwsApiCallAction& WithAffectedResources(const Aws::Map<Aws::String, Aws::String>& value) { SetAffectedResources(value); return *this;}
    inline AwsApiCallAction& WithAffectedResources(Aws::Map<Aws::String, Aws::String>&& value) { SetAffectedResources(std::move(value)); return *this;}
    inline AwsApiCallAction& AddAffectedResources(const Aws::String& key, const Aws::String& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, value); return *this; }
    inline AwsApiCallAction& AddAffectedResources(Aws::String&& key, const Aws::String& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::move(key), value); return *this; }
    inline AwsApiCallAction& AddAffectedResources(const Aws::String& key, Aws::String&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, std::move(value)); return *this; }
    inline AwsApiCallAction& AddAffectedResources(Aws::String&& key, Aws::String&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::move(key), std::move(value)); return *this; }
    inline AwsApiCallAction& AddAffectedResources(const char* key, Aws::String&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, std::move(value)); return *this; }
    inline AwsApiCallAction& AddAffectedResources(Aws::String&& key, const char* value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::move(key), value); return *this; }
    inline AwsApiCallAction& AddAffectedResources(const char* key, const char* value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_api;
    bool m_apiHasBeenSet = false;

    Aws::String m_callerType;
    bool m_callerTypeHasBeenSet = false;

    DomainDetails m_domainDetails;
    bool m_domainDetailsHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;

    RemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    RemoteAccountDetails m_remoteAccountDetails;
    bool m_remoteAccountDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_affectedResources;
    bool m_affectedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
