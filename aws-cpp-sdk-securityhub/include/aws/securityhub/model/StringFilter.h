/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StringFilterComparison.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A string filter for querying findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StringFilter">AWS
   * API Reference</a></p>
   */
  class StringFilter
  {
  public:
    AWS_SECURITYHUB_API StringFilter();
    AWS_SECURITYHUB_API StringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter text, then there is no
     * match.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter text, then there is no
     * match.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter text, then there is no
     * match.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter text, then there is no
     * match.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter text, then there is no
     * match.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter text, then there is no
     * match.</p>
     */
    inline StringFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter text, then there is no
     * match.</p>
     */
    inline StringFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter text, then there is no
     * match.</p>
     */
    inline StringFilter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The condition to apply to a string value when querying for findings. To
     * search for values that contain the filter criteria value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * exactly match the filter value, use <code>EQUALS</code>.</p> <p>For example, the
     * filter <code>ResourceType EQUALS AwsEc2SecurityGroup</code> only matches
     * findings that have a resource type of <code>AwsEc2SecurityGroup</code>.</p>
     * </li> <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>.</p> <p>For example, the filter <code>ResourceType PREFIX
     * AwsIam</code> matches findings that have a resource type that starts with
     * <code>AwsIam</code>. Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all match.</p> </li>
     * </ul> <p> <code>EQUALS</code> and <code>PREFIX</code> filters on the same field
     * are joined by <code>OR</code>. A finding matches if it matches any one of those
     * filters.</p> <p>To search for values that do not contain the filter criteria
     * value, use one of the following comparison operators:</p> <ul> <li> <p>To search
     * for values that do not exactly match the filter value, use
     * <code>NOT_EQUALS</code>.</p> <p>For example, the filter <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> matches findings that have a resource type other
     * than <code>AwsIamPolicy</code>.</p> </li> <li> <p>To search for values that do
     * not start with the filter value, use <code>PREFIX_NOT_EQUALS</code>.</p> <p>For
     * example, the filter <code>ResourceType PREFIX_NOT_EQUALS AwsIam</code> matches
     * findings that have a resource type that does not start with <code>AwsIam</code>.
     * Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all be excluded from
     * the results.</p> </li> </ul> <p> <code>NOT_EQUALS</code> and
     * <code>PREFIX_NOT_EQUALS</code> filters on the same field are joined by
     * <code>AND</code>. A finding matches only if it matches all of those filters.</p>
     * <p>For filters on the same field, you cannot provide both an <code>EQUALS</code>
     * filter and a <code>NOT_EQUALS</code> or <code>PREFIX_NOT_EQUALS</code> filter.
     * Combining filters in this way always returns an error, even if the provided
     * filter values would return valid results.</p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, then the <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters.</p> <p> For example, for the following
     * filter, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIAM</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul>
     */
    inline const StringFilterComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The condition to apply to a string value when querying for findings. To
     * search for values that contain the filter criteria value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * exactly match the filter value, use <code>EQUALS</code>.</p> <p>For example, the
     * filter <code>ResourceType EQUALS AwsEc2SecurityGroup</code> only matches
     * findings that have a resource type of <code>AwsEc2SecurityGroup</code>.</p>
     * </li> <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>.</p> <p>For example, the filter <code>ResourceType PREFIX
     * AwsIam</code> matches findings that have a resource type that starts with
     * <code>AwsIam</code>. Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all match.</p> </li>
     * </ul> <p> <code>EQUALS</code> and <code>PREFIX</code> filters on the same field
     * are joined by <code>OR</code>. A finding matches if it matches any one of those
     * filters.</p> <p>To search for values that do not contain the filter criteria
     * value, use one of the following comparison operators:</p> <ul> <li> <p>To search
     * for values that do not exactly match the filter value, use
     * <code>NOT_EQUALS</code>.</p> <p>For example, the filter <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> matches findings that have a resource type other
     * than <code>AwsIamPolicy</code>.</p> </li> <li> <p>To search for values that do
     * not start with the filter value, use <code>PREFIX_NOT_EQUALS</code>.</p> <p>For
     * example, the filter <code>ResourceType PREFIX_NOT_EQUALS AwsIam</code> matches
     * findings that have a resource type that does not start with <code>AwsIam</code>.
     * Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all be excluded from
     * the results.</p> </li> </ul> <p> <code>NOT_EQUALS</code> and
     * <code>PREFIX_NOT_EQUALS</code> filters on the same field are joined by
     * <code>AND</code>. A finding matches only if it matches all of those filters.</p>
     * <p>For filters on the same field, you cannot provide both an <code>EQUALS</code>
     * filter and a <code>NOT_EQUALS</code> or <code>PREFIX_NOT_EQUALS</code> filter.
     * Combining filters in this way always returns an error, even if the provided
     * filter values would return valid results.</p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, then the <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters.</p> <p> For example, for the following
     * filter, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIAM</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The condition to apply to a string value when querying for findings. To
     * search for values that contain the filter criteria value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * exactly match the filter value, use <code>EQUALS</code>.</p> <p>For example, the
     * filter <code>ResourceType EQUALS AwsEc2SecurityGroup</code> only matches
     * findings that have a resource type of <code>AwsEc2SecurityGroup</code>.</p>
     * </li> <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>.</p> <p>For example, the filter <code>ResourceType PREFIX
     * AwsIam</code> matches findings that have a resource type that starts with
     * <code>AwsIam</code>. Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all match.</p> </li>
     * </ul> <p> <code>EQUALS</code> and <code>PREFIX</code> filters on the same field
     * are joined by <code>OR</code>. A finding matches if it matches any one of those
     * filters.</p> <p>To search for values that do not contain the filter criteria
     * value, use one of the following comparison operators:</p> <ul> <li> <p>To search
     * for values that do not exactly match the filter value, use
     * <code>NOT_EQUALS</code>.</p> <p>For example, the filter <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> matches findings that have a resource type other
     * than <code>AwsIamPolicy</code>.</p> </li> <li> <p>To search for values that do
     * not start with the filter value, use <code>PREFIX_NOT_EQUALS</code>.</p> <p>For
     * example, the filter <code>ResourceType PREFIX_NOT_EQUALS AwsIam</code> matches
     * findings that have a resource type that does not start with <code>AwsIam</code>.
     * Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all be excluded from
     * the results.</p> </li> </ul> <p> <code>NOT_EQUALS</code> and
     * <code>PREFIX_NOT_EQUALS</code> filters on the same field are joined by
     * <code>AND</code>. A finding matches only if it matches all of those filters.</p>
     * <p>For filters on the same field, you cannot provide both an <code>EQUALS</code>
     * filter and a <code>NOT_EQUALS</code> or <code>PREFIX_NOT_EQUALS</code> filter.
     * Combining filters in this way always returns an error, even if the provided
     * filter values would return valid results.</p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, then the <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters.</p> <p> For example, for the following
     * filter, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIAM</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul>
     */
    inline void SetComparison(const StringFilterComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The condition to apply to a string value when querying for findings. To
     * search for values that contain the filter criteria value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * exactly match the filter value, use <code>EQUALS</code>.</p> <p>For example, the
     * filter <code>ResourceType EQUALS AwsEc2SecurityGroup</code> only matches
     * findings that have a resource type of <code>AwsEc2SecurityGroup</code>.</p>
     * </li> <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>.</p> <p>For example, the filter <code>ResourceType PREFIX
     * AwsIam</code> matches findings that have a resource type that starts with
     * <code>AwsIam</code>. Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all match.</p> </li>
     * </ul> <p> <code>EQUALS</code> and <code>PREFIX</code> filters on the same field
     * are joined by <code>OR</code>. A finding matches if it matches any one of those
     * filters.</p> <p>To search for values that do not contain the filter criteria
     * value, use one of the following comparison operators:</p> <ul> <li> <p>To search
     * for values that do not exactly match the filter value, use
     * <code>NOT_EQUALS</code>.</p> <p>For example, the filter <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> matches findings that have a resource type other
     * than <code>AwsIamPolicy</code>.</p> </li> <li> <p>To search for values that do
     * not start with the filter value, use <code>PREFIX_NOT_EQUALS</code>.</p> <p>For
     * example, the filter <code>ResourceType PREFIX_NOT_EQUALS AwsIam</code> matches
     * findings that have a resource type that does not start with <code>AwsIam</code>.
     * Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all be excluded from
     * the results.</p> </li> </ul> <p> <code>NOT_EQUALS</code> and
     * <code>PREFIX_NOT_EQUALS</code> filters on the same field are joined by
     * <code>AND</code>. A finding matches only if it matches all of those filters.</p>
     * <p>For filters on the same field, you cannot provide both an <code>EQUALS</code>
     * filter and a <code>NOT_EQUALS</code> or <code>PREFIX_NOT_EQUALS</code> filter.
     * Combining filters in this way always returns an error, even if the provided
     * filter values would return valid results.</p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, then the <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters.</p> <p> For example, for the following
     * filter, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIAM</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul>
     */
    inline void SetComparison(StringFilterComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The condition to apply to a string value when querying for findings. To
     * search for values that contain the filter criteria value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * exactly match the filter value, use <code>EQUALS</code>.</p> <p>For example, the
     * filter <code>ResourceType EQUALS AwsEc2SecurityGroup</code> only matches
     * findings that have a resource type of <code>AwsEc2SecurityGroup</code>.</p>
     * </li> <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>.</p> <p>For example, the filter <code>ResourceType PREFIX
     * AwsIam</code> matches findings that have a resource type that starts with
     * <code>AwsIam</code>. Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all match.</p> </li>
     * </ul> <p> <code>EQUALS</code> and <code>PREFIX</code> filters on the same field
     * are joined by <code>OR</code>. A finding matches if it matches any one of those
     * filters.</p> <p>To search for values that do not contain the filter criteria
     * value, use one of the following comparison operators:</p> <ul> <li> <p>To search
     * for values that do not exactly match the filter value, use
     * <code>NOT_EQUALS</code>.</p> <p>For example, the filter <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> matches findings that have a resource type other
     * than <code>AwsIamPolicy</code>.</p> </li> <li> <p>To search for values that do
     * not start with the filter value, use <code>PREFIX_NOT_EQUALS</code>.</p> <p>For
     * example, the filter <code>ResourceType PREFIX_NOT_EQUALS AwsIam</code> matches
     * findings that have a resource type that does not start with <code>AwsIam</code>.
     * Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all be excluded from
     * the results.</p> </li> </ul> <p> <code>NOT_EQUALS</code> and
     * <code>PREFIX_NOT_EQUALS</code> filters on the same field are joined by
     * <code>AND</code>. A finding matches only if it matches all of those filters.</p>
     * <p>For filters on the same field, you cannot provide both an <code>EQUALS</code>
     * filter and a <code>NOT_EQUALS</code> or <code>PREFIX_NOT_EQUALS</code> filter.
     * Combining filters in this way always returns an error, even if the provided
     * filter values would return valid results.</p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, then the <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters.</p> <p> For example, for the following
     * filter, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIAM</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul>
     */
    inline StringFilter& WithComparison(const StringFilterComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The condition to apply to a string value when querying for findings. To
     * search for values that contain the filter criteria value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * exactly match the filter value, use <code>EQUALS</code>.</p> <p>For example, the
     * filter <code>ResourceType EQUALS AwsEc2SecurityGroup</code> only matches
     * findings that have a resource type of <code>AwsEc2SecurityGroup</code>.</p>
     * </li> <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>.</p> <p>For example, the filter <code>ResourceType PREFIX
     * AwsIam</code> matches findings that have a resource type that starts with
     * <code>AwsIam</code>. Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all match.</p> </li>
     * </ul> <p> <code>EQUALS</code> and <code>PREFIX</code> filters on the same field
     * are joined by <code>OR</code>. A finding matches if it matches any one of those
     * filters.</p> <p>To search for values that do not contain the filter criteria
     * value, use one of the following comparison operators:</p> <ul> <li> <p>To search
     * for values that do not exactly match the filter value, use
     * <code>NOT_EQUALS</code>.</p> <p>For example, the filter <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> matches findings that have a resource type other
     * than <code>AwsIamPolicy</code>.</p> </li> <li> <p>To search for values that do
     * not start with the filter value, use <code>PREFIX_NOT_EQUALS</code>.</p> <p>For
     * example, the filter <code>ResourceType PREFIX_NOT_EQUALS AwsIam</code> matches
     * findings that have a resource type that does not start with <code>AwsIam</code>.
     * Findings with a resource type of <code>AwsIamPolicy</code>,
     * <code>AwsIamRole</code>, or <code>AwsIamUser</code> would all be excluded from
     * the results.</p> </li> </ul> <p> <code>NOT_EQUALS</code> and
     * <code>PREFIX_NOT_EQUALS</code> filters on the same field are joined by
     * <code>AND</code>. A finding matches only if it matches all of those filters.</p>
     * <p>For filters on the same field, you cannot provide both an <code>EQUALS</code>
     * filter and a <code>NOT_EQUALS</code> or <code>PREFIX_NOT_EQUALS</code> filter.
     * Combining filters in this way always returns an error, even if the provided
     * filter values would return valid results.</p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, then the <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters.</p> <p> For example, for the following
     * filter, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIAM</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul>
     */
    inline StringFilter& WithComparison(StringFilterComparison&& value) { SetComparison(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    StringFilterComparison m_comparison;
    bool m_comparisonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
