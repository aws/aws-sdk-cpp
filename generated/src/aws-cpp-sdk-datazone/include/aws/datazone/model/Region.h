/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Region">AWS API
   * Reference</a></p>
   */
  class Region
  {
  public:
    AWS_DATAZONE_API Region();
    AWS_DATAZONE_API Region(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Region& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }
    inline Region& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}
    inline Region& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}
    inline Region& WithRegionName(const char* value) { SetRegionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region name path.</p>
     */
    inline const Aws::String& GetRegionNamePath() const{ return m_regionNamePath; }
    inline bool RegionNamePathHasBeenSet() const { return m_regionNamePathHasBeenSet; }
    inline void SetRegionNamePath(const Aws::String& value) { m_regionNamePathHasBeenSet = true; m_regionNamePath = value; }
    inline void SetRegionNamePath(Aws::String&& value) { m_regionNamePathHasBeenSet = true; m_regionNamePath = std::move(value); }
    inline void SetRegionNamePath(const char* value) { m_regionNamePathHasBeenSet = true; m_regionNamePath.assign(value); }
    inline Region& WithRegionNamePath(const Aws::String& value) { SetRegionNamePath(value); return *this;}
    inline Region& WithRegionNamePath(Aws::String&& value) { SetRegionNamePath(std::move(value)); return *this;}
    inline Region& WithRegionNamePath(const char* value) { SetRegionNamePath(value); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_regionNamePath;
    bool m_regionNamePathHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
