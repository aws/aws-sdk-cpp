/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>

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
   * <p>Describes a disk snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DiskSnapshotInfo">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API DiskSnapshotInfo
  {
  public:
    DiskSnapshotInfo();
    DiskSnapshotInfo(Aws::Utils::Json::JsonView jsonValue);
    DiskSnapshotInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }

    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }

    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }

    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline DiskSnapshotInfo& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}

  private:

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
