/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/EphemerisItem.h>
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
  class ListEphemeridesResult
  {
  public:
    AWS_GROUNDSTATION_API ListEphemeridesResult() = default;
    AWS_GROUNDSTATION_API ListEphemeridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListEphemeridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of ephemerides.</p>
     */
    inline const Aws::Vector<EphemerisItem>& GetEphemerides() const { return m_ephemerides; }
    template<typename EphemeridesT = Aws::Vector<EphemerisItem>>
    void SetEphemerides(EphemeridesT&& value) { m_ephemeridesHasBeenSet = true; m_ephemerides = std::forward<EphemeridesT>(value); }
    template<typename EphemeridesT = Aws::Vector<EphemerisItem>>
    ListEphemeridesResult& WithEphemerides(EphemeridesT&& value) { SetEphemerides(std::forward<EphemeridesT>(value)); return *this;}
    template<typename EphemeridesT = EphemerisItem>
    ListEphemeridesResult& AddEphemerides(EphemeridesT&& value) { m_ephemeridesHasBeenSet = true; m_ephemerides.emplace_back(std::forward<EphemeridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEphemeridesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEphemeridesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EphemerisItem> m_ephemerides;
    bool m_ephemeridesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
