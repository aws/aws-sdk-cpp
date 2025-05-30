﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/TestGridProject.h>
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
  class GetTestGridProjectResult
  {
  public:
    AWS_DEVICEFARM_API GetTestGridProjectResult() = default;
    AWS_DEVICEFARM_API GetTestGridProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetTestGridProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a>TestGridProject</a>.</p>
     */
    inline const TestGridProject& GetTestGridProject() const { return m_testGridProject; }
    template<typename TestGridProjectT = TestGridProject>
    void SetTestGridProject(TestGridProjectT&& value) { m_testGridProjectHasBeenSet = true; m_testGridProject = std::forward<TestGridProjectT>(value); }
    template<typename TestGridProjectT = TestGridProject>
    GetTestGridProjectResult& WithTestGridProject(TestGridProjectT&& value) { SetTestGridProject(std::forward<TestGridProjectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTestGridProjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TestGridProject m_testGridProject;
    bool m_testGridProjectHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
