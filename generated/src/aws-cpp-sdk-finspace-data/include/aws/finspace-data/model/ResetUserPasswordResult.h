/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{
  class ResetUserPasswordResult
  {
  public:
    AWS_FINSPACEDATA_API ResetUserPasswordResult();
    AWS_FINSPACEDATA_API ResetUserPasswordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API ResetUserPasswordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the user that a new password is generated for.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier of the user that a new password is generated for.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The unique identifier of the user that a new password is generated for.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The unique identifier of the user that a new password is generated for.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The unique identifier of the user that a new password is generated for.</p>
     */
    inline ResetUserPasswordResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier of the user that a new password is generated for.</p>
     */
    inline ResetUserPasswordResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the user that a new password is generated for.</p>
     */
    inline ResetUserPasswordResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>A randomly generated temporary password for the requested user account. This
     * password expires in 7 days.</p>
     */
    inline const Aws::String& GetTemporaryPassword() const{ return m_temporaryPassword; }

    /**
     * <p>A randomly generated temporary password for the requested user account. This
     * password expires in 7 days.</p>
     */
    inline void SetTemporaryPassword(const Aws::String& value) { m_temporaryPassword = value; }

    /**
     * <p>A randomly generated temporary password for the requested user account. This
     * password expires in 7 days.</p>
     */
    inline void SetTemporaryPassword(Aws::String&& value) { m_temporaryPassword = std::move(value); }

    /**
     * <p>A randomly generated temporary password for the requested user account. This
     * password expires in 7 days.</p>
     */
    inline void SetTemporaryPassword(const char* value) { m_temporaryPassword.assign(value); }

    /**
     * <p>A randomly generated temporary password for the requested user account. This
     * password expires in 7 days.</p>
     */
    inline ResetUserPasswordResult& WithTemporaryPassword(const Aws::String& value) { SetTemporaryPassword(value); return *this;}

    /**
     * <p>A randomly generated temporary password for the requested user account. This
     * password expires in 7 days.</p>
     */
    inline ResetUserPasswordResult& WithTemporaryPassword(Aws::String&& value) { SetTemporaryPassword(std::move(value)); return *this;}

    /**
     * <p>A randomly generated temporary password for the requested user account. This
     * password expires in 7 days.</p>
     */
    inline ResetUserPasswordResult& WithTemporaryPassword(const char* value) { SetTemporaryPassword(value); return *this;}

  private:

    Aws::String m_userId;

    Aws::String m_temporaryPassword;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
