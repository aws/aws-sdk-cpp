/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONINSIGHTS_API DescribeProblemObservationsRequest : public ApplicationInsightsRequest
  {
  public:
    DescribeProblemObservationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProblemObservations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the problem.</p>
     */
    inline const Aws::String& GetProblemId() const{ return m_problemId; }

    /**
     * <p>The ID of the problem.</p>
     */
    inline bool ProblemIdHasBeenSet() const { return m_problemIdHasBeenSet; }

    /**
     * <p>The ID of the problem.</p>
     */
    inline void SetProblemId(const Aws::String& value) { m_problemIdHasBeenSet = true; m_problemId = value; }

    /**
     * <p>The ID of the problem.</p>
     */
    inline void SetProblemId(Aws::String&& value) { m_problemIdHasBeenSet = true; m_problemId = std::move(value); }

    /**
     * <p>The ID of the problem.</p>
     */
    inline void SetProblemId(const char* value) { m_problemIdHasBeenSet = true; m_problemId.assign(value); }

    /**
     * <p>The ID of the problem.</p>
     */
    inline DescribeProblemObservationsRequest& WithProblemId(const Aws::String& value) { SetProblemId(value); return *this;}

    /**
     * <p>The ID of the problem.</p>
     */
    inline DescribeProblemObservationsRequest& WithProblemId(Aws::String&& value) { SetProblemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the problem.</p>
     */
    inline DescribeProblemObservationsRequest& WithProblemId(const char* value) { SetProblemId(value); return *this;}

  private:

    Aws::String m_problemId;
    bool m_problemIdHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
