/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/AutoSnapshotStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/AttachedDisk.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an automatic snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AutoSnapshotDetails">AWS
   * API Reference</a></p>
   */
  class AutoSnapshotDetails
  {
  public:
    AWS_LIGHTSAIL_API AutoSnapshotDetails() = default;
    AWS_LIGHTSAIL_API AutoSnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AutoSnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date of the automatic snapshot in <code>YYYY-MM-DD</code> format.</p>
     */
    inline const Aws::String& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::String>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::String>
    AutoSnapshotDetails& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the automatic snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AutoSnapshotDetails& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the automatic snapshot.</p>
     */
    inline AutoSnapshotStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AutoSnapshotStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AutoSnapshotDetails& WithStatus(AutoSnapshotStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the block storage disks attached to the
     * instance when the automatic snapshot was created.</p>
     */
    inline const Aws::Vector<AttachedDisk>& GetFromAttachedDisks() const { return m_fromAttachedDisks; }
    inline bool FromAttachedDisksHasBeenSet() const { return m_fromAttachedDisksHasBeenSet; }
    template<typename FromAttachedDisksT = Aws::Vector<AttachedDisk>>
    void SetFromAttachedDisks(FromAttachedDisksT&& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks = std::forward<FromAttachedDisksT>(value); }
    template<typename FromAttachedDisksT = Aws::Vector<AttachedDisk>>
    AutoSnapshotDetails& WithFromAttachedDisks(FromAttachedDisksT&& value) { SetFromAttachedDisks(std::forward<FromAttachedDisksT>(value)); return *this;}
    template<typename FromAttachedDisksT = AttachedDisk>
    AutoSnapshotDetails& AddFromAttachedDisks(FromAttachedDisksT&& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks.emplace_back(std::forward<FromAttachedDisksT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_date;
    bool m_dateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    AutoSnapshotStatus m_status{AutoSnapshotStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<AttachedDisk> m_fromAttachedDisks;
    bool m_fromAttachedDisksHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
