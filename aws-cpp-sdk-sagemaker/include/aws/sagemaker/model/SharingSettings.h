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
   * <p>The sharing settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SharingSettings">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SharingSettings
  {
  public:
    SharingSettings();
    SharingSettings(Aws::Utils::Json::JsonView jsonValue);
    SharingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The notebook output option.</p>
     */
    inline const NotebookOutputOption& GetNotebookOutputOption() const{ return m_notebookOutputOption; }

    /**
     * <p>The notebook output option.</p>
     */
    inline bool NotebookOutputOptionHasBeenSet() const { return m_notebookOutputOptionHasBeenSet; }

    /**
     * <p>The notebook output option.</p>
     */
    inline void SetNotebookOutputOption(const NotebookOutputOption& value) { m_notebookOutputOptionHasBeenSet = true; m_notebookOutputOption = value; }

    /**
     * <p>The notebook output option.</p>
     */
    inline void SetNotebookOutputOption(NotebookOutputOption&& value) { m_notebookOutputOptionHasBeenSet = true; m_notebookOutputOption = std::move(value); }

    /**
     * <p>The notebook output option.</p>
     */
    inline SharingSettings& WithNotebookOutputOption(const NotebookOutputOption& value) { SetNotebookOutputOption(value); return *this;}

    /**
     * <p>The notebook output option.</p>
     */
    inline SharingSettings& WithNotebookOutputOption(NotebookOutputOption&& value) { SetNotebookOutputOption(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 output path.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>The Amazon S3 output path.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>The Amazon S3 output path.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>The Amazon S3 output path.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>The Amazon S3 output path.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>The Amazon S3 output path.</p>
     */
    inline SharingSettings& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>The Amazon S3 output path.</p>
     */
    inline SharingSettings& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 output path.</p>
     */
    inline SharingSettings& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline const Aws::String& GetS3KmsKeyId() const{ return m_s3KmsKeyId; }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline bool S3KmsKeyIdHasBeenSet() const { return m_s3KmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline void SetS3KmsKeyId(const Aws::String& value) { m_s3KmsKeyIdHasBeenSet = true; m_s3KmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline void SetS3KmsKeyId(Aws::String&& value) { m_s3KmsKeyIdHasBeenSet = true; m_s3KmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline void SetS3KmsKeyId(const char* value) { m_s3KmsKeyIdHasBeenSet = true; m_s3KmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline SharingSettings& WithS3KmsKeyId(const Aws::String& value) { SetS3KmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline SharingSettings& WithS3KmsKeyId(Aws::String&& value) { SetS3KmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline SharingSettings& WithS3KmsKeyId(const char* value) { SetS3KmsKeyId(value); return *this;}

  private:

    NotebookOutputOption m_notebookOutputOption;
    bool m_notebookOutputOptionHasBeenSet;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet;

    Aws::String m_s3KmsKeyId;
    bool m_s3KmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
