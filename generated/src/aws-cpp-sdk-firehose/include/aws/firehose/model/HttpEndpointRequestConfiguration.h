﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/ContentEncoding.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/HttpEndpointCommonAttribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>The configuration of the HTTP endpoint request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/HttpEndpointRequestConfiguration">AWS
   * API Reference</a></p>
   */
  class HttpEndpointRequestConfiguration
  {
  public:
    AWS_FIREHOSE_API HttpEndpointRequestConfiguration();
    AWS_FIREHOSE_API HttpEndpointRequestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API HttpEndpointRequestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Firehose uses the content encoding to compress the body of a request before
     * sending the request to the destination. For more information, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Encoding">Content-Encoding</a>
     * in MDN Web Docs, the official Mozilla documentation.</p>
     */
    inline const ContentEncoding& GetContentEncoding() const{ return m_contentEncoding; }
    inline bool ContentEncodingHasBeenSet() const { return m_contentEncodingHasBeenSet; }
    inline void SetContentEncoding(const ContentEncoding& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = value; }
    inline void SetContentEncoding(ContentEncoding&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = std::move(value); }
    inline HttpEndpointRequestConfiguration& WithContentEncoding(const ContentEncoding& value) { SetContentEncoding(value); return *this;}
    inline HttpEndpointRequestConfiguration& WithContentEncoding(ContentEncoding&& value) { SetContentEncoding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the metadata sent to the HTTP endpoint destination.</p>
     */
    inline const Aws::Vector<HttpEndpointCommonAttribute>& GetCommonAttributes() const{ return m_commonAttributes; }
    inline bool CommonAttributesHasBeenSet() const { return m_commonAttributesHasBeenSet; }
    inline void SetCommonAttributes(const Aws::Vector<HttpEndpointCommonAttribute>& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes = value; }
    inline void SetCommonAttributes(Aws::Vector<HttpEndpointCommonAttribute>&& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes = std::move(value); }
    inline HttpEndpointRequestConfiguration& WithCommonAttributes(const Aws::Vector<HttpEndpointCommonAttribute>& value) { SetCommonAttributes(value); return *this;}
    inline HttpEndpointRequestConfiguration& WithCommonAttributes(Aws::Vector<HttpEndpointCommonAttribute>&& value) { SetCommonAttributes(std::move(value)); return *this;}
    inline HttpEndpointRequestConfiguration& AddCommonAttributes(const HttpEndpointCommonAttribute& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes.push_back(value); return *this; }
    inline HttpEndpointRequestConfiguration& AddCommonAttributes(HttpEndpointCommonAttribute&& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ContentEncoding m_contentEncoding;
    bool m_contentEncodingHasBeenSet = false;

    Aws::Vector<HttpEndpointCommonAttribute> m_commonAttributes;
    bool m_commonAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
