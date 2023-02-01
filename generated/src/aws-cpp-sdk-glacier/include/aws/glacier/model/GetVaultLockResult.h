/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetVaultLockOutput">AWS
   * API Reference</a></p>
   */
  class GetVaultLockResult
  {
  public:
    AWS_GLACIER_API GetVaultLockResult();
    AWS_GLACIER_API GetVaultLockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API GetVaultLockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline GetVaultLockResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline GetVaultLockResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline GetVaultLockResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The state of the vault lock. <code>InProgress</code> or
     * <code>Locked</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the vault lock. <code>InProgress</code> or
     * <code>Locked</code>.</p>
     */
    inline void SetState(const Aws::String& value) { m_state = value; }

    /**
     * <p>The state of the vault lock. <code>InProgress</code> or
     * <code>Locked</code>.</p>
     */
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the vault lock. <code>InProgress</code> or
     * <code>Locked</code>.</p>
     */
    inline void SetState(const char* value) { m_state.assign(value); }

    /**
     * <p>The state of the vault lock. <code>InProgress</code> or
     * <code>Locked</code>.</p>
     */
    inline GetVaultLockResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the vault lock. <code>InProgress</code> or
     * <code>Locked</code>.</p>
     */
    inline GetVaultLockResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the vault lock. <code>InProgress</code> or
     * <code>Locked</code>.</p>
     */
    inline GetVaultLockResult& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The UTC date and time at which the lock ID expires. This value can be
     * <code>null</code> if the vault lock is in a <code>Locked</code> state.</p>
     */
    inline const Aws::String& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The UTC date and time at which the lock ID expires. This value can be
     * <code>null</code> if the vault lock is in a <code>Locked</code> state.</p>
     */
    inline void SetExpirationDate(const Aws::String& value) { m_expirationDate = value; }

    /**
     * <p>The UTC date and time at which the lock ID expires. This value can be
     * <code>null</code> if the vault lock is in a <code>Locked</code> state.</p>
     */
    inline void SetExpirationDate(Aws::String&& value) { m_expirationDate = std::move(value); }

    /**
     * <p>The UTC date and time at which the lock ID expires. This value can be
     * <code>null</code> if the vault lock is in a <code>Locked</code> state.</p>
     */
    inline void SetExpirationDate(const char* value) { m_expirationDate.assign(value); }

    /**
     * <p>The UTC date and time at which the lock ID expires. This value can be
     * <code>null</code> if the vault lock is in a <code>Locked</code> state.</p>
     */
    inline GetVaultLockResult& WithExpirationDate(const Aws::String& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The UTC date and time at which the lock ID expires. This value can be
     * <code>null</code> if the vault lock is in a <code>Locked</code> state.</p>
     */
    inline GetVaultLockResult& WithExpirationDate(Aws::String&& value) { SetExpirationDate(std::move(value)); return *this;}

    /**
     * <p>The UTC date and time at which the lock ID expires. This value can be
     * <code>null</code> if the vault lock is in a <code>Locked</code> state.</p>
     */
    inline GetVaultLockResult& WithExpirationDate(const char* value) { SetExpirationDate(value); return *this;}


    /**
     * <p>The UTC date and time at which the vault lock was put into the
     * <code>InProgress</code> state.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The UTC date and time at which the vault lock was put into the
     * <code>InProgress</code> state.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDate = value; }

    /**
     * <p>The UTC date and time at which the vault lock was put into the
     * <code>InProgress</code> state.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The UTC date and time at which the vault lock was put into the
     * <code>InProgress</code> state.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDate.assign(value); }

    /**
     * <p>The UTC date and time at which the vault lock was put into the
     * <code>InProgress</code> state.</p>
     */
    inline GetVaultLockResult& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UTC date and time at which the vault lock was put into the
     * <code>InProgress</code> state.</p>
     */
    inline GetVaultLockResult& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The UTC date and time at which the vault lock was put into the
     * <code>InProgress</code> state.</p>
     */
    inline GetVaultLockResult& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}

  private:

    Aws::String m_policy;

    Aws::String m_state;

    Aws::String m_expirationDate;

    Aws::String m_creationDate;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
