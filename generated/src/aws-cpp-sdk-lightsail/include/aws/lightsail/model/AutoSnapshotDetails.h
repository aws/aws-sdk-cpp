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
    AWS_LIGHTSAIL_API AutoSnapshotDetails();
    AWS_LIGHTSAIL_API AutoSnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AutoSnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date of the automatic snapshot in <code>YYYY-MM-DD</code> format.</p>
     */
    inline const Aws::String& GetDate() const{ return m_date; }

    /**
     * <p>The date of the automatic snapshot in <code>YYYY-MM-DD</code> format.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date of the automatic snapshot in <code>YYYY-MM-DD</code> format.</p>
     */
    inline void SetDate(const Aws::String& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date of the automatic snapshot in <code>YYYY-MM-DD</code> format.</p>
     */
    inline void SetDate(Aws::String&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date of the automatic snapshot in <code>YYYY-MM-DD</code> format.</p>
     */
    inline void SetDate(const char* value) { m_dateHasBeenSet = true; m_date.assign(value); }

    /**
     * <p>The date of the automatic snapshot in <code>YYYY-MM-DD</code> format.</p>
     */
    inline AutoSnapshotDetails& WithDate(const Aws::String& value) { SetDate(value); return *this;}

    /**
     * <p>The date of the automatic snapshot in <code>YYYY-MM-DD</code> format.</p>
     */
    inline AutoSnapshotDetails& WithDate(Aws::String&& value) { SetDate(std::move(value)); return *this;}

    /**
     * <p>The date of the automatic snapshot in <code>YYYY-MM-DD</code> format.</p>
     */
    inline AutoSnapshotDetails& WithDate(const char* value) { SetDate(value); return *this;}


    /**
     * <p>The timestamp when the automatic snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the automatic snapshot was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the automatic snapshot was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the automatic snapshot was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the automatic snapshot was created.</p>
     */
    inline AutoSnapshotDetails& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the automatic snapshot was created.</p>
     */
    inline AutoSnapshotDetails& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the automatic snapshot.</p>
     */
    inline const AutoSnapshotStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the automatic snapshot.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the automatic snapshot.</p>
     */
    inline void SetStatus(const AutoSnapshotStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the automatic snapshot.</p>
     */
    inline void SetStatus(AutoSnapshotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the automatic snapshot.</p>
     */
    inline AutoSnapshotDetails& WithStatus(const AutoSnapshotStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the automatic snapshot.</p>
     */
    inline AutoSnapshotDetails& WithStatus(AutoSnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the block storage disks attached to the
     * instance when the automatic snapshot was created.</p>
     */
    inline const Aws::Vector<AttachedDisk>& GetFromAttachedDisks() const{ return m_fromAttachedDisks; }

    /**
     * <p>An array of objects that describe the block storage disks attached to the
     * instance when the automatic snapshot was created.</p>
     */
    inline bool FromAttachedDisksHasBeenSet() const { return m_fromAttachedDisksHasBeenSet; }

    /**
     * <p>An array of objects that describe the block storage disks attached to the
     * instance when the automatic snapshot was created.</p>
     */
    inline void SetFromAttachedDisks(const Aws::Vector<AttachedDisk>& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks = value; }

    /**
     * <p>An array of objects that describe the block storage disks attached to the
     * instance when the automatic snapshot was created.</p>
     */
    inline void SetFromAttachedDisks(Aws::Vector<AttachedDisk>&& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks = std::move(value); }

    /**
     * <p>An array of objects that describe the block storage disks attached to the
     * instance when the automatic snapshot was created.</p>
     */
    inline AutoSnapshotDetails& WithFromAttachedDisks(const Aws::Vector<AttachedDisk>& value) { SetFromAttachedDisks(value); return *this;}

    /**
     * <p>An array of objects that describe the block storage disks attached to the
     * instance when the automatic snapshot was created.</p>
     */
    inline AutoSnapshotDetails& WithFromAttachedDisks(Aws::Vector<AttachedDisk>&& value) { SetFromAttachedDisks(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the block storage disks attached to the
     * instance when the automatic snapshot was created.</p>
     */
    inline AutoSnapshotDetails& AddFromAttachedDisks(const AttachedDisk& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the block storage disks attached to the
     * instance when the automatic snapshot was created.</p>
     */
    inline AutoSnapshotDetails& AddFromAttachedDisks(AttachedDisk&& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_date;
    bool m_dateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    AutoSnapshotStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<AttachedDisk> m_fromAttachedDisks;
    bool m_fromAttachedDisksHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
