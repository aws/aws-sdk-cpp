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
  class CreateThreatEntitySetResult
  {
  public:
    AWS_GUARDDUTY_API CreateThreatEntitySetResult() = default;
    AWS_GUARDDUTY_API CreateThreatEntitySetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API CreateThreatEntitySetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID returned by GuardDuty after creation of the threat entity set
     * resource.</p>
     */
    inline const Aws::String& GetThreatEntitySetId() const { return m_threatEntitySetId; }
    template<typename ThreatEntitySetIdT = Aws::String>
    void SetThreatEntitySetId(ThreatEntitySetIdT&& value) { m_threatEntitySetIdHasBeenSet = true; m_threatEntitySetId = std::forward<ThreatEntitySetIdT>(value); }
    template<typename ThreatEntitySetIdT = Aws::String>
    CreateThreatEntitySetResult& WithThreatEntitySetId(ThreatEntitySetIdT&& value) { SetThreatEntitySetId(std::forward<ThreatEntitySetIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateThreatEntitySetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_threatEntitySetId;
    bool m_threatEntitySetIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
