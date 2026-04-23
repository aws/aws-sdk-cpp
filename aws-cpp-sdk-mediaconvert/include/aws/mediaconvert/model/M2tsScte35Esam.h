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
   * Settings for SCTE-35 signals from ESAM. Include this in your job settings to put
   * SCTE-35 markers in your HLS and transport stream outputs at the insertion points
   * that you specify in an ESAM XML document. Provide the document in the setting
   * SCC XML (sccXml).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/M2tsScte35Esam">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API M2tsScte35Esam
  {
  public:
    M2tsScte35Esam();
    M2tsScte35Esam(Aws::Utils::Json::JsonView jsonValue);
    M2tsScte35Esam& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream generated
     * by ESAM.
     */
    inline int GetScte35EsamPid() const{ return m_scte35EsamPid; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream generated
     * by ESAM.
     */
    inline bool Scte35EsamPidHasBeenSet() const { return m_scte35EsamPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream generated
     * by ESAM.
     */
    inline void SetScte35EsamPid(int value) { m_scte35EsamPidHasBeenSet = true; m_scte35EsamPid = value; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream generated
     * by ESAM.
     */
    inline M2tsScte35Esam& WithScte35EsamPid(int value) { SetScte35EsamPid(value); return *this;}

  private:

    int m_scte35EsamPid;
    bool m_scte35EsamPidHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
