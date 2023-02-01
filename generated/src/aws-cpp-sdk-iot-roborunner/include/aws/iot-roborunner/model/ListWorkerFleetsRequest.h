/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/iot-roborunner/IoTRoboRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTRoboRunner
{
namespace Model
{

  /**
   */
  class ListWorkerFleetsRequest : public IoTRoboRunnerRequest
  {
  public:
    AWS_IOTROBORUNNER_API ListWorkerFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkerFleets"; }

    AWS_IOTROBORUNNER_API Aws::String SerializePayload() const override;

    AWS_IOTROBORUNNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetSite() const{ return m_site; }

    
    inline bool SiteHasBeenSet() const { return m_siteHasBeenSet; }

    
    inline void SetSite(const Aws::String& value) { m_siteHasBeenSet = true; m_site = value; }

    
    inline void SetSite(Aws::String&& value) { m_siteHasBeenSet = true; m_site = std::move(value); }

    
    inline void SetSite(const char* value) { m_siteHasBeenSet = true; m_site.assign(value); }

    
    inline ListWorkerFleetsRequest& WithSite(const Aws::String& value) { SetSite(value); return *this;}

    
    inline ListWorkerFleetsRequest& WithSite(Aws::String&& value) { SetSite(std::move(value)); return *this;}

    
    inline ListWorkerFleetsRequest& WithSite(const char* value) { SetSite(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListWorkerFleetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListWorkerFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListWorkerFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListWorkerFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_site;
    bool m_siteHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
