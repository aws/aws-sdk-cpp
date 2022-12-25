/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ArtifactStoreType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/EncryptionKey.h>
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
   * <p>The S3 bucket where artifacts for the pipeline are stored.</p>  <p>You
   * must include either <code>artifactStore</code> or <code>artifactStores</code> in
   * your pipeline, but you cannot use both. If you create a cross-region action in
   * your pipeline, you must use <code>artifactStores</code>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ArtifactStore">AWS
   * API Reference</a></p>
   */
  class ArtifactStore
  {
  public:
    AWS_CODEPIPELINE_API ArtifactStore();
    AWS_CODEPIPELINE_API ArtifactStore(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ArtifactStore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline const ArtifactStoreType& GetType() const{ return m_type; }

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline void SetType(const ArtifactStoreType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline void SetType(ArtifactStoreType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline ArtifactStore& WithType(const ArtifactStoreType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline ArtifactStore& WithType(ArtifactStoreType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The S3 bucket used for storing the artifacts for a pipeline. You can specify
     * the name of an S3 bucket but not a folder in the bucket. A folder to contain the
     * pipeline artifacts is created for you based on the name of the pipeline. You can
     * use any S3 bucket in the same AWS Region as the pipeline to store your pipeline
     * artifacts.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The S3 bucket used for storing the artifacts for a pipeline. You can specify
     * the name of an S3 bucket but not a folder in the bucket. A folder to contain the
     * pipeline artifacts is created for you based on the name of the pipeline. You can
     * use any S3 bucket in the same AWS Region as the pipeline to store your pipeline
     * artifacts.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The S3 bucket used for storing the artifacts for a pipeline. You can specify
     * the name of an S3 bucket but not a folder in the bucket. A folder to contain the
     * pipeline artifacts is created for you based on the name of the pipeline. You can
     * use any S3 bucket in the same AWS Region as the pipeline to store your pipeline
     * artifacts.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The S3 bucket used for storing the artifacts for a pipeline. You can specify
     * the name of an S3 bucket but not a folder in the bucket. A folder to contain the
     * pipeline artifacts is created for you based on the name of the pipeline. You can
     * use any S3 bucket in the same AWS Region as the pipeline to store your pipeline
     * artifacts.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The S3 bucket used for storing the artifacts for a pipeline. You can specify
     * the name of an S3 bucket but not a folder in the bucket. A folder to contain the
     * pipeline artifacts is created for you based on the name of the pipeline. You can
     * use any S3 bucket in the same AWS Region as the pipeline to store your pipeline
     * artifacts.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The S3 bucket used for storing the artifacts for a pipeline. You can specify
     * the name of an S3 bucket but not a folder in the bucket. A folder to contain the
     * pipeline artifacts is created for you based on the name of the pipeline. You can
     * use any S3 bucket in the same AWS Region as the pipeline to store your pipeline
     * artifacts.</p>
     */
    inline ArtifactStore& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The S3 bucket used for storing the artifacts for a pipeline. You can specify
     * the name of an S3 bucket but not a folder in the bucket. A folder to contain the
     * pipeline artifacts is created for you based on the name of the pipeline. You can
     * use any S3 bucket in the same AWS Region as the pipeline to store your pipeline
     * artifacts.</p>
     */
    inline ArtifactStore& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket used for storing the artifacts for a pipeline. You can specify
     * the name of an S3 bucket but not a folder in the bucket. A folder to contain the
     * pipeline artifacts is created for you based on the name of the pipeline. You can
     * use any S3 bucket in the same AWS Region as the pipeline to store your pipeline
     * artifacts.</p>
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
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

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
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

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
    inline ArtifactStore& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(std::move(value)); return *this;}

  private:

    ArtifactStoreType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
