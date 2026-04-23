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
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/SecurityServiceType.h>
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
namespace FMS
{
namespace Model
{
  class AWS_FMS_API GetProtectionStatusResult
  {
  public:
    GetProtectionStatusResult();
    GetProtectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetProtectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the AWS Firewall administrator account for this policy.</p>
     */
    inline const Aws::String& GetAdminAccountId() const{ return m_adminAccountId; }

    /**
     * <p>The ID of the AWS Firewall administrator account for this policy.</p>
     */
    inline void SetAdminAccountId(const Aws::String& value) { m_adminAccountId = value; }

    /**
     * <p>The ID of the AWS Firewall administrator account for this policy.</p>
     */
    inline void SetAdminAccountId(Aws::String&& value) { m_adminAccountId = std::move(value); }

    /**
     * <p>The ID of the AWS Firewall administrator account for this policy.</p>
     */
    inline void SetAdminAccountId(const char* value) { m_adminAccountId.assign(value); }

    /**
     * <p>The ID of the AWS Firewall administrator account for this policy.</p>
     */
    inline GetProtectionStatusResult& WithAdminAccountId(const Aws::String& value) { SetAdminAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS Firewall administrator account for this policy.</p>
     */
    inline GetProtectionStatusResult& WithAdminAccountId(Aws::String&& value) { SetAdminAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS Firewall administrator account for this policy.</p>
     */
    inline GetProtectionStatusResult& WithAdminAccountId(const char* value) { SetAdminAccountId(value); return *this;}


    /**
     * <p>The service type that is protected by the policy. Currently, this is always
     * <code>SHIELD_ADVANCED</code>.</p>
     */
    inline const SecurityServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The service type that is protected by the policy. Currently, this is always
     * <code>SHIELD_ADVANCED</code>.</p>
     */
    inline void SetServiceType(const SecurityServiceType& value) { m_serviceType = value; }

    /**
     * <p>The service type that is protected by the policy. Currently, this is always
     * <code>SHIELD_ADVANCED</code>.</p>
     */
    inline void SetServiceType(SecurityServiceType&& value) { m_serviceType = std::move(value); }

    /**
     * <p>The service type that is protected by the policy. Currently, this is always
     * <code>SHIELD_ADVANCED</code>.</p>
     */
    inline GetProtectionStatusResult& WithServiceType(const SecurityServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The service type that is protected by the policy. Currently, this is always
     * <code>SHIELD_ADVANCED</code>.</p>
     */
    inline GetProtectionStatusResult& WithServiceType(SecurityServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>Details about the attack, including the following:</p> <ul> <li> <p>Attack
     * type</p> </li> <li> <p>Account ID</p> </li> <li> <p>ARN of the resource
     * attacked</p> </li> <li> <p>Start time of the attack</p> </li> <li> <p>End time
     * of the attack (ongoing attacks will not have an end time)</p> </li> </ul> <p>The
     * details are in JSON format. An example is shown in the Examples section
     * below.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>Details about the attack, including the following:</p> <ul> <li> <p>Attack
     * type</p> </li> <li> <p>Account ID</p> </li> <li> <p>ARN of the resource
     * attacked</p> </li> <li> <p>Start time of the attack</p> </li> <li> <p>End time
     * of the attack (ongoing attacks will not have an end time)</p> </li> </ul> <p>The
     * details are in JSON format. An example is shown in the Examples section
     * below.</p>
     */
    inline void SetData(const Aws::String& value) { m_data = value; }

    /**
     * <p>Details about the attack, including the following:</p> <ul> <li> <p>Attack
     * type</p> </li> <li> <p>Account ID</p> </li> <li> <p>ARN of the resource
     * attacked</p> </li> <li> <p>Start time of the attack</p> </li> <li> <p>End time
     * of the attack (ongoing attacks will not have an end time)</p> </li> </ul> <p>The
     * details are in JSON format. An example is shown in the Examples section
     * below.</p>
     */
    inline void SetData(Aws::String&& value) { m_data = std::move(value); }

    /**
     * <p>Details about the attack, including the following:</p> <ul> <li> <p>Attack
     * type</p> </li> <li> <p>Account ID</p> </li> <li> <p>ARN of the resource
     * attacked</p> </li> <li> <p>Start time of the attack</p> </li> <li> <p>End time
     * of the attack (ongoing attacks will not have an end time)</p> </li> </ul> <p>The
     * details are in JSON format. An example is shown in the Examples section
     * below.</p>
     */
    inline void SetData(const char* value) { m_data.assign(value); }

    /**
     * <p>Details about the attack, including the following:</p> <ul> <li> <p>Attack
     * type</p> </li> <li> <p>Account ID</p> </li> <li> <p>ARN of the resource
     * attacked</p> </li> <li> <p>Start time of the attack</p> </li> <li> <p>End time
     * of the attack (ongoing attacks will not have an end time)</p> </li> </ul> <p>The
     * details are in JSON format. An example is shown in the Examples section
     * below.</p>
     */
    inline GetProtectionStatusResult& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>Details about the attack, including the following:</p> <ul> <li> <p>Attack
     * type</p> </li> <li> <p>Account ID</p> </li> <li> <p>ARN of the resource
     * attacked</p> </li> <li> <p>Start time of the attack</p> </li> <li> <p>End time
     * of the attack (ongoing attacks will not have an end time)</p> </li> </ul> <p>The
     * details are in JSON format. An example is shown in the Examples section
     * below.</p>
     */
    inline GetProtectionStatusResult& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>Details about the attack, including the following:</p> <ul> <li> <p>Attack
     * type</p> </li> <li> <p>Account ID</p> </li> <li> <p>ARN of the resource
     * attacked</p> </li> <li> <p>Start time of the attack</p> </li> <li> <p>End time
     * of the attack (ongoing attacks will not have an end time)</p> </li> </ul> <p>The
     * details are in JSON format. An example is shown in the Examples section
     * below.</p>
     */
    inline GetProtectionStatusResult& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>If you have more objects than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more objects, submit another
     * <code>GetProtectionStatus</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p> <p>AWS SDKs provide auto-pagination that identify
     * <code>NextToken</code> in a response and make subsequent request calls
     * automatically on your behalf. However, this feature is not supported by
     * <code>GetProtectionStatus</code>. You must submit subsequent requests with
     * <code>NextToken</code> using your own processes. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more objects, submit another
     * <code>GetProtectionStatus</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p> <p>AWS SDKs provide auto-pagination that identify
     * <code>NextToken</code> in a response and make subsequent request calls
     * automatically on your behalf. However, this feature is not supported by
     * <code>GetProtectionStatus</code>. You must submit subsequent requests with
     * <code>NextToken</code> using your own processes. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more objects, submit another
     * <code>GetProtectionStatus</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p> <p>AWS SDKs provide auto-pagination that identify
     * <code>NextToken</code> in a response and make subsequent request calls
     * automatically on your behalf. However, this feature is not supported by
     * <code>GetProtectionStatus</code>. You must submit subsequent requests with
     * <code>NextToken</code> using your own processes. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more objects, submit another
     * <code>GetProtectionStatus</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p> <p>AWS SDKs provide auto-pagination that identify
     * <code>NextToken</code> in a response and make subsequent request calls
     * automatically on your behalf. However, this feature is not supported by
     * <code>GetProtectionStatus</code>. You must submit subsequent requests with
     * <code>NextToken</code> using your own processes. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more objects, submit another
     * <code>GetProtectionStatus</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p> <p>AWS SDKs provide auto-pagination that identify
     * <code>NextToken</code> in a response and make subsequent request calls
     * automatically on your behalf. However, this feature is not supported by
     * <code>GetProtectionStatus</code>. You must submit subsequent requests with
     * <code>NextToken</code> using your own processes. </p>
     */
    inline GetProtectionStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more objects, submit another
     * <code>GetProtectionStatus</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p> <p>AWS SDKs provide auto-pagination that identify
     * <code>NextToken</code> in a response and make subsequent request calls
     * automatically on your behalf. However, this feature is not supported by
     * <code>GetProtectionStatus</code>. You must submit subsequent requests with
     * <code>NextToken</code> using your own processes. </p>
     */
    inline GetProtectionStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more objects, submit another
     * <code>GetProtectionStatus</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p> <p>AWS SDKs provide auto-pagination that identify
     * <code>NextToken</code> in a response and make subsequent request calls
     * automatically on your behalf. However, this feature is not supported by
     * <code>GetProtectionStatus</code>. You must submit subsequent requests with
     * <code>NextToken</code> using your own processes. </p>
     */
    inline GetProtectionStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_adminAccountId;

    SecurityServiceType m_serviceType;

    Aws::String m_data;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
