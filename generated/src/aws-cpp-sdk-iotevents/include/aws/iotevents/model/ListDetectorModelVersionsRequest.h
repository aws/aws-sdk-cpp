/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class ListDetectorModelVersionsRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API ListDetectorModelVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDetectorModelVersions"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;

    AWS_IOTEVENTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the detector model whose versions are returned.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model whose versions are returned.</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model whose versions are returned.</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model whose versions are returned.</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model whose versions are returned.</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model whose versions are returned.</p>
     */
    inline ListDetectorModelVersionsRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model whose versions are returned.</p>
     */
    inline ListDetectorModelVersionsRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model whose versions are returned.</p>
     */
    inline ListDetectorModelVersionsRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline ListDetectorModelVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline ListDetectorModelVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline ListDetectorModelVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline ListDetectorModelVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
