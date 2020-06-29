/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline InvokeEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API. </p>
     */
    inline InvokeEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
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
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). This feature
     * is currently supported in the AWS SDKs but not in the Amazon SageMaker Python
     * SDK.</p>
     */
    inline const Aws::String& GetCustomAttributes() const{ return m_customAttributes; }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). This feature
     * is currently supported in the AWS SDKs but not in the Amazon SageMaker Python
     * SDK.</p>
     */
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). This feature
     * is currently supported in the AWS SDKs but not in the Amazon SageMaker Python
     * SDK.</p>
     */
    inline void SetCustomAttributes(const Aws::String& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). This feature
     * is currently supported in the AWS SDKs but not in the Amazon SageMaker Python
     * SDK.</p>
     */
    inline void SetCustomAttributes(Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). This feature
     * is currently supported in the AWS SDKs but not in the Amazon SageMaker Python
     * SDK.</p>
     */
    inline void SetCustomAttributes(const char* value) { m_customAttributesHasBeenSet = true; m_customAttributes.assign(value); }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). This feature
     * is currently supported in the AWS SDKs but not in the Amazon SageMaker Python
     * SDK.</p>
     */
    inline InvokeEndpointRequest& WithCustomAttributes(const Aws::String& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). This feature
     * is currently supported in the AWS SDKs but not in the Amazon SageMaker Python
     * SDK.</p>
     */
    inline InvokeEndpointRequest& WithCustomAttributes(Aws::String&& value) { SetCustomAttributes(std::move(value)); return *this;}

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). This feature
     * is currently supported in the AWS SDKs but not in the Amazon SageMaker Python
     * SDK.</p>
     */
    inline InvokeEndpointRequest& WithCustomAttributes(const char* value) { SetCustomAttributes(value); return *this;}


    /**
     * <p>The model to request for inference when invoking a multi-model endpoint. </p>
     */
    inline const Aws::String& GetTargetModel() const{ return m_targetModel; }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint. </p>
     */
    inline bool TargetModelHasBeenSet() const { return m_targetModelHasBeenSet; }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint. </p>
     */
    inline void SetTargetModel(const Aws::String& value) { m_targetModelHasBeenSet = true; m_targetModel = value; }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint. </p>
     */
    inline void SetTargetModel(Aws::String&& value) { m_targetModelHasBeenSet = true; m_targetModel = std::move(value); }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint. </p>
     */
    inline void SetTargetModel(const char* value) { m_targetModelHasBeenSet = true; m_targetModel.assign(value); }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint. </p>
     */
    inline InvokeEndpointRequest& WithTargetModel(const Aws::String& value) { SetTargetModel(value); return *this;}

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint. </p>
     */
    inline InvokeEndpointRequest& WithTargetModel(Aws::String&& value) { SetTargetModel(std::move(value)); return *this;}

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint. </p>
     */
    inline InvokeEndpointRequest& WithTargetModel(const char* value) { SetTargetModel(value); return *this;}


    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p>
     */
    inline const Aws::String& GetTargetVariant() const{ return m_targetVariant; }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p>
     */
    inline bool TargetVariantHasBeenSet() const { return m_targetVariantHasBeenSet; }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p>
     */
    inline void SetTargetVariant(const Aws::String& value) { m_targetVariantHasBeenSet = true; m_targetVariant = value; }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p>
     */
    inline void SetTargetVariant(Aws::String&& value) { m_targetVariantHasBeenSet = true; m_targetVariant = std::move(value); }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p>
     */
    inline void SetTargetVariant(const char* value) { m_targetVariantHasBeenSet = true; m_targetVariant.assign(value); }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p>
     */
    inline InvokeEndpointRequest& WithTargetVariant(const Aws::String& value) { SetTargetVariant(value); return *this;}

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p>
     */
    inline InvokeEndpointRequest& WithTargetVariant(Aws::String&& value) { SetTargetVariant(std::move(value)); return *this;}

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p>
     */
    inline InvokeEndpointRequest& WithTargetVariant(const char* value) { SetTargetVariant(value); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;


    Aws::String m_accept;
    bool m_acceptHasBeenSet;

    Aws::String m_customAttributes;
    bool m_customAttributesHasBeenSet;

    Aws::String m_targetModel;
    bool m_targetModelHasBeenSet;

    Aws::String m_targetVariant;
    bool m_targetVariantHasBeenSet;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
