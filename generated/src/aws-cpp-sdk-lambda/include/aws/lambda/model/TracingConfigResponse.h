/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/TracingMode.h>
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
   * <p>The function's X-Ray tracing configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TracingConfigResponse">AWS
   * API Reference</a></p>
   */
  class TracingConfigResponse
  {
  public:
    AWS_LAMBDA_API TracingConfigResponse() = default;
    AWS_LAMBDA_API TracingConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API TracingConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tracing mode.</p>
     */
    inline TracingMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(TracingMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline TracingConfigResponse& WithMode(TracingMode value) { SetMode(value); return *this;}
    ///@}
  private:

    TracingMode m_mode{TracingMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
