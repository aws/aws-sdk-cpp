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
    AWS_LAKEFORMATION_API StartQueryPlanningRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQueryPlanning"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>A structure containing information about the query plan.</p>
     */
    inline const QueryPlanningContext& GetQueryPlanningContext() const{ return m_queryPlanningContext; }

    /**
     * <p>A structure containing information about the query plan.</p>
     */
    inline bool QueryPlanningContextHasBeenSet() const { return m_queryPlanningContextHasBeenSet; }

    /**
     * <p>A structure containing information about the query plan.</p>
     */
    inline void SetQueryPlanningContext(const QueryPlanningContext& value) { m_queryPlanningContextHasBeenSet = true; m_queryPlanningContext = value; }

    /**
     * <p>A structure containing information about the query plan.</p>
     */
    inline void SetQueryPlanningContext(QueryPlanningContext&& value) { m_queryPlanningContextHasBeenSet = true; m_queryPlanningContext = std::move(value); }

    /**
     * <p>A structure containing information about the query plan.</p>
     */
    inline StartQueryPlanningRequest& WithQueryPlanningContext(const QueryPlanningContext& value) { SetQueryPlanningContext(value); return *this;}

    /**
     * <p>A structure containing information about the query plan.</p>
     */
    inline StartQueryPlanningRequest& WithQueryPlanningContext(QueryPlanningContext&& value) { SetQueryPlanningContext(std::move(value)); return *this;}


    /**
     * <p>A PartiQL query statement used as an input to the planner service.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>A PartiQL query statement used as an input to the planner service.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>A PartiQL query statement used as an input to the planner service.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>A PartiQL query statement used as an input to the planner service.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>A PartiQL query statement used as an input to the planner service.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>A PartiQL query statement used as an input to the planner service.</p>
     */
    inline StartQueryPlanningRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>A PartiQL query statement used as an input to the planner service.</p>
     */
    inline StartQueryPlanningRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>A PartiQL query statement used as an input to the planner service.</p>
     */
    inline StartQueryPlanningRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}

  private:

    QueryPlanningContext m_queryPlanningContext;
    bool m_queryPlanningContextHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
