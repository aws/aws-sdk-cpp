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
  class UpdateMitigationActionResult
  {
  public:
    AWS_IOT_API UpdateMitigationActionResult() = default;
    AWS_IOT_API UpdateMitigationActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateMitigationActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the new mitigation action.</p>
     */
    inline const Aws::String& GetActionArn() const { return m_actionArn; }
    template<typename ActionArnT = Aws::String>
    void SetActionArn(ActionArnT&& value) { m_actionArnHasBeenSet = true; m_actionArn = std::forward<ActionArnT>(value); }
    template<typename ActionArnT = Aws::String>
    UpdateMitigationActionResult& WithActionArn(ActionArnT&& value) { SetActionArn(std::forward<ActionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the mitigation action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    UpdateMitigationActionResult& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateMitigationActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionArn;
    bool m_actionArnHasBeenSet = false;

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
