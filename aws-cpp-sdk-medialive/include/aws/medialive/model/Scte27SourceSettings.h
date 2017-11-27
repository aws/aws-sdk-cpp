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
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for Scte27SourceSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte27SourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Scte27SourceSettings
  {
  public:
    Scte27SourceSettings();
    Scte27SourceSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    Scte27SourceSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The pid field is used in conjunction with the caption selector languageCode
     * field as follows:
  - Specify PID and Language: Extracts captions from that PID;
     * the language is "informational".
  - Specify PID and omit Language: Extracts the
     * specified PID.
  - Omit PID and specify Language: Extracts the specified
     * language, whichever PID that happens to be.
  - Omit PID and omit Language:
     * Valid only if source is DVB-Sub that is being passed through; all languages will
     * be passed through.
     */
    inline int GetPid() const{ return m_pid; }

    /**
     * The pid field is used in conjunction with the caption selector languageCode
     * field as follows:
  - Specify PID and Language: Extracts captions from that PID;
     * the language is "informational".
  - Specify PID and omit Language: Extracts the
     * specified PID.
  - Omit PID and specify Language: Extracts the specified
     * language, whichever PID that happens to be.
  - Omit PID and omit Language:
     * Valid only if source is DVB-Sub that is being passed through; all languages will
     * be passed through.
     */
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }

    /**
     * The pid field is used in conjunction with the caption selector languageCode
     * field as follows:
  - Specify PID and Language: Extracts captions from that PID;
     * the language is "informational".
  - Specify PID and omit Language: Extracts the
     * specified PID.
  - Omit PID and specify Language: Extracts the specified
     * language, whichever PID that happens to be.
  - Omit PID and omit Language:
     * Valid only if source is DVB-Sub that is being passed through; all languages will
     * be passed through.
     */
    inline Scte27SourceSettings& WithPid(int value) { SetPid(value); return *this;}

  private:

    int m_pid;
    bool m_pidHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
