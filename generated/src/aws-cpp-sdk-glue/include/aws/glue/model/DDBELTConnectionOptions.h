/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DdbExportType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies connection options for DynamoDB ELT (Extract, Load, Transform)
   * operations. This structure contains configuration parameters for connecting to
   * and extracting data from DynamoDB tables using the ELT connector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DDBELTConnectionOptions">AWS
   * API Reference</a></p>
   */
  class DDBELTConnectionOptions
  {
  public:
    AWS_GLUE_API DDBELTConnectionOptions() = default;
    AWS_GLUE_API DDBELTConnectionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DDBELTConnectionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the export type for DynamoDB data extraction. This parameter
     * determines how data is exported from the DynamoDB table during the ELT
     * process.</p>
     */
    inline DdbExportType GetDynamodbExport() const { return m_dynamodbExport; }
    inline bool DynamodbExportHasBeenSet() const { return m_dynamodbExportHasBeenSet; }
    inline void SetDynamodbExport(DdbExportType value) { m_dynamodbExportHasBeenSet = true; m_dynamodbExport = value; }
    inline DDBELTConnectionOptions& WithDynamodbExport(DdbExportType value) { SetDynamodbExport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that specifies whether to unnest DynamoDB JSON format during
     * data extraction. When set to <code>true</code>, the connector will flatten
     * nested JSON structures from DynamoDB items. When set to <code>false</code>, the
     * original DynamoDB JSON structure is preserved.</p>
     */
    inline bool GetDynamodbUnnestDDBJson() const { return m_dynamodbUnnestDDBJson; }
    inline bool DynamodbUnnestDDBJsonHasBeenSet() const { return m_dynamodbUnnestDDBJsonHasBeenSet; }
    inline void SetDynamodbUnnestDDBJson(bool value) { m_dynamodbUnnestDDBJsonHasBeenSet = true; m_dynamodbUnnestDDBJson = value; }
    inline DDBELTConnectionOptions& WithDynamodbUnnestDDBJson(bool value) { SetDynamodbUnnestDDBJson(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB table to extract data from.
     * This parameter specifies the source table for the ELT operation. </p>
     */
    inline const Aws::String& GetDynamodbTableArn() const { return m_dynamodbTableArn; }
    inline bool DynamodbTableArnHasBeenSet() const { return m_dynamodbTableArnHasBeenSet; }
    template<typename DynamodbTableArnT = Aws::String>
    void SetDynamodbTableArn(DynamodbTableArnT&& value) { m_dynamodbTableArnHasBeenSet = true; m_dynamodbTableArn = std::forward<DynamodbTableArnT>(value); }
    template<typename DynamodbTableArnT = Aws::String>
    DDBELTConnectionOptions& WithDynamodbTableArn(DynamodbTableArnT&& value) { SetDynamodbTableArn(std::forward<DynamodbTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket used for intermediate storage during the
     * DynamoDB ELT process. This bucket is used to temporarily store exported DynamoDB
     * data before it is processed by the ELT job.</p>
     */
    inline const Aws::String& GetDynamodbS3Bucket() const { return m_dynamodbS3Bucket; }
    inline bool DynamodbS3BucketHasBeenSet() const { return m_dynamodbS3BucketHasBeenSet; }
    template<typename DynamodbS3BucketT = Aws::String>
    void SetDynamodbS3Bucket(DynamodbS3BucketT&& value) { m_dynamodbS3BucketHasBeenSet = true; m_dynamodbS3Bucket = std::forward<DynamodbS3BucketT>(value); }
    template<typename DynamodbS3BucketT = Aws::String>
    DDBELTConnectionOptions& WithDynamodbS3Bucket(DynamodbS3BucketT&& value) { SetDynamodbS3Bucket(std::forward<DynamodbS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 object key prefix for files stored in the intermediate S3 bucket
     * during the DynamoDB ELT process. This prefix helps organize and identify the
     * temporary files created during data extraction.</p>
     */
    inline const Aws::String& GetDynamodbS3Prefix() const { return m_dynamodbS3Prefix; }
    inline bool DynamodbS3PrefixHasBeenSet() const { return m_dynamodbS3PrefixHasBeenSet; }
    template<typename DynamodbS3PrefixT = Aws::String>
    void SetDynamodbS3Prefix(DynamodbS3PrefixT&& value) { m_dynamodbS3PrefixHasBeenSet = true; m_dynamodbS3Prefix = std::forward<DynamodbS3PrefixT>(value); }
    template<typename DynamodbS3PrefixT = Aws::String>
    DDBELTConnectionOptions& WithDynamodbS3Prefix(DynamodbS3PrefixT&& value) { SetDynamodbS3Prefix(std::forward<DynamodbS3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the S3 bucket specified in
     * <code>DynamodbS3Bucket</code>. This parameter is required when the S3 bucket is
     * owned by a different Amazon Web Services account than the one running the ELT
     * job, enabling cross-account access to the intermediate storage bucket.</p>
     */
    inline const Aws::String& GetDynamodbS3BucketOwner() const { return m_dynamodbS3BucketOwner; }
    inline bool DynamodbS3BucketOwnerHasBeenSet() const { return m_dynamodbS3BucketOwnerHasBeenSet; }
    template<typename DynamodbS3BucketOwnerT = Aws::String>
    void SetDynamodbS3BucketOwner(DynamodbS3BucketOwnerT&& value) { m_dynamodbS3BucketOwnerHasBeenSet = true; m_dynamodbS3BucketOwner = std::forward<DynamodbS3BucketOwnerT>(value); }
    template<typename DynamodbS3BucketOwnerT = Aws::String>
    DDBELTConnectionOptions& WithDynamodbS3BucketOwner(DynamodbS3BucketOwnerT&& value) { SetDynamodbS3BucketOwner(std::forward<DynamodbS3BucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Security Token
     * Service (STS) role to assume for accessing DynamoDB and S3 resources during the
     * ELT operation. This role must have the necessary permissions to read from the
     * DynamoDB table and write to the intermediate S3 bucket. </p>
     */
    inline const Aws::String& GetDynamodbStsRoleArn() const { return m_dynamodbStsRoleArn; }
    inline bool DynamodbStsRoleArnHasBeenSet() const { return m_dynamodbStsRoleArnHasBeenSet; }
    template<typename DynamodbStsRoleArnT = Aws::String>
    void SetDynamodbStsRoleArn(DynamodbStsRoleArnT&& value) { m_dynamodbStsRoleArnHasBeenSet = true; m_dynamodbStsRoleArn = std::forward<DynamodbStsRoleArnT>(value); }
    template<typename DynamodbStsRoleArnT = Aws::String>
    DDBELTConnectionOptions& WithDynamodbStsRoleArn(DynamodbStsRoleArnT&& value) { SetDynamodbStsRoleArn(std::forward<DynamodbStsRoleArnT>(value)); return *this;}
    ///@}
  private:

    DdbExportType m_dynamodbExport{DdbExportType::NOT_SET};
    bool m_dynamodbExportHasBeenSet = false;

    bool m_dynamodbUnnestDDBJson{false};
    bool m_dynamodbUnnestDDBJsonHasBeenSet = false;

    Aws::String m_dynamodbTableArn;
    bool m_dynamodbTableArnHasBeenSet = false;

    Aws::String m_dynamodbS3Bucket;
    bool m_dynamodbS3BucketHasBeenSet = false;

    Aws::String m_dynamodbS3Prefix;
    bool m_dynamodbS3PrefixHasBeenSet = false;

    Aws::String m_dynamodbS3BucketOwner;
    bool m_dynamodbS3BucketOwnerHasBeenSet = false;

    Aws::String m_dynamodbStsRoleArn;
    bool m_dynamodbStsRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
