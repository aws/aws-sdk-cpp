﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  class AWS_SFN_API StateExitedEventDetails
  {
  public:
    StateExitedEventDetails();
    StateExitedEventDetails(const Aws::Utils::Json::JsonValue& jsonValue);
    StateExitedEventDetails& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the state.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the state.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the state.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the state.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the state.</p>
     */
    inline StateExitedEventDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state.</p>
     */
    inline StateExitedEventDetails& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state.</p>
     */
    inline StateExitedEventDetails& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The JSON output data of the state.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>The JSON output data of the state.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>The JSON output data of the state.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>The JSON output data of the state.</p>
     */
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }

    /**
     * <p>The JSON output data of the state.</p>
     */
    inline StateExitedEventDetails& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>The JSON output data of the state.</p>
     */
    inline StateExitedEventDetails& WithOutput(Aws::String&& value) { SetOutput(value); return *this;}

    /**
     * <p>The JSON output data of the state.</p>
     */
    inline StateExitedEventDetails& WithOutput(const char* value) { SetOutput(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_output;
    bool m_outputHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
