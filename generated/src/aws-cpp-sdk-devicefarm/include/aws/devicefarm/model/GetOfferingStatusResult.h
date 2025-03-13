/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/OfferingStatus.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Returns the status result for a device offering.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetOfferingStatusResult">AWS
   * API Reference</a></p>
   */
  class GetOfferingStatusResult
  {
  public:
    AWS_DEVICEFARM_API GetOfferingStatusResult() = default;
    AWS_DEVICEFARM_API GetOfferingStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetOfferingStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline const Aws::Map<Aws::String, OfferingStatus>& GetCurrent() const { return m_current; }
    template<typename CurrentT = Aws::Map<Aws::String, OfferingStatus>>
    void SetCurrent(CurrentT&& value) { m_currentHasBeenSet = true; m_current = std::forward<CurrentT>(value); }
    template<typename CurrentT = Aws::Map<Aws::String, OfferingStatus>>
    GetOfferingStatusResult& WithCurrent(CurrentT&& value) { SetCurrent(std::forward<CurrentT>(value)); return *this;}
    template<typename CurrentKeyT = Aws::String, typename CurrentValueT = OfferingStatus>
    GetOfferingStatusResult& AddCurrent(CurrentKeyT&& key, CurrentValueT&& value) {
      m_currentHasBeenSet = true; m_current.emplace(std::forward<CurrentKeyT>(key), std::forward<CurrentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline const Aws::Map<Aws::String, OfferingStatus>& GetNextPeriod() const { return m_nextPeriod; }
    template<typename NextPeriodT = Aws::Map<Aws::String, OfferingStatus>>
    void SetNextPeriod(NextPeriodT&& value) { m_nextPeriodHasBeenSet = true; m_nextPeriod = std::forward<NextPeriodT>(value); }
    template<typename NextPeriodT = Aws::Map<Aws::String, OfferingStatus>>
    GetOfferingStatusResult& WithNextPeriod(NextPeriodT&& value) { SetNextPeriod(std::forward<NextPeriodT>(value)); return *this;}
    template<typename NextPeriodKeyT = Aws::String, typename NextPeriodValueT = OfferingStatus>
    GetOfferingStatusResult& AddNextPeriod(NextPeriodKeyT&& key, NextPeriodValueT&& value) {
      m_nextPeriodHasBeenSet = true; m_nextPeriod.emplace(std::forward<NextPeriodKeyT>(key), std::forward<NextPeriodValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetOfferingStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOfferingStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, OfferingStatus> m_current;
    bool m_currentHasBeenSet = false;

    Aws::Map<Aws::String, OfferingStatus> m_nextPeriod;
    bool m_nextPeriodHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
