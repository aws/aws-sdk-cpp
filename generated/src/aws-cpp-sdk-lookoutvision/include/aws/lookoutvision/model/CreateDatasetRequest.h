/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/DatasetSource.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class CreateDatasetRequest : public LookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API CreateDatasetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    AWS_LOOKOUTFORVISION_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTFORVISION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the project in which you want to create a dataset.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CreateDatasetRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the dataset. Specify <code>train</code> for a training dataset.
     * Specify <code>test</code> for a test dataset.</p>
     */
    inline const Aws::String& GetDatasetType() const { return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    template<typename DatasetTypeT = Aws::String>
    void SetDatasetType(DatasetTypeT&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::forward<DatasetTypeT>(value); }
    template<typename DatasetTypeT = Aws::String>
    CreateDatasetRequest& WithDatasetType(DatasetTypeT&& value) { SetDatasetType(std::forward<DatasetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the manifest file that Amazon Lookout for Vision uses to
     * create the dataset.</p> <p>If you don't specify <code>DatasetSource</code>, an
     * empty dataset is created and the operation synchronously returns. Later, you can
     * add JSON Lines by calling <a>UpdateDatasetEntries</a>. </p> <p>If you specify a
     * value for <code>DataSource</code>, the manifest at the S3 location is validated
     * and used to create the dataset. The call to <code>CreateDataset</code> is
     * asynchronous and might take a while to complete. To find out the current status,
     * Check the value of <code>Status</code> returned in a call to
     * <a>DescribeDataset</a>.</p>
     */
    inline const DatasetSource& GetDatasetSource() const { return m_datasetSource; }
    inline bool DatasetSourceHasBeenSet() const { return m_datasetSourceHasBeenSet; }
    template<typename DatasetSourceT = DatasetSource>
    void SetDatasetSource(DatasetSourceT&& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = std::forward<DatasetSourceT>(value); }
    template<typename DatasetSourceT = DatasetSource>
    CreateDatasetRequest& WithDatasetSource(DatasetSourceT&& value) { SetDatasetSource(std::forward<DatasetSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateDataset</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>CreateDataset</code>. In this case, safely retry your call to
     * <code>CreateDataset</code> by using the same <code>ClientToken</code> parameter
     * value.</p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple dataset creation requests. You'll need to provide
     * your own value for other use cases. </p> <p>An error occurs if the other input
     * parameters are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>CreateDataset</code>.
     * An idempotency token is active for 8 hours. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateDatasetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    DatasetSource m_datasetSource;
    bool m_datasetSourceHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
