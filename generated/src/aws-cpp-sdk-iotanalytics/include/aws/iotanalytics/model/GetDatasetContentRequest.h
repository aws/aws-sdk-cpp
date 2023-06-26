/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class GetDatasetContentRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API GetDatasetContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDatasetContent"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;

    AWS_IOTANALYTICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the dataset whose contents are retrieved.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset whose contents are retrieved.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset whose contents are retrieved.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset whose contents are retrieved.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset whose contents are retrieved.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset whose contents are retrieved.</p>
     */
    inline GetDatasetContentRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset whose contents are retrieved.</p>
     */
    inline GetDatasetContentRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset whose contents are retrieved.</p>
     */
    inline GetDatasetContentRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The version of the dataset whose contents are retrieved. You can also use the
     * strings "$LATEST" or "$LATEST_SUCCEEDED" to retrieve the contents of the latest
     * or latest successfully completed dataset. If not specified, "$LATEST_SUCCEEDED"
     * is the default.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version of the dataset whose contents are retrieved. You can also use the
     * strings "$LATEST" or "$LATEST_SUCCEEDED" to retrieve the contents of the latest
     * or latest successfully completed dataset. If not specified, "$LATEST_SUCCEEDED"
     * is the default.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The version of the dataset whose contents are retrieved. You can also use the
     * strings "$LATEST" or "$LATEST_SUCCEEDED" to retrieve the contents of the latest
     * or latest successfully completed dataset. If not specified, "$LATEST_SUCCEEDED"
     * is the default.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The version of the dataset whose contents are retrieved. You can also use the
     * strings "$LATEST" or "$LATEST_SUCCEEDED" to retrieve the contents of the latest
     * or latest successfully completed dataset. If not specified, "$LATEST_SUCCEEDED"
     * is the default.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The version of the dataset whose contents are retrieved. You can also use the
     * strings "$LATEST" or "$LATEST_SUCCEEDED" to retrieve the contents of the latest
     * or latest successfully completed dataset. If not specified, "$LATEST_SUCCEEDED"
     * is the default.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The version of the dataset whose contents are retrieved. You can also use the
     * strings "$LATEST" or "$LATEST_SUCCEEDED" to retrieve the contents of the latest
     * or latest successfully completed dataset. If not specified, "$LATEST_SUCCEEDED"
     * is the default.</p>
     */
    inline GetDatasetContentRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version of the dataset whose contents are retrieved. You can also use the
     * strings "$LATEST" or "$LATEST_SUCCEEDED" to retrieve the contents of the latest
     * or latest successfully completed dataset. If not specified, "$LATEST_SUCCEEDED"
     * is the default.</p>
     */
    inline GetDatasetContentRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version of the dataset whose contents are retrieved. You can also use the
     * strings "$LATEST" or "$LATEST_SUCCEEDED" to retrieve the contents of the latest
     * or latest successfully completed dataset. If not specified, "$LATEST_SUCCEEDED"
     * is the default.</p>
     */
    inline GetDatasetContentRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
