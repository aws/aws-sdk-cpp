/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-data-exports/model/ExecutionStatus.h>
#include <aws/bcm-data-exports/model/Export.h>
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
namespace BCMDataExports
{
namespace Model
{
  class GetExecutionResult
  {
  public:
    AWS_BCMDATAEXPORTS_API GetExecutionResult();
    AWS_BCMDATAEXPORTS_API GetExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API GetExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID for this specific execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline GetExecutionResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline GetExecutionResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline GetExecutionResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>The status of this specific execution.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }

    /**
     * <p>The status of this specific execution.</p>
     */
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatus = value; }

    /**
     * <p>The status of this specific execution.</p>
     */
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatus = std::move(value); }

    /**
     * <p>The status of this specific execution.</p>
     */
    inline GetExecutionResult& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p>The status of this specific execution.</p>
     */
    inline GetExecutionResult& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>The export data for this specific execution. This export data is a snapshot
     * from when the execution was generated. The data could be different from the
     * current export data if the export was updated since the execution was
     * generated.</p>
     */
    inline const Export& GetExport() const{ return m_export; }

    /**
     * <p>The export data for this specific execution. This export data is a snapshot
     * from when the execution was generated. The data could be different from the
     * current export data if the export was updated since the execution was
     * generated.</p>
     */
    inline void SetExport(const Export& value) { m_export = value; }

    /**
     * <p>The export data for this specific execution. This export data is a snapshot
     * from when the execution was generated. The data could be different from the
     * current export data if the export was updated since the execution was
     * generated.</p>
     */
    inline void SetExport(Export&& value) { m_export = std::move(value); }

    /**
     * <p>The export data for this specific execution. This export data is a snapshot
     * from when the execution was generated. The data could be different from the
     * current export data if the export was updated since the execution was
     * generated.</p>
     */
    inline GetExecutionResult& WithExport(const Export& value) { SetExport(value); return *this;}

    /**
     * <p>The export data for this specific execution. This export data is a snapshot
     * from when the execution was generated. The data could be different from the
     * current export data if the export was updated since the execution was
     * generated.</p>
     */
    inline GetExecutionResult& WithExport(Export&& value) { SetExport(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_executionId;

    ExecutionStatus m_executionStatus;

    Export m_export;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
