/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-identity/model/AppInstanceAdminSummary.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class ListAppInstanceAdminsResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API ListAppInstanceAdminsResult() = default;
    AWS_CHIMESDKIDENTITY_API ListAppInstanceAdminsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstanceAdminsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const { return m_appInstanceArn; }
    template<typename AppInstanceArnT = Aws::String>
    void SetAppInstanceArn(AppInstanceArnT&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::forward<AppInstanceArnT>(value); }
    template<typename AppInstanceArnT = Aws::String>
    ListAppInstanceAdminsResult& WithAppInstanceArn(AppInstanceArnT&& value) { SetAppInstanceArn(std::forward<AppInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information for each administrator.</p>
     */
    inline const Aws::Vector<AppInstanceAdminSummary>& GetAppInstanceAdmins() const { return m_appInstanceAdmins; }
    template<typename AppInstanceAdminsT = Aws::Vector<AppInstanceAdminSummary>>
    void SetAppInstanceAdmins(AppInstanceAdminsT&& value) { m_appInstanceAdminsHasBeenSet = true; m_appInstanceAdmins = std::forward<AppInstanceAdminsT>(value); }
    template<typename AppInstanceAdminsT = Aws::Vector<AppInstanceAdminSummary>>
    ListAppInstanceAdminsResult& WithAppInstanceAdmins(AppInstanceAdminsT&& value) { SetAppInstanceAdmins(std::forward<AppInstanceAdminsT>(value)); return *this;}
    template<typename AppInstanceAdminsT = AppInstanceAdminSummary>
    ListAppInstanceAdminsResult& AddAppInstanceAdmins(AppInstanceAdminsT&& value) { m_appInstanceAdminsHasBeenSet = true; m_appInstanceAdmins.emplace_back(std::forward<AppInstanceAdminsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned from previous API requests until the number of
     * administrators is reached.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppInstanceAdminsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppInstanceAdminsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::Vector<AppInstanceAdminSummary> m_appInstanceAdmins;
    bool m_appInstanceAdminsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
