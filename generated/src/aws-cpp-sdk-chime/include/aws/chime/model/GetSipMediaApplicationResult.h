/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/SipMediaApplication.h>
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
  class GetSipMediaApplicationResult
  {
  public:
    AWS_CHIME_API GetSipMediaApplicationResult();
    AWS_CHIME_API GetSipMediaApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetSipMediaApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The SIP media application details.</p>
     */
    inline const SipMediaApplication& GetSipMediaApplication() const{ return m_sipMediaApplication; }

    /**
     * <p>The SIP media application details.</p>
     */
    inline void SetSipMediaApplication(const SipMediaApplication& value) { m_sipMediaApplication = value; }

    /**
     * <p>The SIP media application details.</p>
     */
    inline void SetSipMediaApplication(SipMediaApplication&& value) { m_sipMediaApplication = std::move(value); }

    /**
     * <p>The SIP media application details.</p>
     */
    inline GetSipMediaApplicationResult& WithSipMediaApplication(const SipMediaApplication& value) { SetSipMediaApplication(value); return *this;}

    /**
     * <p>The SIP media application details.</p>
     */
    inline GetSipMediaApplicationResult& WithSipMediaApplication(SipMediaApplication&& value) { SetSipMediaApplication(std::move(value)); return *this;}

  private:

    SipMediaApplication m_sipMediaApplication;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
