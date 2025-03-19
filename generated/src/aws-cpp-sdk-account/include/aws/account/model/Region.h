/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/account/model/RegionOptStatus.h>
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
namespace Account
{
namespace Model
{

  /**
   * <p>This is a structure that expresses the Region for a given account, consisting
   * of a name and opt-in status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/Region">AWS API
   * Reference</a></p>
   */
  class Region
  {
  public:
    AWS_ACCOUNT_API Region() = default;
    AWS_ACCOUNT_API Region(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API Region& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Region code of a given Region (for example, <code>us-east-1</code>).</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    Region& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of potential statuses a Region can undergo (Enabled, Enabling, Disabled,
     * Disabling, Enabled_By_Default).</p>
     */
    inline RegionOptStatus GetRegionOptStatus() const { return m_regionOptStatus; }
    inline bool RegionOptStatusHasBeenSet() const { return m_regionOptStatusHasBeenSet; }
    inline void SetRegionOptStatus(RegionOptStatus value) { m_regionOptStatusHasBeenSet = true; m_regionOptStatus = value; }
    inline Region& WithRegionOptStatus(RegionOptStatus value) { SetRegionOptStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    RegionOptStatus m_regionOptStatus{RegionOptStatus::NOT_SET};
    bool m_regionOptStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
