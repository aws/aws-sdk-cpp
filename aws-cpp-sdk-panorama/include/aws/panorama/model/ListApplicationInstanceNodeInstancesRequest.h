/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Panorama
{
namespace Model
{

  /**
   */
  class ListApplicationInstanceNodeInstancesRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API ListApplicationInstanceNodeInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationInstanceNodeInstances"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;

    AWS_PANORAMA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The node instances' application instance ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const{ return m_applicationInstanceId; }

    /**
     * <p>The node instances' application instance ID.</p>
     */
    inline bool ApplicationInstanceIdHasBeenSet() const { return m_applicationInstanceIdHasBeenSet; }

    /**
     * <p>The node instances' application instance ID.</p>
     */
    inline void SetApplicationInstanceId(const Aws::String& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = value; }

    /**
     * <p>The node instances' application instance ID.</p>
     */
    inline void SetApplicationInstanceId(Aws::String&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::move(value); }

    /**
     * <p>The node instances' application instance ID.</p>
     */
    inline void SetApplicationInstanceId(const char* value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId.assign(value); }

    /**
     * <p>The node instances' application instance ID.</p>
     */
    inline ListApplicationInstanceNodeInstancesRequest& WithApplicationInstanceId(const Aws::String& value) { SetApplicationInstanceId(value); return *this;}

    /**
     * <p>The node instances' application instance ID.</p>
     */
    inline ListApplicationInstanceNodeInstancesRequest& WithApplicationInstanceId(Aws::String&& value) { SetApplicationInstanceId(std::move(value)); return *this;}

    /**
     * <p>The node instances' application instance ID.</p>
     */
    inline ListApplicationInstanceNodeInstancesRequest& WithApplicationInstanceId(const char* value) { SetApplicationInstanceId(value); return *this;}


    /**
     * <p>The maximum number of node instances to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of node instances to return in one page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of node instances to return in one page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of node instances to return in one page of results.</p>
     */
    inline ListApplicationInstanceNodeInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListApplicationInstanceNodeInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListApplicationInstanceNodeInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListApplicationInstanceNodeInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
