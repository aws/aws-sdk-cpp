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
    AWS_DATABASEMIGRATIONSERVICE_API TimestreamSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API TimestreamSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API TimestreamSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Database name for the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    TimestreamSettings& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this attribute to specify the length of time to store all of the tables
     * in memory that are migrated into Amazon Timestream from the source database.
     * Time is measured in units of hours. When Timestream data comes in, it first
     * resides in memory for the specified duration, which allows quick access to
     * it.</p>
     */
    inline int GetMemoryDuration() const { return m_memoryDuration; }
    inline bool MemoryDurationHasBeenSet() const { return m_memoryDurationHasBeenSet; }
    inline void SetMemoryDuration(int value) { m_memoryDurationHasBeenSet = true; m_memoryDuration = value; }
    inline TimestreamSettings& WithMemoryDuration(int value) { SetMemoryDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this attribute to specify the default magnetic duration applied to the
     * Amazon Timestream tables in days. This is the number of days that records remain
     * in magnetic store before being discarded. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/storage.html">Storage</a>
     * in the <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/">Amazon
     * Timestream Developer Guide</a>.</p>
     */
    inline int GetMagneticDuration() const { return m_magneticDuration; }
    inline bool MagneticDurationHasBeenSet() const { return m_magneticDurationHasBeenSet; }
    inline void SetMagneticDuration(int value) { m_magneticDurationHasBeenSet = true; m_magneticDuration = value; }
    inline TimestreamSettings& WithMagneticDuration(int value) { SetMagneticDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this attribute to <code>true</code> to specify that DMS only applies
     * inserts and updates, and not deletes. Amazon Timestream does not allow deleting
     * records, so if this value is <code>false</code>, DMS nulls out the corresponding
     * record in the Timestream database rather than deleting it.</p>
     */
    inline bool GetCdcInsertsAndUpdates() const { return m_cdcInsertsAndUpdates; }
    inline bool CdcInsertsAndUpdatesHasBeenSet() const { return m_cdcInsertsAndUpdatesHasBeenSet; }
    inline void SetCdcInsertsAndUpdates(bool value) { m_cdcInsertsAndUpdatesHasBeenSet = true; m_cdcInsertsAndUpdates = value; }
    inline TimestreamSettings& WithCdcInsertsAndUpdates(bool value) { SetCdcInsertsAndUpdates(value); return *this;}
    ///@}

    ///@{
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
    inline bool GetEnableMagneticStoreWrites() const { return m_enableMagneticStoreWrites; }
    inline bool EnableMagneticStoreWritesHasBeenSet() const { return m_enableMagneticStoreWritesHasBeenSet; }
    inline void SetEnableMagneticStoreWrites(bool value) { m_enableMagneticStoreWritesHasBeenSet = true; m_enableMagneticStoreWrites = value; }
    inline TimestreamSettings& WithEnableMagneticStoreWrites(bool value) { SetEnableMagneticStoreWrites(value); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    int m_memoryDuration{0};
    bool m_memoryDurationHasBeenSet = false;

    int m_magneticDuration{0};
    bool m_magneticDurationHasBeenSet = false;

    bool m_cdcInsertsAndUpdates{false};
    bool m_cdcInsertsAndUpdatesHasBeenSet = false;

    bool m_enableMagneticStoreWrites{false};
    bool m_enableMagneticStoreWritesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
