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


    ///@{
    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline GetVaultLockResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline GetVaultLockResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline GetVaultLockResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the vault lock. <code>InProgress</code> or
     * <code>Locked</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline void SetState(const Aws::String& value) { m_state = value; }
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }
    inline void SetState(const char* value) { m_state.assign(value); }
    inline GetVaultLockResult& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline GetVaultLockResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline GetVaultLockResult& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC date and time at which the lock ID expires. This value can be
     * <code>null</code> if the vault lock is in a <code>Locked</code> state.</p>
     */
    inline const Aws::String& GetExpirationDate() const{ return m_expirationDate; }
    inline void SetExpirationDate(const Aws::String& value) { m_expirationDate = value; }
    inline void SetExpirationDate(Aws::String&& value) { m_expirationDate = std::move(value); }
    inline void SetExpirationDate(const char* value) { m_expirationDate.assign(value); }
    inline GetVaultLockResult& WithExpirationDate(const Aws::String& value) { SetExpirationDate(value); return *this;}
    inline GetVaultLockResult& WithExpirationDate(Aws::String&& value) { SetExpirationDate(std::move(value)); return *this;}
    inline GetVaultLockResult& WithExpirationDate(const char* value) { SetExpirationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC date and time at which the vault lock was put into the
     * <code>InProgress</code> state.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDate.assign(value); }
    inline GetVaultLockResult& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline GetVaultLockResult& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline GetVaultLockResult& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetVaultLockResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetVaultLockResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetVaultLockResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_policy;

    Aws::String m_state;

    Aws::String m_expirationDate;

    Aws::String m_creationDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
