/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>ListTagsForResourceInput</p>
   */
  class AWS_STORAGEGATEWAY_API ListTagsForResourceRequest : public StorageGatewayRequest
  {
  public:
    ListTagsForResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which you want to list
     * tags.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which you want to list
     * tags.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which you want to list
     * tags.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which you want to list
     * tags.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which you want to list
     * tags.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which you want to list
     * tags.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which you want to list
     * tags.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * list of tags.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * list of tags.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * list of tags.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * list of tags.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * list of tags.</p>
     */
    inline ListTagsForResourceRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * list of tags.</p>
     */
    inline ListTagsForResourceRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * list of tags.</p>
     */
    inline ListTagsForResourceRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Specifies that the list of tags returned be limited to the specified number
     * of items.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies that the list of tags returned be limited to the specified number
     * of items.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies that the list of tags returned be limited to the specified number
     * of items.</p>
     */
    inline ListTagsForResourceRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
