﻿/**
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
    AWS_GLUE_API GetBlueprintRunsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlueprintRuns"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintName() const { return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    template<typename BlueprintNameT = Aws::String>
    void SetBlueprintName(BlueprintNameT&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::forward<BlueprintNameT>(value); }
    template<typename BlueprintNameT = Aws::String>
    GetBlueprintRunsRequest& WithBlueprintName(BlueprintNameT&& value) { SetBlueprintName(std::forward<BlueprintNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBlueprintRunsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetBlueprintRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
