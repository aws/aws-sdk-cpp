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
  class DeleteCommandResult
  {
  public:
    AWS_IOT_API DeleteCommandResult() = default;
    AWS_IOT_API DeleteCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DeleteCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status code for the command deletion request. The status code is in the
     * 200 range for a successful request.</p> <ul> <li> <p>If the command hasn't been
     * deprecated, or has been deprecated for a duration that is shorter than the
     * maximum time out duration of 12 hours, when calling the
     * <code>DeleteCommand</code> request, the deletion will be scheduled and a 202
     * status code will be returned. While the command is being deleted, it will be in
     * a <code>pendingDeletion</code> state. Once the time out duration has been
     * reached, the command will be permanently removed from your account.</p> </li>
     * <li> <p>If the command has been deprecated for a duration that is longer than
     * the maximum time out duration of 12 hours, when calling the
     * <code>DeleteCommand</code> request, the command will be deleted immediately and
     * a 204 status code will be returned.</p> </li> </ul>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline DeleteCommandResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteCommandResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
