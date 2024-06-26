/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/PublicKey.h>
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
namespace ivsrealtime
{
namespace Model
{
  class GetPublicKeyResult
  {
  public:
    AWS_IVSREALTIME_API GetPublicKeyResult();
    AWS_IVSREALTIME_API GetPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API GetPublicKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The public key that is returned.</p>
     */
    inline const PublicKey& GetPublicKey() const{ return m_publicKey; }
    inline void SetPublicKey(const PublicKey& value) { m_publicKey = value; }
    inline void SetPublicKey(PublicKey&& value) { m_publicKey = std::move(value); }
    inline GetPublicKeyResult& WithPublicKey(const PublicKey& value) { SetPublicKey(value); return *this;}
    inline GetPublicKeyResult& WithPublicKey(PublicKey&& value) { SetPublicKey(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPublicKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPublicKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPublicKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PublicKey m_publicKey;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
