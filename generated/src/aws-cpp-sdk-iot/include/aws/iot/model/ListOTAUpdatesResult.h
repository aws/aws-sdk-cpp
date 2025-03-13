/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/OTAUpdateSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListOTAUpdatesResult
  {
  public:
    AWS_IOT_API ListOTAUpdatesResult() = default;
    AWS_IOT_API ListOTAUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListOTAUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of OTA update jobs.</p>
     */
    inline const Aws::Vector<OTAUpdateSummary>& GetOtaUpdates() const { return m_otaUpdates; }
    template<typename OtaUpdatesT = Aws::Vector<OTAUpdateSummary>>
    void SetOtaUpdates(OtaUpdatesT&& value) { m_otaUpdatesHasBeenSet = true; m_otaUpdates = std::forward<OtaUpdatesT>(value); }
    template<typename OtaUpdatesT = Aws::Vector<OTAUpdateSummary>>
    ListOTAUpdatesResult& WithOtaUpdates(OtaUpdatesT&& value) { SetOtaUpdates(std::forward<OtaUpdatesT>(value)); return *this;}
    template<typename OtaUpdatesT = OTAUpdateSummary>
    ListOTAUpdatesResult& AddOtaUpdates(OtaUpdatesT&& value) { m_otaUpdatesHasBeenSet = true; m_otaUpdates.emplace_back(std::forward<OtaUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to use to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOTAUpdatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOTAUpdatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OTAUpdateSummary> m_otaUpdates;
    bool m_otaUpdatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
