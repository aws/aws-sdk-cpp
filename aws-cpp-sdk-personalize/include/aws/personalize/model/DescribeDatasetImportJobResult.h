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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/DatasetImportJob.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API DescribeDatasetImportJobResult
  {
  public:
    DescribeDatasetImportJobResult();
    DescribeDatasetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDatasetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline const DatasetImportJob& GetDatasetImportJob() const{ return m_datasetImportJob; }

    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline void SetDatasetImportJob(const DatasetImportJob& value) { m_datasetImportJob = value; }

    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline void SetDatasetImportJob(DatasetImportJob&& value) { m_datasetImportJob = std::move(value); }

    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJob(const DatasetImportJob& value) { SetDatasetImportJob(value); return *this;}

    /**
     * <p>Information about the dataset import job, including the status.</p> <p>The
     * status is one of the following values:</p> <ul> <li> <p>CREATE PENDING</p> </li>
     * <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> </ul>
     */
    inline DescribeDatasetImportJobResult& WithDatasetImportJob(DatasetImportJob&& value) { SetDatasetImportJob(std::move(value)); return *this;}

  private:

    DatasetImportJob m_datasetImportJob;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
