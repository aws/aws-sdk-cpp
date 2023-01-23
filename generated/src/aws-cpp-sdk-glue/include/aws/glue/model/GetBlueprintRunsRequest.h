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
  class GetBlueprintRunsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetBlueprintRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlueprintRuns"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline GetBlueprintRunsRequest& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline GetBlueprintRunsRequest& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline GetBlueprintRunsRequest& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}


    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline GetBlueprintRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline GetBlueprintRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline GetBlueprintRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline GetBlueprintRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
