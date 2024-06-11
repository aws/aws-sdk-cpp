﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateVaultLockOutput">AWS
   * API Reference</a></p>
   */
  class InitiateVaultLockResult
  {
  public:
    AWS_GLACIER_API InitiateVaultLockResult();
    AWS_GLACIER_API InitiateVaultLockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API InitiateVaultLockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The lock ID, which is used to complete the vault locking process.</p>
     */
    inline const Aws::String& GetLockId() const{ return m_lockId; }
    inline void SetLockId(const Aws::String& value) { m_lockId = value; }
    inline void SetLockId(Aws::String&& value) { m_lockId = std::move(value); }
    inline void SetLockId(const char* value) { m_lockId.assign(value); }
    inline InitiateVaultLockResult& WithLockId(const Aws::String& value) { SetLockId(value); return *this;}
    inline InitiateVaultLockResult& WithLockId(Aws::String&& value) { SetLockId(std::move(value)); return *this;}
    inline InitiateVaultLockResult& WithLockId(const char* value) { SetLockId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InitiateVaultLockResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InitiateVaultLockResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InitiateVaultLockResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_lockId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
