/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/EncryptionKeyType.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about the key used to encrypt data in the artifact
   * store, such as an AWS Key Management Service (AWS KMS) key.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/EncryptionKey">AWS
   * API Reference</a></p>
   */
  class EncryptionKey
  {
  public:
    AWS_CODEPIPELINE_API EncryptionKey();
    AWS_CODEPIPELINE_API EncryptionKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API EncryptionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID used to identify the key. For an AWS KMS key, you can use the key ID,
     * the key ARN, or the alias ARN.</p>  <p>Aliases are recognized only in the
     * account that created the customer master key (CMK). For cross-account actions,
     * you can only use the key ID or key ARN to identify the key.</p> 
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, you can use the key ID,
     * the key ARN, or the alias ARN.</p>  <p>Aliases are recognized only in the
     * account that created the customer master key (CMK). For cross-account actions,
     * you can only use the key ID or key ARN to identify the key.</p> 
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, you can use the key ID,
     * the key ARN, or the alias ARN.</p>  <p>Aliases are recognized only in the
     * account that created the customer master key (CMK). For cross-account actions,
     * you can only use the key ID or key ARN to identify the key.</p> 
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, you can use the key ID,
     * the key ARN, or the alias ARN.</p>  <p>Aliases are recognized only in the
     * account that created the customer master key (CMK). For cross-account actions,
     * you can only use the key ID or key ARN to identify the key.</p> 
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, you can use the key ID,
     * the key ARN, or the alias ARN.</p>  <p>Aliases are recognized only in the
     * account that created the customer master key (CMK). For cross-account actions,
     * you can only use the key ID or key ARN to identify the key.</p> 
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, you can use the key ID,
     * the key ARN, or the alias ARN.</p>  <p>Aliases are recognized only in the
     * account that created the customer master key (CMK). For cross-account actions,
     * you can only use the key ID or key ARN to identify the key.</p> 
     */
    inline EncryptionKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, you can use the key ID,
     * the key ARN, or the alias ARN.</p>  <p>Aliases are recognized only in the
     * account that created the customer master key (CMK). For cross-account actions,
     * you can only use the key ID or key ARN to identify the key.</p> 
     */
    inline EncryptionKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, you can use the key ID,
     * the key ARN, or the alias ARN.</p>  <p>Aliases are recognized only in the
     * account that created the customer master key (CMK). For cross-account actions,
     * you can only use the key ID or key ARN to identify the key.</p> 
     */
    inline EncryptionKey& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of encryption key, such as an AWS Key Management Service (AWS KMS)
     * key. When creating or updating a pipeline, the value must be set to 'KMS'.</p>
     */
    inline const EncryptionKeyType& GetType() const{ return m_type; }

    /**
     * <p>The type of encryption key, such as an AWS Key Management Service (AWS KMS)
     * key. When creating or updating a pipeline, the value must be set to 'KMS'.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of encryption key, such as an AWS Key Management Service (AWS KMS)
     * key. When creating or updating a pipeline, the value must be set to 'KMS'.</p>
     */
    inline void SetType(const EncryptionKeyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of encryption key, such as an AWS Key Management Service (AWS KMS)
     * key. When creating or updating a pipeline, the value must be set to 'KMS'.</p>
     */
    inline void SetType(EncryptionKeyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of encryption key, such as an AWS Key Management Service (AWS KMS)
     * key. When creating or updating a pipeline, the value must be set to 'KMS'.</p>
     */
    inline EncryptionKey& WithType(const EncryptionKeyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of encryption key, such as an AWS Key Management Service (AWS KMS)
     * key. When creating or updating a pipeline, the value must be set to 'KMS'.</p>
     */
    inline EncryptionKey& WithType(EncryptionKeyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    EncryptionKeyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
