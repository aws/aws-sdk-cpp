﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListThingsInThingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListThingsInThingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListThingsInThingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The thing group name.</p>
     */
    inline const Aws::String& GetThingGroupName() const { return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    template<typename ThingGroupNameT = Aws::String>
    void SetThingGroupName(ThingGroupNameT&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::forward<ThingGroupNameT>(value); }
    template<typename ThingGroupNameT = Aws::String>
    ListThingsInThingGroupRequest& WithThingGroupName(ThingGroupNameT&& value) { SetThingGroupName(std::forward<ThingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, list things in this thing group and in all child groups as
     * well.</p>
     */
    inline bool GetRecursive() const { return m_recursive; }
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }
    inline ListThingsInThingGroupRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThingsInThingGroupRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListThingsInThingGroupRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    bool m_recursive{false};
    bool m_recursiveHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
