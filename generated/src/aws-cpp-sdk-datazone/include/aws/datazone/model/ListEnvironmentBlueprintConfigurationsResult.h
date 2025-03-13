/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EnvironmentBlueprintConfigurationItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class ListEnvironmentBlueprintConfigurationsResult
  {
  public:
    AWS_DATAZONE_API ListEnvironmentBlueprintConfigurationsResult() = default;
    AWS_DATAZONE_API ListEnvironmentBlueprintConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListEnvironmentBlueprintConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of the <code>ListEnvironmentBlueprintConfigurations</code>
     * action.</p>
     */
    inline const Aws::Vector<EnvironmentBlueprintConfigurationItem>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<EnvironmentBlueprintConfigurationItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<EnvironmentBlueprintConfigurationItem>>
    ListEnvironmentBlueprintConfigurationsResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = EnvironmentBlueprintConfigurationItem>
    ListEnvironmentBlueprintConfigurationsResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of blueprint configurations is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of configurations, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListEnvironmentBlueprintConfigurations</code> to list the next set of
     * configurations.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentBlueprintConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnvironmentBlueprintConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnvironmentBlueprintConfigurationItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
