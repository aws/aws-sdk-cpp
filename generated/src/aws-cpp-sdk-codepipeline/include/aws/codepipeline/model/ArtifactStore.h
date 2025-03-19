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
    AWS_CODEPIPELINE_API ArtifactStore() = default;
    AWS_CODEPIPELINE_API ArtifactStore(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ArtifactStore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the artifact store, such as S3.</p>
     */
    inline ArtifactStoreType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ArtifactStoreType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ArtifactStore& WithType(ArtifactStoreType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket used for storing the artifacts for a pipeline. You can specify
     * the name of an S3 bucket but not a folder in the bucket. A folder to contain the
     * pipeline artifacts is created for you based on the name of the pipeline. You can
     * use any S3 bucket in the same Amazon Web Services Region as the pipeline to
     * store your pipeline artifacts.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    ArtifactStore& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key used to encrypt the data in the artifact store, such as an
     * Amazon Web Services Key Management Service key. If this is undefined, the
     * default key for Amazon S3 is used.</p>
     */
    inline const EncryptionKey& GetEncryptionKey() const { return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    template<typename EncryptionKeyT = EncryptionKey>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = EncryptionKey>
    ArtifactStore& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}
  private:

    ArtifactStoreType m_type{ArtifactStoreType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
