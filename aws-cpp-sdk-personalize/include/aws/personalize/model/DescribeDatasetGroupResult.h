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
#include <aws/personalize/model/DatasetGroup.h>
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
  class AWS_PERSONALIZE_API DescribeDatasetGroupResult
  {
  public:
    DescribeDatasetGroupResult();
    DescribeDatasetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDatasetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline const DatasetGroup& GetDatasetGroup() const{ return m_datasetGroup; }

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline void SetDatasetGroup(const DatasetGroup& value) { m_datasetGroup = value; }

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline void SetDatasetGroup(DatasetGroup&& value) { m_datasetGroup = std::move(value); }

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroup(const DatasetGroup& value) { SetDatasetGroup(value); return *this;}

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroup(DatasetGroup&& value) { SetDatasetGroup(std::move(value)); return *this;}

  private:

    DatasetGroup m_datasetGroup;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
