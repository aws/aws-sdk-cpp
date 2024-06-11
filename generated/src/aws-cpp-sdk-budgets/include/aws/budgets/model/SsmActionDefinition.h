/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/ActionSubType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Systems Manager (SSM) action definition details.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/SsmActionDefinition">AWS
   * API Reference</a></p>
   */
  class SsmActionDefinition
  {
  public:
    AWS_BUDGETS_API SsmActionDefinition();
    AWS_BUDGETS_API SsmActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API SsmActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action subType. </p>
     */
    inline const ActionSubType& GetActionSubType() const{ return m_actionSubType; }
    inline bool ActionSubTypeHasBeenSet() const { return m_actionSubTypeHasBeenSet; }
    inline void SetActionSubType(const ActionSubType& value) { m_actionSubTypeHasBeenSet = true; m_actionSubType = value; }
    inline void SetActionSubType(ActionSubType&& value) { m_actionSubTypeHasBeenSet = true; m_actionSubType = std::move(value); }
    inline SsmActionDefinition& WithActionSubType(const ActionSubType& value) { SetActionSubType(value); return *this;}
    inline SsmActionDefinition& WithActionSubType(ActionSubType&& value) { SetActionSubType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region to run the SSM document. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline SsmActionDefinition& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline SsmActionDefinition& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline SsmActionDefinition& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }
    inline SsmActionDefinition& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}
    inline SsmActionDefinition& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}
    inline SsmActionDefinition& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    inline SsmActionDefinition& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }
    inline SsmActionDefinition& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    ///@}
  private:

    ActionSubType m_actionSubType;
    bool m_actionSubTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
