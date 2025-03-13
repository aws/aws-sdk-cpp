/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ListDevicePositionsResponseEntry.h>
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
namespace LocationService
{
namespace Model
{
  class ListDevicePositionsResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListDevicePositionsResult() = default;
    AWS_LOCATIONSERVICE_API ListDevicePositionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListDevicePositionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains details about each device's last known position.</p>
     */
    inline const Aws::Vector<ListDevicePositionsResponseEntry>& GetEntries() const { return m_entries; }
    template<typename EntriesT = Aws::Vector<ListDevicePositionsResponseEntry>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<ListDevicePositionsResponseEntry>>
    ListDevicePositionsResult& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = ListDevicePositionsResponseEntry>
    ListDevicePositionsResult& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDevicePositionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDevicePositionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListDevicePositionsResponseEntry> m_entries;
    bool m_entriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
