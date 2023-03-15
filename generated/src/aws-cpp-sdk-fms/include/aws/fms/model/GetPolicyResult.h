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
  class GetPolicyResult
  {
  public:
    AWS_FMS_API GetPolicyResult();
    AWS_FMS_API GetPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified Firewall Manager policy.</p>
     */
    inline const Policy& GetPolicy() const{ return m_policy; }

    /**
     * <p>Information about the specified Firewall Manager policy.</p>
     */
    inline void SetPolicy(const Policy& value) { m_policy = value; }

    /**
     * <p>Information about the specified Firewall Manager policy.</p>
     */
    inline void SetPolicy(Policy&& value) { m_policy = std::move(value); }

    /**
     * <p>Information about the specified Firewall Manager policy.</p>
     */
    inline GetPolicyResult& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}

    /**
     * <p>Information about the specified Firewall Manager policy.</p>
     */
    inline GetPolicyResult& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline GetPolicyResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline GetPolicyResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline GetPolicyResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Policy m_policy;

    Aws::String m_policyArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
