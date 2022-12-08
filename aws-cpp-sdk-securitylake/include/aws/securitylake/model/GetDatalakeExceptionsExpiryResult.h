/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>

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
namespace SecurityLake
{
namespace Model
{
  class GetDatalakeExceptionsExpiryResult
  {
  public:
    AWS_SECURITYLAKE_API GetDatalakeExceptionsExpiryResult();
    AWS_SECURITYLAKE_API GetDatalakeExceptionsExpiryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDatalakeExceptionsExpiryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The expiration period and time-to-live (TTL).</p>
     */
    inline long long GetExceptionMessageExpiry() const{ return m_exceptionMessageExpiry; }

    /**
     * <p>The expiration period and time-to-live (TTL).</p>
     */
    inline void SetExceptionMessageExpiry(long long value) { m_exceptionMessageExpiry = value; }

    /**
     * <p>The expiration period and time-to-live (TTL).</p>
     */
    inline GetDatalakeExceptionsExpiryResult& WithExceptionMessageExpiry(long long value) { SetExceptionMessageExpiry(value); return *this;}

  private:

    long long m_exceptionMessageExpiry;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
