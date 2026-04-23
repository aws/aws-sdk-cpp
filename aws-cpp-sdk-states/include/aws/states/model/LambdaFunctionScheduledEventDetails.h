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
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about a lambda function scheduled during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/LambdaFunctionScheduledEventDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SFN_API LambdaFunctionScheduledEventDetails
  {
  public:
    LambdaFunctionScheduledEventDetails();
    LambdaFunctionScheduledEventDetails(Aws::Utils::Json::JsonView jsonValue);
    LambdaFunctionScheduledEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled lambda function.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled lambda function.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled lambda function.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled lambda function.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled lambda function.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The JSON data input to the lambda function.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The JSON data input to the lambda function.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The JSON data input to the lambda function.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The JSON data input to the lambda function.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The JSON data input to the lambda function.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The JSON data input to the lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The JSON data input to the lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The JSON data input to the lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The maximum allowed duration of the lambda function.</p>
     */
    inline long long GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The maximum allowed duration of the lambda function.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The maximum allowed duration of the lambda function.</p>
     */
    inline void SetTimeoutInSeconds(long long value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The maximum allowed duration of the lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithTimeoutInSeconds(long long value) { SetTimeoutInSeconds(value); return *this;}

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;

    long long m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
