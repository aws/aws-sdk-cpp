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
   * <p>A parameter for a group configuration item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupConfigurationParameter">AWS
   * API Reference</a></p>
   */
  class AWS_RESOURCEGROUPS_API GroupConfigurationParameter
  {
  public:
    GroupConfigurationParameter();
    GroupConfigurationParameter(Aws::Utils::Json::JsonView jsonValue);
    GroupConfigurationParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the group configuration parameter.</p> <p>You can specify the
     * following string values:</p> <ul> <li> <p>For configuration item type
     * <code>AWS::ResourceGroups::Generic</code>:</p> <ul> <li> <p>
     * <code>allowed-resource-types</code> </p> <p>Specifies the types of resources
     * that you can add to this group by using the <a>GroupResources</a> operation.</p>
     * </li> </ul> </li> <li> <p>For configuration item type
     * <code>AWS::EC2::CapacityReservationPool</code>:</p> <ul> <li> <p>None - This
     * configuration item type doesn't support any parameters.</p> </li> </ul> <p>For
     * more information about EC2 capacity reservation groups, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the group configuration parameter.</p> <p>You can specify the
     * following string values:</p> <ul> <li> <p>For configuration item type
     * <code>AWS::ResourceGroups::Generic</code>:</p> <ul> <li> <p>
     * <code>allowed-resource-types</code> </p> <p>Specifies the types of resources
     * that you can add to this group by using the <a>GroupResources</a> operation.</p>
     * </li> </ul> </li> <li> <p>For configuration item type
     * <code>AWS::EC2::CapacityReservationPool</code>:</p> <ul> <li> <p>None - This
     * configuration item type doesn't support any parameters.</p> </li> </ul> <p>For
     * more information about EC2 capacity reservation groups, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the group configuration parameter.</p> <p>You can specify the
     * following string values:</p> <ul> <li> <p>For configuration item type
     * <code>AWS::ResourceGroups::Generic</code>:</p> <ul> <li> <p>
     * <code>allowed-resource-types</code> </p> <p>Specifies the types of resources
     * that you can add to this group by using the <a>GroupResources</a> operation.</p>
     * </li> </ul> </li> <li> <p>For configuration item type
     * <code>AWS::EC2::CapacityReservationPool</code>:</p> <ul> <li> <p>None - This
     * configuration item type doesn't support any parameters.</p> </li> </ul> <p>For
     * more information about EC2 capacity reservation groups, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the group configuration parameter.</p> <p>You can specify the
     * following string values:</p> <ul> <li> <p>For configuration item type
     * <code>AWS::ResourceGroups::Generic</code>:</p> <ul> <li> <p>
     * <code>allowed-resource-types</code> </p> <p>Specifies the types of resources
     * that you can add to this group by using the <a>GroupResources</a> operation.</p>
     * </li> </ul> </li> <li> <p>For configuration item type
     * <code>AWS::EC2::CapacityReservationPool</code>:</p> <ul> <li> <p>None - This
     * configuration item type doesn't support any parameters.</p> </li> </ul> <p>For
     * more information about EC2 capacity reservation groups, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the group configuration parameter.</p> <p>You can specify the
     * following string values:</p> <ul> <li> <p>For configuration item type
     * <code>AWS::ResourceGroups::Generic</code>:</p> <ul> <li> <p>
     * <code>allowed-resource-types</code> </p> <p>Specifies the types of resources
     * that you can add to this group by using the <a>GroupResources</a> operation.</p>
     * </li> </ul> </li> <li> <p>For configuration item type
     * <code>AWS::EC2::CapacityReservationPool</code>:</p> <ul> <li> <p>None - This
     * configuration item type doesn't support any parameters.</p> </li> </ul> <p>For
     * more information about EC2 capacity reservation groups, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the group configuration parameter.</p> <p>You can specify the
     * following string values:</p> <ul> <li> <p>For configuration item type
     * <code>AWS::ResourceGroups::Generic</code>:</p> <ul> <li> <p>
     * <code>allowed-resource-types</code> </p> <p>Specifies the types of resources
     * that you can add to this group by using the <a>GroupResources</a> operation.</p>
     * </li> </ul> </li> <li> <p>For configuration item type
     * <code>AWS::EC2::CapacityReservationPool</code>:</p> <ul> <li> <p>None - This
     * configuration item type doesn't support any parameters.</p> </li> </ul> <p>For
     * more information about EC2 capacity reservation groups, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline GroupConfigurationParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the group configuration parameter.</p> <p>You can specify the
     * following string values:</p> <ul> <li> <p>For configuration item type
     * <code>AWS::ResourceGroups::Generic</code>:</p> <ul> <li> <p>
     * <code>allowed-resource-types</code> </p> <p>Specifies the types of resources
     * that you can add to this group by using the <a>GroupResources</a> operation.</p>
     * </li> </ul> </li> <li> <p>For configuration item type
     * <code>AWS::EC2::CapacityReservationPool</code>:</p> <ul> <li> <p>None - This
     * configuration item type doesn't support any parameters.</p> </li> </ul> <p>For
     * more information about EC2 capacity reservation groups, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline GroupConfigurationParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the group configuration parameter.</p> <p>You can specify the
     * following string values:</p> <ul> <li> <p>For configuration item type
     * <code>AWS::ResourceGroups::Generic</code>:</p> <ul> <li> <p>
     * <code>allowed-resource-types</code> </p> <p>Specifies the types of resources
     * that you can add to this group by using the <a>GroupResources</a> operation.</p>
     * </li> </ul> </li> <li> <p>For configuration item type
     * <code>AWS::EC2::CapacityReservationPool</code>:</p> <ul> <li> <p>None - This
     * configuration item type doesn't support any parameters.</p> </li> </ul> <p>For
     * more information about EC2 capacity reservation groups, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
     * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
     * </ul>
     */
    inline GroupConfigurationParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The values of for this parameter.</p> <p>You can specify the following string
     * value:</p> <ul> <li> <p>For item type <code>allowed-resource-types</code>: the
     * only supported parameter value is
     * <code>AWS::EC2::CapacityReservation</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values of for this parameter.</p> <p>You can specify the following string
     * value:</p> <ul> <li> <p>For item type <code>allowed-resource-types</code>: the
     * only supported parameter value is
     * <code>AWS::EC2::CapacityReservation</code>.</p> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of for this parameter.</p> <p>You can specify the following string
     * value:</p> <ul> <li> <p>For item type <code>allowed-resource-types</code>: the
     * only supported parameter value is
     * <code>AWS::EC2::CapacityReservation</code>.</p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of for this parameter.</p> <p>You can specify the following string
     * value:</p> <ul> <li> <p>For item type <code>allowed-resource-types</code>: the
     * only supported parameter value is
     * <code>AWS::EC2::CapacityReservation</code>.</p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of for this parameter.</p> <p>You can specify the following string
     * value:</p> <ul> <li> <p>For item type <code>allowed-resource-types</code>: the
     * only supported parameter value is
     * <code>AWS::EC2::CapacityReservation</code>.</p> </li> </ul>
     */
    inline GroupConfigurationParameter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of for this parameter.</p> <p>You can specify the following string
     * value:</p> <ul> <li> <p>For item type <code>allowed-resource-types</code>: the
     * only supported parameter value is
     * <code>AWS::EC2::CapacityReservation</code>.</p> </li> </ul>
     */
    inline GroupConfigurationParameter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of for this parameter.</p> <p>You can specify the following string
     * value:</p> <ul> <li> <p>For item type <code>allowed-resource-types</code>: the
     * only supported parameter value is
     * <code>AWS::EC2::CapacityReservation</code>.</p> </li> </ul>
     */
    inline GroupConfigurationParameter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values of for this parameter.</p> <p>You can specify the following string
     * value:</p> <ul> <li> <p>For item type <code>allowed-resource-types</code>: the
     * only supported parameter value is
     * <code>AWS::EC2::CapacityReservation</code>.</p> </li> </ul>
     */
    inline GroupConfigurationParameter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values of for this parameter.</p> <p>You can specify the following string
     * value:</p> <ul> <li> <p>For item type <code>allowed-resource-types</code>: the
     * only supported parameter value is
     * <code>AWS::EC2::CapacityReservation</code>.</p> </li> </ul>
     */
    inline GroupConfigurationParameter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
