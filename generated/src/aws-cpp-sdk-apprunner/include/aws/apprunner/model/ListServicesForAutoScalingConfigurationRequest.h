/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class ListServicesForAutoScalingConfigurationRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API ListServicesForAutoScalingConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServicesForAutoScalingConfiguration"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner auto scaling configuration
     * that you want to list the services for.</p> <p>The ARN can be a full auto
     * scaling configuration ARN, or a partial ARN ending with either
     * <code>.../<i>name</i> </code> or <code>.../<i>name</i>/<i>revision</i> </code>.
     * If a revision isn't specified, the latest active revision is used.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationArn() const { return m_autoScalingConfigurationArn; }
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }
    template<typename AutoScalingConfigurationArnT = Aws::String>
    void SetAutoScalingConfigurationArn(AutoScalingConfigurationArnT&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::forward<AutoScalingConfigurationArnT>(value); }
    template<typename AutoScalingConfigurationArnT = Aws::String>
    ListServicesForAutoScalingConfigurationRequest& WithAutoScalingConfigurationArn(AutoScalingConfigurationArnT&& value) { SetAutoScalingConfigurationArn(std::forward<AutoScalingConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to include in each response (result page). It's
     * used for a paginated request.</p> <p>If you don't specify
     * <code>MaxResults</code>, the request retrieves all available results in a single
     * response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServicesForAutoScalingConfigurationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token from a previous result page. It's used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones specified in the initial request.</p> <p>If you don't
     * specify <code>NextToken</code>, the request retrieves the first result page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServicesForAutoScalingConfigurationRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
