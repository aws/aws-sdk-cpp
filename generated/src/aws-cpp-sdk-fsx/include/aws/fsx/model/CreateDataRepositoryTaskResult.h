/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateDataRepositoryTaskResult
  {
  public:
    AWS_FSX_API CreateDataRepositoryTaskResult();
    AWS_FSX_API CreateDataRepositoryTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateDataRepositoryTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
