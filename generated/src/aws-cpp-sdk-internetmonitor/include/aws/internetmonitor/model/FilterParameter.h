/**
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
    AWS_INTERNETMONITOR_API FilterParameter();
    AWS_INTERNETMONITOR_API FilterParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API FilterParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A data field that you want to filter, to further scope your application's
     * Internet Monitor data in a repository that you created by running a query. A
     * field might be <code>city</code>, for example. The field must be one of the
     * fields that was returned by the specific query that you used to create the
     * repository.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>A data field that you want to filter, to further scope your application's
     * Internet Monitor data in a repository that you created by running a query. A
     * field might be <code>city</code>, for example. The field must be one of the
     * fields that was returned by the specific query that you used to create the
     * repository.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>A data field that you want to filter, to further scope your application's
     * Internet Monitor data in a repository that you created by running a query. A
     * field might be <code>city</code>, for example. The field must be one of the
     * fields that was returned by the specific query that you used to create the
     * repository.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>A data field that you want to filter, to further scope your application's
     * Internet Monitor data in a repository that you created by running a query. A
     * field might be <code>city</code>, for example. The field must be one of the
     * fields that was returned by the specific query that you used to create the
     * repository.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>A data field that you want to filter, to further scope your application's
     * Internet Monitor data in a repository that you created by running a query. A
     * field might be <code>city</code>, for example. The field must be one of the
     * fields that was returned by the specific query that you used to create the
     * repository.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>A data field that you want to filter, to further scope your application's
     * Internet Monitor data in a repository that you created by running a query. A
     * field might be <code>city</code>, for example. The field must be one of the
     * fields that was returned by the specific query that you used to create the
     * repository.</p>
     */
    inline FilterParameter& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>A data field that you want to filter, to further scope your application's
     * Internet Monitor data in a repository that you created by running a query. A
     * field might be <code>city</code>, for example. The field must be one of the
     * fields that was returned by the specific query that you used to create the
     * repository.</p>
     */
    inline FilterParameter& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>A data field that you want to filter, to further scope your application's
     * Internet Monitor data in a repository that you created by running a query. A
     * field might be <code>city</code>, for example. The field must be one of the
     * fields that was returned by the specific query that you used to create the
     * repository.</p>
     */
    inline FilterParameter& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The operator to use with the filter field and a value, such as
     * <code>not_equals</code>.</p>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to use with the filter field and a value, such as
     * <code>not_equals</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to use with the filter field and a value, such as
     * <code>not_equals</code>.</p>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to use with the filter field and a value, such as
     * <code>not_equals</code>.</p>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to use with the filter field and a value, such as
     * <code>not_equals</code>.</p>
     */
    inline FilterParameter& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to use with the filter field and a value, such as
     * <code>not_equals</code>.</p>
     */
    inline FilterParameter& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline FilterParameter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline FilterParameter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline FilterParameter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline FilterParameter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more values to be used, together with the specified operator, to
     * filter data for a query. For example, you could specify an array of values such
     * as <code>["Seattle", "Redmond"]</code>. Values in the array are separated by
     * commas.</p>
     */
    inline FilterParameter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
