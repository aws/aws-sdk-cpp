/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/RuntimeVersionError.h>
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
   * <p>The ARN of the runtime and any errors that occured.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RuntimeVersionConfig">AWS
   * API Reference</a></p>
   */
  class RuntimeVersionConfig
  {
  public:
    AWS_LAMBDA_API RuntimeVersionConfig() = default;
    AWS_LAMBDA_API RuntimeVersionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API RuntimeVersionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the runtime version you want the function to use.</p>
     */
    inline const Aws::String& GetRuntimeVersionArn() const { return m_runtimeVersionArn; }
    inline bool RuntimeVersionArnHasBeenSet() const { return m_runtimeVersionArnHasBeenSet; }
    template<typename RuntimeVersionArnT = Aws::String>
    void SetRuntimeVersionArn(RuntimeVersionArnT&& value) { m_runtimeVersionArnHasBeenSet = true; m_runtimeVersionArn = std::forward<RuntimeVersionArnT>(value); }
    template<typename RuntimeVersionArnT = Aws::String>
    RuntimeVersionConfig& WithRuntimeVersionArn(RuntimeVersionArnT&& value) { SetRuntimeVersionArn(std::forward<RuntimeVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error response when Lambda is unable to retrieve the runtime version for a
     * function.</p>
     */
    inline const RuntimeVersionError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = RuntimeVersionError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = RuntimeVersionError>
    RuntimeVersionConfig& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_runtimeVersionArn;
    bool m_runtimeVersionArnHasBeenSet = false;

    RuntimeVersionError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
