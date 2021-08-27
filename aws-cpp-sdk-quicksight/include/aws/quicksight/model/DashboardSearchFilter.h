/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilterOperator.h>
#include <aws/quicksight/model/DashboardFilterAttribute.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A filter that you apply when searching for dashboards. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardSearchFilter">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API DashboardSearchFilter
  {
  public:
    DashboardSearchFilter();
    DashboardSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    DashboardSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The comparison operator that you want to use as a filter, for example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline const FilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The comparison operator that you want to use as a filter, for example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The comparison operator that you want to use as a filter, for example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline void SetOperator(const FilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The comparison operator that you want to use as a filter, for example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline void SetOperator(FilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The comparison operator that you want to use as a filter, for example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline DashboardSearchFilter& WithOperator(const FilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The comparison operator that you want to use as a filter, for example,
     * <code>"Operator": "StringEquals"</code>.</p>
     */
    inline DashboardSearchFilter& WithOperator(FilterOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>The name of the value that you want to use as a filter, for example,
     * <code>"Name": "QUICKSIGHT_USER"</code>. </p>
     */
    inline const DashboardFilterAttribute& GetName() const{ return m_name; }

    /**
     * <p>The name of the value that you want to use as a filter, for example,
     * <code>"Name": "QUICKSIGHT_USER"</code>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the value that you want to use as a filter, for example,
     * <code>"Name": "QUICKSIGHT_USER"</code>. </p>
     */
    inline void SetName(const DashboardFilterAttribute& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the value that you want to use as a filter, for example,
     * <code>"Name": "QUICKSIGHT_USER"</code>. </p>
     */
    inline void SetName(DashboardFilterAttribute&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the value that you want to use as a filter, for example,
     * <code>"Name": "QUICKSIGHT_USER"</code>. </p>
     */
    inline DashboardSearchFilter& WithName(const DashboardFilterAttribute& value) { SetName(value); return *this;}

    /**
     * <p>The name of the value that you want to use as a filter, for example,
     * <code>"Name": "QUICKSIGHT_USER"</code>. </p>
     */
    inline DashboardSearchFilter& WithName(DashboardFilterAttribute&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the named item, in this case <code>QUICKSIGHT_USER</code>, that
     * you want to use as a filter, for example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the named item, in this case <code>QUICKSIGHT_USER</code>, that
     * you want to use as a filter, for example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the named item, in this case <code>QUICKSIGHT_USER</code>, that
     * you want to use as a filter, for example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the named item, in this case <code>QUICKSIGHT_USER</code>, that
     * you want to use as a filter, for example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the named item, in this case <code>QUICKSIGHT_USER</code>, that
     * you want to use as a filter, for example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the named item, in this case <code>QUICKSIGHT_USER</code>, that
     * you want to use as a filter, for example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>. </p>
     */
    inline DashboardSearchFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the named item, in this case <code>QUICKSIGHT_USER</code>, that
     * you want to use as a filter, for example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>. </p>
     */
    inline DashboardSearchFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the named item, in this case <code>QUICKSIGHT_USER</code>, that
     * you want to use as a filter, for example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>. </p>
     */
    inline DashboardSearchFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    FilterOperator m_operator;
    bool m_operatorHasBeenSet;

    DashboardFilterAttribute m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
