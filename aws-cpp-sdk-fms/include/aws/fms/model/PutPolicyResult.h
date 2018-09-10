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
#include <aws/fms/model/Policy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_FMS_API PutPolicyResult
  {
  public:
    PutPolicyResult();
    PutPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the AWS Firewall Manager policy that was created.</p>
     */
    inline const Policy& GetPolicy() const{ return m_policy; }

    /**
     * <p>The details of the AWS Firewall Manager policy that was created.</p>
     */
    inline void SetPolicy(const Policy& value) { m_policy = value; }

    /**
     * <p>The details of the AWS Firewall Manager policy that was created.</p>
     */
    inline void SetPolicy(Policy&& value) { m_policy = std::move(value); }

    /**
     * <p>The details of the AWS Firewall Manager policy that was created.</p>
     */
    inline PutPolicyResult& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}

    /**
     * <p>The details of the AWS Firewall Manager policy that was created.</p>
     */
    inline PutPolicyResult& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the policy that was created.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy that was created.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy that was created.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy that was created.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy that was created.</p>
     */
    inline PutPolicyResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy that was created.</p>
     */
    inline PutPolicyResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy that was created.</p>
     */
    inline PutPolicyResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

  private:

    Policy m_policy;

    Aws::String m_policyArn;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
