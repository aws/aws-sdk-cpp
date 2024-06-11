﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/SnapshotType.h>
#include <aws/ds/model/SnapshotStatus.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Describes a directory snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/Snapshot">AWS API
   * Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_DIRECTORYSERVICE_API Snapshot();
    AWS_DIRECTORYSERVICE_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The directory identifier.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline Snapshot& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline Snapshot& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline Snapshot& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot identifier.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline Snapshot& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline Snapshot& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline Snapshot& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot type.</p>
     */
    inline const SnapshotType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SnapshotType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SnapshotType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Snapshot& WithType(const SnapshotType& value) { SetType(value); return *this;}
    inline Snapshot& WithType(SnapshotType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the snapshot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Snapshot& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Snapshot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Snapshot& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot status.</p>
     */
    inline const SnapshotStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SnapshotStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SnapshotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Snapshot& WithStatus(const SnapshotStatus& value) { SetStatus(value); return *this;}
    inline Snapshot& WithStatus(SnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the snapshot was taken.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Snapshot& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Snapshot& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    SnapshotType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SnapshotStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
