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
  class AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult
  {
  public:
    InvokeEndpointResult();
    //We have to define these because Microsoft doesn't auto generate them
    InvokeEndpointResult(InvokeEndpointResult&&);
    InvokeEndpointResult& operator=(InvokeEndpointResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    InvokeEndpointResult(const InvokeEndpointResult&) = delete;
    InvokeEndpointResult& operator=(const InvokeEndpointResult&) = delete;


    InvokeEndpointResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    InvokeEndpointResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>Includes the inference provided by the model.</p> <p>For information about
     * the format of the response body, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/cdf-inference.html">Common
     * Data Formats—Inference</a>.</p>
     */
    inline Aws::IOStream& GetBody() { return m_body.GetUnderlyingStream(); }

    /**
     * <p>Includes the inference provided by the model.</p> <p>For information about
     * the format of the response body, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/cdf-inference.html">Common
     * Data Formats—Inference</a>.</p>
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
     * <p/>
     */
    inline const Aws::String& GetCustomAttributes() const{ return m_customAttributes; }

    /**
     * <p/>
     */
    inline void SetCustomAttributes(const Aws::String& value) { m_customAttributes = value; }

    /**
     * <p/>
     */
    inline void SetCustomAttributes(Aws::String&& value) { m_customAttributes = std::move(value); }

    /**
     * <p/>
     */
    inline void SetCustomAttributes(const char* value) { m_customAttributes.assign(value); }

    /**
     * <p/>
     */
    inline InvokeEndpointResult& WithCustomAttributes(const Aws::String& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p/>
     */
    inline InvokeEndpointResult& WithCustomAttributes(Aws::String&& value) { SetCustomAttributes(std::move(value)); return *this;}

    /**
     * <p/>
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
