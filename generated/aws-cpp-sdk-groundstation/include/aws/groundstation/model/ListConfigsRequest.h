﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListConfigsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API ListConfigsRequest : public GroundStationRequest
  {
  public:
    ListConfigsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConfigs"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Maximum number of <code>Configs</code> returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of <code>Configs</code> returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of <code>Configs</code> returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of <code>Configs</code> returned.</p>
     */
    inline ListConfigsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Next token returned in the request of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token returned in the request of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Next token returned in the request of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Next token returned in the request of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Next token returned in the request of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Next token returned in the request of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline ListConfigsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token returned in the request of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline ListConfigsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token returned in the request of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline ListConfigsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
