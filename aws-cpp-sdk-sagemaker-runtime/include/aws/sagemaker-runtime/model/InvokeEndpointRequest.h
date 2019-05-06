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
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace SageMakerRuntime
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKERRUNTIME_API InvokeEndpointRequest : public StreamingSageMakerRuntimeRequest
  {
  public:
    InvokeEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeEndpoint"; }

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline InvokeEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline InvokeEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline InvokeEndpointRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }

    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }

    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline InvokeEndpointRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline InvokeEndpointRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline InvokeEndpointRequest& WithAccept(const char* value) { SetAccept(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetCustomAttributes() const{ return m_customAttributes; }

    /**
     * <p/>
     */
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCustomAttributes(const Aws::String& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }

    /**
     * <p/>
     */
    inline void SetCustomAttributes(Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }

    /**
     * <p/>
     */
    inline void SetCustomAttributes(const char* value) { m_customAttributesHasBeenSet = true; m_customAttributes.assign(value); }

    /**
     * <p/>
     */
    inline InvokeEndpointRequest& WithCustomAttributes(const Aws::String& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p/>
     */
    inline InvokeEndpointRequest& WithCustomAttributes(Aws::String&& value) { SetCustomAttributes(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline InvokeEndpointRequest& WithCustomAttributes(const char* value) { SetCustomAttributes(value); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;


    Aws::String m_accept;
    bool m_acceptHasBeenSet;

    Aws::String m_customAttributes;
    bool m_customAttributesHasBeenSet;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
