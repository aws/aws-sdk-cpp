/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/OTAUpdateStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListOTAUpdatesRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListOTAUpdatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOTAUpdates"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline ListOTAUpdatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token used to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token used to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token used to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token used to retrieve the next set of results.</p>
     */
    inline ListOTAUpdatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used to retrieve the next set of results.</p>
     */
    inline ListOTAUpdatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used to retrieve the next set of results.</p>
     */
    inline ListOTAUpdatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The OTA update job status.</p>
     */
    inline const OTAUpdateStatus& GetOtaUpdateStatus() const{ return m_otaUpdateStatus; }

    /**
     * <p>The OTA update job status.</p>
     */
    inline bool OtaUpdateStatusHasBeenSet() const { return m_otaUpdateStatusHasBeenSet; }

    /**
     * <p>The OTA update job status.</p>
     */
    inline void SetOtaUpdateStatus(const OTAUpdateStatus& value) { m_otaUpdateStatusHasBeenSet = true; m_otaUpdateStatus = value; }

    /**
     * <p>The OTA update job status.</p>
     */
    inline void SetOtaUpdateStatus(OTAUpdateStatus&& value) { m_otaUpdateStatusHasBeenSet = true; m_otaUpdateStatus = std::move(value); }

    /**
     * <p>The OTA update job status.</p>
     */
    inline ListOTAUpdatesRequest& WithOtaUpdateStatus(const OTAUpdateStatus& value) { SetOtaUpdateStatus(value); return *this;}

    /**
     * <p>The OTA update job status.</p>
     */
    inline ListOTAUpdatesRequest& WithOtaUpdateStatus(OTAUpdateStatus&& value) { SetOtaUpdateStatus(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    OTAUpdateStatus m_otaUpdateStatus;
    bool m_otaUpdateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
