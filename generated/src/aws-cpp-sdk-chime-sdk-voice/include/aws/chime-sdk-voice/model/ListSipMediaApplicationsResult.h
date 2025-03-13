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
    AWS_CHIMESDKVOICE_API ListSipMediaApplicationsResult() = default;
    AWS_CHIMESDKVOICE_API ListSipMediaApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListSipMediaApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of SIP media applications and application details.</p>
     */
    inline const Aws::Vector<SipMediaApplication>& GetSipMediaApplications() const { return m_sipMediaApplications; }
    template<typename SipMediaApplicationsT = Aws::Vector<SipMediaApplication>>
    void SetSipMediaApplications(SipMediaApplicationsT&& value) { m_sipMediaApplicationsHasBeenSet = true; m_sipMediaApplications = std::forward<SipMediaApplicationsT>(value); }
    template<typename SipMediaApplicationsT = Aws::Vector<SipMediaApplication>>
    ListSipMediaApplicationsResult& WithSipMediaApplications(SipMediaApplicationsT&& value) { SetSipMediaApplications(std::forward<SipMediaApplicationsT>(value)); return *this;}
    template<typename SipMediaApplicationsT = SipMediaApplication>
    ListSipMediaApplicationsResult& AddSipMediaApplications(SipMediaApplicationsT&& value) { m_sipMediaApplicationsHasBeenSet = true; m_sipMediaApplications.emplace_back(std::forward<SipMediaApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSipMediaApplicationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSipMediaApplicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SipMediaApplication> m_sipMediaApplications;
    bool m_sipMediaApplicationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
