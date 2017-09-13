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
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/model/Dataset.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * Response to a successful DescribeDataset request.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeDatasetResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOSYNC_API DescribeDatasetResult
  {
  public:
    DescribeDatasetResult();
    DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Meta data for a collection of data for an identity. An identity can have
     * multiple datasets. A dataset can be general or associated with a particular
     * entity in an application (like a saved game). Datasets are automatically created
     * if they don't exist. Data is synced by dataset, and a dataset can hold up to 1MB
     * of key-value pairs.
     */
    inline const Dataset& GetDataset() const{ return m_dataset; }

    /**
     * Meta data for a collection of data for an identity. An identity can have
     * multiple datasets. A dataset can be general or associated with a particular
     * entity in an application (like a saved game). Datasets are automatically created
     * if they don't exist. Data is synced by dataset, and a dataset can hold up to 1MB
     * of key-value pairs.
     */
    inline void SetDataset(const Dataset& value) { m_dataset = value; }

    /**
     * Meta data for a collection of data for an identity. An identity can have
     * multiple datasets. A dataset can be general or associated with a particular
     * entity in an application (like a saved game). Datasets are automatically created
     * if they don't exist. Data is synced by dataset, and a dataset can hold up to 1MB
     * of key-value pairs.
     */
    inline void SetDataset(Dataset&& value) { m_dataset = std::move(value); }

    /**
     * Meta data for a collection of data for an identity. An identity can have
     * multiple datasets. A dataset can be general or associated with a particular
     * entity in an application (like a saved game). Datasets are automatically created
     * if they don't exist. Data is synced by dataset, and a dataset can hold up to 1MB
     * of key-value pairs.
     */
    inline DescribeDatasetResult& WithDataset(const Dataset& value) { SetDataset(value); return *this;}

    /**
     * Meta data for a collection of data for an identity. An identity can have
     * multiple datasets. A dataset can be general or associated with a particular
     * entity in an application (like a saved game). Datasets are automatically created
     * if they don't exist. Data is synced by dataset, and a dataset can hold up to 1MB
     * of key-value pairs.
     */
    inline DescribeDatasetResult& WithDataset(Dataset&& value) { SetDataset(std::move(value)); return *this;}

  private:

    Dataset m_dataset;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
