/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CancelDataQualityRuleRecommendationRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CancelDataQualityRuleRecommendationRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelDataQualityRuleRecommendationRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline CancelDataQualityRuleRecommendationRunRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline CancelDataQualityRuleRecommendationRunRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline CancelDataQualityRuleRecommendationRunRequest& WithRunId(const char* value) { SetRunId(value); return *this;}

  private:

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
