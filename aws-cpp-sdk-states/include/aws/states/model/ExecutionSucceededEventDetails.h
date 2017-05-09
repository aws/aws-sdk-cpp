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
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{

  class AWS_SFN_API ExecutionSucceededEventDetails
  {
  public:
    ExecutionSucceededEventDetails();
    ExecutionSucceededEventDetails(const Aws::Utils::Json::JsonValue& jsonValue);
    ExecutionSucceededEventDetails& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The JSON data output by the execution.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>The JSON data output by the execution.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>The JSON data output by the execution.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>The JSON data output by the execution.</p>
     */
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }

    /**
     * <p>The JSON data output by the execution.</p>
     */
    inline ExecutionSucceededEventDetails& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>The JSON data output by the execution.</p>
     */
    inline ExecutionSucceededEventDetails& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}

    /**
     * <p>The JSON data output by the execution.</p>
     */
    inline ExecutionSucceededEventDetails& WithOutput(const char* value) { SetOutput(value); return *this;}

  private:
    Aws::String m_output;
    bool m_outputHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
