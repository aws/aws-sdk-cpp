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
#include <aws/iot/model/AuthorizerStatus.h>
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
  class AWS_IOT_API ListAuthorizersRequest : public IoTRequest
  {
  public:
    ListAuthorizersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAuthorizers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline ListAuthorizersRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline ListAuthorizersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline ListAuthorizersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline ListAuthorizersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Return the list of authorizers in ascending alphabetical order.</p>
     */
    inline bool GetAscendingOrder() const{ return m_ascendingOrder; }

    /**
     * <p>Return the list of authorizers in ascending alphabetical order.</p>
     */
    inline bool AscendingOrderHasBeenSet() const { return m_ascendingOrderHasBeenSet; }

    /**
     * <p>Return the list of authorizers in ascending alphabetical order.</p>
     */
    inline void SetAscendingOrder(bool value) { m_ascendingOrderHasBeenSet = true; m_ascendingOrder = value; }

    /**
     * <p>Return the list of authorizers in ascending alphabetical order.</p>
     */
    inline ListAuthorizersRequest& WithAscendingOrder(bool value) { SetAscendingOrder(value); return *this;}


    /**
     * <p>The status of the list authorizers request.</p>
     */
    inline const AuthorizerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the list authorizers request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the list authorizers request.</p>
     */
    inline void SetStatus(const AuthorizerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the list authorizers request.</p>
     */
    inline void SetStatus(AuthorizerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the list authorizers request.</p>
     */
    inline ListAuthorizersRequest& WithStatus(const AuthorizerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the list authorizers request.</p>
     */
    inline ListAuthorizersRequest& WithStatus(AuthorizerStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    int m_pageSize;
    bool m_pageSizeHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    bool m_ascendingOrder;
    bool m_ascendingOrderHasBeenSet;

    AuthorizerStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
