/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class CreateDataSetResult
  {
  public:
    AWS_QUICKSIGHT_API CreateDataSetResult();
    AWS_QUICKSIGHT_API CreateDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline CreateDataSetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline CreateDataSetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline CreateDataSetResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline CreateDataSetResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline CreateDataSetResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline CreateDataSetResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The ARN for the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline const Aws::String& GetIngestionArn() const{ return m_ingestionArn; }

    /**
     * <p>The ARN for the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline void SetIngestionArn(const Aws::String& value) { m_ingestionArn = value; }

    /**
     * <p>The ARN for the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline void SetIngestionArn(Aws::String&& value) { m_ingestionArn = std::move(value); }

    /**
     * <p>The ARN for the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline void SetIngestionArn(const char* value) { m_ingestionArn.assign(value); }

    /**
     * <p>The ARN for the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline CreateDataSetResult& WithIngestionArn(const Aws::String& value) { SetIngestionArn(value); return *this;}

    /**
     * <p>The ARN for the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline CreateDataSetResult& WithIngestionArn(Aws::String&& value) { SetIngestionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline CreateDataSetResult& WithIngestionArn(const char* value) { SetIngestionArn(value); return *this;}


    /**
     * <p>The ID of the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline const Aws::String& GetIngestionId() const{ return m_ingestionId; }

    /**
     * <p>The ID of the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline void SetIngestionId(const Aws::String& value) { m_ingestionId = value; }

    /**
     * <p>The ID of the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline void SetIngestionId(Aws::String&& value) { m_ingestionId = std::move(value); }

    /**
     * <p>The ID of the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline void SetIngestionId(const char* value) { m_ingestionId.assign(value); }

    /**
     * <p>The ID of the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline CreateDataSetResult& WithIngestionId(const Aws::String& value) { SetIngestionId(value); return *this;}

    /**
     * <p>The ID of the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline CreateDataSetResult& WithIngestionId(Aws::String&& value) { SetIngestionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline CreateDataSetResult& WithIngestionId(const char* value) { SetIngestionId(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateDataSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateDataSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateDataSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline CreateDataSetResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_dataSetId;

    Aws::String m_ingestionArn;

    Aws::String m_ingestionId;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
