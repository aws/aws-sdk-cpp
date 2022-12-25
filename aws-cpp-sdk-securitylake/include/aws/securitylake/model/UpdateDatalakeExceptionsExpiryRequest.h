/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class UpdateDatalakeExceptionsExpiryRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API UpdateDatalakeExceptionsExpiryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatalakeExceptionsExpiry"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The time-to-live (TTL) for the exception message to remain.</p>
     */
    inline long long GetExceptionMessageExpiry() const{ return m_exceptionMessageExpiry; }

    /**
     * <p>The time-to-live (TTL) for the exception message to remain.</p>
     */
    inline bool ExceptionMessageExpiryHasBeenSet() const { return m_exceptionMessageExpiryHasBeenSet; }

    /**
     * <p>The time-to-live (TTL) for the exception message to remain.</p>
     */
    inline void SetExceptionMessageExpiry(long long value) { m_exceptionMessageExpiryHasBeenSet = true; m_exceptionMessageExpiry = value; }

    /**
     * <p>The time-to-live (TTL) for the exception message to remain.</p>
     */
    inline UpdateDatalakeExceptionsExpiryRequest& WithExceptionMessageExpiry(long long value) { SetExceptionMessageExpiry(value); return *this;}

  private:

    long long m_exceptionMessageExpiry;
    bool m_exceptionMessageExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
