/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DataRepositoryTask.h>
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
namespace FSx
{
namespace Model
{
  class CreateDataRepositoryTaskResult
  {
  public:
    AWS_FSX_API CreateDataRepositoryTaskResult() = default;
    AWS_FSX_API CreateDataRepositoryTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateDataRepositoryTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the data repository task that you just created.</p>
     */
    inline const DataRepositoryTask& GetDataRepositoryTask() const { return m_dataRepositoryTask; }
    template<typename DataRepositoryTaskT = DataRepositoryTask>
    void SetDataRepositoryTask(DataRepositoryTaskT&& value) { m_dataRepositoryTaskHasBeenSet = true; m_dataRepositoryTask = std::forward<DataRepositoryTaskT>(value); }
    template<typename DataRepositoryTaskT = DataRepositoryTask>
    CreateDataRepositoryTaskResult& WithDataRepositoryTask(DataRepositoryTaskT&& value) { SetDataRepositoryTask(std::forward<DataRepositoryTaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDataRepositoryTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataRepositoryTask m_dataRepositoryTask;
    bool m_dataRepositoryTaskHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
