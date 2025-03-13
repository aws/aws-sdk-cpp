/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
  class CreateQuickConnectResult
  {
  public:
    AWS_CONNECT_API CreateQuickConnectResult() = default;
    AWS_CONNECT_API CreateQuickConnectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateQuickConnectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the quick connect. </p>
     */
    inline const Aws::String& GetQuickConnectARN() const { return m_quickConnectARN; }
    template<typename QuickConnectARNT = Aws::String>
    void SetQuickConnectARN(QuickConnectARNT&& value) { m_quickConnectARNHasBeenSet = true; m_quickConnectARN = std::forward<QuickConnectARNT>(value); }
    template<typename QuickConnectARNT = Aws::String>
    CreateQuickConnectResult& WithQuickConnectARN(QuickConnectARNT&& value) { SetQuickConnectARN(std::forward<QuickConnectARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the quick connect. </p>
     */
    inline const Aws::String& GetQuickConnectId() const { return m_quickConnectId; }
    template<typename QuickConnectIdT = Aws::String>
    void SetQuickConnectId(QuickConnectIdT&& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = std::forward<QuickConnectIdT>(value); }
    template<typename QuickConnectIdT = Aws::String>
    CreateQuickConnectResult& WithQuickConnectId(QuickConnectIdT&& value) { SetQuickConnectId(std::forward<QuickConnectIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateQuickConnectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_quickConnectARN;
    bool m_quickConnectARNHasBeenSet = false;

    Aws::String m_quickConnectId;
    bool m_quickConnectIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
