/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A parameter for a group configuration item. For details about group service
   * configuration syntax, see <a
   * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
   * configurations for resource groups</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupConfigurationParameter">AWS
   * API Reference</a></p>
   */
  class GroupConfigurationParameter
  {
  public:
    AWS_RESOURCEGROUPS_API GroupConfigurationParameter();
    AWS_RESOURCEGROUPS_API GroupConfigurationParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API GroupConfigurationParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the group configuration parameter. For the list of parameters
     * that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the group configuration parameter. For the list of parameters
     * that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the group configuration parameter. For the list of parameters
     * that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the group configuration parameter. For the list of parameters
     * that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the group configuration parameter. For the list of parameters
     * that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the group configuration parameter. For the list of parameters
     * that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the group configuration parameter. For the list of parameters
     * that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the group configuration parameter. For the list of parameters
     * that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value or values to be used for the specified parameter. For the list of
     * values you can use with each parameter, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value or values to be used for the specified parameter. For the list of
     * values you can use with each parameter, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value or values to be used for the specified parameter. For the list of
     * values you can use with each parameter, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value or values to be used for the specified parameter. For the list of
     * values you can use with each parameter, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value or values to be used for the specified parameter. For the list of
     * values you can use with each parameter, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationParameter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value or values to be used for the specified parameter. For the list of
     * values you can use with each parameter, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationParameter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value or values to be used for the specified parameter. For the list of
     * values you can use with each parameter, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationParameter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value or values to be used for the specified parameter. For the list of
     * values you can use with each parameter, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationParameter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value or values to be used for the specified parameter. For the list of
     * values you can use with each parameter, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationParameter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
