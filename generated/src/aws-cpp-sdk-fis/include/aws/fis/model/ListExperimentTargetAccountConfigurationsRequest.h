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
    AWS_FIS_API ListExperimentTargetAccountConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExperimentTargetAccountConfigurations"; }

    AWS_FIS_API Aws::String SerializePayload() const override;

    AWS_FIS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the experiment.</p>
     */
    inline const Aws::String& GetExperimentId() const{ return m_experimentId; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline bool ExperimentIdHasBeenSet() const { return m_experimentIdHasBeenSet; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetExperimentId(const Aws::String& value) { m_experimentIdHasBeenSet = true; m_experimentId = value; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetExperimentId(Aws::String&& value) { m_experimentIdHasBeenSet = true; m_experimentId = std::move(value); }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetExperimentId(const char* value) { m_experimentIdHasBeenSet = true; m_experimentId.assign(value); }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline ListExperimentTargetAccountConfigurationsRequest& WithExperimentId(const Aws::String& value) { SetExperimentId(value); return *this;}

    /**
     * <p>The ID of the experiment.</p>
     */
    inline ListExperimentTargetAccountConfigurationsRequest& WithExperimentId(Aws::String&& value) { SetExperimentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the experiment.</p>
     */
    inline ListExperimentTargetAccountConfigurationsRequest& WithExperimentId(const char* value) { SetExperimentId(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListExperimentTargetAccountConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListExperimentTargetAccountConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListExperimentTargetAccountConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_experimentId;
    bool m_experimentIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
