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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * DVB Sub Source Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DvbSubSourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API DvbSubSourceSettings
  {
  public:
    DvbSubSourceSettings();
    DvbSubSourceSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    DvbSubSourceSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When using DVB-Sub with Burn-In or SMPTE-TT, use this PID for the source
     * content. Unused for DVB-Sub passthrough. All DVB-Sub content is passed through,
     * regardless of selectors.
     */
    inline int GetPid() const{ return m_pid; }

    /**
     * When using DVB-Sub with Burn-In or SMPTE-TT, use this PID for the source
     * content. Unused for DVB-Sub passthrough. All DVB-Sub content is passed through,
     * regardless of selectors.
     */
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }

    /**
     * When using DVB-Sub with Burn-In or SMPTE-TT, use this PID for the source
     * content. Unused for DVB-Sub passthrough. All DVB-Sub content is passed through,
     * regardless of selectors.
     */
    inline DvbSubSourceSettings& WithPid(int value) { SetPid(value); return *this;}

  private:

    int m_pid;
    bool m_pidHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
