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
  class InvokeEndpointRequest : public StreamingSageMakerRuntimeRequest
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeEndpoint"; }

    AWS_SAGEMAKERRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). </p> <p>The
     * code in your model is responsible for setting or updating any custom attributes
     * in the response. If your code does not set this value in the response, an empty
     * value is returned. For example, if a custom attribute represents the trace ID,
     * your model can prepend the custom attribute with <code>Trace ID:</code> in your
     * post-processing function.</p> <p>This feature is currently supported in the
     * Amazon Web Services SDKs but not in the Amazon SageMaker Python SDK.</p>
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
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). </p> <p>The
     * code in your model is responsible for setting or updating any custom attributes
     * in the response. If your code does not set this value in the response, an empty
     * value is returned. For example, if a custom attribute represents the trace ID,
     * your model can prepend the custom attribute with <code>Trace ID:</code> in your
     * post-processing function.</p> <p>This feature is currently supported in the
     * Amazon Web Services SDKs but not in the Amazon SageMaker Python SDK.</p>
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
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). </p> <p>The
     * code in your model is responsible for setting or updating any custom attributes
     * in the response. If your code does not set this value in the response, an empty
     * value is returned. For example, if a custom attribute represents the trace ID,
     * your model can prepend the custom attribute with <code>Trace ID:</code> in your
     * post-processing function.</p> <p>This feature is currently supported in the
     * Amazon Web Services SDKs but not in the Amazon SageMaker Python SDK.</p>
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
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). </p> <p>The
     * code in your model is responsible for setting or updating any custom attributes
     * in the response. If your code does not set this value in the response, an empty
     * value is returned. For example, if a custom attribute represents the trace ID,
     * your model can prepend the custom attribute with <code>Trace ID:</code> in your
     * post-processing function.</p> <p>This feature is currently supported in the
     * Amazon Web Services SDKs but not in the Amazon SageMaker Python SDK.</p>
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
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). </p> <p>The
     * code in your model is responsible for setting or updating any custom attributes
     * in the response. If your code does not set this value in the response, an empty
     * value is returned. For example, if a custom attribute represents the trace ID,
     * your model can prepend the custom attribute with <code>Trace ID:</code> in your
     * post-processing function.</p> <p>This feature is currently supported in the
     * Amazon Web Services SDKs but not in the Amazon SageMaker Python SDK.</p>
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
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). </p> <p>The
     * code in your model is responsible for setting or updating any custom attributes
     * in the response. If your code does not set this value in the response, an empty
     * value is returned. For example, if a custom attribute represents the trace ID,
     * your model can prepend the custom attribute with <code>Trace ID:</code> in your
     * post-processing function.</p> <p>This feature is currently supported in the
     * Amazon Web Services SDKs but not in the Amazon SageMaker Python SDK.</p>
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
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). </p> <p>The
     * code in your model is responsible for setting or updating any custom attributes
     * in the response. If your code does not set this value in the response, an empty
     * value is returned. For example, if a custom attribute represents the trace ID,
     * your model can prepend the custom attribute with <code>Trace ID:</code> in your
     * post-processing function.</p> <p>This feature is currently supported in the
     * Amazon Web Services SDKs but not in the Amazon SageMaker Python SDK.</p>
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
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). </p> <p>The
     * code in your model is responsible for setting or updating any custom attributes
     * in the response. If your code does not set this value in the response, an empty
     * value is returned. For example, if a custom attribute represents the trace ID,
     * your model can prepend the custom attribute with <code>Trace ID:</code> in your
     * post-processing function.</p> <p>This feature is currently supported in the
     * Amazon Web Services SDKs but not in the Amazon SageMaker Python SDK.</p>
     */
    inline InvokeEndpointRequest& WithCustomAttributes(const char* value) { SetCustomAttributes(value); return *this;}


    /**
     * <p>The model to request for inference when invoking a multi-model endpoint.</p>
     */
    inline const Aws::String& GetTargetModel() const{ return m_targetModel; }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint.</p>
     */
    inline bool TargetModelHasBeenSet() const { return m_targetModelHasBeenSet; }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint.</p>
     */
    inline void SetTargetModel(const Aws::String& value) { m_targetModelHasBeenSet = true; m_targetModel = value; }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint.</p>
     */
    inline void SetTargetModel(Aws::String&& value) { m_targetModelHasBeenSet = true; m_targetModel = std::move(value); }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint.</p>
     */
    inline void SetTargetModel(const char* value) { m_targetModelHasBeenSet = true; m_targetModel.assign(value); }

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint.</p>
     */
    inline InvokeEndpointRequest& WithTargetModel(const Aws::String& value) { SetTargetModel(value); return *this;}

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint.</p>
     */
    inline InvokeEndpointRequest& WithTargetModel(Aws::String&& value) { SetTargetModel(std::move(value)); return *this;}

    /**
     * <p>The model to request for inference when invoking a multi-model endpoint.</p>
     */
    inline InvokeEndpointRequest& WithTargetModel(const char* value) { SetTargetModel(value); return *this;}


    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p> <p>For information about
     * how to use variant targeting to perform a/b testing, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">Test
     * models in production</a> </p>
     */
    inline const Aws::String& GetTargetVariant() const{ return m_targetVariant; }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p> <p>For information about
     * how to use variant targeting to perform a/b testing, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">Test
     * models in production</a> </p>
     */
    inline bool TargetVariantHasBeenSet() const { return m_targetVariantHasBeenSet; }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p> <p>For information about
     * how to use variant targeting to perform a/b testing, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">Test
     * models in production</a> </p>
     */
    inline void SetTargetVariant(const Aws::String& value) { m_targetVariantHasBeenSet = true; m_targetVariant = value; }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p> <p>For information about
     * how to use variant targeting to perform a/b testing, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">Test
     * models in production</a> </p>
     */
    inline void SetTargetVariant(Aws::String&& value) { m_targetVariantHasBeenSet = true; m_targetVariant = std::move(value); }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p> <p>For information about
     * how to use variant targeting to perform a/b testing, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">Test
     * models in production</a> </p>
     */
    inline void SetTargetVariant(const char* value) { m_targetVariantHasBeenSet = true; m_targetVariant.assign(value); }

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p> <p>For information about
     * how to use variant targeting to perform a/b testing, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">Test
     * models in production</a> </p>
     */
    inline InvokeEndpointRequest& WithTargetVariant(const Aws::String& value) { SetTargetVariant(value); return *this;}

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p> <p>For information about
     * how to use variant targeting to perform a/b testing, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">Test
     * models in production</a> </p>
     */
    inline InvokeEndpointRequest& WithTargetVariant(Aws::String&& value) { SetTargetVariant(std::move(value)); return *this;}

    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p> <p>For information about
     * how to use variant targeting to perform a/b testing, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">Test
     * models in production</a> </p>
     */
    inline InvokeEndpointRequest& WithTargetVariant(const char* value) { SetTargetVariant(value); return *this;}


    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline const Aws::String& GetTargetContainerHostname() const{ return m_targetContainerHostname; }

    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline bool TargetContainerHostnameHasBeenSet() const { return m_targetContainerHostnameHasBeenSet; }

    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline void SetTargetContainerHostname(const Aws::String& value) { m_targetContainerHostnameHasBeenSet = true; m_targetContainerHostname = value; }

    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline void SetTargetContainerHostname(Aws::String&& value) { m_targetContainerHostnameHasBeenSet = true; m_targetContainerHostname = std::move(value); }

    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline void SetTargetContainerHostname(const char* value) { m_targetContainerHostnameHasBeenSet = true; m_targetContainerHostname.assign(value); }

    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline InvokeEndpointRequest& WithTargetContainerHostname(const Aws::String& value) { SetTargetContainerHostname(value); return *this;}

    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline InvokeEndpointRequest& WithTargetContainerHostname(Aws::String&& value) { SetTargetContainerHostname(std::move(value)); return *this;}

    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline InvokeEndpointRequest& WithTargetContainerHostname(const char* value) { SetTargetContainerHostname(value); return *this;}


    /**
     * <p>If you provide a value, it is added to the captured data when you enable data
     * capture on the endpoint. For information about data capture, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * Data</a>.</p>
     */
    inline const Aws::String& GetInferenceId() const{ return m_inferenceId; }

    /**
     * <p>If you provide a value, it is added to the captured data when you enable data
     * capture on the endpoint. For information about data capture, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * Data</a>.</p>
     */
    inline bool InferenceIdHasBeenSet() const { return m_inferenceIdHasBeenSet; }

    /**
     * <p>If you provide a value, it is added to the captured data when you enable data
     * capture on the endpoint. For information about data capture, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * Data</a>.</p>
     */
    inline void SetInferenceId(const Aws::String& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = value; }

    /**
     * <p>If you provide a value, it is added to the captured data when you enable data
     * capture on the endpoint. For information about data capture, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * Data</a>.</p>
     */
    inline void SetInferenceId(Aws::String&& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = std::move(value); }

    /**
     * <p>If you provide a value, it is added to the captured data when you enable data
     * capture on the endpoint. For information about data capture, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * Data</a>.</p>
     */
    inline void SetInferenceId(const char* value) { m_inferenceIdHasBeenSet = true; m_inferenceId.assign(value); }

    /**
     * <p>If you provide a value, it is added to the captured data when you enable data
     * capture on the endpoint. For information about data capture, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * Data</a>.</p>
     */
    inline InvokeEndpointRequest& WithInferenceId(const Aws::String& value) { SetInferenceId(value); return *this;}

    /**
     * <p>If you provide a value, it is added to the captured data when you enable data
     * capture on the endpoint. For information about data capture, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * Data</a>.</p>
     */
    inline InvokeEndpointRequest& WithInferenceId(Aws::String&& value) { SetInferenceId(std::move(value)); return *this;}

    /**
     * <p>If you provide a value, it is added to the captured data when you enable data
     * capture on the endpoint. For information about data capture, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * Data</a>.</p>
     */
    inline InvokeEndpointRequest& WithInferenceId(const char* value) { SetInferenceId(value); return *this;}


    /**
     * <p>An optional JMESPath expression used to override the
     * <code>EnableExplanations</code> parameter of the
     * <code>ClarifyExplainerConfig</code> API. See the <a
     * href="https://docs.aws.amazon.com/clarify-online-explainability-create-endpoint.html#clarify-online-exaplainability-create-endpoint-enable">EnableExplanations</a>
     * section in the developer guide for more information. </p>
     */
    inline const Aws::String& GetEnableExplanations() const{ return m_enableExplanations; }

    /**
     * <p>An optional JMESPath expression used to override the
     * <code>EnableExplanations</code> parameter of the
     * <code>ClarifyExplainerConfig</code> API. See the <a
     * href="https://docs.aws.amazon.com/clarify-online-explainability-create-endpoint.html#clarify-online-exaplainability-create-endpoint-enable">EnableExplanations</a>
     * section in the developer guide for more information. </p>
     */
    inline bool EnableExplanationsHasBeenSet() const { return m_enableExplanationsHasBeenSet; }

    /**
     * <p>An optional JMESPath expression used to override the
     * <code>EnableExplanations</code> parameter of the
     * <code>ClarifyExplainerConfig</code> API. See the <a
     * href="https://docs.aws.amazon.com/clarify-online-explainability-create-endpoint.html#clarify-online-exaplainability-create-endpoint-enable">EnableExplanations</a>
     * section in the developer guide for more information. </p>
     */
    inline void SetEnableExplanations(const Aws::String& value) { m_enableExplanationsHasBeenSet = true; m_enableExplanations = value; }

    /**
     * <p>An optional JMESPath expression used to override the
     * <code>EnableExplanations</code> parameter of the
     * <code>ClarifyExplainerConfig</code> API. See the <a
     * href="https://docs.aws.amazon.com/clarify-online-explainability-create-endpoint.html#clarify-online-exaplainability-create-endpoint-enable">EnableExplanations</a>
     * section in the developer guide for more information. </p>
     */
    inline void SetEnableExplanations(Aws::String&& value) { m_enableExplanationsHasBeenSet = true; m_enableExplanations = std::move(value); }

    /**
     * <p>An optional JMESPath expression used to override the
     * <code>EnableExplanations</code> parameter of the
     * <code>ClarifyExplainerConfig</code> API. See the <a
     * href="https://docs.aws.amazon.com/clarify-online-explainability-create-endpoint.html#clarify-online-exaplainability-create-endpoint-enable">EnableExplanations</a>
     * section in the developer guide for more information. </p>
     */
    inline void SetEnableExplanations(const char* value) { m_enableExplanationsHasBeenSet = true; m_enableExplanations.assign(value); }

    /**
     * <p>An optional JMESPath expression used to override the
     * <code>EnableExplanations</code> parameter of the
     * <code>ClarifyExplainerConfig</code> API. See the <a
     * href="https://docs.aws.amazon.com/clarify-online-explainability-create-endpoint.html#clarify-online-exaplainability-create-endpoint-enable">EnableExplanations</a>
     * section in the developer guide for more information. </p>
     */
    inline InvokeEndpointRequest& WithEnableExplanations(const Aws::String& value) { SetEnableExplanations(value); return *this;}

    /**
     * <p>An optional JMESPath expression used to override the
     * <code>EnableExplanations</code> parameter of the
     * <code>ClarifyExplainerConfig</code> API. See the <a
     * href="https://docs.aws.amazon.com/clarify-online-explainability-create-endpoint.html#clarify-online-exaplainability-create-endpoint-enable">EnableExplanations</a>
     * section in the developer guide for more information. </p>
     */
    inline InvokeEndpointRequest& WithEnableExplanations(Aws::String&& value) { SetEnableExplanations(std::move(value)); return *this;}

    /**
     * <p>An optional JMESPath expression used to override the
     * <code>EnableExplanations</code> parameter of the
     * <code>ClarifyExplainerConfig</code> API. See the <a
     * href="https://docs.aws.amazon.com/clarify-online-explainability-create-endpoint.html#clarify-online-exaplainability-create-endpoint-enable">EnableExplanations</a>
     * section in the developer guide for more information. </p>
     */
    inline InvokeEndpointRequest& WithEnableExplanations(const char* value) { SetEnableExplanations(value); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;


    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    Aws::String m_targetModel;
    bool m_targetModelHasBeenSet = false;

    Aws::String m_targetVariant;
    bool m_targetVariantHasBeenSet = false;

    Aws::String m_targetContainerHostname;
    bool m_targetContainerHostnameHasBeenSet = false;

    Aws::String m_inferenceId;
    bool m_inferenceIdHasBeenSet = false;

    Aws::String m_enableExplanations;
    bool m_enableExplanationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
