/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ImageConfig.h>
#include <aws/lambda/model/ImageConfigError.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Response to a <code>GetFunctionConfiguration</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ImageConfigResponse">AWS
   * API Reference</a></p>
   */
  class ImageConfigResponse
  {
  public:
    AWS_LAMBDA_API ImageConfigResponse() = default;
    AWS_LAMBDA_API ImageConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API ImageConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration values that override the container image Dockerfile.</p>
     */
    inline const ImageConfig& GetImageConfig() const { return m_imageConfig; }
    inline bool ImageConfigHasBeenSet() const { return m_imageConfigHasBeenSet; }
    template<typename ImageConfigT = ImageConfig>
    void SetImageConfig(ImageConfigT&& value) { m_imageConfigHasBeenSet = true; m_imageConfig = std::forward<ImageConfigT>(value); }
    template<typename ImageConfigT = ImageConfig>
    ImageConfigResponse& WithImageConfig(ImageConfigT&& value) { SetImageConfig(std::forward<ImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error response to <code>GetFunctionConfiguration</code>.</p>
     */
    inline const ImageConfigError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ImageConfigError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ImageConfigError>
    ImageConfigResponse& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    ImageConfig m_imageConfig;
    bool m_imageConfigHasBeenSet = false;

    ImageConfigError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
