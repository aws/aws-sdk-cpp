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
#include <aws/core/utils/DateTime.h>
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
   * <p>Represents a virtual tape that is archived in the virtual tape shelf
   * (VTS).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/TapeArchive">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API TapeArchive
  {
  public:
    TapeArchive();
    TapeArchive(Aws::Utils::Json::JsonView jsonValue);
    TapeArchive& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::move(value); }

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
    inline TapeArchive& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}

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
    inline bool TapeBarcodeHasBeenSet() const { return m_tapeBarcodeHasBeenSet; }

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline void SetTapeBarcode(const Aws::String& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = value; }

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline void SetTapeBarcode(Aws::String&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = std::move(value); }

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
    inline TapeArchive& WithTapeBarcode(Aws::String&& value) { SetTapeBarcode(std::move(value)); return *this;}

    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeBarcode(const char* value) { SetTapeBarcode(value); return *this;}


    /**
     * <p>The date the virtual tape was created.</p>
     */
    inline const Aws::Utils::DateTime& GetTapeCreatedDate() const{ return m_tapeCreatedDate; }

    /**
     * <p>The date the virtual tape was created.</p>
     */
    inline bool TapeCreatedDateHasBeenSet() const { return m_tapeCreatedDateHasBeenSet; }

    /**
     * <p>The date the virtual tape was created.</p>
     */
    inline void SetTapeCreatedDate(const Aws::Utils::DateTime& value) { m_tapeCreatedDateHasBeenSet = true; m_tapeCreatedDate = value; }

    /**
     * <p>The date the virtual tape was created.</p>
     */
    inline void SetTapeCreatedDate(Aws::Utils::DateTime&& value) { m_tapeCreatedDateHasBeenSet = true; m_tapeCreatedDate = std::move(value); }

    /**
     * <p>The date the virtual tape was created.</p>
     */
    inline TapeArchive& WithTapeCreatedDate(const Aws::Utils::DateTime& value) { SetTapeCreatedDate(value); return *this;}

    /**
     * <p>The date the virtual tape was created.</p>
     */
    inline TapeArchive& WithTapeCreatedDate(Aws::Utils::DateTime&& value) { SetTapeCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The size, in bytes, of the archived virtual tape.</p>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the archived virtual tape.</p>
     */
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }

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
     * default time stamp format is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z'
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * default time stamp format is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z'
     * format.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * default time stamp format is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z'
     * format.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * default time stamp format is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z'
     * format.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * default time stamp format is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z'
     * format.</p>
     */
    inline TapeArchive& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * default time stamp format is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z'
     * format.</p>
     */
    inline TapeArchive& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline const Aws::String& GetRetrievedTo() const{ return m_retrievedTo; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline bool RetrievedToHasBeenSet() const { return m_retrievedToHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline void SetRetrievedTo(const Aws::String& value) { m_retrievedToHasBeenSet = true; m_retrievedTo = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline void SetRetrievedTo(Aws::String&& value) { m_retrievedToHasBeenSet = true; m_retrievedTo = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline void SetRetrievedTo(const char* value) { m_retrievedToHasBeenSet = true; m_retrievedTo.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline TapeArchive& WithRetrievedTo(const Aws::String& value) { SetRetrievedTo(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline TapeArchive& WithRetrievedTo(Aws::String&& value) { SetRetrievedTo(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
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
    inline bool TapeStatusHasBeenSet() const { return m_tapeStatusHasBeenSet; }

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline void SetTapeStatus(const Aws::String& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline void SetTapeStatus(Aws::String&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = std::move(value); }

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
    inline TapeArchive& WithTapeStatus(Aws::String&& value) { SetTapeStatus(std::move(value)); return *this;}

    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline TapeArchive& WithTapeStatus(const char* value) { SetTapeStatus(value); return *this;}


    /**
     * <p>The size, in bytes, of data stored on the virtual tape.</p> <note> <p>This
     * value is not available for tapes created prior to May 13, 2015.</p> </note>
     */
    inline long long GetTapeUsedInBytes() const{ return m_tapeUsedInBytes; }

    /**
     * <p>The size, in bytes, of data stored on the virtual tape.</p> <note> <p>This
     * value is not available for tapes created prior to May 13, 2015.</p> </note>
     */
    inline bool TapeUsedInBytesHasBeenSet() const { return m_tapeUsedInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of data stored on the virtual tape.</p> <note> <p>This
     * value is not available for tapes created prior to May 13, 2015.</p> </note>
     */
    inline void SetTapeUsedInBytes(long long value) { m_tapeUsedInBytesHasBeenSet = true; m_tapeUsedInBytes = value; }

    /**
     * <p>The size, in bytes, of data stored on the virtual tape.</p> <note> <p>This
     * value is not available for tapes created prior to May 13, 2015.</p> </note>
     */
    inline TapeArchive& WithTapeUsedInBytes(long long value) { SetTapeUsedInBytes(value); return *this;}


    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    
    inline TapeArchive& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    
    inline TapeArchive& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    
    inline TapeArchive& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     * <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     * <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     * <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     * <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     * <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     * <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline TapeArchive& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     * <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline TapeArchive& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     * <p>Valid values: "GLACIER", "DEEP_ARCHIVE"</p>
     */
    inline TapeArchive& WithPoolId(const char* value) { SetPoolId(value); return *this;}

  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet;

    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet;

    Aws::Utils::DateTime m_tapeCreatedDate;
    bool m_tapeCreatedDateHasBeenSet;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet;

    Aws::String m_retrievedTo;
    bool m_retrievedToHasBeenSet;

    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet;

    long long m_tapeUsedInBytes;
    bool m_tapeUsedInBytesHasBeenSet;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
