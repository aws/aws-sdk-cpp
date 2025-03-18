/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/model/SatelliteListItem.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListSatellitesResponse">AWS
   * API Reference</a></p>
   */
  class ListSatellitesResult
  {
  public:
    AWS_GROUNDSTATION_API ListSatellitesResult() = default;
    AWS_GROUNDSTATION_API ListSatellitesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListSatellitesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * satellites.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSatellitesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of satellites.</p>
     */
    inline const Aws::Vector<SatelliteListItem>& GetSatellites() const { return m_satellites; }
    template<typename SatellitesT = Aws::Vector<SatelliteListItem>>
    void SetSatellites(SatellitesT&& value) { m_satellitesHasBeenSet = true; m_satellites = std::forward<SatellitesT>(value); }
    template<typename SatellitesT = Aws::Vector<SatelliteListItem>>
    ListSatellitesResult& WithSatellites(SatellitesT&& value) { SetSatellites(std::forward<SatellitesT>(value)); return *this;}
    template<typename SatellitesT = SatelliteListItem>
    ListSatellitesResult& AddSatellites(SatellitesT&& value) { m_satellitesHasBeenSet = true; m_satellites.emplace_back(std::forward<SatellitesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSatellitesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SatelliteListItem> m_satellites;
    bool m_satellitesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
