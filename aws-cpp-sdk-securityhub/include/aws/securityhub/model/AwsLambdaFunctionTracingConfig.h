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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The function's AWS X-Ray tracing configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsLambdaFunctionTracingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsLambdaFunctionTracingConfig
  {
  public:
    AwsLambdaFunctionTracingConfig();
    AwsLambdaFunctionTracingConfig(Aws::Utils::Json::JsonView jsonValue);
    AwsLambdaFunctionTracingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tracing mode.</p>
     */
    inline const Aws::String& GetMode() const{ return m_mode; }

    /**
     * <p>The tracing mode.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The tracing mode.</p>
     */
    inline void SetMode(const Aws::String& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The tracing mode.</p>
     */
    inline void SetMode(Aws::String&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The tracing mode.</p>
     */
    inline void SetMode(const char* value) { m_modeHasBeenSet = true; m_mode.assign(value); }

    /**
     * <p>The tracing mode.</p>
     */
    inline AwsLambdaFunctionTracingConfig& WithMode(const Aws::String& value) { SetMode(value); return *this;}

    /**
     * <p>The tracing mode.</p>
     */
    inline AwsLambdaFunctionTracingConfig& WithMode(Aws::String&& value) { SetMode(std::move(value)); return *this;}

    /**
     * <p>The tracing mode.</p>
     */
    inline AwsLambdaFunctionTracingConfig& WithMode(const char* value) { SetMode(value); return *this;}

  private:

    Aws::String m_mode;
    bool m_modeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
