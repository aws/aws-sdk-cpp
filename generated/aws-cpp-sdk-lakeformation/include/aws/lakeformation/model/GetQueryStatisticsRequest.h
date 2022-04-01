﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
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
  class AWS_LAKEFORMATION_API GetQueryStatisticsRequest : public LakeFormationRequest
  {
  public:
    GetQueryStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQueryStatistics"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline GetQueryStatisticsRequest& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline GetQueryStatisticsRequest& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline GetQueryStatisticsRequest& WithQueryId(const char* value) { SetQueryId(value); return *this;}

  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
