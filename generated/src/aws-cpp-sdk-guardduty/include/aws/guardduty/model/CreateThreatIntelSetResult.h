/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{
  class CreateThreatIntelSetResult
  {
  public:
    AWS_GUARDDUTY_API CreateThreatIntelSetResult() = default;
    AWS_GUARDDUTY_API CreateThreatIntelSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API CreateThreatIntelSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the ThreatIntelSet resource.</p>
     */
    inline const Aws::String& GetThreatIntelSetId() const { return m_threatIntelSetId; }
    template<typename ThreatIntelSetIdT = Aws::String>
    void SetThreatIntelSetId(ThreatIntelSetIdT&& value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId = std::forward<ThreatIntelSetIdT>(value); }
    template<typename ThreatIntelSetIdT = Aws::String>
    CreateThreatIntelSetResult& WithThreatIntelSetId(ThreatIntelSetIdT&& value) { SetThreatIntelSetId(std::forward<ThreatIntelSetIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateThreatIntelSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_threatIntelSetId;
    bool m_threatIntelSetIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
