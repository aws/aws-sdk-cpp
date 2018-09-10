﻿/*
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
   * <p>Parent object of the tracing information associated with your Lambda
   * function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TracingConfigResponse">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API TracingConfigResponse
  {
  public:
    TracingConfigResponse();
    TracingConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    TracingConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tracing mode associated with your Lambda function.</p>
     */
    inline const TracingMode& GetMode() const{ return m_mode; }

    /**
     * <p>The tracing mode associated with your Lambda function.</p>
     */
    inline void SetMode(const TracingMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The tracing mode associated with your Lambda function.</p>
     */
    inline void SetMode(TracingMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The tracing mode associated with your Lambda function.</p>
     */
    inline TracingConfigResponse& WithMode(const TracingMode& value) { SetMode(value); return *this;}

    /**
     * <p>The tracing mode associated with your Lambda function.</p>
     */
    inline TracingConfigResponse& WithMode(TracingMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    TracingMode m_mode;
    bool m_modeHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
