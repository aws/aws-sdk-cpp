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


    /**
     * <p>The action subType. </p>
     */
    inline const ActionSubType& GetActionSubType() const{ return m_actionSubType; }

    /**
     * <p>The action subType. </p>
     */
    inline bool ActionSubTypeHasBeenSet() const { return m_actionSubTypeHasBeenSet; }

    /**
     * <p>The action subType. </p>
     */
    inline void SetActionSubType(const ActionSubType& value) { m_actionSubTypeHasBeenSet = true; m_actionSubType = value; }

    /**
     * <p>The action subType. </p>
     */
    inline void SetActionSubType(ActionSubType&& value) { m_actionSubTypeHasBeenSet = true; m_actionSubType = std::move(value); }

    /**
     * <p>The action subType. </p>
     */
    inline SsmActionDefinition& WithActionSubType(const ActionSubType& value) { SetActionSubType(value); return *this;}

    /**
     * <p>The action subType. </p>
     */
    inline SsmActionDefinition& WithActionSubType(ActionSubType&& value) { SetActionSubType(std::move(value)); return *this;}


    /**
     * <p>The Region to run the SSM document. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region to run the SSM document. </p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region to run the SSM document. </p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region to run the SSM document. </p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region to run the SSM document. </p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region to run the SSM document. </p>
     */
    inline SsmActionDefinition& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region to run the SSM document. </p>
     */
    inline SsmActionDefinition& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region to run the SSM document. </p>
     */
    inline SsmActionDefinition& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline SsmActionDefinition& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline SsmActionDefinition& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline SsmActionDefinition& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline SsmActionDefinition& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 and RDS instance IDs. </p>
     */
    inline SsmActionDefinition& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

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
