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


    
    inline const Aws::Vector<SipMediaApplication>& GetSipMediaApplications() const{ return m_sipMediaApplications; }

    
    inline void SetSipMediaApplications(const Aws::Vector<SipMediaApplication>& value) { m_sipMediaApplications = value; }

    
    inline void SetSipMediaApplications(Aws::Vector<SipMediaApplication>&& value) { m_sipMediaApplications = std::move(value); }

    
    inline ListSipMediaApplicationsResult& WithSipMediaApplications(const Aws::Vector<SipMediaApplication>& value) { SetSipMediaApplications(value); return *this;}

    
    inline ListSipMediaApplicationsResult& WithSipMediaApplications(Aws::Vector<SipMediaApplication>&& value) { SetSipMediaApplications(std::move(value)); return *this;}

    
    inline ListSipMediaApplicationsResult& AddSipMediaApplications(const SipMediaApplication& value) { m_sipMediaApplications.push_back(value); return *this; }

    
    inline ListSipMediaApplicationsResult& AddSipMediaApplications(SipMediaApplication&& value) { m_sipMediaApplications.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListSipMediaApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListSipMediaApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListSipMediaApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SipMediaApplication> m_sipMediaApplications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
