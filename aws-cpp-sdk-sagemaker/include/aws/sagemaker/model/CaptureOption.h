/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CaptureMode.h>
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
   * <p>Specifies data Model Monitor will capture.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CaptureOption">AWS
   * API Reference</a></p>
   */
  class CaptureOption
  {
  public:
    AWS_SAGEMAKER_API CaptureOption();
    AWS_SAGEMAKER_API CaptureOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CaptureOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify the boundary of data to capture.</p>
     */
    inline const CaptureMode& GetCaptureMode() const{ return m_captureMode; }

    /**
     * <p>Specify the boundary of data to capture.</p>
     */
    inline bool CaptureModeHasBeenSet() const { return m_captureModeHasBeenSet; }

    /**
     * <p>Specify the boundary of data to capture.</p>
     */
    inline void SetCaptureMode(const CaptureMode& value) { m_captureModeHasBeenSet = true; m_captureMode = value; }

    /**
     * <p>Specify the boundary of data to capture.</p>
     */
    inline void SetCaptureMode(CaptureMode&& value) { m_captureModeHasBeenSet = true; m_captureMode = std::move(value); }

    /**
     * <p>Specify the boundary of data to capture.</p>
     */
    inline CaptureOption& WithCaptureMode(const CaptureMode& value) { SetCaptureMode(value); return *this;}

    /**
     * <p>Specify the boundary of data to capture.</p>
     */
    inline CaptureOption& WithCaptureMode(CaptureMode&& value) { SetCaptureMode(std::move(value)); return *this;}

  private:

    CaptureMode m_captureMode;
    bool m_captureModeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
