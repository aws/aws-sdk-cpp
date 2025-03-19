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
   * store, such as an Amazon Web Services Key Management Service (Key Management
   * Service) key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/EncryptionKey">AWS
   * API Reference</a></p>
   */
  class EncryptionKey
  {
  public:
    AWS_CODEPIPELINE_API EncryptionKey() = default;
    AWS_CODEPIPELINE_API EncryptionKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API EncryptionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID used to identify the key. For an Amazon Web Services KMS key, you can
     * use the key ID, the key ARN, or the alias ARN.</p>  <p>Aliases are
     * recognized only in the account that created the KMS key. For cross-account
     * actions, you can only use the key ID or key ARN to identify the key.
     * Cross-account actions involve using the role from the other account (AccountB),
     * so specifying the key ID will use the key from the other account (AccountB).</p>
     * 
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    EncryptionKey& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption key, such as an Amazon Web Services KMS key. When
     * creating or updating a pipeline, the value must be set to 'KMS'.</p>
     */
    inline EncryptionKeyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EncryptionKeyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline EncryptionKey& WithType(EncryptionKeyType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    EncryptionKeyType m_type{EncryptionKeyType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
