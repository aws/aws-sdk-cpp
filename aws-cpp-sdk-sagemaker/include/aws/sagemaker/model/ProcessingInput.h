/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingS3Input.h>
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
   * <p>The inputs for a processing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingInput">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ProcessingInput
  {
  public:
    ProcessingInput();
    ProcessingInput(Aws::Utils::Json::JsonView jsonValue);
    ProcessingInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the inputs for the processing job.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }

    /**
     * <p>The name of the inputs for the processing job.</p>
     */
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }

    /**
     * <p>The name of the inputs for the processing job.</p>
     */
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }

    /**
     * <p>The name of the inputs for the processing job.</p>
     */
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }

    /**
     * <p>The name of the inputs for the processing job.</p>
     */
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }

    /**
     * <p>The name of the inputs for the processing job.</p>
     */
    inline ProcessingInput& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}

    /**
     * <p>The name of the inputs for the processing job.</p>
     */
    inline ProcessingInput& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}

    /**
     * <p>The name of the inputs for the processing job.</p>
     */
    inline ProcessingInput& WithInputName(const char* value) { SetInputName(value); return *this;}


    /**
     * <p>The S3 inputs for the processing job. </p>
     */
    inline const ProcessingS3Input& GetS3Input() const{ return m_s3Input; }

    /**
     * <p>The S3 inputs for the processing job. </p>
     */
    inline bool S3InputHasBeenSet() const { return m_s3InputHasBeenSet; }

    /**
     * <p>The S3 inputs for the processing job. </p>
     */
    inline void SetS3Input(const ProcessingS3Input& value) { m_s3InputHasBeenSet = true; m_s3Input = value; }

    /**
     * <p>The S3 inputs for the processing job. </p>
     */
    inline void SetS3Input(ProcessingS3Input&& value) { m_s3InputHasBeenSet = true; m_s3Input = std::move(value); }

    /**
     * <p>The S3 inputs for the processing job. </p>
     */
    inline ProcessingInput& WithS3Input(const ProcessingS3Input& value) { SetS3Input(value); return *this;}

    /**
     * <p>The S3 inputs for the processing job. </p>
     */
    inline ProcessingInput& WithS3Input(ProcessingS3Input&& value) { SetS3Input(std::move(value)); return *this;}

  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet;

    ProcessingS3Input m_s3Input;
    bool m_s3InputHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
