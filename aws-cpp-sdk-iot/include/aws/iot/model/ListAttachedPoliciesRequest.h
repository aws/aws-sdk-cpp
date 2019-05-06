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
  class AWS_IOT_API ListAttachedPoliciesRequest : public IoTRequest
  {
  public:
    ListAttachedPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAttachedPolicies"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The group for which the policies will be listed.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The group for which the policies will be listed.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The group for which the policies will be listed.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The group for which the policies will be listed.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The group for which the policies will be listed.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The group for which the policies will be listed.</p>
     */
    inline ListAttachedPoliciesRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The group for which the policies will be listed.</p>
     */
    inline ListAttachedPoliciesRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The group for which the policies will be listed.</p>
     */
    inline ListAttachedPoliciesRequest& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>When true, recursively list attached policies.</p>
     */
    inline bool GetRecursive() const{ return m_recursive; }

    /**
     * <p>When true, recursively list attached policies.</p>
     */
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }

    /**
     * <p>When true, recursively list attached policies.</p>
     */
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }

    /**
     * <p>When true, recursively list attached policies.</p>
     */
    inline ListAttachedPoliciesRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListAttachedPoliciesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListAttachedPoliciesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListAttachedPoliciesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline ListAttachedPoliciesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_target;
    bool m_targetHasBeenSet;

    bool m_recursive;
    bool m_recursiveHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
