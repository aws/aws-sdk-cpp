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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/OptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyOptionGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ModifyOptionGroupRequest : public RDSRequest
  {
  public:
    ModifyOptionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyOptionGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, can't be removed from an
     * option group, and that option group can't be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, can't be removed from an
     * option group, and that option group can't be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, can't be removed from an
     * option group, and that option group can't be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, can't be removed from an
     * option group, and that option group can't be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, can't be removed from an
     * option group, and that option group can't be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, can't be removed from an
     * option group, and that option group can't be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline ModifyOptionGroupRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, can't be removed from an
     * option group, and that option group can't be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline ModifyOptionGroupRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, can't be removed from an
     * option group, and that option group can't be removed from a DB instance once it
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
    inline bool OptionsToIncludeHasBeenSet() const { return m_optionsToIncludeHasBeenSet; }

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline void SetOptionsToInclude(const Aws::Vector<OptionConfiguration>& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude = value; }

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline void SetOptionsToInclude(Aws::Vector<OptionConfiguration>&& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude = std::move(value); }

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline ModifyOptionGroupRequest& WithOptionsToInclude(const Aws::Vector<OptionConfiguration>& value) { SetOptionsToInclude(value); return *this;}

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline ModifyOptionGroupRequest& WithOptionsToInclude(Aws::Vector<OptionConfiguration>&& value) { SetOptionsToInclude(std::move(value)); return *this;}

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToInclude(const OptionConfiguration& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude.push_back(value); return *this; }

    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToInclude(OptionConfiguration&& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude.push_back(std::move(value)); return *this; }


    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptionsToRemove() const{ return m_optionsToRemove; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline bool OptionsToRemoveHasBeenSet() const { return m_optionsToRemoveHasBeenSet; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline void SetOptionsToRemove(const Aws::Vector<Aws::String>& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = value; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline void SetOptionsToRemove(Aws::Vector<Aws::String>&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = std::move(value); }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& WithOptionsToRemove(const Aws::Vector<Aws::String>& value) { SetOptionsToRemove(value); return *this;}

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& WithOptionsToRemove(Aws::Vector<Aws::String>&& value) { SetOptionsToRemove(std::move(value)); return *this;}

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToRemove(const Aws::String& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToRemove(Aws::String&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline ModifyOptionGroupRequest& AddOptionsToRemove(const char* value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether to apply the change immediately or during the
     * next maintenance window for each instance associated with the option group.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>A value that indicates whether to apply the change immediately or during the
     * next maintenance window for each instance associated with the option group.</p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>A value that indicates whether to apply the change immediately or during the
     * next maintenance window for each instance associated with the option group.</p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>A value that indicates whether to apply the change immediately or during the
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
