/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/FISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace FIS
{
namespace Model
{

  /**
   */
  class ListExperimentTargetAccountConfigurationsRequest : public FISRequest
  {
  public:
    AWS_FIS_API ListExperimentTargetAccountConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExperimentTargetAccountConfigurations"; }

    AWS_FIS_API Aws::String SerializePayload() const override;

    AWS_FIS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the experiment.</p>
     */
    inline const Aws::String& GetExperimentId() const { return m_experimentId; }
    inline bool ExperimentIdHasBeenSet() const { return m_experimentIdHasBeenSet; }
    template<typename ExperimentIdT = Aws::String>
    void SetExperimentId(ExperimentIdT&& value) { m_experimentIdHasBeenSet = true; m_experimentId = std::forward<ExperimentIdT>(value); }
    template<typename ExperimentIdT = Aws::String>
    ListExperimentTargetAccountConfigurationsRequest& WithExperimentId(ExperimentIdT&& value) { SetExperimentId(std::forward<ExperimentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExperimentTargetAccountConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_experimentId;
    bool m_experimentIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
