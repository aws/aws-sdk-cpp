/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * Response to a successful DeleteDataset request.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DeleteDatasetResponse">AWS
   * API Reference</a></p>
   */
  class DeleteDatasetResult
  {
  public:
    AWS_COGNITOSYNC_API DeleteDatasetResult();
    AWS_COGNITOSYNC_API DeleteDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API DeleteDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetDataset(Dataset&& value) { m_dataset = std::move(value); }

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
    inline DeleteDatasetResult& WithDataset(Dataset&& value) { SetDataset(std::move(value)); return *this;}

  private:

    Dataset m_dataset;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
