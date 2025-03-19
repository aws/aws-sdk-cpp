/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/model/QueryPlanningContext.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class StartQueryPlanningRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API StartQueryPlanningRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQueryPlanning"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A structure containing information about the query plan.</p>
     */
    inline const QueryPlanningContext& GetQueryPlanningContext() const { return m_queryPlanningContext; }
    inline bool QueryPlanningContextHasBeenSet() const { return m_queryPlanningContextHasBeenSet; }
    template<typename QueryPlanningContextT = QueryPlanningContext>
    void SetQueryPlanningContext(QueryPlanningContextT&& value) { m_queryPlanningContextHasBeenSet = true; m_queryPlanningContext = std::forward<QueryPlanningContextT>(value); }
    template<typename QueryPlanningContextT = QueryPlanningContext>
    StartQueryPlanningRequest& WithQueryPlanningContext(QueryPlanningContextT&& value) { SetQueryPlanningContext(std::forward<QueryPlanningContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A PartiQL query statement used as an input to the planner service.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    StartQueryPlanningRequest& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}
  private:

    QueryPlanningContext m_queryPlanningContext;
    bool m_queryPlanningContextHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
