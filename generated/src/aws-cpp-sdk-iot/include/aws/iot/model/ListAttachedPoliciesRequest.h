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
  class ListAttachedPoliciesRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListAttachedPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAttachedPolicies"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The group or principal for which the policies will be listed. Valid
     * principals are CertificateArn
     * (arn:aws:iot:<i>region</i>:<i>accountId</i>:cert/<i>certificateId</i>),
     * thingGroupArn
     * (arn:aws:iot:<i>region</i>:<i>accountId</i>:thinggroup/<i>groupName</i>) and
     * CognitoId (<i>region</i>:<i>id</i>).</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline ListAttachedPoliciesRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline ListAttachedPoliciesRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline ListAttachedPoliciesRequest& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, recursively list attached policies.</p>
     */
    inline bool GetRecursive() const{ return m_recursive; }
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }
    inline ListAttachedPoliciesRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline ListAttachedPoliciesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListAttachedPoliciesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListAttachedPoliciesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListAttachedPoliciesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    bool m_recursive;
    bool m_recursiveHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
