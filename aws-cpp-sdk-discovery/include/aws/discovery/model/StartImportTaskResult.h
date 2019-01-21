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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/ImportTask.h>
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
  class AWS_APPLICATIONDISCOVERYSERVICE_API StartImportTaskResult
  {
  public:
    StartImportTaskResult();
    StartImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of information related to the import task request including status
     * information, times, IDs, the Amazon S3 Object URL for the import file, and more.
     * </p>
     */
    inline const ImportTask& GetTask() const{ return m_task; }

    /**
     * <p>An array of information related to the import task request including status
     * information, times, IDs, the Amazon S3 Object URL for the import file, and more.
     * </p>
     */
    inline void SetTask(const ImportTask& value) { m_task = value; }

    /**
     * <p>An array of information related to the import task request including status
     * information, times, IDs, the Amazon S3 Object URL for the import file, and more.
     * </p>
     */
    inline void SetTask(ImportTask&& value) { m_task = std::move(value); }

    /**
     * <p>An array of information related to the import task request including status
     * information, times, IDs, the Amazon S3 Object URL for the import file, and more.
     * </p>
     */
    inline StartImportTaskResult& WithTask(const ImportTask& value) { SetTask(value); return *this;}

    /**
     * <p>An array of information related to the import task request including status
     * information, times, IDs, the Amazon S3 Object URL for the import file, and more.
     * </p>
     */
    inline StartImportTaskResult& WithTask(ImportTask&& value) { SetTask(std::move(value)); return *this;}

  private:

    ImportTask m_task;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
