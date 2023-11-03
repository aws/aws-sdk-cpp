/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/DeploymentFilterKey.h>
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
namespace LaunchWizard
{
namespace Model
{

  /**
   * <p>A filter name and value pair that is used to return more specific results
   * from a describe operation. Filters can be used to match a set of resources by
   * specific criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DeploymentFilter">AWS
   * API Reference</a></p>
   */
  class DeploymentFilter
  {
  public:
    AWS_LAUNCHWIZARD_API DeploymentFilter();
    AWS_LAUNCHWIZARD_API DeploymentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API DeploymentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline const DeploymentFilterKey& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline void SetName(const DeploymentFilterKey& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline void SetName(DeploymentFilterKey&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline DeploymentFilter& WithName(const DeploymentFilterKey& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline DeploymentFilter& WithName(DeploymentFilterKey&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline DeploymentFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline DeploymentFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline DeploymentFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline DeploymentFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline DeploymentFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    DeploymentFilterKey m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
