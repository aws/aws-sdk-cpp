/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{
  class DeleteTokenResult
  {
  public:
    AWS_AMPLIFYBACKEND_API DeleteTokenResult();
    AWS_AMPLIFYBACKEND_API DeleteTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API DeleteTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the request succeeded or failed.</p>
     */
    inline bool GetIsSuccess() const{ return m_isSuccess; }

    /**
     * <p>Indicates whether the request succeeded or failed.</p>
     */
    inline void SetIsSuccess(bool value) { m_isSuccess = value; }

    /**
     * <p>Indicates whether the request succeeded or failed.</p>
     */
    inline DeleteTokenResult& WithIsSuccess(bool value) { SetIsSuccess(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_isSuccess;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
