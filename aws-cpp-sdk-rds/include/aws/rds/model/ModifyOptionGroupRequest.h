/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/OptionConfiguration.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API ModifyOptionGroupRequest : public RDSRequest
  {
  public:
    ModifyOptionGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, cannot be removed from an
     * option group, and that option group cannot be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, cannot be removed from an
     * option group, and that option group cannot be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, cannot be removed from an
     * option group, and that option group cannot be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, cannot be removed from an
     * option group, and that option group cannot be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, cannot be removed from an
     * option group, and that option group cannot be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline ModifyOptionGroupRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, cannot be removed from an
     * option group, and that option group cannot be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline ModifyOptionGroupRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, cannot be removed from an
     * option group, and that option group cannot be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline ModifyOptionGroupRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline const Aws::Vector<OptionConfiguration>& GetOptionsToInclude() const{ return m_optionsToInclude; }

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline void SetOptionsToInclude(const Aws::Vector<OptionConfiguration>& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude = value; }

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline void SetOptionsToInclude(Aws::Vector<OptionConfiguration>&& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude = value; }

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline ModifyOptionGroupRequest& WithOptionsToInclude(const Aws::Vector<OptionConfiguration>& value) { SetOptionsToInclude(value); return *this;}

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline ModifyOptionGroupRequest& WithOptionsToInclude(Aws::Vector<OptionConfiguration>&& value) { SetOptionsToInclude(value); return *this;}

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToInclude(const OptionConfiguration& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude.push_back(value); return *this; }

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToInclude(OptionConfiguration&& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude.push_back(value); return *this; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptionsToRemove() const{ return m_optionsToRemove; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline void SetOptionsToRemove(const Aws::Vector<Aws::String>& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = value; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline void SetOptionsToRemove(Aws::Vector<Aws::String>&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = value; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& WithOptionsToRemove(const Aws::Vector<Aws::String>& value) { SetOptionsToRemove(value); return *this;}

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& WithOptionsToRemove(Aws::Vector<Aws::String>&& value) { SetOptionsToRemove(value); return *this;}

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToRemove(const Aws::String& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToRemove(Aws::String&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToRemove(const char* value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }

    /**
     * <p>Indicates whether the changes should be applied immediately, or during the
     * next maintenance window for each instance associated with the option group.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>Indicates whether the changes should be applied immediately, or during the
     * next maintenance window for each instance associated with the option group.</p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>Indicates whether the changes should be applied immediately, or during the
     * next maintenance window for each instance associated with the option group.</p>
     */
    inline ModifyOptionGroupRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}

  private:
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    Aws::Vector<OptionConfiguration> m_optionsToInclude;
    bool m_optionsToIncludeHasBeenSet;
    Aws::Vector<Aws::String> m_optionsToRemove;
    bool m_optionsToRemoveHasBeenSet;
    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
