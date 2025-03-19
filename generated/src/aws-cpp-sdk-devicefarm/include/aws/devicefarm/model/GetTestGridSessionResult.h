/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/TestGridSession.h>
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
namespace DeviceFarm
{
namespace Model
{
  class GetTestGridSessionResult
  {
  public:
    AWS_DEVICEFARM_API GetTestGridSessionResult() = default;
    AWS_DEVICEFARM_API GetTestGridSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetTestGridSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a>TestGridSession</a> that was requested.</p>
     */
    inline const TestGridSession& GetTestGridSession() const { return m_testGridSession; }
    template<typename TestGridSessionT = TestGridSession>
    void SetTestGridSession(TestGridSessionT&& value) { m_testGridSessionHasBeenSet = true; m_testGridSession = std::forward<TestGridSessionT>(value); }
    template<typename TestGridSessionT = TestGridSession>
    GetTestGridSessionResult& WithTestGridSession(TestGridSessionT&& value) { SetTestGridSession(std::forward<TestGridSessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTestGridSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TestGridSession m_testGridSession;
    bool m_testGridSessionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
