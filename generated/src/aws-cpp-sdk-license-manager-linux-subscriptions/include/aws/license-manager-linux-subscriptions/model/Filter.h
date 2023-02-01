/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-linux-subscriptions/model/Operator.h>
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
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   * <p>A filter object that is used to return more specific results from a describe
   * operation. Filters can be used to match a set of resources by specific
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Filter();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of name to filter by.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The type of name to filter by.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The type of name to filter by.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The type of name to filter by.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The type of name to filter by.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The type of name to filter by.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The type of name to filter by.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The type of name to filter by.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An operator for filtering results.</p>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>An operator for filtering results.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>An operator for filtering results.</p>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>An operator for filtering results.</p>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>An operator for filtering results.</p>
     */
    inline Filter& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>An operator for filtering results.</p>
     */
    inline Filter& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>One or more values for the name to filter by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>One or more values for the name to filter by.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>One or more values for the name to filter by.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One or more values for the name to filter by.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One or more values for the name to filter by.</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>One or more values for the name to filter by.</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One or more values for the name to filter by.</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One or more values for the name to filter by.</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more values for the name to filter by.</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
