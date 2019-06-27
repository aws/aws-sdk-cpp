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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EndpointRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API UpdateEndpointRequest : public PinpointRequest
  {
  public:
    UpdateEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEndpoint"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateEndpointRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateEndpointRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateEndpointRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The unique identifier for the endpoint.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The unique identifier for the endpoint.</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>The unique identifier for the endpoint.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>The unique identifier for the endpoint.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>The unique identifier for the endpoint.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>The unique identifier for the endpoint.</p>
     */
    inline UpdateEndpointRequest& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The unique identifier for the endpoint.</p>
     */
    inline UpdateEndpointRequest& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the endpoint.</p>
     */
    inline UpdateEndpointRequest& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    
    inline const EndpointRequest& GetEndpointRequest() const{ return m_endpointRequest; }

    
    inline bool EndpointRequestHasBeenSet() const { return m_endpointRequestHasBeenSet; }

    
    inline void SetEndpointRequest(const EndpointRequest& value) { m_endpointRequestHasBeenSet = true; m_endpointRequest = value; }

    
    inline void SetEndpointRequest(EndpointRequest&& value) { m_endpointRequestHasBeenSet = true; m_endpointRequest = std::move(value); }

    
    inline UpdateEndpointRequest& WithEndpointRequest(const EndpointRequest& value) { SetEndpointRequest(value); return *this;}

    
    inline UpdateEndpointRequest& WithEndpointRequest(EndpointRequest&& value) { SetEndpointRequest(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet;

    EndpointRequest m_endpointRequest;
    bool m_endpointRequestHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
