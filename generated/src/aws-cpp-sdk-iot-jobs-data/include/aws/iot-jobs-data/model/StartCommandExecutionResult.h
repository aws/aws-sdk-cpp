/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
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
namespace IoTJobsDataPlane
{
namespace Model
{
  class StartCommandExecutionResult
  {
  public:
    AWS_IOTJOBSDATAPLANE_API StartCommandExecutionResult();
    AWS_IOTJOBSDATAPLANE_API StartCommandExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTJOBSDATAPLANE_API StartCommandExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the command execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }
    inline StartCommandExecutionResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline StartCommandExecutionResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline StartCommandExecutionResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartCommandExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartCommandExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartCommandExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_executionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
