/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingS3Output.h>
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
   * <p>Describes the results of a processing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingOutput">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ProcessingOutput
  {
  public:
    ProcessingOutput();
    ProcessingOutput(Aws::Utils::Json::JsonView jsonValue);
    ProcessingOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the processing job output.</p>
     */
    inline const Aws::String& GetOutputName() const{ return m_outputName; }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline void SetOutputName(const Aws::String& value) { m_outputNameHasBeenSet = true; m_outputName = value; }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline void SetOutputName(Aws::String&& value) { m_outputNameHasBeenSet = true; m_outputName = std::move(value); }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline void SetOutputName(const char* value) { m_outputNameHasBeenSet = true; m_outputName.assign(value); }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline ProcessingOutput& WithOutputName(const Aws::String& value) { SetOutputName(value); return *this;}

    /**
     * <p>The name for the processing job output.</p>
     */
    inline ProcessingOutput& WithOutputName(Aws::String&& value) { SetOutputName(std::move(value)); return *this;}

    /**
     * <p>The name for the processing job output.</p>
     */
    inline ProcessingOutput& WithOutputName(const char* value) { SetOutputName(value); return *this;}


    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline const ProcessingS3Output& GetS3Output() const{ return m_s3Output; }

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline bool S3OutputHasBeenSet() const { return m_s3OutputHasBeenSet; }

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline void SetS3Output(const ProcessingS3Output& value) { m_s3OutputHasBeenSet = true; m_s3Output = value; }

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline void SetS3Output(ProcessingS3Output&& value) { m_s3OutputHasBeenSet = true; m_s3Output = std::move(value); }

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline ProcessingOutput& WithS3Output(const ProcessingS3Output& value) { SetS3Output(value); return *this;}

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline ProcessingOutput& WithS3Output(ProcessingS3Output&& value) { SetS3Output(std::move(value)); return *this;}

  private:

    Aws::String m_outputName;
    bool m_outputNameHasBeenSet;

    ProcessingS3Output m_s3Output;
    bool m_s3OutputHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
