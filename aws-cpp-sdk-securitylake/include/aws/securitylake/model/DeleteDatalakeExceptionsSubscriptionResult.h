/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{
  class DeleteDatalakeExceptionsSubscriptionResult
  {
  public:
    AWS_SECURITYLAKE_API DeleteDatalakeExceptionsSubscriptionResult();
    AWS_SECURITYLAKE_API DeleteDatalakeExceptionsSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API DeleteDatalakeExceptionsSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Retrieves the status of the delete Security Lake operation for an account.
     * </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Retrieves the status of the delete Security Lake operation for an account.
     * </p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>Retrieves the status of the delete Security Lake operation for an account.
     * </p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>Retrieves the status of the delete Security Lake operation for an account.
     * </p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>Retrieves the status of the delete Security Lake operation for an account.
     * </p>
     */
    inline DeleteDatalakeExceptionsSubscriptionResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Retrieves the status of the delete Security Lake operation for an account.
     * </p>
     */
    inline DeleteDatalakeExceptionsSubscriptionResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Retrieves the status of the delete Security Lake operation for an account.
     * </p>
     */
    inline DeleteDatalakeExceptionsSubscriptionResult& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_status;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
