/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/EncryptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/model/EncryptionStatus.h>
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
namespace DSQL
{
namespace Model
{

  /**
   * <p>Configuration details about encryption for the cluster including the KMS key
   * ARN, encryption type, and encryption status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/EncryptionDetails">AWS
   * API Reference</a></p>
   */
  class EncryptionDetails
  {
  public:
    AWS_DSQL_API EncryptionDetails() = default;
    AWS_DSQL_API EncryptionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DSQL_API EncryptionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DSQL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of encryption that protects the data on your cluster.</p>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline EncryptionDetails& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that encrypts data in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    EncryptionDetails& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of encryption for the cluster.</p>
     */
    inline EncryptionStatus GetEncryptionStatus() const { return m_encryptionStatus; }
    inline bool EncryptionStatusHasBeenSet() const { return m_encryptionStatusHasBeenSet; }
    inline void SetEncryptionStatus(EncryptionStatus value) { m_encryptionStatusHasBeenSet = true; m_encryptionStatus = value; }
    inline EncryptionDetails& WithEncryptionStatus(EncryptionStatus value) { SetEncryptionStatus(value); return *this;}
    ///@}
  private:

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    EncryptionStatus m_encryptionStatus{EncryptionStatus::NOT_SET};
    bool m_encryptionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
