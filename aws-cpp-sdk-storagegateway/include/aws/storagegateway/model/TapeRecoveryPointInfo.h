/*
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a recovery point.</p>
   */
  class AWS_STORAGEGATEWAY_API TapeRecoveryPointInfo
  {
  public:
    TapeRecoveryPointInfo();
    TapeRecoveryPointInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    TapeRecoveryPointInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeARN(Aws::String&& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The string format of the tape recovery point time is in
     * the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline const Aws::Utils::DateTime& GetTapeRecoveryPointTime() const{ return m_tapeRecoveryPointTime; }

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The string format of the tape recovery point time is in
     * the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline void SetTapeRecoveryPointTime(const Aws::Utils::DateTime& value) { m_tapeRecoveryPointTimeHasBeenSet = true; m_tapeRecoveryPointTime = value; }

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The string format of the tape recovery point time is in
     * the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline void SetTapeRecoveryPointTime(Aws::Utils::DateTime&& value) { m_tapeRecoveryPointTimeHasBeenSet = true; m_tapeRecoveryPointTime = value; }

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The string format of the tape recovery point time is in
     * the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeRecoveryPointTime(const Aws::Utils::DateTime& value) { SetTapeRecoveryPointTime(value); return *this;}

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The string format of the tape recovery point time is in
     * the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeRecoveryPointTime(Aws::Utils::DateTime&& value) { SetTapeRecoveryPointTime(value); return *this;}

    /**
     * <p>The size, in bytes, of the virtual tapes to recover.</p>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the virtual tapes to recover.</p>
     */
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the virtual tapes to recover.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}

    
    inline const Aws::String& GetTapeStatus() const{ return m_tapeStatus; }

    
    inline void SetTapeStatus(const Aws::String& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }

    
    inline void SetTapeStatus(Aws::String&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }

    
    inline void SetTapeStatus(const char* value) { m_tapeStatusHasBeenSet = true; m_tapeStatus.assign(value); }

    
    inline TapeRecoveryPointInfo& WithTapeStatus(const Aws::String& value) { SetTapeStatus(value); return *this;}

    
    inline TapeRecoveryPointInfo& WithTapeStatus(Aws::String&& value) { SetTapeStatus(value); return *this;}

    
    inline TapeRecoveryPointInfo& WithTapeStatus(const char* value) { SetTapeStatus(value); return *this;}

  private:
    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet;
    Aws::Utils::DateTime m_tapeRecoveryPointTime;
    bool m_tapeRecoveryPointTimeHasBeenSet;
    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet;
    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
