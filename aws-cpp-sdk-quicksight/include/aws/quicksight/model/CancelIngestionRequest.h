/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CancelIngestionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CancelIngestionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelIngestion"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline CancelIngestionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline CancelIngestionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline CancelIngestionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the dataset used in the ingestion.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The ID of the dataset used in the ingestion.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The ID of the dataset used in the ingestion.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The ID of the dataset used in the ingestion.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The ID of the dataset used in the ingestion.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The ID of the dataset used in the ingestion.</p>
     */
    inline CancelIngestionRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The ID of the dataset used in the ingestion.</p>
     */
    inline CancelIngestionRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dataset used in the ingestion.</p>
     */
    inline CancelIngestionRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>An ID for the ingestion.</p>
     */
    inline const Aws::String& GetIngestionId() const{ return m_ingestionId; }

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline bool IngestionIdHasBeenSet() const { return m_ingestionIdHasBeenSet; }

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline void SetIngestionId(const Aws::String& value) { m_ingestionIdHasBeenSet = true; m_ingestionId = value; }

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline void SetIngestionId(Aws::String&& value) { m_ingestionIdHasBeenSet = true; m_ingestionId = std::move(value); }

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline void SetIngestionId(const char* value) { m_ingestionIdHasBeenSet = true; m_ingestionId.assign(value); }

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline CancelIngestionRequest& WithIngestionId(const Aws::String& value) { SetIngestionId(value); return *this;}

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline CancelIngestionRequest& WithIngestionId(Aws::String&& value) { SetIngestionId(std::move(value)); return *this;}

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline CancelIngestionRequest& WithIngestionId(const char* value) { SetIngestionId(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_ingestionId;
    bool m_ingestionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
