﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutPolicyResult
  {
  public:
    AWS_FMS_API PutPolicyResult();
    AWS_FMS_API PutPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API PutPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the Firewall Manager policy.</p>
     */
    inline const Policy& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Policy& value) { m_policy = value; }
    inline void SetPolicy(Policy&& value) { m_policy = std::move(value); }
    inline PutPolicyResult& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}
    inline PutPolicyResult& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }
    inline PutPolicyResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline PutPolicyResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline PutPolicyResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Policy m_policy;

    Aws::String m_policyArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
