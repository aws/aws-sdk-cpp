/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/GroupingAttributeDefinition.h>
#include <utility>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

  /**
   */
  class PutGroupingConfigurationRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API PutGroupingConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutGroupingConfiguration"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of grouping attribute definitions that specify how services should
     * be grouped. Each definition includes a friendly name, source keys to derive the
     * grouping value from, and an optional default value.</p>
     */
    inline const Aws::Vector<GroupingAttributeDefinition>& GetGroupingAttributeDefinitions() const { return m_groupingAttributeDefinitions; }
    inline bool GroupingAttributeDefinitionsHasBeenSet() const { return m_groupingAttributeDefinitionsHasBeenSet; }
    template<typename GroupingAttributeDefinitionsT = Aws::Vector<GroupingAttributeDefinition>>
    void SetGroupingAttributeDefinitions(GroupingAttributeDefinitionsT&& value) { m_groupingAttributeDefinitionsHasBeenSet = true; m_groupingAttributeDefinitions = std::forward<GroupingAttributeDefinitionsT>(value); }
    template<typename GroupingAttributeDefinitionsT = Aws::Vector<GroupingAttributeDefinition>>
    PutGroupingConfigurationRequest& WithGroupingAttributeDefinitions(GroupingAttributeDefinitionsT&& value) { SetGroupingAttributeDefinitions(std::forward<GroupingAttributeDefinitionsT>(value)); return *this;}
    template<typename GroupingAttributeDefinitionsT = GroupingAttributeDefinition>
    PutGroupingConfigurationRequest& AddGroupingAttributeDefinitions(GroupingAttributeDefinitionsT&& value) { m_groupingAttributeDefinitionsHasBeenSet = true; m_groupingAttributeDefinitions.emplace_back(std::forward<GroupingAttributeDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GroupingAttributeDefinition> m_groupingAttributeDefinitions;
    bool m_groupingAttributeDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
