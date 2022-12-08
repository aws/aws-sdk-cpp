/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/S3BucketSource.h>
#include <aws/dynamodb/model/InputFormat.h>
#include <aws/dynamodb/model/InputFormatOptions.h>
#include <aws/dynamodb/model/InputCompressionType.h>
#include <aws/dynamodb/model/TableCreationParameters.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ImportTableRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ImportTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportTable"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ImportTableInput</code> idempotent, meaning that multiple identical calls
     * have the same effect as one single call.</p> <p>A client token is valid for 8
     * hours after the first request that uses it is completed. After 8 hours, any
     * request with the same client token is treated as a new request. Do not resubmit
     * the same request with the same client token for more than 8 hours, or the result
     * might not be idempotent.</p> <p>If you submit a request with the same client
     * token but a change in other parameters within the 8-hour idempotency window,
     * DynamoDB returns an <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ImportTableInput</code> idempotent, meaning that multiple identical calls
     * have the same effect as one single call.</p> <p>A client token is valid for 8
     * hours after the first request that uses it is completed. After 8 hours, any
     * request with the same client token is treated as a new request. Do not resubmit
     * the same request with the same client token for more than 8 hours, or the result
     * might not be idempotent.</p> <p>If you submit a request with the same client
     * token but a change in other parameters within the 8-hour idempotency window,
     * DynamoDB returns an <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ImportTableInput</code> idempotent, meaning that multiple identical calls
     * have the same effect as one single call.</p> <p>A client token is valid for 8
     * hours after the first request that uses it is completed. After 8 hours, any
     * request with the same client token is treated as a new request. Do not resubmit
     * the same request with the same client token for more than 8 hours, or the result
     * might not be idempotent.</p> <p>If you submit a request with the same client
     * token but a change in other parameters within the 8-hour idempotency window,
     * DynamoDB returns an <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ImportTableInput</code> idempotent, meaning that multiple identical calls
     * have the same effect as one single call.</p> <p>A client token is valid for 8
     * hours after the first request that uses it is completed. After 8 hours, any
     * request with the same client token is treated as a new request. Do not resubmit
     * the same request with the same client token for more than 8 hours, or the result
     * might not be idempotent.</p> <p>If you submit a request with the same client
     * token but a change in other parameters within the 8-hour idempotency window,
     * DynamoDB returns an <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ImportTableInput</code> idempotent, meaning that multiple identical calls
     * have the same effect as one single call.</p> <p>A client token is valid for 8
     * hours after the first request that uses it is completed. After 8 hours, any
     * request with the same client token is treated as a new request. Do not resubmit
     * the same request with the same client token for more than 8 hours, or the result
     * might not be idempotent.</p> <p>If you submit a request with the same client
     * token but a change in other parameters within the 8-hour idempotency window,
     * DynamoDB returns an <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ImportTableInput</code> idempotent, meaning that multiple identical calls
     * have the same effect as one single call.</p> <p>A client token is valid for 8
     * hours after the first request that uses it is completed. After 8 hours, any
     * request with the same client token is treated as a new request. Do not resubmit
     * the same request with the same client token for more than 8 hours, or the result
     * might not be idempotent.</p> <p>If you submit a request with the same client
     * token but a change in other parameters within the 8-hour idempotency window,
     * DynamoDB returns an <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline ImportTableRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ImportTableInput</code> idempotent, meaning that multiple identical calls
     * have the same effect as one single call.</p> <p>A client token is valid for 8
     * hours after the first request that uses it is completed. After 8 hours, any
     * request with the same client token is treated as a new request. Do not resubmit
     * the same request with the same client token for more than 8 hours, or the result
     * might not be idempotent.</p> <p>If you submit a request with the same client
     * token but a change in other parameters within the 8-hour idempotency window,
     * DynamoDB returns an <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline ImportTableRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ImportTableInput</code> idempotent, meaning that multiple identical calls
     * have the same effect as one single call.</p> <p>A client token is valid for 8
     * hours after the first request that uses it is completed. After 8 hours, any
     * request with the same client token is treated as a new request. Do not resubmit
     * the same request with the same client token for more than 8 hours, or the result
     * might not be idempotent.</p> <p>If you submit a request with the same client
     * token but a change in other parameters within the 8-hour idempotency window,
     * DynamoDB returns an <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline ImportTableRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> The S3 bucket that provides the source for the import. </p>
     */
    inline const S3BucketSource& GetS3BucketSource() const{ return m_s3BucketSource; }

    /**
     * <p> The S3 bucket that provides the source for the import. </p>
     */
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }

    /**
     * <p> The S3 bucket that provides the source for the import. </p>
     */
    inline void SetS3BucketSource(const S3BucketSource& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = value; }

    /**
     * <p> The S3 bucket that provides the source for the import. </p>
     */
    inline void SetS3BucketSource(S3BucketSource&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::move(value); }

    /**
     * <p> The S3 bucket that provides the source for the import. </p>
     */
    inline ImportTableRequest& WithS3BucketSource(const S3BucketSource& value) { SetS3BucketSource(value); return *this;}

    /**
     * <p> The S3 bucket that provides the source for the import. </p>
     */
    inline ImportTableRequest& WithS3BucketSource(S3BucketSource&& value) { SetS3BucketSource(std::move(value)); return *this;}


    /**
     * <p> The format of the source data. Valid values for <code>ImportFormat</code>
     * are <code>CSV</code>, <code>DYNAMODB_JSON</code> or <code>ION</code>. </p>
     */
    inline const InputFormat& GetInputFormat() const{ return m_inputFormat; }

    /**
     * <p> The format of the source data. Valid values for <code>ImportFormat</code>
     * are <code>CSV</code>, <code>DYNAMODB_JSON</code> or <code>ION</code>. </p>
     */
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }

    /**
     * <p> The format of the source data. Valid values for <code>ImportFormat</code>
     * are <code>CSV</code>, <code>DYNAMODB_JSON</code> or <code>ION</code>. </p>
     */
    inline void SetInputFormat(const InputFormat& value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }

    /**
     * <p> The format of the source data. Valid values for <code>ImportFormat</code>
     * are <code>CSV</code>, <code>DYNAMODB_JSON</code> or <code>ION</code>. </p>
     */
    inline void SetInputFormat(InputFormat&& value) { m_inputFormatHasBeenSet = true; m_inputFormat = std::move(value); }

    /**
     * <p> The format of the source data. Valid values for <code>ImportFormat</code>
     * are <code>CSV</code>, <code>DYNAMODB_JSON</code> or <code>ION</code>. </p>
     */
    inline ImportTableRequest& WithInputFormat(const InputFormat& value) { SetInputFormat(value); return *this;}

    /**
     * <p> The format of the source data. Valid values for <code>ImportFormat</code>
     * are <code>CSV</code>, <code>DYNAMODB_JSON</code> or <code>ION</code>. </p>
     */
    inline ImportTableRequest& WithInputFormat(InputFormat&& value) { SetInputFormat(std::move(value)); return *this;}


    /**
     * <p> Additional properties that specify how the input is formatted, </p>
     */
    inline const InputFormatOptions& GetInputFormatOptions() const{ return m_inputFormatOptions; }

    /**
     * <p> Additional properties that specify how the input is formatted, </p>
     */
    inline bool InputFormatOptionsHasBeenSet() const { return m_inputFormatOptionsHasBeenSet; }

    /**
     * <p> Additional properties that specify how the input is formatted, </p>
     */
    inline void SetInputFormatOptions(const InputFormatOptions& value) { m_inputFormatOptionsHasBeenSet = true; m_inputFormatOptions = value; }

    /**
     * <p> Additional properties that specify how the input is formatted, </p>
     */
    inline void SetInputFormatOptions(InputFormatOptions&& value) { m_inputFormatOptionsHasBeenSet = true; m_inputFormatOptions = std::move(value); }

    /**
     * <p> Additional properties that specify how the input is formatted, </p>
     */
    inline ImportTableRequest& WithInputFormatOptions(const InputFormatOptions& value) { SetInputFormatOptions(value); return *this;}

    /**
     * <p> Additional properties that specify how the input is formatted, </p>
     */
    inline ImportTableRequest& WithInputFormatOptions(InputFormatOptions&& value) { SetInputFormatOptions(std::move(value)); return *this;}


    /**
     * <p> Type of compression to be used on the input coming from the imported table.
     * </p>
     */
    inline const InputCompressionType& GetInputCompressionType() const{ return m_inputCompressionType; }

    /**
     * <p> Type of compression to be used on the input coming from the imported table.
     * </p>
     */
    inline bool InputCompressionTypeHasBeenSet() const { return m_inputCompressionTypeHasBeenSet; }

    /**
     * <p> Type of compression to be used on the input coming from the imported table.
     * </p>
     */
    inline void SetInputCompressionType(const InputCompressionType& value) { m_inputCompressionTypeHasBeenSet = true; m_inputCompressionType = value; }

    /**
     * <p> Type of compression to be used on the input coming from the imported table.
     * </p>
     */
    inline void SetInputCompressionType(InputCompressionType&& value) { m_inputCompressionTypeHasBeenSet = true; m_inputCompressionType = std::move(value); }

    /**
     * <p> Type of compression to be used on the input coming from the imported table.
     * </p>
     */
    inline ImportTableRequest& WithInputCompressionType(const InputCompressionType& value) { SetInputCompressionType(value); return *this;}

    /**
     * <p> Type of compression to be used on the input coming from the imported table.
     * </p>
     */
    inline ImportTableRequest& WithInputCompressionType(InputCompressionType&& value) { SetInputCompressionType(std::move(value)); return *this;}


    /**
     * <p>Parameters for the table to import the data into. </p>
     */
    inline const TableCreationParameters& GetTableCreationParameters() const{ return m_tableCreationParameters; }

    /**
     * <p>Parameters for the table to import the data into. </p>
     */
    inline bool TableCreationParametersHasBeenSet() const { return m_tableCreationParametersHasBeenSet; }

    /**
     * <p>Parameters for the table to import the data into. </p>
     */
    inline void SetTableCreationParameters(const TableCreationParameters& value) { m_tableCreationParametersHasBeenSet = true; m_tableCreationParameters = value; }

    /**
     * <p>Parameters for the table to import the data into. </p>
     */
    inline void SetTableCreationParameters(TableCreationParameters&& value) { m_tableCreationParametersHasBeenSet = true; m_tableCreationParameters = std::move(value); }

    /**
     * <p>Parameters for the table to import the data into. </p>
     */
    inline ImportTableRequest& WithTableCreationParameters(const TableCreationParameters& value) { SetTableCreationParameters(value); return *this;}

    /**
     * <p>Parameters for the table to import the data into. </p>
     */
    inline ImportTableRequest& WithTableCreationParameters(TableCreationParameters&& value) { SetTableCreationParameters(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    S3BucketSource m_s3BucketSource;
    bool m_s3BucketSourceHasBeenSet = false;

    InputFormat m_inputFormat;
    bool m_inputFormatHasBeenSet = false;

    InputFormatOptions m_inputFormatOptions;
    bool m_inputFormatOptionsHasBeenSet = false;

    InputCompressionType m_inputCompressionType;
    bool m_inputCompressionTypeHasBeenSet = false;

    TableCreationParameters m_tableCreationParameters;
    bool m_tableCreationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
