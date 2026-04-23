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
   * Inserts DVB Time and Date Table (TDT) at the specified table repetition
   * interval.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DvbTdtSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API DvbTdtSettings
  {
  public:
    DvbTdtSettings();
    DvbTdtSettings(Aws::Utils::Json::JsonView jsonValue);
    DvbTdtSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetTdtInterval() const{ return m_tdtInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool TdtIntervalHasBeenSet() const { return m_tdtIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetTdtInterval(int value) { m_tdtIntervalHasBeenSet = true; m_tdtInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline DvbTdtSettings& WithTdtInterval(int value) { SetTdtInterval(value); return *this;}

  private:

    int m_tdtInterval;
    bool m_tdtIntervalHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
