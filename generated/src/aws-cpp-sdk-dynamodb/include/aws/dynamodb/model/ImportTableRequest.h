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
    AWS_DYNAMODB_API ImportTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportTable"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;
    AWS_DYNAMODB_API Aws::Vector<Aws::String> GetOperationContextParams() const;

    ///@{
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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ImportTableRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket that provides the source for the import. </p>
     */
    inline const S3BucketSource& GetS3BucketSource() const { return m_s3BucketSource; }
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }
    template<typename S3BucketSourceT = S3BucketSource>
    void SetS3BucketSource(S3BucketSourceT&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::forward<S3BucketSourceT>(value); }
    template<typename S3BucketSourceT = S3BucketSource>
    ImportTableRequest& WithS3BucketSource(S3BucketSourceT&& value) { SetS3BucketSource(std::forward<S3BucketSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format of the source data. Valid values for <code>ImportFormat</code>
     * are <code>CSV</code>, <code>DYNAMODB_JSON</code> or <code>ION</code>. </p>
     */
    inline InputFormat GetInputFormat() const { return m_inputFormat; }
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }
    inline void SetInputFormat(InputFormat value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }
    inline ImportTableRequest& WithInputFormat(InputFormat value) { SetInputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional properties that specify how the input is formatted, </p>
     */
    inline const InputFormatOptions& GetInputFormatOptions() const { return m_inputFormatOptions; }
    inline bool InputFormatOptionsHasBeenSet() const { return m_inputFormatOptionsHasBeenSet; }
    template<typename InputFormatOptionsT = InputFormatOptions>
    void SetInputFormatOptions(InputFormatOptionsT&& value) { m_inputFormatOptionsHasBeenSet = true; m_inputFormatOptions = std::forward<InputFormatOptionsT>(value); }
    template<typename InputFormatOptionsT = InputFormatOptions>
    ImportTableRequest& WithInputFormatOptions(InputFormatOptionsT&& value) { SetInputFormatOptions(std::forward<InputFormatOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Type of compression to be used on the input coming from the imported table.
     * </p>
     */
    inline InputCompressionType GetInputCompressionType() const { return m_inputCompressionType; }
    inline bool InputCompressionTypeHasBeenSet() const { return m_inputCompressionTypeHasBeenSet; }
    inline void SetInputCompressionType(InputCompressionType value) { m_inputCompressionTypeHasBeenSet = true; m_inputCompressionType = value; }
    inline ImportTableRequest& WithInputCompressionType(InputCompressionType value) { SetInputCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters for the table to import the data into. </p>
     */
    inline const TableCreationParameters& GetTableCreationParameters() const { return m_tableCreationParameters; }
    inline bool TableCreationParametersHasBeenSet() const { return m_tableCreationParametersHasBeenSet; }
    template<typename TableCreationParametersT = TableCreationParameters>
    void SetTableCreationParameters(TableCreationParametersT&& value) { m_tableCreationParametersHasBeenSet = true; m_tableCreationParameters = std::forward<TableCreationParametersT>(value); }
    template<typename TableCreationParametersT = TableCreationParameters>
    ImportTableRequest& WithTableCreationParameters(TableCreationParametersT&& value) { SetTableCreationParameters(std::forward<TableCreationParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    S3BucketSource m_s3BucketSource;
    bool m_s3BucketSourceHasBeenSet = false;

    InputFormat m_inputFormat{InputFormat::NOT_SET};
    bool m_inputFormatHasBeenSet = false;

    InputFormatOptions m_inputFormatOptions;
    bool m_inputFormatOptionsHasBeenSet = false;

    InputCompressionType m_inputCompressionType{InputCompressionType::NOT_SET};
    bool m_inputCompressionTypeHasBeenSet = false;

    TableCreationParameters m_tableCreationParameters;
    bool m_tableCreationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
