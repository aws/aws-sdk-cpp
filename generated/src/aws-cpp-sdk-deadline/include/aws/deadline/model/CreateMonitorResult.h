/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class CreateMonitorResult
  {
  public:
    AWS_DEADLINE_API CreateMonitorResult() = default;
    AWS_DEADLINE_API CreateMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the monitor.</p>
     */
    inline const Aws::String& GetMonitorId() const { return m_monitorId; }
    template<typename MonitorIdT = Aws::String>
    void SetMonitorId(MonitorIdT&& value) { m_monitorIdHasBeenSet = true; m_monitorId = std::forward<MonitorIdT>(value); }
    template<typename MonitorIdT = Aws::String>
    CreateMonitorResult& WithMonitorId(MonitorIdT&& value) { SetMonitorId(std::forward<MonitorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that IAM Identity Center assigns to the
     * monitor.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const { return m_identityCenterApplicationArn; }
    template<typename IdentityCenterApplicationArnT = Aws::String>
    void SetIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = std::forward<IdentityCenterApplicationArnT>(value); }
    template<typename IdentityCenterApplicationArnT = Aws::String>
    CreateMonitorResult& WithIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) { SetIdentityCenterApplicationArn(std::forward<IdentityCenterApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMonitorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorId;
    bool m_monitorIdHasBeenSet = false;

    Aws::String m_identityCenterApplicationArn;
    bool m_identityCenterApplicationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
