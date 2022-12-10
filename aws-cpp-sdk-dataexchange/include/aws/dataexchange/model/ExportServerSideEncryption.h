/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/ServerSideEncryptionTypes.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Encryption configuration of the export job. Includes the encryption type in
   * addition to the AWS KMS key. The KMS key is only necessary if you chose the KMS
   * encryption type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ExportServerSideEncryption">AWS
   * API Reference</a></p>
   */
  class ExportServerSideEncryption
  {
  public:
    AWS_DATAEXCHANGE_API ExportServerSideEncryption();
    AWS_DATAEXCHANGE_API ExportServerSideEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ExportServerSideEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key you want to use to encrypt
     * the Amazon S3 objects. This parameter is required if you choose aws:kms as an
     * encryption type.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key you want to use to encrypt
     * the Amazon S3 objects. This parameter is required if you choose aws:kms as an
     * encryption type.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key you want to use to encrypt
     * the Amazon S3 objects. This parameter is required if you choose aws:kms as an
     * encryption type.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key you want to use to encrypt
     * the Amazon S3 objects. This parameter is required if you choose aws:kms as an
     * encryption type.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key you want to use to encrypt
     * the Amazon S3 objects. This parameter is required if you choose aws:kms as an
     * encryption type.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key you want to use to encrypt
     * the Amazon S3 objects. This parameter is required if you choose aws:kms as an
     * encryption type.</p>
     */
    inline ExportServerSideEncryption& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key you want to use to encrypt
     * the Amazon S3 objects. This parameter is required if you choose aws:kms as an
     * encryption type.</p>
     */
    inline ExportServerSideEncryption& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key you want to use to encrypt
     * the Amazon S3 objects. This parameter is required if you choose aws:kms as an
     * encryption type.</p>
     */
    inline ExportServerSideEncryption& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The type of server side encryption used for encrypting the objects in Amazon
     * S3.</p>
     */
    inline const ServerSideEncryptionTypes& GetType() const{ return m_type; }

    /**
     * <p>The type of server side encryption used for encrypting the objects in Amazon
     * S3.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of server side encryption used for encrypting the objects in Amazon
     * S3.</p>
     */
    inline void SetType(const ServerSideEncryptionTypes& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of server side encryption used for encrypting the objects in Amazon
     * S3.</p>
     */
    inline void SetType(ServerSideEncryptionTypes&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of server side encryption used for encrypting the objects in Amazon
     * S3.</p>
     */
    inline ExportServerSideEncryption& WithType(const ServerSideEncryptionTypes& value) { SetType(value); return *this;}

    /**
     * <p>The type of server side encryption used for encrypting the objects in Amazon
     * S3.</p>
     */
    inline ExportServerSideEncryption& WithType(ServerSideEncryptionTypes&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    ServerSideEncryptionTypes m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
