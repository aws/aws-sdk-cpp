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
   * <p>Describes a virtual tape object.</p>
   */
  class AWS_STORAGEGATEWAY_API Tape
  {
  public:
    Tape();
    Tape(const Aws::Utils::Json::JsonValue& jsonValue);
    Tape& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline Tape& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline Tape& WithTapeARN(Aws::String&& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline Tape& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

    /**
     * <p>The barcode that identifies a specific virtual tape.</p>
     */
    inline const Aws::String& GetTapeBarcode() const{ return m_tapeBarcode; }

    /**
     * <p>The barcode that identifies a specific virtual tape.</p>
     */
    inline void SetTapeBarcode(const Aws::String& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = value; }

    /**
     * <p>The barcode that identifies a specific virtual tape.</p>
     */
    inline void SetTapeBarcode(Aws::String&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = value; }

    /**
     * <p>The barcode that identifies a specific virtual tape.</p>
     */
    inline void SetTapeBarcode(const char* value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode.assign(value); }

    /**
     * <p>The barcode that identifies a specific virtual tape.</p>
     */
    inline Tape& WithTapeBarcode(const Aws::String& value) { SetTapeBarcode(value); return *this;}

    /**
     * <p>The barcode that identifies a specific virtual tape.</p>
     */
    inline Tape& WithTapeBarcode(Aws::String&& value) { SetTapeBarcode(value); return *this;}

    /**
     * <p>The barcode that identifies a specific virtual tape.</p>
     */
    inline Tape& WithTapeBarcode(const char* value) { SetTapeBarcode(value); return *this;}

    /**
     * <p>The size, in bytes, of the virtual tape.</p>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the virtual tape.</p>
     */
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the virtual tape.</p>
     */
    inline Tape& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}

    /**
     * <p>The current state of the virtual tape.</p>
     */
    inline const Aws::String& GetTapeStatus() const{ return m_tapeStatus; }

    /**
     * <p>The current state of the virtual tape.</p>
     */
    inline void SetTapeStatus(const Aws::String& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }

    /**
     * <p>The current state of the virtual tape.</p>
     */
    inline void SetTapeStatus(Aws::String&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }

    /**
     * <p>The current state of the virtual tape.</p>
     */
    inline void SetTapeStatus(const char* value) { m_tapeStatusHasBeenSet = true; m_tapeStatus.assign(value); }

    /**
     * <p>The current state of the virtual tape.</p>
     */
    inline Tape& WithTapeStatus(const Aws::String& value) { SetTapeStatus(value); return *this;}

    /**
     * <p>The current state of the virtual tape.</p>
     */
    inline Tape& WithTapeStatus(Aws::String&& value) { SetTapeStatus(value); return *this;}

    /**
     * <p>The current state of the virtual tape.</p>
     */
    inline Tape& WithTapeStatus(const char* value) { SetTapeStatus(value); return *this;}

    /**
     * <p>The virtual tape library (VTL) device that the virtual tape is associated
     * with.</p>
     */
    inline const Aws::String& GetVTLDevice() const{ return m_vTLDevice; }

    /**
     * <p>The virtual tape library (VTL) device that the virtual tape is associated
     * with.</p>
     */
    inline void SetVTLDevice(const Aws::String& value) { m_vTLDeviceHasBeenSet = true; m_vTLDevice = value; }

    /**
     * <p>The virtual tape library (VTL) device that the virtual tape is associated
     * with.</p>
     */
    inline void SetVTLDevice(Aws::String&& value) { m_vTLDeviceHasBeenSet = true; m_vTLDevice = value; }

    /**
     * <p>The virtual tape library (VTL) device that the virtual tape is associated
     * with.</p>
     */
    inline void SetVTLDevice(const char* value) { m_vTLDeviceHasBeenSet = true; m_vTLDevice.assign(value); }

    /**
     * <p>The virtual tape library (VTL) device that the virtual tape is associated
     * with.</p>
     */
    inline Tape& WithVTLDevice(const Aws::String& value) { SetVTLDevice(value); return *this;}

    /**
     * <p>The virtual tape library (VTL) device that the virtual tape is associated
     * with.</p>
     */
    inline Tape& WithVTLDevice(Aws::String&& value) { SetVTLDevice(value); return *this;}

    /**
     * <p>The virtual tape library (VTL) device that the virtual tape is associated
     * with.</p>
     */
    inline Tape& WithVTLDevice(const char* value) { SetVTLDevice(value); return *this;}

    /**
     * <p>For archiving virtual tapes, indicates how much data remains to be uploaded
     * before archiving is complete.</p> <p>Range: 0 (not started) to 100
     * (complete).</p>
     */
    inline double GetProgress() const{ return m_progress; }

    /**
     * <p>For archiving virtual tapes, indicates how much data remains to be uploaded
     * before archiving is complete.</p> <p>Range: 0 (not started) to 100
     * (complete).</p>
     */
    inline void SetProgress(double value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>For archiving virtual tapes, indicates how much data remains to be uploaded
     * before archiving is complete.</p> <p>Range: 0 (not started) to 100
     * (complete).</p>
     */
    inline Tape& WithProgress(double value) { SetProgress(value); return *this;}

  private:
    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet;
    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet;
    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet;
    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet;
    Aws::String m_vTLDevice;
    bool m_vTLDeviceHasBeenSet;
    double m_progress;
    bool m_progressHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
