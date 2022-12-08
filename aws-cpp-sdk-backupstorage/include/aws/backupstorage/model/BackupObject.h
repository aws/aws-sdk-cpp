/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupstorage/model/SummaryChecksumAlgorithm.h>
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
namespace BackupStorage
{
namespace Model
{

  /**
   * Object<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/BackupObject">AWS
   * API Reference</a></p>
   */
  class BackupObject
  {
  public:
    AWS_BACKUPSTORAGE_API BackupObject();
    AWS_BACKUPSTORAGE_API BackupObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSTORAGE_API BackupObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSTORAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Object name
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Object name
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Object name
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Object name
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Object name
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Object name
     */
    inline BackupObject& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Object name
     */
    inline BackupObject& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Object name
     */
    inline BackupObject& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Number of chunks in object
     */
    inline long long GetChunksCount() const{ return m_chunksCount; }

    /**
     * Number of chunks in object
     */
    inline bool ChunksCountHasBeenSet() const { return m_chunksCountHasBeenSet; }

    /**
     * Number of chunks in object
     */
    inline void SetChunksCount(long long value) { m_chunksCountHasBeenSet = true; m_chunksCount = value; }

    /**
     * Number of chunks in object
     */
    inline BackupObject& WithChunksCount(long long value) { SetChunksCount(value); return *this;}


    /**
     * Metadata string associated with the Object
     */
    inline const Aws::String& GetMetadataString() const{ return m_metadataString; }

    /**
     * Metadata string associated with the Object
     */
    inline bool MetadataStringHasBeenSet() const { return m_metadataStringHasBeenSet; }

    /**
     * Metadata string associated with the Object
     */
    inline void SetMetadataString(const Aws::String& value) { m_metadataStringHasBeenSet = true; m_metadataString = value; }

    /**
     * Metadata string associated with the Object
     */
    inline void SetMetadataString(Aws::String&& value) { m_metadataStringHasBeenSet = true; m_metadataString = std::move(value); }

    /**
     * Metadata string associated with the Object
     */
    inline void SetMetadataString(const char* value) { m_metadataStringHasBeenSet = true; m_metadataString.assign(value); }

    /**
     * Metadata string associated with the Object
     */
    inline BackupObject& WithMetadataString(const Aws::String& value) { SetMetadataString(value); return *this;}

    /**
     * Metadata string associated with the Object
     */
    inline BackupObject& WithMetadataString(Aws::String&& value) { SetMetadataString(std::move(value)); return *this;}

    /**
     * Metadata string associated with the Object
     */
    inline BackupObject& WithMetadataString(const char* value) { SetMetadataString(value); return *this;}


    /**
     * Object checksum
     */
    inline const Aws::String& GetObjectChecksum() const{ return m_objectChecksum; }

    /**
     * Object checksum
     */
    inline bool ObjectChecksumHasBeenSet() const { return m_objectChecksumHasBeenSet; }

    /**
     * Object checksum
     */
    inline void SetObjectChecksum(const Aws::String& value) { m_objectChecksumHasBeenSet = true; m_objectChecksum = value; }

    /**
     * Object checksum
     */
    inline void SetObjectChecksum(Aws::String&& value) { m_objectChecksumHasBeenSet = true; m_objectChecksum = std::move(value); }

    /**
     * Object checksum
     */
    inline void SetObjectChecksum(const char* value) { m_objectChecksumHasBeenSet = true; m_objectChecksum.assign(value); }

    /**
     * Object checksum
     */
    inline BackupObject& WithObjectChecksum(const Aws::String& value) { SetObjectChecksum(value); return *this;}

    /**
     * Object checksum
     */
    inline BackupObject& WithObjectChecksum(Aws::String&& value) { SetObjectChecksum(std::move(value)); return *this;}

    /**
     * Object checksum
     */
    inline BackupObject& WithObjectChecksum(const char* value) { SetObjectChecksum(value); return *this;}


    /**
     * Checksum algorithm
     */
    inline const SummaryChecksumAlgorithm& GetObjectChecksumAlgorithm() const{ return m_objectChecksumAlgorithm; }

    /**
     * Checksum algorithm
     */
    inline bool ObjectChecksumAlgorithmHasBeenSet() const { return m_objectChecksumAlgorithmHasBeenSet; }

    /**
     * Checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { m_objectChecksumAlgorithmHasBeenSet = true; m_objectChecksumAlgorithm = value; }

    /**
     * Checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { m_objectChecksumAlgorithmHasBeenSet = true; m_objectChecksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm
     */
    inline BackupObject& WithObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { SetObjectChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm
     */
    inline BackupObject& WithObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { SetObjectChecksumAlgorithm(std::move(value)); return *this;}


    /**
     * Object token
     */
    inline const Aws::String& GetObjectToken() const{ return m_objectToken; }

    /**
     * Object token
     */
    inline bool ObjectTokenHasBeenSet() const { return m_objectTokenHasBeenSet; }

    /**
     * Object token
     */
    inline void SetObjectToken(const Aws::String& value) { m_objectTokenHasBeenSet = true; m_objectToken = value; }

    /**
     * Object token
     */
    inline void SetObjectToken(Aws::String&& value) { m_objectTokenHasBeenSet = true; m_objectToken = std::move(value); }

    /**
     * Object token
     */
    inline void SetObjectToken(const char* value) { m_objectTokenHasBeenSet = true; m_objectToken.assign(value); }

    /**
     * Object token
     */
    inline BackupObject& WithObjectToken(const Aws::String& value) { SetObjectToken(value); return *this;}

    /**
     * Object token
     */
    inline BackupObject& WithObjectToken(Aws::String&& value) { SetObjectToken(std::move(value)); return *this;}

    /**
     * Object token
     */
    inline BackupObject& WithObjectToken(const char* value) { SetObjectToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_chunksCount;
    bool m_chunksCountHasBeenSet = false;

    Aws::String m_metadataString;
    bool m_metadataStringHasBeenSet = false;

    Aws::String m_objectChecksum;
    bool m_objectChecksumHasBeenSet = false;

    SummaryChecksumAlgorithm m_objectChecksumAlgorithm;
    bool m_objectChecksumAlgorithmHasBeenSet = false;

    Aws::String m_objectToken;
    bool m_objectTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
