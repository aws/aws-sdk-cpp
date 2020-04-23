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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>An automatic tape creation policy consists of automatic tape creation rules
   * where each rule defines when and how to create new tapes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AutomaticTapeCreationRule">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API AutomaticTapeCreationRule
  {
  public:
    AutomaticTapeCreationRule();
    AutomaticTapeCreationRule(Aws::Utils::Json::JsonView jsonValue);
    AutomaticTapeCreationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p> <note> <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> </note>
     */
    inline const Aws::String& GetTapeBarcodePrefix() const{ return m_tapeBarcodePrefix; }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p> <note> <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> </note>
     */
    inline bool TapeBarcodePrefixHasBeenSet() const { return m_tapeBarcodePrefixHasBeenSet; }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p> <note> <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> </note>
     */
    inline void SetTapeBarcodePrefix(const Aws::String& value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix = value; }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p> <note> <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> </note>
     */
    inline void SetTapeBarcodePrefix(Aws::String&& value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix = std::move(value); }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p> <note> <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> </note>
     */
    inline void SetTapeBarcodePrefix(const char* value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix.assign(value); }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p> <note> <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> </note>
     */
    inline AutomaticTapeCreationRule& WithTapeBarcodePrefix(const Aws::String& value) { SetTapeBarcodePrefix(value); return *this;}

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p> <note> <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> </note>
     */
    inline AutomaticTapeCreationRule& WithTapeBarcodePrefix(Aws::String&& value) { SetTapeBarcodePrefix(std::move(value)); return *this;}

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p> <note> <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> </note>
     */
    inline AutomaticTapeCreationRule& WithTapeBarcodePrefix(const char* value) { SetTapeBarcodePrefix(value); return *this;}


    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p> <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p> <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p> <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p> <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p> <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p> <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline AutomaticTapeCreationRule& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p> <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline AutomaticTapeCreationRule& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p> <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline AutomaticTapeCreationRule& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The size, in bytes, of the virtual tape capacity.</p>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the virtual tape capacity.</p>
     */
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of the virtual tape capacity.</p>
     */
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the virtual tape capacity.</p>
     */
    inline AutomaticTapeCreationRule& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}


    /**
     * <p>The minimum number of available virtual tapes that the gateway maintains at
     * all times. If the number of tapes on the gateway goes below this value, the
     * gateway creates as many new tapes as are needed to have
     * <code>MinimumNumTapes</code> on the gateway.</p>
     */
    inline int GetMinimumNumTapes() const{ return m_minimumNumTapes; }

    /**
     * <p>The minimum number of available virtual tapes that the gateway maintains at
     * all times. If the number of tapes on the gateway goes below this value, the
     * gateway creates as many new tapes as are needed to have
     * <code>MinimumNumTapes</code> on the gateway.</p>
     */
    inline bool MinimumNumTapesHasBeenSet() const { return m_minimumNumTapesHasBeenSet; }

    /**
     * <p>The minimum number of available virtual tapes that the gateway maintains at
     * all times. If the number of tapes on the gateway goes below this value, the
     * gateway creates as many new tapes as are needed to have
     * <code>MinimumNumTapes</code> on the gateway.</p>
     */
    inline void SetMinimumNumTapes(int value) { m_minimumNumTapesHasBeenSet = true; m_minimumNumTapes = value; }

    /**
     * <p>The minimum number of available virtual tapes that the gateway maintains at
     * all times. If the number of tapes on the gateway goes below this value, the
     * gateway creates as many new tapes as are needed to have
     * <code>MinimumNumTapes</code> on the gateway.</p>
     */
    inline AutomaticTapeCreationRule& WithMinimumNumTapes(int value) { SetMinimumNumTapes(value); return *this;}

  private:

    Aws::String m_tapeBarcodePrefix;
    bool m_tapeBarcodePrefixHasBeenSet;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet;

    int m_minimumNumTapes;
    bool m_minimumNumTapesHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
