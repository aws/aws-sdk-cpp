/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/ArtifactStoreType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/EncryptionKey.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The Amazon S3 location where artifacts are stored for the pipeline. If this
   * Amazon S3 bucket is created manually, it must meet the requirements for AWS
   * CodePipeline. For more information, see the <a
   * href="http://docs.aws.amazon.com/codepipeline/latest/userguide/concepts.html#CPS3Bucket">Concepts</a>.</p>
   */
  class AWS_CODEPIPELINE_API ArtifactStore
  {
  public:
    ArtifactStore();
    ArtifactStore(const Aws::Utils::Json::JsonValue& jsonValue);
    ArtifactStore& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline const ArtifactStoreType& GetType() const{ return m_type; }

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline void SetType(const ArtifactStoreType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline void SetType(ArtifactStoreType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline ArtifactStore& WithType(const ArtifactStoreType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline ArtifactStore& WithType(ArtifactStoreType&& value) { SetType(value); return *this;}

    /**
     * <p>The location for storing the artifacts for a pipeline, such as an S3 bucket
     * or folder.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location for storing the artifacts for a pipeline, such as an S3 bucket
     * or folder.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location for storing the artifacts for a pipeline, such as an S3 bucket
     * or folder.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location for storing the artifacts for a pipeline, such as an S3 bucket
     * or folder.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The location for storing the artifacts for a pipeline, such as an S3 bucket
     * or folder.</p>
     */
    inline ArtifactStore& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location for storing the artifacts for a pipeline, such as an S3 bucket
     * or folder.</p>
     */
    inline ArtifactStore& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    /**
     * <p>The location for storing the artifacts for a pipeline, such as an S3 bucket
     * or folder.</p>
     */
    inline ArtifactStore& WithLocation(const char* value) { SetLocation(value); return *this;}

    /**
     * <p>The encryption key used to encrypt the data in the artifact store, such as an
     * AWS Key Management Service (AWS KMS) key. If this is undefined, the default key
     * for Amazon S3 is used.</p>
     */
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The encryption key used to encrypt the data in the artifact store, such as an
     * AWS Key Management Service (AWS KMS) key. If this is undefined, the default key
     * for Amazon S3 is used.</p>
     */
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The encryption key used to encrypt the data in the artifact store, such as an
     * AWS Key Management Service (AWS KMS) key. If this is undefined, the default key
     * for Amazon S3 is used.</p>
     */
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The encryption key used to encrypt the data in the artifact store, such as an
     * AWS Key Management Service (AWS KMS) key. If this is undefined, the default key
     * for Amazon S3 is used.</p>
     */
    inline ArtifactStore& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The encryption key used to encrypt the data in the artifact store, such as an
     * AWS Key Management Service (AWS KMS) key. If this is undefined, the default key
     * for Amazon S3 is used.</p>
     */
    inline ArtifactStore& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(value); return *this;}

  private:
    ArtifactStoreType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_location;
    bool m_locationHasBeenSet;
    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
