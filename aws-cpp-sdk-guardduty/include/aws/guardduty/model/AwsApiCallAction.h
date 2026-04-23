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

  /**
   * Information about the AWS_API_CALL action described in this finding.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AwsApiCallAction">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API AwsApiCallAction
  {
  public:
    AwsApiCallAction();
    AwsApiCallAction(Aws::Utils::Json::JsonView jsonValue);
    AwsApiCallAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * AWS API name.
     */
    inline const Aws::String& GetApi() const{ return m_api; }

    /**
     * AWS API name.
     */
    inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }

    /**
     * AWS API name.
     */
    inline void SetApi(const Aws::String& value) { m_apiHasBeenSet = true; m_api = value; }

    /**
     * AWS API name.
     */
    inline void SetApi(Aws::String&& value) { m_apiHasBeenSet = true; m_api = std::move(value); }

    /**
     * AWS API name.
     */
    inline void SetApi(const char* value) { m_apiHasBeenSet = true; m_api.assign(value); }

    /**
     * AWS API name.
     */
    inline AwsApiCallAction& WithApi(const Aws::String& value) { SetApi(value); return *this;}

    /**
     * AWS API name.
     */
    inline AwsApiCallAction& WithApi(Aws::String&& value) { SetApi(std::move(value)); return *this;}

    /**
     * AWS API name.
     */
    inline AwsApiCallAction& WithApi(const char* value) { SetApi(value); return *this;}


    /**
     * AWS API caller type.
     */
    inline const Aws::String& GetCallerType() const{ return m_callerType; }

    /**
     * AWS API caller type.
     */
    inline bool CallerTypeHasBeenSet() const { return m_callerTypeHasBeenSet; }

    /**
     * AWS API caller type.
     */
    inline void SetCallerType(const Aws::String& value) { m_callerTypeHasBeenSet = true; m_callerType = value; }

    /**
     * AWS API caller type.
     */
    inline void SetCallerType(Aws::String&& value) { m_callerTypeHasBeenSet = true; m_callerType = std::move(value); }

    /**
     * AWS API caller type.
     */
    inline void SetCallerType(const char* value) { m_callerTypeHasBeenSet = true; m_callerType.assign(value); }

    /**
     * AWS API caller type.
     */
    inline AwsApiCallAction& WithCallerType(const Aws::String& value) { SetCallerType(value); return *this;}

    /**
     * AWS API caller type.
     */
    inline AwsApiCallAction& WithCallerType(Aws::String&& value) { SetCallerType(std::move(value)); return *this;}

    /**
     * AWS API caller type.
     */
    inline AwsApiCallAction& WithCallerType(const char* value) { SetCallerType(value); return *this;}


    /**
     * Domain information for the AWS API call.
     */
    inline const DomainDetails& GetDomainDetails() const{ return m_domainDetails; }

    /**
     * Domain information for the AWS API call.
     */
    inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }

    /**
     * Domain information for the AWS API call.
     */
    inline void SetDomainDetails(const DomainDetails& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = value; }

    /**
     * Domain information for the AWS API call.
     */
    inline void SetDomainDetails(DomainDetails&& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = std::move(value); }

    /**
     * Domain information for the AWS API call.
     */
    inline AwsApiCallAction& WithDomainDetails(const DomainDetails& value) { SetDomainDetails(value); return *this;}

    /**
     * Domain information for the AWS API call.
     */
    inline AwsApiCallAction& WithDomainDetails(DomainDetails&& value) { SetDomainDetails(std::move(value)); return *this;}


    /**
     * Remote IP information of the connection.
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }

    /**
     * Remote IP information of the connection.
     */
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }

    /**
     * Remote IP information of the connection.
     */
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }

    /**
     * Remote IP information of the connection.
     */
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }

    /**
     * Remote IP information of the connection.
     */
    inline AwsApiCallAction& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}

    /**
     * Remote IP information of the connection.
     */
    inline AwsApiCallAction& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}


    /**
     * AWS service name whose API was invoked.
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * AWS service name whose API was invoked.
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * AWS service name whose API was invoked.
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * AWS service name whose API was invoked.
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * AWS service name whose API was invoked.
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * AWS service name whose API was invoked.
     */
    inline AwsApiCallAction& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * AWS service name whose API was invoked.
     */
    inline AwsApiCallAction& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * AWS service name whose API was invoked.
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
