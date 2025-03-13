/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class UpdateScheduledAuditResult
  {
  public:
    AWS_IOT_API UpdateScheduledAuditResult() = default;
    AWS_IOT_API UpdateScheduledAuditResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateScheduledAuditResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditArn() const { return m_scheduledAuditArn; }
    template<typename ScheduledAuditArnT = Aws::String>
    void SetScheduledAuditArn(ScheduledAuditArnT&& value) { m_scheduledAuditArnHasBeenSet = true; m_scheduledAuditArn = std::forward<ScheduledAuditArnT>(value); }
    template<typename ScheduledAuditArnT = Aws::String>
    UpdateScheduledAuditResult& WithScheduledAuditArn(ScheduledAuditArnT&& value) { SetScheduledAuditArn(std::forward<ScheduledAuditArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateScheduledAuditResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduledAuditArn;
    bool m_scheduledAuditArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
