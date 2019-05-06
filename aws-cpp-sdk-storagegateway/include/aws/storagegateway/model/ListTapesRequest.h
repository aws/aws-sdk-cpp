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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object that contains one or more of the following fields:</p> <ul>
   * <li> <p> <a>ListTapesInput$Limit</a> </p> </li> <li> <p>
   * <a>ListTapesInput$Marker</a> </p> </li> <li> <p> <a>ListTapesInput$TapeARNs</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListTapesInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API ListTapesRequest : public StorageGatewayRequest
  {
  public:
    ListTapesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTapes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::Vector<Aws::String>& GetTapeARNs() const{ return m_tapeARNs; }

    
    inline bool TapeARNsHasBeenSet() const { return m_tapeARNsHasBeenSet; }

    
    inline void SetTapeARNs(const Aws::Vector<Aws::String>& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs = value; }

    
    inline void SetTapeARNs(Aws::Vector<Aws::String>&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs = std::move(value); }

    
    inline ListTapesRequest& WithTapeARNs(const Aws::Vector<Aws::String>& value) { SetTapeARNs(value); return *this;}

    
    inline ListTapesRequest& WithTapeARNs(Aws::Vector<Aws::String>&& value) { SetTapeARNs(std::move(value)); return *this;}

    
    inline ListTapesRequest& AddTapeARNs(const Aws::String& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs.push_back(value); return *this; }

    
    inline ListTapesRequest& AddTapeARNs(Aws::String&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs.push_back(std::move(value)); return *this; }

    
    inline ListTapesRequest& AddTapeARNs(const char* value) { m_tapeARNsHasBeenSet = true; m_tapeARNs.push_back(value); return *this; }


    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tapes.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tapes.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tapes.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tapes.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tapes.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tapes.</p>
     */
    inline ListTapesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tapes.</p>
     */
    inline ListTapesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tapes.</p>
     */
    inline ListTapesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>An optional number limit for the tapes in the list returned by this call.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>An optional number limit for the tapes in the list returned by this call.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>An optional number limit for the tapes in the list returned by this call.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>An optional number limit for the tapes in the list returned by this call.</p>
     */
    inline ListTapesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_tapeARNs;
    bool m_tapeARNsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
