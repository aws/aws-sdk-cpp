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
  class ListExperimentResolvedTargetsRequest : public FISRequest
  {
  public:
    AWS_FIS_API ListExperimentResolvedTargetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExperimentResolvedTargets"; }

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
    ListExperimentResolvedTargetsRequest& WithExperimentId(ExperimentIdT&& value) { SetExperimentId(std::forward<ExperimentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListExperimentResolvedTargetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    ListExperimentResolvedTargetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target.</p>
     */
    inline const Aws::String& GetTargetName() const { return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    template<typename TargetNameT = Aws::String>
    void SetTargetName(TargetNameT&& value) { m_targetNameHasBeenSet = true; m_targetName = std::forward<TargetNameT>(value); }
    template<typename TargetNameT = Aws::String>
    ListExperimentResolvedTargetsRequest& WithTargetName(TargetNameT&& value) { SetTargetName(std::forward<TargetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_experimentId;
    bool m_experimentIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
