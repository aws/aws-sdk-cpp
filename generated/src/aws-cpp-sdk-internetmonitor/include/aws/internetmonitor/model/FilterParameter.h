﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/Operator.h>
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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>A filter that you use with the results of a Amazon CloudWatch Internet
   * Monitor query that you created and ran. The query sets up a repository of data
   * that is a subset of your application's Internet Monitor data.
   * <code>FilterParameter</code> is a string that defines how you want to filter the
   * repository of data to return a set of results, based on your criteria.</p>
   * <p>The filter parameters that you can specify depend on the query type that you
   * used to create the repository, since each query type returns a different set of
   * Internet Monitor data.</p> <p>For each filter, you specify a field (such as
   * <code>city</code>), an operator (such as <code>not_equals</code>, and a value or
   * array of values (such as <code>["Seattle", "Redmond"]</code>). Separate values
   * in the array with commas.</p> <p>For more information about specifying filter
   * parameters, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-view-cw-tools-cwim-query.html">Using
   * the Amazon CloudWatch Internet Monitor query interface</a> in the Amazon
   * CloudWatch Internet Monitor User Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/FilterParameter">AWS
   * API Reference</a></p>
   */
  class FilterParameter
  {
  public:
    AWS_INTERNETMONITOR_API FilterParameter() = default;
    AWS_INTERNETMONITOR_API FilterParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API FilterParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A data field that you want to filter, to further scope your application's
     * Internet Monitor data in a repository that you created by running a query. A
     * field might be <code>city</code>, for example. The field must be one of the
     * fields that was returned by the specific query that you used to create the
     * repository.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    FilterParameter& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use with the filter field and a value, such as
     * <code>not_equals</code>.</p>
     */
    inline Operator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(Operator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline FilterParameter& WithOperator(Operator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    FilterParameter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    FilterParameter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Operator m_operator{Operator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
