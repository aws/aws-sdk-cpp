/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/Snapshot">AWS
   * API Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_WORKSPACES_API Snapshot();
    AWS_WORKSPACES_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotTime() const{ return m_snapshotTime; }

    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline bool SnapshotTimeHasBeenSet() const { return m_snapshotTimeHasBeenSet; }

    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline void SetSnapshotTime(const Aws::Utils::DateTime& value) { m_snapshotTimeHasBeenSet = true; m_snapshotTime = value; }

    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline void SetSnapshotTime(Aws::Utils::DateTime&& value) { m_snapshotTimeHasBeenSet = true; m_snapshotTime = std::move(value); }

    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline Snapshot& WithSnapshotTime(const Aws::Utils::DateTime& value) { SetSnapshotTime(value); return *this;}

    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline Snapshot& WithSnapshotTime(Aws::Utils::DateTime&& value) { SetSnapshotTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_snapshotTime;
    bool m_snapshotTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
