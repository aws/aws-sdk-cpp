/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/NotebookOutputOption.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies options for sharing SageMaker Studio notebooks. These settings are
   * specified as part of <code>DefaultUserSettings</code> when the
   * <code>CreateDomain</code> API is called, and as part of
   * <code>UserSettings</code> when the <code>CreateUserProfile</code> API is called.
   * When <code>SharingSettings</code> is not specified, notebook sharing isn't
   * allowed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SharingSettings">AWS
   * API Reference</a></p>
   */
  class SharingSettings
  {
  public:
    AWS_SAGEMAKER_API SharingSettings();
    AWS_SAGEMAKER_API SharingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SharingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to include the notebook cell output when sharing the notebook. The
     * default is <code>Disabled</code>.</p>
     */
    inline const NotebookOutputOption& GetNotebookOutputOption() const{ return m_notebookOutputOption; }

    /**
     * <p>Whether to include the notebook cell output when sharing the notebook. The
     * default is <code>Disabled</code>.</p>
     */
    inline bool NotebookOutputOptionHasBeenSet() const { return m_notebookOutputOptionHasBeenSet; }

    /**
     * <p>Whether to include the notebook cell output when sharing the notebook. The
     * default is <code>Disabled</code>.</p>
     */
    inline void SetNotebookOutputOption(const NotebookOutputOption& value) { m_notebookOutputOptionHasBeenSet = true; m_notebookOutputOption = value; }

    /**
     * <p>Whether to include the notebook cell output when sharing the notebook. The
     * default is <code>Disabled</code>.</p>
     */
    inline void SetNotebookOutputOption(NotebookOutputOption&& value) { m_notebookOutputOptionHasBeenSet = true; m_notebookOutputOption = std::move(value); }

    /**
     * <p>Whether to include the notebook cell output when sharing the notebook. The
     * default is <code>Disabled</code>.</p>
     */
    inline SharingSettings& WithNotebookOutputOption(const NotebookOutputOption& value) { SetNotebookOutputOption(value); return *this;}

    /**
     * <p>Whether to include the notebook cell output when sharing the notebook. The
     * default is <code>Disabled</code>.</p>
     */
    inline SharingSettings& WithNotebookOutputOption(NotebookOutputOption&& value) { SetNotebookOutputOption(std::move(value)); return *this;}


    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon S3
     * bucket used to store the shared notebook snapshots.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon S3
     * bucket used to store the shared notebook snapshots.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon S3
     * bucket used to store the shared notebook snapshots.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon S3
     * bucket used to store the shared notebook snapshots.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon S3
     * bucket used to store the shared notebook snapshots.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon S3
     * bucket used to store the shared notebook snapshots.</p>
     */
    inline SharingSettings& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon S3
     * bucket used to store the shared notebook snapshots.</p>
     */
    inline SharingSettings& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon S3
     * bucket used to store the shared notebook snapshots.</p>
     */
    inline SharingSettings& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon
     * Web Services Key Management Service (KMS) encryption key ID used to encrypt the
     * notebook cell output in the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3KmsKeyId() const{ return m_s3KmsKeyId; }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon
     * Web Services Key Management Service (KMS) encryption key ID used to encrypt the
     * notebook cell output in the Amazon S3 bucket.</p>
     */
    inline bool S3KmsKeyIdHasBeenSet() const { return m_s3KmsKeyIdHasBeenSet; }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon
     * Web Services Key Management Service (KMS) encryption key ID used to encrypt the
     * notebook cell output in the Amazon S3 bucket.</p>
     */
    inline void SetS3KmsKeyId(const Aws::String& value) { m_s3KmsKeyIdHasBeenSet = true; m_s3KmsKeyId = value; }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon
     * Web Services Key Management Service (KMS) encryption key ID used to encrypt the
     * notebook cell output in the Amazon S3 bucket.</p>
     */
    inline void SetS3KmsKeyId(Aws::String&& value) { m_s3KmsKeyIdHasBeenSet = true; m_s3KmsKeyId = std::move(value); }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon
     * Web Services Key Management Service (KMS) encryption key ID used to encrypt the
     * notebook cell output in the Amazon S3 bucket.</p>
     */
    inline void SetS3KmsKeyId(const char* value) { m_s3KmsKeyIdHasBeenSet = true; m_s3KmsKeyId.assign(value); }

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon
     * Web Services Key Management Service (KMS) encryption key ID used to encrypt the
     * notebook cell output in the Amazon S3 bucket.</p>
     */
    inline SharingSettings& WithS3KmsKeyId(const Aws::String& value) { SetS3KmsKeyId(value); return *this;}

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon
     * Web Services Key Management Service (KMS) encryption key ID used to encrypt the
     * notebook cell output in the Amazon S3 bucket.</p>
     */
    inline SharingSettings& WithS3KmsKeyId(Aws::String&& value) { SetS3KmsKeyId(std::move(value)); return *this;}

    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon
     * Web Services Key Management Service (KMS) encryption key ID used to encrypt the
     * notebook cell output in the Amazon S3 bucket.</p>
     */
    inline SharingSettings& WithS3KmsKeyId(const char* value) { SetS3KmsKeyId(value); return *this;}

  private:

    NotebookOutputOption m_notebookOutputOption;
    bool m_notebookOutputOptionHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    Aws::String m_s3KmsKeyId;
    bool m_s3KmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
