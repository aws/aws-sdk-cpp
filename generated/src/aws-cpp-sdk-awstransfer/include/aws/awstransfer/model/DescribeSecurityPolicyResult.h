﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedSecurityPolicy.h>
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
namespace Transfer
{
namespace Model
{
  class DescribeSecurityPolicyResult
  {
  public:
    AWS_TRANSFER_API DescribeSecurityPolicyResult();
    AWS_TRANSFER_API DescribeSecurityPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeSecurityPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing the properties of the security policy.</p>
     */
    inline const DescribedSecurityPolicy& GetSecurityPolicy() const{ return m_securityPolicy; }
    inline void SetSecurityPolicy(const DescribedSecurityPolicy& value) { m_securityPolicy = value; }
    inline void SetSecurityPolicy(DescribedSecurityPolicy&& value) { m_securityPolicy = std::move(value); }
    inline DescribeSecurityPolicyResult& WithSecurityPolicy(const DescribedSecurityPolicy& value) { SetSecurityPolicy(value); return *this;}
    inline DescribeSecurityPolicyResult& WithSecurityPolicy(DescribedSecurityPolicy&& value) { SetSecurityPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSecurityPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSecurityPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSecurityPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DescribedSecurityPolicy m_securityPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
