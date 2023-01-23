/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace LocationService
{
namespace Model
{
  class GetMapStyleDescriptorResult
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapStyleDescriptorResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_LOCATIONSERVICE_API GetMapStyleDescriptorResult(GetMapStyleDescriptorResult&&);
    AWS_LOCATIONSERVICE_API GetMapStyleDescriptorResult& operator=(GetMapStyleDescriptorResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetMapStyleDescriptorResult(const GetMapStyleDescriptorResult&) = delete;
    GetMapStyleDescriptorResult& operator=(const GetMapStyleDescriptorResult&) = delete;


    AWS_LOCATIONSERVICE_API GetMapStyleDescriptorResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LOCATIONSERVICE_API GetMapStyleDescriptorResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>Contains the body of the style descriptor.</p>
     */
    inline Aws::IOStream& GetBlob() { return m_blob.GetUnderlyingStream(); }

    /**
     * <p>Contains the body of the style descriptor.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_blob = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The style descriptor's content type. For example,
     * <code>application/json</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The style descriptor's content type. For example,
     * <code>application/json</code>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The style descriptor's content type. For example,
     * <code>application/json</code>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The style descriptor's content type. For example,
     * <code>application/json</code>.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The style descriptor's content type. For example,
     * <code>application/json</code>.</p>
     */
    inline GetMapStyleDescriptorResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The style descriptor's content type. For example,
     * <code>application/json</code>.</p>
     */
    inline GetMapStyleDescriptorResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The style descriptor's content type. For example,
     * <code>application/json</code>.</p>
     */
    inline GetMapStyleDescriptorResult& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

  Aws::Utils::Stream::ResponseStream m_blob;

    Aws::String m_contentType;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
