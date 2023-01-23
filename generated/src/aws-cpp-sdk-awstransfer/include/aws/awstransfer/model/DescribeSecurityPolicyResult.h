/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedSecurityPolicy.h>
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


    /**
     * <p>An array containing the properties of the security policy.</p>
     */
    inline const DescribedSecurityPolicy& GetSecurityPolicy() const{ return m_securityPolicy; }

    /**
     * <p>An array containing the properties of the security policy.</p>
     */
    inline void SetSecurityPolicy(const DescribedSecurityPolicy& value) { m_securityPolicy = value; }

    /**
     * <p>An array containing the properties of the security policy.</p>
     */
    inline void SetSecurityPolicy(DescribedSecurityPolicy&& value) { m_securityPolicy = std::move(value); }

    /**
     * <p>An array containing the properties of the security policy.</p>
     */
    inline DescribeSecurityPolicyResult& WithSecurityPolicy(const DescribedSecurityPolicy& value) { SetSecurityPolicy(value); return *this;}

    /**
     * <p>An array containing the properties of the security policy.</p>
     */
    inline DescribeSecurityPolicyResult& WithSecurityPolicy(DescribedSecurityPolicy&& value) { SetSecurityPolicy(std::move(value)); return *this;}

  private:

    DescribedSecurityPolicy m_securityPolicy;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
