/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/FlywheelIterationFilter.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class ListFlywheelIterationHistoryRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API ListFlywheelIterationHistoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFlywheelIterationHistory"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the flywheel.</p>
     */
    inline const Aws::String& GetFlywheelArn() const { return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    template<typename FlywheelArnT = Aws::String>
    void SetFlywheelArn(FlywheelArnT&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::forward<FlywheelArnT>(value); }
    template<typename FlywheelArnT = Aws::String>
    ListFlywheelIterationHistoryRequest& WithFlywheelArn(FlywheelArnT&& value) { SetFlywheelArn(std::forward<FlywheelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the flywheel iteration history based on creation time.</p>
     */
    inline const FlywheelIterationFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = FlywheelIterationFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = FlywheelIterationFilter>
    ListFlywheelIterationHistoryRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Next token</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlywheelIterationHistoryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of iteration history results to return</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFlywheelIterationHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;

    FlywheelIterationFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
