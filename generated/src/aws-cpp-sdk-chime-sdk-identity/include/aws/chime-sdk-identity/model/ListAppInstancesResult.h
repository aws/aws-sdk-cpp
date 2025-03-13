/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/AppInstanceSummary.h>
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
  class ListAppInstancesResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API ListAppInstancesResult() = default;
    AWS_CHIMESDKIDENTITY_API ListAppInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information for each <code>AppInstance</code>.</p>
     */
    inline const Aws::Vector<AppInstanceSummary>& GetAppInstances() const { return m_appInstances; }
    template<typename AppInstancesT = Aws::Vector<AppInstanceSummary>>
    void SetAppInstances(AppInstancesT&& value) { m_appInstancesHasBeenSet = true; m_appInstances = std::forward<AppInstancesT>(value); }
    template<typename AppInstancesT = Aws::Vector<AppInstanceSummary>>
    ListAppInstancesResult& WithAppInstances(AppInstancesT&& value) { SetAppInstances(std::forward<AppInstancesT>(value)); return *this;}
    template<typename AppInstancesT = AppInstanceSummary>
    ListAppInstancesResult& AddAppInstances(AppInstancesT&& value) { m_appInstancesHasBeenSet = true; m_appInstances.emplace_back(std::forward<AppInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API requests until the maximum number of
     * <code>AppInstance</code>s is reached.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppInstanceSummary> m_appInstances;
    bool m_appInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
