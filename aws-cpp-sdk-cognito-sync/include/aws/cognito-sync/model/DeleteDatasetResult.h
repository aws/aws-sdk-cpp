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
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/model/Dataset.h>

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
   * Response to a successful DeleteDataset request.
   */
  class AWS_COGNITOSYNC_API DeleteDatasetResult
  {
  public:
    DeleteDatasetResult();
    DeleteDatasetResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteDatasetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * A collection of data for an identity pool. An identity pool can have multiple
     * datasets. A dataset is per identity and can be general or associated with a
     * particular entity in an application (like a saved game). Datasets are
     * automatically created if they don't exist. Data is synced by dataset, and a
     * dataset can hold up to 1MB of key-value pairs.
     */
    inline const Dataset& GetDataset() const{ return m_dataset; }

    /**
     * A collection of data for an identity pool. An identity pool can have multiple
     * datasets. A dataset is per identity and can be general or associated with a
     * particular entity in an application (like a saved game). Datasets are
     * automatically created if they don't exist. Data is synced by dataset, and a
     * dataset can hold up to 1MB of key-value pairs.
     */
    inline void SetDataset(const Dataset& value) { m_dataset = value; }

    /**
     * A collection of data for an identity pool. An identity pool can have multiple
     * datasets. A dataset is per identity and can be general or associated with a
     * particular entity in an application (like a saved game). Datasets are
     * automatically created if they don't exist. Data is synced by dataset, and a
     * dataset can hold up to 1MB of key-value pairs.
     */
    inline void SetDataset(Dataset&& value) { m_dataset = value; }

    /**
     * A collection of data for an identity pool. An identity pool can have multiple
     * datasets. A dataset is per identity and can be general or associated with a
     * particular entity in an application (like a saved game). Datasets are
     * automatically created if they don't exist. Data is synced by dataset, and a
     * dataset can hold up to 1MB of key-value pairs.
     */
    inline DeleteDatasetResult& WithDataset(const Dataset& value) { SetDataset(value); return *this;}

    /**
     * A collection of data for an identity pool. An identity pool can have multiple
     * datasets. A dataset is per identity and can be general or associated with a
     * particular entity in an application (like a saved game). Datasets are
     * automatically created if they don't exist. Data is synced by dataset, and a
     * dataset can hold up to 1MB of key-value pairs.
     */
    inline DeleteDatasetResult& WithDataset(Dataset&& value) { SetDataset(value); return *this;}

  private:
    Dataset m_dataset;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
