/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEPIPELINE_API EncryptionKey
  {
  public:
    EncryptionKey();
    EncryptionKey(Aws::Utils::Json::JsonView jsonValue);
    EncryptionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID used to identify the key. For an AWS KMS key, this is the key ID or
     * key ARN.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, this is the key ID or
     * key ARN.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, this is the key ID or
     * key ARN.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, this is the key ID or
     * key ARN.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, this is the key ID or
     * key ARN.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, this is the key ID or
     * key ARN.</p>
     */
    inline EncryptionKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, this is the key ID or
     * key ARN.</p>
     */
    inline EncryptionKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID used to identify the key. For an AWS KMS key, this is the key ID or
     * key ARN.</p>
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
    bool m_idHasBeenSet;

    EncryptionKeyType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
