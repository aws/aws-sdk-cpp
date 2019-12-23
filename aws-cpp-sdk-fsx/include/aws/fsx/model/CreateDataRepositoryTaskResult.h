/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DataRepositoryTask.h>
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
  class AWS_FSX_API CreateDataRepositoryTaskResult
  {
  public:
    CreateDataRepositoryTaskResult();
    CreateDataRepositoryTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDataRepositoryTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the data repository task that you just created.</p>
     */
    inline const DataRepositoryTask& GetDataRepositoryTask() const{ return m_dataRepositoryTask; }

    /**
     * <p>The description of the data repository task that you just created.</p>
     */
    inline void SetDataRepositoryTask(const DataRepositoryTask& value) { m_dataRepositoryTask = value; }

    /**
     * <p>The description of the data repository task that you just created.</p>
     */
    inline void SetDataRepositoryTask(DataRepositoryTask&& value) { m_dataRepositoryTask = std::move(value); }

    /**
     * <p>The description of the data repository task that you just created.</p>
     */
    inline CreateDataRepositoryTaskResult& WithDataRepositoryTask(const DataRepositoryTask& value) { SetDataRepositoryTask(value); return *this;}

    /**
     * <p>The description of the data repository task that you just created.</p>
     */
    inline CreateDataRepositoryTaskResult& WithDataRepositoryTask(DataRepositoryTask&& value) { SetDataRepositoryTask(std::move(value)); return *this;}

  private:

    DataRepositoryTask m_dataRepositoryTask;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
