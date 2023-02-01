/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/InventoryFilterCondition.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>An inventory filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/InventoryFilter">AWS
   * API Reference</a></p>
   */
  class InventoryFilter
  {
  public:
    AWS_LICENSEMANAGER_API InventoryFilter();
    AWS_LICENSEMANAGER_API InventoryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API InventoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the filter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the filter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the filter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the filter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the filter.</p>
     */
    inline InventoryFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the filter.</p>
     */
    inline InventoryFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the filter.</p>
     */
    inline InventoryFilter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Condition of the filter.</p>
     */
    inline const InventoryFilterCondition& GetCondition() const{ return m_condition; }

    /**
     * <p>Condition of the filter.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>Condition of the filter.</p>
     */
    inline void SetCondition(const InventoryFilterCondition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>Condition of the filter.</p>
     */
    inline void SetCondition(InventoryFilterCondition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>Condition of the filter.</p>
     */
    inline InventoryFilter& WithCondition(const InventoryFilterCondition& value) { SetCondition(value); return *this;}

    /**
     * <p>Condition of the filter.</p>
     */
    inline InventoryFilter& WithCondition(InventoryFilterCondition&& value) { SetCondition(std::move(value)); return *this;}


    /**
     * <p>Value of the filter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Value of the filter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Value of the filter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Value of the filter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Value of the filter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Value of the filter.</p>
     */
    inline InventoryFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Value of the filter.</p>
     */
    inline InventoryFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Value of the filter.</p>
     */
    inline InventoryFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InventoryFilterCondition m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
