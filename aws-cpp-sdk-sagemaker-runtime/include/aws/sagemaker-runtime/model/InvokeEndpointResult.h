/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace SageMakerRuntime
{
namespace Model
{
  class InvokeEndpointResult
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult(InvokeEndpointResult&&);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult& operator=(InvokeEndpointResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    InvokeEndpointResult(const InvokeEndpointResult&) = delete;
    InvokeEndpointResult& operator=(const InvokeEndpointResult&) = delete;


    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>Includes the inference provided by the model. </p> <p>For information about
     * the format of the response body, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/cdf-inference.html">Common
     * Data Formats-Inference</a>.</p> <p>If the explainer is activated, the body
     * includes the explanations provided by the model. For more information, see the
     * <b>Response section</b> under <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Invoke
     * the Endpoint</a> in the Developer Guide.</p>
     */
    inline Aws::IOStream& GetBody() { return m_body.GetUnderlyingStream(); }

    /**
     * <p>Includes the inference provided by the model. </p> <p>For information about
     * the format of the response body, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/cdf-inference.html">Common
     * Data Formats-Inference</a>.</p> <p>If the explainer is activated, the body
     * includes the explanations provided by the model. For more information, see the
     * <b>Response section</b> under <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Invoke
     * the Endpoint</a> in the Developer Guide.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The MIME type of the inference returned in the response body.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The MIME type of the inference returned in the response body.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The MIME type of the inference returned in the response body.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The MIME type of the inference returned in the response body.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The MIME type of the inference returned in the response body.</p>
     */
    inline InvokeEndpointResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The MIME type of the inference returned in the response body.</p>
     */
    inline InvokeEndpointResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The MIME type of the inference returned in the response body.</p>
     */
    inline InvokeEndpointResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline const Aws::String& GetInvokedProductionVariant() const{ return m_invokedProductionVariant; }

    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline void SetInvokedProductionVariant(const Aws::String& value) { m_invokedProductionVariant = value; }

    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline void SetInvokedProductionVariant(Aws::String&& value) { m_invokedProductionVariant = std::move(value); }

    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline void SetInvokedProductionVariant(const char* value) { m_invokedProductionVariant.assign(value); }

    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline InvokeEndpointResult& WithInvokedProductionVariant(const Aws::String& value) { SetInvokedProductionVariant(value); return *this;}

    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline InvokeEndpointResult& WithInvokedProductionVariant(Aws::String&& value) { SetInvokedProductionVariant(std::move(value)); return *this;}

    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline InvokeEndpointResult& WithInvokedProductionVariant(const char* value) { SetInvokedProductionVariant(value); return *this;}


    /**
     * <p>Provides additional information in the response about the inference returned
     * by a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * return an ID received in the <code>CustomAttributes</code> header of a request
     * or other metadata that a service endpoint was programmed to produce. The value
     * must consist of no more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). If the
     * customer wants the custom attribute returned, the model must set the custom
     * attribute to be included on the way back. </p> <p>The code in your model is
     * responsible for setting or updating any custom attributes in the response. If
     * your code does not set this value in the response, an empty value is returned.
     * For example, if a custom attribute represents the trace ID, your model can
     * prepend the custom attribute with <code>Trace ID:</code> in your post-processing
     * function.</p> <p>This feature is currently supported in the Amazon Web Services
     * SDKs but not in the Amazon SageMaker Python SDK.</p>
     */
    inline const Aws::String& GetCustomAttributes() const{ return m_customAttributes; }

    /**
     * <p>Provides additional information in the response about the inference returned
     * by a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * return an ID received in the <code>CustomAttributes</code> header of a request
     * or other metadata that a service endpoint was programmed to produce. The value
     * must consist of no more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). If the
     * customer wants the custom attribute returned, the model must set the custom
     * attribute to be included on the way back. </p> <p>The code in your model is
     * responsible for setting or updating any custom attributes in the response. If
     * your code does not set this value in the response, an empty value is returned.
     * For example, if a custom attribute represents the trace ID, your model can
     * prepend the custom attribute with <code>Trace ID:</code> in your post-processing
     * function.</p> <p>This feature is currently supported in the Amazon Web Services
     * SDKs but not in the Amazon SageMaker Python SDK.</p>
     */
    inline void SetCustomAttributes(const Aws::String& value) { m_customAttributes = value; }

    /**
     * <p>Provides additional information in the response about the inference returned
     * by a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * return an ID received in the <code>CustomAttributes</code> header of a request
     * or other metadata that a service endpoint was programmed to produce. The value
     * must consist of no more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). If the
     * customer wants the custom attribute returned, the model must set the custom
     * attribute to be included on the way back. </p> <p>The code in your model is
     * responsible for setting or updating any custom attributes in the response. If
     * your code does not set this value in the response, an empty value is returned.
     * For example, if a custom attribute represents the trace ID, your model can
     * prepend the custom attribute with <code>Trace ID:</code> in your post-processing
     * function.</p> <p>This feature is currently supported in the Amazon Web Services
     * SDKs but not in the Amazon SageMaker Python SDK.</p>
     */
    inline void SetCustomAttributes(Aws::String&& value) { m_customAttributes = std::move(value); }

    /**
     * <p>Provides additional information in the response about the inference returned
     * by a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * return an ID received in the <code>CustomAttributes</code> header of a request
     * or other metadata that a service endpoint was programmed to produce. The value
     * must consist of no more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). If the
     * customer wants the custom attribute returned, the model must set the custom
     * attribute to be included on the way back. </p> <p>The code in your model is
     * responsible for setting or updating any custom attributes in the response. If
     * your code does not set this value in the response, an empty value is returned.
     * For example, if a custom attribute represents the trace ID, your model can
     * prepend the custom attribute with <code>Trace ID:</code> in your post-processing
     * function.</p> <p>This feature is currently supported in the Amazon Web Services
     * SDKs but not in the Amazon SageMaker Python SDK.</p>
     */
    inline void SetCustomAttributes(const char* value) { m_customAttributes.assign(value); }

    /**
     * <p>Provides additional information in the response about the inference returned
     * by a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * return an ID received in the <code>CustomAttributes</code> header of a request
     * or other metadata that a service endpoint was programmed to produce. The value
     * must consist of no more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). If the
     * customer wants the custom attribute returned, the model must set the custom
     * attribute to be included on the way back. </p> <p>The code in your model is
     * responsible for setting or updating any custom attributes in the response. If
     * your code does not set this value in the response, an empty value is returned.
     * For example, if a custom attribute represents the trace ID, your model can
     * prepend the custom attribute with <code>Trace ID:</code> in your post-processing
     * function.</p> <p>This feature is currently supported in the Amazon Web Services
     * SDKs but not in the Amazon SageMaker Python SDK.</p>
     */
    inline InvokeEndpointResult& WithCustomAttributes(const Aws::String& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p>Provides additional information in the response about the inference returned
     * by a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * return an ID received in the <code>CustomAttributes</code> header of a request
     * or other metadata that a service endpoint was programmed to produce. The value
     * must consist of no more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). If the
     * customer wants the custom attribute returned, the model must set the custom
     * attribute to be included on the way back. </p> <p>The code in your model is
     * responsible for setting or updating any custom attributes in the response. If
     * your code does not set this value in the response, an empty value is returned.
     * For example, if a custom attribute represents the trace ID, your model can
     * prepend the custom attribute with <code>Trace ID:</code> in your post-processing
     * function.</p> <p>This feature is currently supported in the Amazon Web Services
     * SDKs but not in the Amazon SageMaker Python SDK.</p>
     */
    inline InvokeEndpointResult& WithCustomAttributes(Aws::String&& value) { SetCustomAttributes(std::move(value)); return *this;}

    /**
     * <p>Provides additional information in the response about the inference returned
     * by a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * return an ID received in the <code>CustomAttributes</code> header of a request
     * or other metadata that a service endpoint was programmed to produce. The value
     * must consist of no more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). If the
     * customer wants the custom attribute returned, the model must set the custom
     * attribute to be included on the way back. </p> <p>The code in your model is
     * responsible for setting or updating any custom attributes in the response. If
     * your code does not set this value in the response, an empty value is returned.
     * For example, if a custom attribute represents the trace ID, your model can
     * prepend the custom attribute with <code>Trace ID:</code> in your post-processing
     * function.</p> <p>This feature is currently supported in the Amazon Web Services
     * SDKs but not in the Amazon SageMaker Python SDK.</p>
     */
    inline InvokeEndpointResult& WithCustomAttributes(const char* value) { SetCustomAttributes(value); return *this;}

  private:

  Aws::Utils::Stream::ResponseStream m_body;

    Aws::String m_contentType;

    Aws::String m_invokedProductionVariant;

    Aws::String m_customAttributes;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
