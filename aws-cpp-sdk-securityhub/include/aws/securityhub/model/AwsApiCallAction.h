/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ActionRemoteIpDetails.h>
#include <aws/securityhub/model/AwsApiCallActionDomainDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provided if <code>ActionType</code> is <code>AWS_API_CALL</code>. It provides
   * details about the API call that was detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiCallAction">AWS
   * API Reference</a></p>
   */
  class AwsApiCallAction
  {
  public:
    AWS_SECURITYHUB_API AwsApiCallAction();
    AWS_SECURITYHUB_API AwsApiCallAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiCallAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the API method that was issued.</p>
     */
    inline const Aws::String& GetApi() const{ return m_api; }

    /**
     * <p>The name of the API method that was issued.</p>
     */
    inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }

    /**
     * <p>The name of the API method that was issued.</p>
     */
    inline void SetApi(const Aws::String& value) { m_apiHasBeenSet = true; m_api = value; }

    /**
     * <p>The name of the API method that was issued.</p>
     */
    inline void SetApi(Aws::String&& value) { m_apiHasBeenSet = true; m_api = std::move(value); }

    /**
     * <p>The name of the API method that was issued.</p>
     */
    inline void SetApi(const char* value) { m_apiHasBeenSet = true; m_api.assign(value); }

    /**
     * <p>The name of the API method that was issued.</p>
     */
    inline AwsApiCallAction& WithApi(const Aws::String& value) { SetApi(value); return *this;}

    /**
     * <p>The name of the API method that was issued.</p>
     */
    inline AwsApiCallAction& WithApi(Aws::String&& value) { SetApi(std::move(value)); return *this;}

    /**
     * <p>The name of the API method that was issued.</p>
     */
    inline AwsApiCallAction& WithApi(const char* value) { SetApi(value); return *this;}


    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p>
     */
    inline AwsApiCallAction& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p>
     */
    inline AwsApiCallAction& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p>
     */
    inline AwsApiCallAction& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline const Aws::String& GetCallerType() const{ return m_callerType; }

    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline bool CallerTypeHasBeenSet() const { return m_callerTypeHasBeenSet; }

    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline void SetCallerType(const Aws::String& value) { m_callerTypeHasBeenSet = true; m_callerType = value; }

    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline void SetCallerType(Aws::String&& value) { m_callerTypeHasBeenSet = true; m_callerType = std::move(value); }

    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline void SetCallerType(const char* value) { m_callerTypeHasBeenSet = true; m_callerType.assign(value); }

    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline AwsApiCallAction& WithCallerType(const Aws::String& value) { SetCallerType(value); return *this;}

    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline AwsApiCallAction& WithCallerType(Aws::String&& value) { SetCallerType(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline AwsApiCallAction& WithCallerType(const char* value) { SetCallerType(value); return *this;}


    /**
     * <p>Provided if <code>CallerType</code> is <code>remoteIp</code>. Provides
     * information about the remote IP address that the API call originated from.</p>
     */
    inline const ActionRemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }

    /**
     * <p>Provided if <code>CallerType</code> is <code>remoteIp</code>. Provides
     * information about the remote IP address that the API call originated from.</p>
     */
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }

    /**
     * <p>Provided if <code>CallerType</code> is <code>remoteIp</code>. Provides
     * information about the remote IP address that the API call originated from.</p>
     */
    inline void SetRemoteIpDetails(const ActionRemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }

    /**
     * <p>Provided if <code>CallerType</code> is <code>remoteIp</code>. Provides
     * information about the remote IP address that the API call originated from.</p>
     */
    inline void SetRemoteIpDetails(ActionRemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }

    /**
     * <p>Provided if <code>CallerType</code> is <code>remoteIp</code>. Provides
     * information about the remote IP address that the API call originated from.</p>
     */
    inline AwsApiCallAction& WithRemoteIpDetails(const ActionRemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}

    /**
     * <p>Provided if <code>CallerType</code> is <code>remoteIp</code>. Provides
     * information about the remote IP address that the API call originated from.</p>
     */
    inline AwsApiCallAction& WithRemoteIpDetails(ActionRemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}


    /**
     * <p>Provided if <code>CallerType</code> is <code>domain</code>. Provides
     * information about the DNS domain that the API call originated from.</p>
     */
    inline const AwsApiCallActionDomainDetails& GetDomainDetails() const{ return m_domainDetails; }

    /**
     * <p>Provided if <code>CallerType</code> is <code>domain</code>. Provides
     * information about the DNS domain that the API call originated from.</p>
     */
    inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }

    /**
     * <p>Provided if <code>CallerType</code> is <code>domain</code>. Provides
     * information about the DNS domain that the API call originated from.</p>
     */
    inline void SetDomainDetails(const AwsApiCallActionDomainDetails& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = value; }

    /**
     * <p>Provided if <code>CallerType</code> is <code>domain</code>. Provides
     * information about the DNS domain that the API call originated from.</p>
     */
    inline void SetDomainDetails(AwsApiCallActionDomainDetails&& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = std::move(value); }

    /**
     * <p>Provided if <code>CallerType</code> is <code>domain</code>. Provides
     * information about the DNS domain that the API call originated from.</p>
     */
    inline AwsApiCallAction& WithDomainDetails(const AwsApiCallActionDomainDetails& value) { SetDomainDetails(value); return *this;}

    /**
     * <p>Provided if <code>CallerType</code> is <code>domain</code>. Provides
     * information about the DNS domain that the API call originated from.</p>
     */
    inline AwsApiCallAction& WithDomainDetails(AwsApiCallActionDomainDetails&& value) { SetDomainDetails(std::move(value)); return *this;}


    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAffectedResources() const{ return m_affectedResources; }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline bool AffectedResourcesHasBeenSet() const { return m_affectedResourcesHasBeenSet; }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline void SetAffectedResources(const Aws::Map<Aws::String, Aws::String>& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources = value; }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline void SetAffectedResources(Aws::Map<Aws::String, Aws::String>&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources = std::move(value); }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline AwsApiCallAction& WithAffectedResources(const Aws::Map<Aws::String, Aws::String>& value) { SetAffectedResources(value); return *this;}

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline AwsApiCallAction& WithAffectedResources(Aws::Map<Aws::String, Aws::String>&& value) { SetAffectedResources(std::move(value)); return *this;}

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline AwsApiCallAction& AddAffectedResources(const Aws::String& key, const Aws::String& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, value); return *this; }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline AwsApiCallAction& AddAffectedResources(Aws::String&& key, const Aws::String& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::move(key), value); return *this; }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline AwsApiCallAction& AddAffectedResources(const Aws::String& key, Aws::String&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline AwsApiCallAction& AddAffectedResources(Aws::String&& key, Aws::String&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline AwsApiCallAction& AddAffectedResources(const char* key, Aws::String&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline AwsApiCallAction& AddAffectedResources(Aws::String&& key, const char* value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::move(key), value); return *this; }

    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline AwsApiCallAction& AddAffectedResources(const char* key, const char* value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, value); return *this; }


    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was first
     * observed.</p>
     */
    inline const Aws::String& GetFirstSeen() const{ return m_firstSeen; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was first
     * observed.</p>
     */
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was first
     * observed.</p>
     */
    inline void SetFirstSeen(const Aws::String& value) { m_firstSeenHasBeenSet = true; m_firstSeen = value; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was first
     * observed.</p>
     */
    inline void SetFirstSeen(Aws::String&& value) { m_firstSeenHasBeenSet = true; m_firstSeen = std::move(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was first
     * observed.</p>
     */
    inline void SetFirstSeen(const char* value) { m_firstSeenHasBeenSet = true; m_firstSeen.assign(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was first
     * observed.</p>
     */
    inline AwsApiCallAction& WithFirstSeen(const Aws::String& value) { SetFirstSeen(value); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was first
     * observed.</p>
     */
    inline AwsApiCallAction& WithFirstSeen(Aws::String&& value) { SetFirstSeen(std::move(value)); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was first
     * observed.</p>
     */
    inline AwsApiCallAction& WithFirstSeen(const char* value) { SetFirstSeen(value); return *this;}


    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was most
     * recently observed.</p>
     */
    inline const Aws::String& GetLastSeen() const{ return m_lastSeen; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was most
     * recently observed.</p>
     */
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was most
     * recently observed.</p>
     */
    inline void SetLastSeen(const Aws::String& value) { m_lastSeenHasBeenSet = true; m_lastSeen = value; }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was most
     * recently observed.</p>
     */
    inline void SetLastSeen(Aws::String&& value) { m_lastSeenHasBeenSet = true; m_lastSeen = std::move(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was most
     * recently observed.</p>
     */
    inline void SetLastSeen(const char* value) { m_lastSeenHasBeenSet = true; m_lastSeen.assign(value); }

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was most
     * recently observed.</p>
     */
    inline AwsApiCallAction& WithLastSeen(const Aws::String& value) { SetLastSeen(value); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was most
     * recently observed.</p>
     */
    inline AwsApiCallAction& WithLastSeen(Aws::String&& value) { SetLastSeen(std::move(value)); return *this;}

    /**
     * <p>An ISO8601-formatted timestamp that indicates when the API call was most
     * recently observed.</p>
     */
    inline AwsApiCallAction& WithLastSeen(const char* value) { SetLastSeen(value); return *this;}

  private:

    Aws::String m_api;
    bool m_apiHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_callerType;
    bool m_callerTypeHasBeenSet = false;

    ActionRemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;

    AwsApiCallActionDomainDetails m_domainDetails;
    bool m_domainDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_affectedResources;
    bool m_affectedResourcesHasBeenSet = false;

    Aws::String m_firstSeen;
    bool m_firstSeenHasBeenSet = false;

    Aws::String m_lastSeen;
    bool m_lastSeenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
