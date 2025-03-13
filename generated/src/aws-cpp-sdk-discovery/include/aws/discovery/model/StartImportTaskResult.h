/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/ImportTask.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class StartImportTaskResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StartImportTaskResult() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API StartImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StartImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of information related to the import task request including status
     * information, times, IDs, the Amazon S3 Object URL for the import file, and more.
     * </p>
     */
    inline const ImportTask& GetTask() const { return m_task; }
    template<typename TaskT = ImportTask>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = ImportTask>
    StartImportTaskResult& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartImportTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ImportTask m_task;
    bool m_taskHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
