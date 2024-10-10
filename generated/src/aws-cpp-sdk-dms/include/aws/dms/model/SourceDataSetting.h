/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Defines settings for a source data provider for a data
   * migration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/SourceDataSetting">AWS
   * API Reference</a></p>
   */
  class SourceDataSetting
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API SourceDataSetting();
    AWS_DATABASEMIGRATIONSERVICE_API SourceDataSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SourceDataSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The change data capture (CDC) start position for the source data
     * provider.</p>
     */
    inline const Aws::String& GetCDCStartPosition() const{ return m_cDCStartPosition; }
    inline bool CDCStartPositionHasBeenSet() const { return m_cDCStartPositionHasBeenSet; }
    inline void SetCDCStartPosition(const Aws::String& value) { m_cDCStartPositionHasBeenSet = true; m_cDCStartPosition = value; }
    inline void SetCDCStartPosition(Aws::String&& value) { m_cDCStartPositionHasBeenSet = true; m_cDCStartPosition = std::move(value); }
    inline void SetCDCStartPosition(const char* value) { m_cDCStartPositionHasBeenSet = true; m_cDCStartPosition.assign(value); }
    inline SourceDataSetting& WithCDCStartPosition(const Aws::String& value) { SetCDCStartPosition(value); return *this;}
    inline SourceDataSetting& WithCDCStartPosition(Aws::String&& value) { SetCDCStartPosition(std::move(value)); return *this;}
    inline SourceDataSetting& WithCDCStartPosition(const char* value) { SetCDCStartPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change data capture (CDC) start time for the source data provider.</p>
     */
    inline const Aws::Utils::DateTime& GetCDCStartTime() const{ return m_cDCStartTime; }
    inline bool CDCStartTimeHasBeenSet() const { return m_cDCStartTimeHasBeenSet; }
    inline void SetCDCStartTime(const Aws::Utils::DateTime& value) { m_cDCStartTimeHasBeenSet = true; m_cDCStartTime = value; }
    inline void SetCDCStartTime(Aws::Utils::DateTime&& value) { m_cDCStartTimeHasBeenSet = true; m_cDCStartTime = std::move(value); }
    inline SourceDataSetting& WithCDCStartTime(const Aws::Utils::DateTime& value) { SetCDCStartTime(value); return *this;}
    inline SourceDataSetting& WithCDCStartTime(Aws::Utils::DateTime&& value) { SetCDCStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change data capture (CDC) stop time for the source data provider.</p>
     */
    inline const Aws::Utils::DateTime& GetCDCStopTime() const{ return m_cDCStopTime; }
    inline bool CDCStopTimeHasBeenSet() const { return m_cDCStopTimeHasBeenSet; }
    inline void SetCDCStopTime(const Aws::Utils::DateTime& value) { m_cDCStopTimeHasBeenSet = true; m_cDCStopTime = value; }
    inline void SetCDCStopTime(Aws::Utils::DateTime&& value) { m_cDCStopTimeHasBeenSet = true; m_cDCStopTime = std::move(value); }
    inline SourceDataSetting& WithCDCStopTime(const Aws::Utils::DateTime& value) { SetCDCStopTime(value); return *this;}
    inline SourceDataSetting& WithCDCStopTime(Aws::Utils::DateTime&& value) { SetCDCStopTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the replication slot on the source data provider. This attribute
     * is only valid for a PostgreSQL or Aurora PostgreSQL source.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }
    inline SourceDataSetting& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}
    inline SourceDataSetting& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}
    inline SourceDataSetting& WithSlotName(const char* value) { SetSlotName(value); return *this;}
    ///@}
  private:

    Aws::String m_cDCStartPosition;
    bool m_cDCStartPositionHasBeenSet = false;

    Aws::Utils::DateTime m_cDCStartTime;
    bool m_cDCStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_cDCStopTime;
    bool m_cDCStopTimeHasBeenSet = false;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
