/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
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
    DvbSubSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    DvbSubSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }

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
