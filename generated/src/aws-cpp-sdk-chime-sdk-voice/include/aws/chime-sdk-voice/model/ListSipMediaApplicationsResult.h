/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/SipMediaApplication.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class ListSipMediaApplicationsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListSipMediaApplicationsResult();
    AWS_CHIMESDKVOICE_API ListSipMediaApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListSipMediaApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of SIP media applications and application details.</p>
     */
    inline const Aws::Vector<SipMediaApplication>& GetSipMediaApplications() const{ return m_sipMediaApplications; }

    /**
     * <p>The list of SIP media applications and application details.</p>
     */
    inline void SetSipMediaApplications(const Aws::Vector<SipMediaApplication>& value) { m_sipMediaApplications = value; }

    /**
     * <p>The list of SIP media applications and application details.</p>
     */
    inline void SetSipMediaApplications(Aws::Vector<SipMediaApplication>&& value) { m_sipMediaApplications = std::move(value); }

    /**
     * <p>The list of SIP media applications and application details.</p>
     */
    inline ListSipMediaApplicationsResult& WithSipMediaApplications(const Aws::Vector<SipMediaApplication>& value) { SetSipMediaApplications(value); return *this;}

    /**
     * <p>The list of SIP media applications and application details.</p>
     */
    inline ListSipMediaApplicationsResult& WithSipMediaApplications(Aws::Vector<SipMediaApplication>&& value) { SetSipMediaApplications(std::move(value)); return *this;}

    /**
     * <p>The list of SIP media applications and application details.</p>
     */
    inline ListSipMediaApplicationsResult& AddSipMediaApplications(const SipMediaApplication& value) { m_sipMediaApplications.push_back(value); return *this; }

    /**
     * <p>The list of SIP media applications and application details.</p>
     */
    inline ListSipMediaApplicationsResult& AddSipMediaApplications(SipMediaApplication&& value) { m_sipMediaApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListSipMediaApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListSipMediaApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListSipMediaApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSipMediaApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSipMediaApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSipMediaApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SipMediaApplication> m_sipMediaApplications;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
