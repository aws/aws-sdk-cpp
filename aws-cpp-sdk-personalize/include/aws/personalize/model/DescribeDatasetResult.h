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
#include <aws/personalize/model/Dataset.h>
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
  class AWS_PERSONALIZE_API DescribeDatasetResult
  {
  public:
    DescribeDatasetResult();
    DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline const Dataset& GetDataset() const{ return m_dataset; }

    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline void SetDataset(const Dataset& value) { m_dataset = value; }

    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline void SetDataset(Dataset&& value) { m_dataset = std::move(value); }

    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline DescribeDatasetResult& WithDataset(const Dataset& value) { SetDataset(value); return *this;}

    /**
     * <p>A listing of the dataset's properties.</p>
     */
    inline DescribeDatasetResult& WithDataset(Dataset&& value) { SetDataset(std::move(value)); return *this;}

  private:

    Dataset m_dataset;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
