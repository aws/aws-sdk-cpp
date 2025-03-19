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
    AWS_DATABASEMIGRATIONSERVICE_API SourceDataSetting() = default;
    AWS_DATABASEMIGRATIONSERVICE_API SourceDataSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SourceDataSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The change data capture (CDC) start position for the source data
     * provider.</p>
     */
    inline const Aws::String& GetCDCStartPosition() const { return m_cDCStartPosition; }
    inline bool CDCStartPositionHasBeenSet() const { return m_cDCStartPositionHasBeenSet; }
    template<typename CDCStartPositionT = Aws::String>
    void SetCDCStartPosition(CDCStartPositionT&& value) { m_cDCStartPositionHasBeenSet = true; m_cDCStartPosition = std::forward<CDCStartPositionT>(value); }
    template<typename CDCStartPositionT = Aws::String>
    SourceDataSetting& WithCDCStartPosition(CDCStartPositionT&& value) { SetCDCStartPosition(std::forward<CDCStartPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change data capture (CDC) start time for the source data provider.</p>
     */
    inline const Aws::Utils::DateTime& GetCDCStartTime() const { return m_cDCStartTime; }
    inline bool CDCStartTimeHasBeenSet() const { return m_cDCStartTimeHasBeenSet; }
    template<typename CDCStartTimeT = Aws::Utils::DateTime>
    void SetCDCStartTime(CDCStartTimeT&& value) { m_cDCStartTimeHasBeenSet = true; m_cDCStartTime = std::forward<CDCStartTimeT>(value); }
    template<typename CDCStartTimeT = Aws::Utils::DateTime>
    SourceDataSetting& WithCDCStartTime(CDCStartTimeT&& value) { SetCDCStartTime(std::forward<CDCStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change data capture (CDC) stop time for the source data provider.</p>
     */
    inline const Aws::Utils::DateTime& GetCDCStopTime() const { return m_cDCStopTime; }
    inline bool CDCStopTimeHasBeenSet() const { return m_cDCStopTimeHasBeenSet; }
    template<typename CDCStopTimeT = Aws::Utils::DateTime>
    void SetCDCStopTime(CDCStopTimeT&& value) { m_cDCStopTimeHasBeenSet = true; m_cDCStopTime = std::forward<CDCStopTimeT>(value); }
    template<typename CDCStopTimeT = Aws::Utils::DateTime>
    SourceDataSetting& WithCDCStopTime(CDCStopTimeT&& value) { SetCDCStopTime(std::forward<CDCStopTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the replication slot on the source data provider. This attribute
     * is only valid for a PostgreSQL or Aurora PostgreSQL source.</p>
     */
    inline const Aws::String& GetSlotName() const { return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    template<typename SlotNameT = Aws::String>
    void SetSlotName(SlotNameT&& value) { m_slotNameHasBeenSet = true; m_slotName = std::forward<SlotNameT>(value); }
    template<typename SlotNameT = Aws::String>
    SourceDataSetting& WithSlotName(SlotNameT&& value) { SetSlotName(std::forward<SlotNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cDCStartPosition;
    bool m_cDCStartPositionHasBeenSet = false;

    Aws::Utils::DateTime m_cDCStartTime{};
    bool m_cDCStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_cDCStopTime{};
    bool m_cDCStopTimeHasBeenSet = false;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
