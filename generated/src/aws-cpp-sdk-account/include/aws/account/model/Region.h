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
    AWS_ACCOUNT_API Region();
    AWS_ACCOUNT_API Region(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API Region& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Region code of a given Region (for example, <code>us-east-1</code>).</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The Region code of a given Region (for example, <code>us-east-1</code>).</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The Region code of a given Region (for example, <code>us-east-1</code>).</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The Region code of a given Region (for example, <code>us-east-1</code>).</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The Region code of a given Region (for example, <code>us-east-1</code>).</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The Region code of a given Region (for example, <code>us-east-1</code>).</p>
     */
    inline Region& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The Region code of a given Region (for example, <code>us-east-1</code>).</p>
     */
    inline Region& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The Region code of a given Region (for example, <code>us-east-1</code>).</p>
     */
    inline Region& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>One of potential statuses a Region can undergo (Enabled, Enabling, Disabled,
     * Disabling, Enabled_By_Default).</p>
     */
    inline const RegionOptStatus& GetRegionOptStatus() const{ return m_regionOptStatus; }

    /**
     * <p>One of potential statuses a Region can undergo (Enabled, Enabling, Disabled,
     * Disabling, Enabled_By_Default).</p>
     */
    inline bool RegionOptStatusHasBeenSet() const { return m_regionOptStatusHasBeenSet; }

    /**
     * <p>One of potential statuses a Region can undergo (Enabled, Enabling, Disabled,
     * Disabling, Enabled_By_Default).</p>
     */
    inline void SetRegionOptStatus(const RegionOptStatus& value) { m_regionOptStatusHasBeenSet = true; m_regionOptStatus = value; }

    /**
     * <p>One of potential statuses a Region can undergo (Enabled, Enabling, Disabled,
     * Disabling, Enabled_By_Default).</p>
     */
    inline void SetRegionOptStatus(RegionOptStatus&& value) { m_regionOptStatusHasBeenSet = true; m_regionOptStatus = std::move(value); }

    /**
     * <p>One of potential statuses a Region can undergo (Enabled, Enabling, Disabled,
     * Disabling, Enabled_By_Default).</p>
     */
    inline Region& WithRegionOptStatus(const RegionOptStatus& value) { SetRegionOptStatus(value); return *this;}

    /**
     * <p>One of potential statuses a Region can undergo (Enabled, Enabling, Disabled,
     * Disabling, Enabled_By_Default).</p>
     */
    inline Region& WithRegionOptStatus(RegionOptStatus&& value) { SetRegionOptStatus(std::move(value)); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    RegionOptStatus m_regionOptStatus;
    bool m_regionOptStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
