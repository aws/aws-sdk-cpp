/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>Configuration of storage locations for the Amazon SageMaker Debugger
   * TensorBoard output data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TensorBoardOutputConfig">AWS
   * API Reference</a></p>
   */
  class TensorBoardOutputConfig
  {
  public:
    AWS_SAGEMAKER_API TensorBoardOutputConfig();
    AWS_SAGEMAKER_API TensorBoardOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TensorBoardOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Path to local storage location for tensorBoard output. Defaults to
     * <code>/opt/ml/output/tensorboard</code>.</p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }

    /**
     * <p>Path to local storage location for tensorBoard output. Defaults to
     * <code>/opt/ml/output/tensorboard</code>.</p>
     */
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }

    /**
     * <p>Path to local storage location for tensorBoard output. Defaults to
     * <code>/opt/ml/output/tensorboard</code>.</p>
     */
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }

    /**
     * <p>Path to local storage location for tensorBoard output. Defaults to
     * <code>/opt/ml/output/tensorboard</code>.</p>
     */
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }

    /**
     * <p>Path to local storage location for tensorBoard output. Defaults to
     * <code>/opt/ml/output/tensorboard</code>.</p>
     */
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }

    /**
     * <p>Path to local storage location for tensorBoard output. Defaults to
     * <code>/opt/ml/output/tensorboard</code>.</p>
     */
    inline TensorBoardOutputConfig& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}

    /**
     * <p>Path to local storage location for tensorBoard output. Defaults to
     * <code>/opt/ml/output/tensorboard</code>.</p>
     */
    inline TensorBoardOutputConfig& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}

    /**
     * <p>Path to local storage location for tensorBoard output. Defaults to
     * <code>/opt/ml/output/tensorboard</code>.</p>
     */
    inline TensorBoardOutputConfig& WithLocalPath(const char* value) { SetLocalPath(value); return *this;}


    /**
     * <p>Path to Amazon S3 storage location for TensorBoard output.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>Path to Amazon S3 storage location for TensorBoard output.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>Path to Amazon S3 storage location for TensorBoard output.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>Path to Amazon S3 storage location for TensorBoard output.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>Path to Amazon S3 storage location for TensorBoard output.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>Path to Amazon S3 storage location for TensorBoard output.</p>
     */
    inline TensorBoardOutputConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for TensorBoard output.</p>
     */
    inline TensorBoardOutputConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for TensorBoard output.</p>
     */
    inline TensorBoardOutputConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}

  private:

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
