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
  class AWS_DIRECTORYSERVICE_API Snapshot
  {
  public:
    Snapshot();
    Snapshot(Aws::Utils::Json::JsonView jsonValue);
    Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The directory identifier.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The directory identifier.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The directory identifier.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory identifier.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The directory identifier.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The directory identifier.</p>
     */
    inline Snapshot& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory identifier.</p>
     */
    inline Snapshot& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The directory identifier.</p>
     */
    inline Snapshot& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The snapshot identifier.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot identifier.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The snapshot identifier.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot identifier.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot identifier.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot identifier.</p>
     */
    inline Snapshot& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot identifier.</p>
     */
    inline Snapshot& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot identifier.</p>
     */
    inline Snapshot& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The snapshot type.</p>
     */
    inline const SnapshotType& GetType() const{ return m_type; }

    /**
     * <p>The snapshot type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The snapshot type.</p>
     */
    inline void SetType(const SnapshotType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The snapshot type.</p>
     */
    inline void SetType(SnapshotType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The snapshot type.</p>
     */
    inline Snapshot& WithType(const SnapshotType& value) { SetType(value); return *this;}

    /**
     * <p>The snapshot type.</p>
     */
    inline Snapshot& WithType(SnapshotType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The descriptive name of the snapshot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The descriptive name of the snapshot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The descriptive name of the snapshot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The descriptive name of the snapshot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The descriptive name of the snapshot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The descriptive name of the snapshot.</p>
     */
    inline Snapshot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The descriptive name of the snapshot.</p>
     */
    inline Snapshot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the snapshot.</p>
     */
    inline Snapshot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The snapshot status.</p>
     */
    inline const SnapshotStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The snapshot status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The snapshot status.</p>
     */
    inline void SetStatus(const SnapshotStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The snapshot status.</p>
     */
    inline void SetStatus(SnapshotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The snapshot status.</p>
     */
    inline Snapshot& WithStatus(const SnapshotStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The snapshot status.</p>
     */
    inline Snapshot& WithStatus(SnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the snapshot was taken.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time that the snapshot was taken.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time that the snapshot was taken.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time that the snapshot was taken.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time that the snapshot was taken.</p>
     */
    inline Snapshot& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time that the snapshot was taken.</p>
     */
    inline Snapshot& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;

    SnapshotType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    SnapshotStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
