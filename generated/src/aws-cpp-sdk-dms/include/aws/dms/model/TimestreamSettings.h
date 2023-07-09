/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines an Amazon Timestream
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/TimestreamSettings">AWS
   * API Reference</a></p>
   */
  class TimestreamSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API TimestreamSettings();
    AWS_DATABASEMIGRATIONSERVICE_API TimestreamSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API TimestreamSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Database name for the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline TimestreamSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline TimestreamSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline TimestreamSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Set this attribute to specify the length of time to store all of the tables
     * in memory that are migrated into Amazon Timestream from the source database.
     * Time is measured in units of hours. When Timestream data comes in, it first
     * resides in memory for the specified duration, which allows quick access to
     * it.</p>
     */
    inline int GetMemoryDuration() const{ return m_memoryDuration; }

    /**
     * <p>Set this attribute to specify the length of time to store all of the tables
     * in memory that are migrated into Amazon Timestream from the source database.
     * Time is measured in units of hours. When Timestream data comes in, it first
     * resides in memory for the specified duration, which allows quick access to
     * it.</p>
     */
    inline bool MemoryDurationHasBeenSet() const { return m_memoryDurationHasBeenSet; }

    /**
     * <p>Set this attribute to specify the length of time to store all of the tables
     * in memory that are migrated into Amazon Timestream from the source database.
     * Time is measured in units of hours. When Timestream data comes in, it first
     * resides in memory for the specified duration, which allows quick access to
     * it.</p>
     */
    inline void SetMemoryDuration(int value) { m_memoryDurationHasBeenSet = true; m_memoryDuration = value; }

    /**
     * <p>Set this attribute to specify the length of time to store all of the tables
     * in memory that are migrated into Amazon Timestream from the source database.
     * Time is measured in units of hours. When Timestream data comes in, it first
     * resides in memory for the specified duration, which allows quick access to
     * it.</p>
     */
    inline TimestreamSettings& WithMemoryDuration(int value) { SetMemoryDuration(value); return *this;}


    /**
     * <p>Set this attribute to specify the default magnetic duration applied to the
     * Amazon Timestream tables in days. This is the number of days that records remain
     * in magnetic store before being discarded. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">Storage</a>
     * in the <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/">Amazon
     * Timestream Developer Guide</a>.</p>
     */
    inline int GetMagneticDuration() const{ return m_magneticDuration; }

    /**
     * <p>Set this attribute to specify the default magnetic duration applied to the
     * Amazon Timestream tables in days. This is the number of days that records remain
     * in magnetic store before being discarded. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">Storage</a>
     * in the <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/">Amazon
     * Timestream Developer Guide</a>.</p>
     */
    inline bool MagneticDurationHasBeenSet() const { return m_magneticDurationHasBeenSet; }

    /**
     * <p>Set this attribute to specify the default magnetic duration applied to the
     * Amazon Timestream tables in days. This is the number of days that records remain
     * in magnetic store before being discarded. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">Storage</a>
     * in the <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/">Amazon
     * Timestream Developer Guide</a>.</p>
     */
    inline void SetMagneticDuration(int value) { m_magneticDurationHasBeenSet = true; m_magneticDuration = value; }

    /**
     * <p>Set this attribute to specify the default magnetic duration applied to the
     * Amazon Timestream tables in days. This is the number of days that records remain
     * in magnetic store before being discarded. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">Storage</a>
     * in the <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/">Amazon
     * Timestream Developer Guide</a>.</p>
     */
    inline TimestreamSettings& WithMagneticDuration(int value) { SetMagneticDuration(value); return *this;}


    /**
     * <p>Set this attribute to <code>true</code> to specify that DMS only applies
     * inserts and updates, and not deletes. Amazon Timestream does not allow deleting
     * records, so if this value is <code>false</code>, DMS nulls out the corresponding
     * record in the Timestream database rather than deleting it.</p>
     */
    inline bool GetCdcInsertsAndUpdates() const{ return m_cdcInsertsAndUpdates; }

    /**
     * <p>Set this attribute to <code>true</code> to specify that DMS only applies
     * inserts and updates, and not deletes. Amazon Timestream does not allow deleting
     * records, so if this value is <code>false</code>, DMS nulls out the corresponding
     * record in the Timestream database rather than deleting it.</p>
     */
    inline bool CdcInsertsAndUpdatesHasBeenSet() const { return m_cdcInsertsAndUpdatesHasBeenSet; }

    /**
     * <p>Set this attribute to <code>true</code> to specify that DMS only applies
     * inserts and updates, and not deletes. Amazon Timestream does not allow deleting
     * records, so if this value is <code>false</code>, DMS nulls out the corresponding
     * record in the Timestream database rather than deleting it.</p>
     */
    inline void SetCdcInsertsAndUpdates(bool value) { m_cdcInsertsAndUpdatesHasBeenSet = true; m_cdcInsertsAndUpdates = value; }

    /**
     * <p>Set this attribute to <code>true</code> to specify that DMS only applies
     * inserts and updates, and not deletes. Amazon Timestream does not allow deleting
     * records, so if this value is <code>false</code>, DMS nulls out the corresponding
     * record in the Timestream database rather than deleting it.</p>
     */
    inline TimestreamSettings& WithCdcInsertsAndUpdates(bool value) { SetCdcInsertsAndUpdates(value); return *this;}


    /**
     * <p>Set this attribute to <code>true</code> to enable memory store writes. When
     * this value is <code>false</code>, DMS does not write records that are older in
     * days than the value specified in <code>MagneticDuration</code>, because Amazon
     * Timestream does not allow memory writes by default. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">Storage</a>
     * in the <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/">Amazon
     * Timestream Developer Guide</a>.</p>
     */
    inline bool GetEnableMagneticStoreWrites() const{ return m_enableMagneticStoreWrites; }

    /**
     * <p>Set this attribute to <code>true</code> to enable memory store writes. When
     * this value is <code>false</code>, DMS does not write records that are older in
     * days than the value specified in <code>MagneticDuration</code>, because Amazon
     * Timestream does not allow memory writes by default. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">Storage</a>
     * in the <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/">Amazon
     * Timestream Developer Guide</a>.</p>
     */
    inline bool EnableMagneticStoreWritesHasBeenSet() const { return m_enableMagneticStoreWritesHasBeenSet; }

    /**
     * <p>Set this attribute to <code>true</code> to enable memory store writes. When
     * this value is <code>false</code>, DMS does not write records that are older in
     * days than the value specified in <code>MagneticDuration</code>, because Amazon
     * Timestream does not allow memory writes by default. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">Storage</a>
     * in the <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/">Amazon
     * Timestream Developer Guide</a>.</p>
     */
    inline void SetEnableMagneticStoreWrites(bool value) { m_enableMagneticStoreWritesHasBeenSet = true; m_enableMagneticStoreWrites = value; }

    /**
     * <p>Set this attribute to <code>true</code> to enable memory store writes. When
     * this value is <code>false</code>, DMS does not write records that are older in
     * days than the value specified in <code>MagneticDuration</code>, because Amazon
     * Timestream does not allow memory writes by default. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">Storage</a>
     * in the <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/">Amazon
     * Timestream Developer Guide</a>.</p>
     */
    inline TimestreamSettings& WithEnableMagneticStoreWrites(bool value) { SetEnableMagneticStoreWrites(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    int m_memoryDuration;
    bool m_memoryDurationHasBeenSet = false;

    int m_magneticDuration;
    bool m_magneticDurationHasBeenSet = false;

    bool m_cdcInsertsAndUpdates;
    bool m_cdcInsertsAndUpdatesHasBeenSet = false;

    bool m_enableMagneticStoreWrites;
    bool m_enableMagneticStoreWritesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
