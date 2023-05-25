/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/SipMediaApplicationCall.h>
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
namespace Chime
{
namespace Model
{
  class CreateSipMediaApplicationCallResult
  {
  public:
    AWS_CHIME_API CreateSipMediaApplicationCallResult();
    AWS_CHIME_API CreateSipMediaApplicationCallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateSipMediaApplicationCallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The actual call.</p>
     */
    inline const SipMediaApplicationCall& GetSipMediaApplicationCall() const{ return m_sipMediaApplicationCall; }

    /**
     * <p>The actual call.</p>
     */
    inline void SetSipMediaApplicationCall(const SipMediaApplicationCall& value) { m_sipMediaApplicationCall = value; }

    /**
     * <p>The actual call.</p>
     */
    inline void SetSipMediaApplicationCall(SipMediaApplicationCall&& value) { m_sipMediaApplicationCall = std::move(value); }

    /**
     * <p>The actual call.</p>
     */
    inline CreateSipMediaApplicationCallResult& WithSipMediaApplicationCall(const SipMediaApplicationCall& value) { SetSipMediaApplicationCall(value); return *this;}

    /**
     * <p>The actual call.</p>
     */
    inline CreateSipMediaApplicationCallResult& WithSipMediaApplicationCall(SipMediaApplicationCall&& value) { SetSipMediaApplicationCall(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSipMediaApplicationCallResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSipMediaApplicationCallResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationCallResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SipMediaApplicationCall m_sipMediaApplicationCall;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
