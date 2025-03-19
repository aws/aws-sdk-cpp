/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/QuickConnect.h>
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
namespace Connect
{
namespace Model
{
  class DescribeQuickConnectResult
  {
  public:
    AWS_CONNECT_API DescribeQuickConnectResult() = default;
    AWS_CONNECT_API DescribeQuickConnectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeQuickConnectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the quick connect.</p>
     */
    inline const QuickConnect& GetQuickConnect() const { return m_quickConnect; }
    template<typename QuickConnectT = QuickConnect>
    void SetQuickConnect(QuickConnectT&& value) { m_quickConnectHasBeenSet = true; m_quickConnect = std::forward<QuickConnectT>(value); }
    template<typename QuickConnectT = QuickConnect>
    DescribeQuickConnectResult& WithQuickConnect(QuickConnectT&& value) { SetQuickConnect(std::forward<QuickConnectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeQuickConnectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QuickConnect m_quickConnect;
    bool m_quickConnectHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
