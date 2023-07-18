/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{
  class GetSignedBluinsightsUrlResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetSignedBluinsightsUrlResult();
    AWS_MAINFRAMEMODERNIZATION_API GetSignedBluinsightsUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetSignedBluinsightsUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Single sign-on AWS Blu Insights URL.</p>
     */
    inline const Aws::String& GetSignedBiUrl() const{ return m_signedBiUrl; }

    /**
     * <p>Single sign-on AWS Blu Insights URL.</p>
     */
    inline void SetSignedBiUrl(const Aws::String& value) { m_signedBiUrl = value; }

    /**
     * <p>Single sign-on AWS Blu Insights URL.</p>
     */
    inline void SetSignedBiUrl(Aws::String&& value) { m_signedBiUrl = std::move(value); }

    /**
     * <p>Single sign-on AWS Blu Insights URL.</p>
     */
    inline void SetSignedBiUrl(const char* value) { m_signedBiUrl.assign(value); }

    /**
     * <p>Single sign-on AWS Blu Insights URL.</p>
     */
    inline GetSignedBluinsightsUrlResult& WithSignedBiUrl(const Aws::String& value) { SetSignedBiUrl(value); return *this;}

    /**
     * <p>Single sign-on AWS Blu Insights URL.</p>
     */
    inline GetSignedBluinsightsUrlResult& WithSignedBiUrl(Aws::String&& value) { SetSignedBiUrl(std::move(value)); return *this;}

    /**
     * <p>Single sign-on AWS Blu Insights URL.</p>
     */
    inline GetSignedBluinsightsUrlResult& WithSignedBiUrl(const char* value) { SetSignedBiUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSignedBluinsightsUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSignedBluinsightsUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSignedBluinsightsUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_signedBiUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
