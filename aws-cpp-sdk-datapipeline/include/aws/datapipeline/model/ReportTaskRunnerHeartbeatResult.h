﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>

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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of ReportTaskRunnerHeartbeat.</p>
   */
  class AWS_DATAPIPELINE_API ReportTaskRunnerHeartbeatResult
  {
  public:
    ReportTaskRunnerHeartbeatResult();
    ReportTaskRunnerHeartbeatResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ReportTaskRunnerHeartbeatResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Indicates whether the calling task runner should terminate.</p>
     */
    inline bool GetTerminate() const{ return m_terminate; }

    /**
     * <p>Indicates whether the calling task runner should terminate.</p>
     */
    inline void SetTerminate(bool value) { m_terminate = value; }

    /**
     * <p>Indicates whether the calling task runner should terminate.</p>
     */
    inline ReportTaskRunnerHeartbeatResult& WithTerminate(bool value) { SetTerminate(value); return *this;}

  private:
    bool m_terminate;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
