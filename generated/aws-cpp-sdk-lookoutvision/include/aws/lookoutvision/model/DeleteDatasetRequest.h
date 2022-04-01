﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_LOOKOUTFORVISION_API DeleteDatasetRequest : public LookoutforVisionRequest
  {
  public:
    DeleteDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataset"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the project that contains the dataset that you want to
     * delete.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * delete.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * delete.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * delete.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * delete.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project that contains the dataset that you want to
     * delete.</p>
     */
    inline DeleteDatasetRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project that contains the dataset that you want to
     * delete.</p>
     */
    inline DeleteDatasetRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project that contains the dataset that you want to
     * delete.</p>
     */
    inline DeleteDatasetRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The type of the dataset to delete. Specify <code>train</code> to delete the
     * training dataset. Specify <code>test</code> to delete the test dataset. To
     * delete the dataset in a single dataset project, specify <code>train</code>.</p>
     */
    inline const Aws::String& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p>The type of the dataset to delete. Specify <code>train</code> to delete the
     * training dataset. Specify <code>test</code> to delete the test dataset. To
     * delete the dataset in a single dataset project, specify <code>train</code>.</p>
     */
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }

    /**
     * <p>The type of the dataset to delete. Specify <code>train</code> to delete the
     * training dataset. Specify <code>test</code> to delete the test dataset. To
     * delete the dataset in a single dataset project, specify <code>train</code>.</p>
     */
    inline void SetDatasetType(const Aws::String& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }

    /**
     * <p>The type of the dataset to delete. Specify <code>train</code> to delete the
     * training dataset. Specify <code>test</code> to delete the test dataset. To
     * delete the dataset in a single dataset project, specify <code>train</code>.</p>
     */
    inline void SetDatasetType(Aws::String&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }

    /**
     * <p>The type of the dataset to delete. Specify <code>train</code> to delete the
     * training dataset. Specify <code>test</code> to delete the test dataset. To
     * delete the dataset in a single dataset project, specify <code>train</code>.</p>
     */
    inline void SetDatasetType(const char* value) { m_datasetTypeHasBeenSet = true; m_datasetType.assign(value); }

    /**
     * <p>The type of the dataset to delete. Specify <code>train</code> to delete the
     * training dataset. Specify <code>test</code> to delete the test dataset. To
     * delete the dataset in a single dataset project, specify <code>train</code>.</p>
     */
    inline DeleteDatasetRequest& WithDatasetType(const Aws::String& value) { SetDatasetType(value); return *this;}

    /**
     * <p>The type of the dataset to delete. Specify <code>train</code> to delete the
     * training dataset. Specify <code>test</code> to delete the test dataset. To
     * delete the dataset in a single dataset project, specify <code>train</code>.</p>
     */
    inline DeleteDatasetRequest& WithDatasetType(Aws::String&& value) { SetDatasetType(std::move(value)); return *this;}

    /**
     * <p>The type of the dataset to delete. Specify <code>train</code> to delete the
     * training dataset. Specify <code>test</code> to delete the test dataset. To
     * delete the dataset in a single dataset project, specify <code>train</code>.</p>
     */
    inline DeleteDatasetRequest& WithDatasetType(const char* value) { SetDatasetType(value); return *this;}


    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteDataset</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>DeleteDataset</code>. In this case, safely retry your call to
     * <code>DeleteDataset</code> by using the same <code>ClientToken</code> parameter
     * value. </p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple deletetion requests. You'll need to provide your own
     * value for other use cases. </p> <p>An error occurs if the other input parameters
     * are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteDataset</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteDataset</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>DeleteDataset</code>. In this case, safely retry your call to
     * <code>DeleteDataset</code> by using the same <code>ClientToken</code> parameter
     * value. </p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple deletetion requests. You'll need to provide your own
     * value for other use cases. </p> <p>An error occurs if the other input parameters
     * are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteDataset</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteDataset</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>DeleteDataset</code>. In this case, safely retry your call to
     * <code>DeleteDataset</code> by using the same <code>ClientToken</code> parameter
     * value. </p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple deletetion requests. You'll need to provide your own
     * value for other use cases. </p> <p>An error occurs if the other input parameters
     * are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteDataset</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteDataset</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>DeleteDataset</code>. In this case, safely retry your call to
     * <code>DeleteDataset</code> by using the same <code>ClientToken</code> parameter
     * value. </p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple deletetion requests. You'll need to provide your own
     * value for other use cases. </p> <p>An error occurs if the other input parameters
     * are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteDataset</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteDataset</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>DeleteDataset</code>. In this case, safely retry your call to
     * <code>DeleteDataset</code> by using the same <code>ClientToken</code> parameter
     * value. </p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple deletetion requests. You'll need to provide your own
     * value for other use cases. </p> <p>An error occurs if the other input parameters
     * are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteDataset</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteDataset</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>DeleteDataset</code>. In this case, safely retry your call to
     * <code>DeleteDataset</code> by using the same <code>ClientToken</code> parameter
     * value. </p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple deletetion requests. You'll need to provide your own
     * value for other use cases. </p> <p>An error occurs if the other input parameters
     * are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteDataset</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline DeleteDatasetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteDataset</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>DeleteDataset</code>. In this case, safely retry your call to
     * <code>DeleteDataset</code> by using the same <code>ClientToken</code> parameter
     * value. </p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple deletetion requests. You'll need to provide your own
     * value for other use cases. </p> <p>An error occurs if the other input parameters
     * are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteDataset</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline DeleteDatasetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteDataset</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>DeleteDataset</code>. In this case, safely retry your call to
     * <code>DeleteDataset</code> by using the same <code>ClientToken</code> parameter
     * value. </p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple deletetion requests. You'll need to provide your own
     * value for other use cases. </p> <p>An error occurs if the other input parameters
     * are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteDataset</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline DeleteDatasetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
