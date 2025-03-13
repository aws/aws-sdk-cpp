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
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateVaultLockOutput">AWS
   * API Reference</a></p>
   */
  class InitiateVaultLockResult
  {
  public:
    AWS_GLACIER_API InitiateVaultLockResult() = default;
    AWS_GLACIER_API InitiateVaultLockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API InitiateVaultLockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The lock ID, which is used to complete the vault locking process.</p>
     */
    inline const Aws::String& GetLockId() const { return m_lockId; }
    template<typename LockIdT = Aws::String>
    void SetLockId(LockIdT&& value) { m_lockIdHasBeenSet = true; m_lockId = std::forward<LockIdT>(value); }
    template<typename LockIdT = Aws::String>
    InitiateVaultLockResult& WithLockId(LockIdT&& value) { SetLockId(std::forward<LockIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InitiateVaultLockResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lockId;
    bool m_lockIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
