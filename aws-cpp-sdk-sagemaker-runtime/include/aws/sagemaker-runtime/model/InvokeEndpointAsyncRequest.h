/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMakerRuntime
{
namespace Model
{

  /**
   */
  class InvokeEndpointAsyncRequest : public SageMakerRuntimeRequest
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointAsyncRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeEndpointAsync"; }

    AWS_SAGEMAKERRUNTIME_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKERRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">
     * <code>CreateEndpoint</code> </a> API.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">
     * <code>CreateEndpoint</code> </a> API.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">
     * <code>CreateEndpoint</code> </a> API.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">
     * <code>CreateEndpoint</code> </a> API.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">
     * <code>CreateEndpoint</code> </a> API.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">
     * <code>CreateEndpoint</code> </a> API.</p>
     */
    inline InvokeEndpointAsyncRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">
     * <code>CreateEndpoint</code> </a> API.</p>
     */
    inline InvokeEndpointAsyncRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">
     * <code>CreateEndpoint</code> </a> API.</p>
     */
    inline InvokeEndpointAsyncRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline InvokeEndpointAsyncRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline InvokeEndpointAsyncRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline InvokeEndpointAsyncRequest& WithContentType(const char* value) { SetContentType(value); return *this;}


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
    inline InvokeEndpointAsyncRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline InvokeEndpointAsyncRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p>The desired MIME type of the inference in the response.</p>
     */
    inline InvokeEndpointAsyncRequest& WithAccept(const char* value) { SetAccept(value); return *this;}


    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.6">Section
     * 3.3.6. Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1).
     * </p> <p>The code in your model is responsible for setting or updating any custom
     * attributes in the response. If your code does not set this value in the
     * response, an empty value is returned. For example, if a custom attribute
     * represents the trace ID, your model can prepend the custom attribute with
     * <code>Trace ID</code>: in your post-processing function. </p> <p>This feature is
     * currently supported in the Amazon Web Services SDKs but not in the Amazon
     * SageMaker Python SDK. </p>
     */
    inline const Aws::String& GetCustomAttributes() const{ return m_customAttributes; }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.6">Section
     * 3.3.6. Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1).
     * </p> <p>The code in your model is responsible for setting or updating any custom
     * attributes in the response. If your code does not set this value in the
     * response, an empty value is returned. For example, if a custom attribute
     * represents the trace ID, your model can prepend the custom attribute with
     * <code>Trace ID</code>: in your post-processing function. </p> <p>This feature is
     * currently supported in the Amazon Web Services SDKs but not in the Amazon
     * SageMaker Python SDK. </p>
     */
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.6">Section
     * 3.3.6. Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1).
     * </p> <p>The code in your model is responsible for setting or updating any custom
     * attributes in the response. If your code does not set this value in the
     * response, an empty value is returned. For example, if a custom attribute
     * represents the trace ID, your model can prepend the custom attribute with
     * <code>Trace ID</code>: in your post-processing function. </p> <p>This feature is
     * currently supported in the Amazon Web Services SDKs but not in the Amazon
     * SageMaker Python SDK. </p>
     */
    inline void SetCustomAttributes(const Aws::String& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.6">Section
     * 3.3.6. Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1).
     * </p> <p>The code in your model is responsible for setting or updating any custom
     * attributes in the response. If your code does not set this value in the
     * response, an empty value is returned. For example, if a custom attribute
     * represents the trace ID, your model can prepend the custom attribute with
     * <code>Trace ID</code>: in your post-processing function. </p> <p>This feature is
     * currently supported in the Amazon Web Services SDKs but not in the Amazon
     * SageMaker Python SDK. </p>
     */
    inline void SetCustomAttributes(Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.6">Section
     * 3.3.6. Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1).
     * </p> <p>The code in your model is responsible for setting or updating any custom
     * attributes in the response. If your code does not set this value in the
     * response, an empty value is returned. For example, if a custom attribute
     * represents the trace ID, your model can prepend the custom attribute with
     * <code>Trace ID</code>: in your post-processing function. </p> <p>This feature is
     * currently supported in the Amazon Web Services SDKs but not in the Amazon
     * SageMaker Python SDK. </p>
     */
    inline void SetCustomAttributes(const char* value) { m_customAttributesHasBeenSet = true; m_customAttributes.assign(value); }

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.6">Section
     * 3.3.6. Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1).
     * </p> <p>The code in your model is responsible for setting or updating any custom
     * attributes in the response. If your code does not set this value in the
     * response, an empty value is returned. For example, if a custom attribute
     * represents the trace ID, your model can prepend the custom attribute with
     * <code>Trace ID</code>: in your post-processing function. </p> <p>This feature is
     * currently supported in the Amazon Web Services SDKs but not in the Amazon
     * SageMaker Python SDK. </p>
     */
    inline InvokeEndpointAsyncRequest& WithCustomAttributes(const Aws::String& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.6">Section
     * 3.3.6. Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1).
     * </p> <p>The code in your model is responsible for setting or updating any custom
     * attributes in the response. If your code does not set this value in the
     * response, an empty value is returned. For example, if a custom attribute
     * represents the trace ID, your model can prepend the custom attribute with
     * <code>Trace ID</code>: in your post-processing function. </p> <p>This feature is
     * currently supported in the Amazon Web Services SDKs but not in the Amazon
     * SageMaker Python SDK. </p>
     */
    inline InvokeEndpointAsyncRequest& WithCustomAttributes(Aws::String&& value) { SetCustomAttributes(std::move(value)); return *this;}

    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.6">Section
     * 3.3.6. Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1).
     * </p> <p>The code in your model is responsible for setting or updating any custom
     * attributes in the response. If your code does not set this value in the
     * response, an empty value is returned. For example, if a custom attribute
     * represents the trace ID, your model can prepend the custom attribute with
     * <code>Trace ID</code>: in your post-processing function. </p> <p>This feature is
     * currently supported in the Amazon Web Services SDKs but not in the Amazon
     * SageMaker Python SDK. </p>
     */
    inline InvokeEndpointAsyncRequest& WithCustomAttributes(const char* value) { SetCustomAttributes(value); return *this;}


    /**
     * <p>The identifier for the inference request. Amazon SageMaker will generate an
     * identifier for you if none is specified. </p>
     */
    inline const Aws::String& GetInferenceId() const{ return m_inferenceId; }

    /**
     * <p>The identifier for the inference request. Amazon SageMaker will generate an
     * identifier for you if none is specified. </p>
     */
    inline bool InferenceIdHasBeenSet() const { return m_inferenceIdHasBeenSet; }

    /**
     * <p>The identifier for the inference request. Amazon SageMaker will generate an
     * identifier for you if none is specified. </p>
     */
    inline void SetInferenceId(const Aws::String& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = value; }

    /**
     * <p>The identifier for the inference request. Amazon SageMaker will generate an
     * identifier for you if none is specified. </p>
     */
    inline void SetInferenceId(Aws::String&& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = std::move(value); }

    /**
     * <p>The identifier for the inference request. Amazon SageMaker will generate an
     * identifier for you if none is specified. </p>
     */
    inline void SetInferenceId(const char* value) { m_inferenceIdHasBeenSet = true; m_inferenceId.assign(value); }

    /**
     * <p>The identifier for the inference request. Amazon SageMaker will generate an
     * identifier for you if none is specified. </p>
     */
    inline InvokeEndpointAsyncRequest& WithInferenceId(const Aws::String& value) { SetInferenceId(value); return *this;}

    /**
     * <p>The identifier for the inference request. Amazon SageMaker will generate an
     * identifier for you if none is specified. </p>
     */
    inline InvokeEndpointAsyncRequest& WithInferenceId(Aws::String&& value) { SetInferenceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the inference request. Amazon SageMaker will generate an
     * identifier for you if none is specified. </p>
     */
    inline InvokeEndpointAsyncRequest& WithInferenceId(const char* value) { SetInferenceId(value); return *this;}


    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline const Aws::String& GetInputLocation() const{ return m_inputLocation; }

    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline bool InputLocationHasBeenSet() const { return m_inputLocationHasBeenSet; }

    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline void SetInputLocation(const Aws::String& value) { m_inputLocationHasBeenSet = true; m_inputLocation = value; }

    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline void SetInputLocation(Aws::String&& value) { m_inputLocationHasBeenSet = true; m_inputLocation = std::move(value); }

    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline void SetInputLocation(const char* value) { m_inputLocationHasBeenSet = true; m_inputLocation.assign(value); }

    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline InvokeEndpointAsyncRequest& WithInputLocation(const Aws::String& value) { SetInputLocation(value); return *this;}

    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline InvokeEndpointAsyncRequest& WithInputLocation(Aws::String&& value) { SetInputLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline InvokeEndpointAsyncRequest& WithInputLocation(const char* value) { SetInputLocation(value); return *this;}


    /**
     * <p>Maximum age in seconds a request can be in the queue before it is marked as
     * expired.</p>
     */
    inline int GetRequestTTLSeconds() const{ return m_requestTTLSeconds; }

    /**
     * <p>Maximum age in seconds a request can be in the queue before it is marked as
     * expired.</p>
     */
    inline bool RequestTTLSecondsHasBeenSet() const { return m_requestTTLSecondsHasBeenSet; }

    /**
     * <p>Maximum age in seconds a request can be in the queue before it is marked as
     * expired.</p>
     */
    inline void SetRequestTTLSeconds(int value) { m_requestTTLSecondsHasBeenSet = true; m_requestTTLSeconds = value; }

    /**
     * <p>Maximum age in seconds a request can be in the queue before it is marked as
     * expired.</p>
     */
    inline InvokeEndpointAsyncRequest& WithRequestTTLSeconds(int value) { SetRequestTTLSeconds(value); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    Aws::String m_inferenceId;
    bool m_inferenceIdHasBeenSet = false;

    Aws::String m_inputLocation;
    bool m_inputLocationHasBeenSet = false;

    int m_requestTTLSeconds;
    bool m_requestTTLSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
