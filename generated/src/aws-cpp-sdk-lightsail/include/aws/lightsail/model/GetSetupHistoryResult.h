/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/SetupHistory.h>
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
namespace Lightsail
{
namespace Model
{
  class GetSetupHistoryResult
  {
  public:
    AWS_LIGHTSAIL_API GetSetupHistoryResult() = default;
    AWS_LIGHTSAIL_API GetSetupHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetSetupHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The historical information that's returned.</p>
     */
    inline const Aws::Vector<SetupHistory>& GetSetupHistory() const { return m_setupHistory; }
    template<typename SetupHistoryT = Aws::Vector<SetupHistory>>
    void SetSetupHistory(SetupHistoryT&& value) { m_setupHistoryHasBeenSet = true; m_setupHistory = std::forward<SetupHistoryT>(value); }
    template<typename SetupHistoryT = Aws::Vector<SetupHistory>>
    GetSetupHistoryResult& WithSetupHistory(SetupHistoryT&& value) { SetSetupHistory(std::forward<SetupHistoryT>(value)); return *this;}
    template<typename SetupHistoryT = SetupHistory>
    GetSetupHistoryResult& AddSetupHistory(SetupHistoryT&& value) { m_setupHistoryHasBeenSet = true; m_setupHistory.emplace_back(std::forward<SetupHistoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetSetupHistory</code>
     * request and specify the next page token using the pageToken parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetSetupHistoryResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSetupHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SetupHistory> m_setupHistory;
    bool m_setupHistoryHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
