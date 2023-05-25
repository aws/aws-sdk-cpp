/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/SipMediaApplication.h>
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
  class UpdateSipMediaApplicationResult
  {
  public:
    AWS_CHIME_API UpdateSipMediaApplicationResult();
    AWS_CHIME_API UpdateSipMediaApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API UpdateSipMediaApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated SIP media application details.</p>
     */
    inline const SipMediaApplication& GetSipMediaApplication() const{ return m_sipMediaApplication; }

    /**
     * <p>The updated SIP media application details.</p>
     */
    inline void SetSipMediaApplication(const SipMediaApplication& value) { m_sipMediaApplication = value; }

    /**
     * <p>The updated SIP media application details.</p>
     */
    inline void SetSipMediaApplication(SipMediaApplication&& value) { m_sipMediaApplication = std::move(value); }

    /**
     * <p>The updated SIP media application details.</p>
     */
    inline UpdateSipMediaApplicationResult& WithSipMediaApplication(const SipMediaApplication& value) { SetSipMediaApplication(value); return *this;}

    /**
     * <p>The updated SIP media application details.</p>
     */
    inline UpdateSipMediaApplicationResult& WithSipMediaApplication(SipMediaApplication&& value) { SetSipMediaApplication(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSipMediaApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSipMediaApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSipMediaApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SipMediaApplication m_sipMediaApplication;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
