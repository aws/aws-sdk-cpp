/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StartImportTaskResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StartImportTaskResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API StartImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StartImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
