/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/WorkGroup.h>
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
namespace Athena
{
namespace Model
{
  class GetWorkGroupResult
  {
  public:
    AWS_ATHENA_API GetWorkGroupResult() = default;
    AWS_ATHENA_API GetWorkGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetWorkGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the workgroup.</p>
     */
    inline const WorkGroup& GetWorkGroup() const { return m_workGroup; }
    template<typename WorkGroupT = WorkGroup>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = WorkGroup>
    GetWorkGroupResult& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkGroup m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
