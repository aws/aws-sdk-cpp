/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/EnrollmentFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes a filter that returns a more specific list of account enrollment
   * statuses. Use this filter with the <a>GetEnrollmentStatusesForOrganization</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EnrollmentFilter">AWS
   * API Reference</a></p>
   */
  class EnrollmentFilter
  {
  public:
    AWS_COMPUTEOPTIMIZER_API EnrollmentFilter();
    AWS_COMPUTEOPTIMIZER_API EnrollmentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API EnrollmentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p> <p>Specify <code>Status</code> to return accounts
     * with a specific enrollment status (for example, <code>Active</code>).</p>
     */
    inline const EnrollmentFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Status</code> to return accounts
     * with a specific enrollment status (for example, <code>Active</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Status</code> to return accounts
     * with a specific enrollment status (for example, <code>Active</code>).</p>
     */
    inline void SetName(const EnrollmentFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Status</code> to return accounts
     * with a specific enrollment status (for example, <code>Active</code>).</p>
     */
    inline void SetName(EnrollmentFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Status</code> to return accounts
     * with a specific enrollment status (for example, <code>Active</code>).</p>
     */
    inline EnrollmentFilter& WithName(const EnrollmentFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Status</code> to return accounts
     * with a specific enrollment status (for example, <code>Active</code>).</p>
     */
    inline EnrollmentFilter& WithName(EnrollmentFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Active</code>,
     * <code>Inactive</code>, <code>Pending</code>, and <code>Failed</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Active</code>,
     * <code>Inactive</code>, <code>Pending</code>, and <code>Failed</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Active</code>,
     * <code>Inactive</code>, <code>Pending</code>, and <code>Failed</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Active</code>,
     * <code>Inactive</code>, <code>Pending</code>, and <code>Failed</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Active</code>,
     * <code>Inactive</code>, <code>Pending</code>, and <code>Failed</code>.</p>
     */
    inline EnrollmentFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Active</code>,
     * <code>Inactive</code>, <code>Pending</code>, and <code>Failed</code>.</p>
     */
    inline EnrollmentFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Active</code>,
     * <code>Inactive</code>, <code>Pending</code>, and <code>Failed</code>.</p>
     */
    inline EnrollmentFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Active</code>,
     * <code>Inactive</code>, <code>Pending</code>, and <code>Failed</code>.</p>
     */
    inline EnrollmentFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Active</code>,
     * <code>Inactive</code>, <code>Pending</code>, and <code>Failed</code>.</p>
     */
    inline EnrollmentFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    EnrollmentFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
