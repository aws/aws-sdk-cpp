/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/DomainDetails.h>
#include <aws/guardduty/model/RemoteIpDetails.h>
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

  class AWS_GUARDDUTY_API AwsApiCallAction
  {
  public:
    AwsApiCallAction();
    AwsApiCallAction(Aws::Utils::Json::JsonView jsonValue);
    AwsApiCallAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>AWS API name.</p>
     */
    inline const Aws::String& GetApi() const{ return m_api; }

    /**
     * <p>AWS API name.</p>
     */
    inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }

    /**
     * <p>AWS API name.</p>
     */
    inline void SetApi(const Aws::String& value) { m_apiHasBeenSet = true; m_api = value; }

    /**
     * <p>AWS API name.</p>
     */
    inline void SetApi(Aws::String&& value) { m_apiHasBeenSet = true; m_api = std::move(value); }

    /**
     * <p>AWS API name.</p>
     */
    inline void SetApi(const char* value) { m_apiHasBeenSet = true; m_api.assign(value); }

    /**
     * <p>AWS API name.</p>
     */
    inline AwsApiCallAction& WithApi(const Aws::String& value) { SetApi(value); return *this;}

    /**
     * <p>AWS API name.</p>
     */
    inline AwsApiCallAction& WithApi(Aws::String&& value) { SetApi(std::move(value)); return *this;}

    /**
     * <p>AWS API name.</p>
     */
    inline AwsApiCallAction& WithApi(const char* value) { SetApi(value); return *this;}


    /**
     * <p>AWS API caller type.</p>
     */
    inline const Aws::String& GetCallerType() const{ return m_callerType; }

    /**
     * <p>AWS API caller type.</p>
     */
    inline bool CallerTypeHasBeenSet() const { return m_callerTypeHasBeenSet; }

    /**
     * <p>AWS API caller type.</p>
     */
    inline void SetCallerType(const Aws::String& value) { m_callerTypeHasBeenSet = true; m_callerType = value; }

    /**
     * <p>AWS API caller type.</p>
     */
    inline void SetCallerType(Aws::String&& value) { m_callerTypeHasBeenSet = true; m_callerType = std::move(value); }

    /**
     * <p>AWS API caller type.</p>
     */
    inline void SetCallerType(const char* value) { m_callerTypeHasBeenSet = true; m_callerType.assign(value); }

    /**
     * <p>AWS API caller type.</p>
     */
    inline AwsApiCallAction& WithCallerType(const Aws::String& value) { SetCallerType(value); return *this;}

    /**
     * <p>AWS API caller type.</p>
     */
    inline AwsApiCallAction& WithCallerType(Aws::String&& value) { SetCallerType(std::move(value)); return *this;}

    /**
     * <p>AWS API caller type.</p>
     */
    inline AwsApiCallAction& WithCallerType(const char* value) { SetCallerType(value); return *this;}


    /**
     * <p>Domain information for the AWS API call.</p>
     */
    inline const DomainDetails& GetDomainDetails() const{ return m_domainDetails; }

    /**
     * <p>Domain information for the AWS API call.</p>
     */
    inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }

    /**
     * <p>Domain information for the AWS API call.</p>
     */
    inline void SetDomainDetails(const DomainDetails& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = value; }

    /**
     * <p>Domain information for the AWS API call.</p>
     */
    inline void SetDomainDetails(DomainDetails&& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = std::move(value); }

    /**
     * <p>Domain information for the AWS API call.</p>
     */
    inline AwsApiCallAction& WithDomainDetails(const DomainDetails& value) { SetDomainDetails(value); return *this;}

    /**
     * <p>Domain information for the AWS API call.</p>
     */
    inline AwsApiCallAction& WithDomainDetails(DomainDetails&& value) { SetDomainDetails(std::move(value)); return *this;}


    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline AwsApiCallAction& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline AwsApiCallAction& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}


    /**
     * <p>AWS service name whose API was invoked.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>AWS service name whose API was invoked.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>AWS service name whose API was invoked.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>AWS service name whose API was invoked.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>AWS service name whose API was invoked.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>AWS service name whose API was invoked.</p>
     */
    inline AwsApiCallAction& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>AWS service name whose API was invoked.</p>
     */
    inline AwsApiCallAction& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>AWS service name whose API was invoked.</p>
     */
    inline AwsApiCallAction& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_api;
    bool m_apiHasBeenSet;

    Aws::String m_callerType;
    bool m_callerTypeHasBeenSet;

    DomainDetails m_domainDetails;
    bool m_domainDetailsHasBeenSet;

    RemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
