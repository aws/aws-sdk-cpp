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
   * <p>Represents a virtual tape that is archived in the virtual tape shelf
   * (VTS).</p>
   */
  class AWS_STORAGEGATEWAY_API TapeArchive
  {
  public:
    TapeArchive();
    TapeArchive(const Aws::Utils::Json::JsonValue& jsonValue);
    TapeArchive& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeARN(Aws::String&& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeBarcode() const{ return m_tapeBarcode; }

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline void SetTapeBarcode(const Aws::String& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = value; }

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline void SetTapeBarcode(Aws::String&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = value; }

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline void SetTapeBarcode(const char* value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode.assign(value); }

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeBarcode(const Aws::String& value) { SetTapeBarcode(value); return *this;}

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeBarcode(Aws::String&& value) { SetTapeBarcode(value); return *this;}

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeBarcode(const char* value) { SetTapeBarcode(value); return *this;}

    /**
     * <p>The size, in bytes, of the archived virtual tape.</p>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the archived virtual tape.</p>
     */
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * string format of the completion time is in the ISO8601 extended
     * YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * string format of the completion time is in the ISO8601 extended
     * YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * string format of the completion time is in the ISO8601 extended
     * YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * string format of the completion time is in the ISO8601 extended
     * YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline TapeArchive& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * string format of the completion time is in the ISO8601 extended
     * YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline TapeArchive& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway-VTL that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline const Aws::String& GetRetrievedTo() const{ return m_retrievedTo; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway-VTL that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline void SetRetrievedTo(const Aws::String& value) { m_retrievedToHasBeenSet = true; m_retrievedTo = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway-VTL that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline void SetRetrievedTo(Aws::String&& value) { m_retrievedToHasBeenSet = true; m_retrievedTo = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway-VTL that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline void SetRetrievedTo(const char* value) { m_retrievedToHasBeenSet = true; m_retrievedTo.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway-VTL that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline TapeArchive& WithRetrievedTo(const Aws::String& value) { SetRetrievedTo(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway-VTL that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline TapeArchive& WithRetrievedTo(Aws::String&& value) { SetRetrievedTo(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway-VTL that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline TapeArchive& WithRetrievedTo(const char* value) { SetRetrievedTo(value); return *this;}

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeStatus() const{ return m_tapeStatus; }

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline void SetTapeStatus(const Aws::String& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline void SetTapeStatus(Aws::String&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline void SetTapeStatus(const char* value) { m_tapeStatusHasBeenSet = true; m_tapeStatus.assign(value); }

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeStatus(const Aws::String& value) { SetTapeStatus(value); return *this;}

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeStatus(Aws::String&& value) { SetTapeStatus(value); return *this;}

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeStatus(const char* value) { SetTapeStatus(value); return *this;}

  private:
    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet;
    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet;
    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet;
    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet;
    Aws::String m_retrievedTo;
    bool m_retrievedToHasBeenSet;
    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
