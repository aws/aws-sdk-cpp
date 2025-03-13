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
    AWS_DATAEXCHANGE_API ExportServerSideEncryption() = default;
    AWS_DATAEXCHANGE_API ExportServerSideEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ExportServerSideEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key you want to use to encrypt
     * the Amazon S3 objects. This parameter is required if you choose aws:kms as an
     * encryption type.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    ExportServerSideEncryption& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of server side encryption used for encrypting the objects in Amazon
     * S3.</p>
     */
    inline ServerSideEncryptionTypes GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ServerSideEncryptionTypes value) { m_typeHasBeenSet = true; m_type = value; }
    inline ExportServerSideEncryption& WithType(ServerSideEncryptionTypes value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    ServerSideEncryptionTypes m_type{ServerSideEncryptionTypes::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
