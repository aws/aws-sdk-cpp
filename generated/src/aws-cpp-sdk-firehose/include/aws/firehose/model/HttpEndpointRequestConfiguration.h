/**
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


    /**
     * <p>Kinesis Data Firehose uses the content encoding to compress the body of a
     * request before sending the request to the destination. For more information, see
     * <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Encoding">Content-Encoding</a>
     * in MDN Web Docs, the official Mozilla documentation.</p>
     */
    inline const ContentEncoding& GetContentEncoding() const{ return m_contentEncoding; }

    /**
     * <p>Kinesis Data Firehose uses the content encoding to compress the body of a
     * request before sending the request to the destination. For more information, see
     * <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Encoding">Content-Encoding</a>
     * in MDN Web Docs, the official Mozilla documentation.</p>
     */
    inline bool ContentEncodingHasBeenSet() const { return m_contentEncodingHasBeenSet; }

    /**
     * <p>Kinesis Data Firehose uses the content encoding to compress the body of a
     * request before sending the request to the destination. For more information, see
     * <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Encoding">Content-Encoding</a>
     * in MDN Web Docs, the official Mozilla documentation.</p>
     */
    inline void SetContentEncoding(const ContentEncoding& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = value; }

    /**
     * <p>Kinesis Data Firehose uses the content encoding to compress the body of a
     * request before sending the request to the destination. For more information, see
     * <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Encoding">Content-Encoding</a>
     * in MDN Web Docs, the official Mozilla documentation.</p>
     */
    inline void SetContentEncoding(ContentEncoding&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = std::move(value); }

    /**
     * <p>Kinesis Data Firehose uses the content encoding to compress the body of a
     * request before sending the request to the destination. For more information, see
     * <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Encoding">Content-Encoding</a>
     * in MDN Web Docs, the official Mozilla documentation.</p>
     */
    inline HttpEndpointRequestConfiguration& WithContentEncoding(const ContentEncoding& value) { SetContentEncoding(value); return *this;}

    /**
     * <p>Kinesis Data Firehose uses the content encoding to compress the body of a
     * request before sending the request to the destination. For more information, see
     * <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Encoding">Content-Encoding</a>
     * in MDN Web Docs, the official Mozilla documentation.</p>
     */
    inline HttpEndpointRequestConfiguration& WithContentEncoding(ContentEncoding&& value) { SetContentEncoding(std::move(value)); return *this;}


    /**
     * <p>Describes the metadata sent to the HTTP endpoint destination.</p>
     */
    inline const Aws::Vector<HttpEndpointCommonAttribute>& GetCommonAttributes() const{ return m_commonAttributes; }

    /**
     * <p>Describes the metadata sent to the HTTP endpoint destination.</p>
     */
    inline bool CommonAttributesHasBeenSet() const { return m_commonAttributesHasBeenSet; }

    /**
     * <p>Describes the metadata sent to the HTTP endpoint destination.</p>
     */
    inline void SetCommonAttributes(const Aws::Vector<HttpEndpointCommonAttribute>& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes = value; }

    /**
     * <p>Describes the metadata sent to the HTTP endpoint destination.</p>
     */
    inline void SetCommonAttributes(Aws::Vector<HttpEndpointCommonAttribute>&& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes = std::move(value); }

    /**
     * <p>Describes the metadata sent to the HTTP endpoint destination.</p>
     */
    inline HttpEndpointRequestConfiguration& WithCommonAttributes(const Aws::Vector<HttpEndpointCommonAttribute>& value) { SetCommonAttributes(value); return *this;}

    /**
     * <p>Describes the metadata sent to the HTTP endpoint destination.</p>
     */
    inline HttpEndpointRequestConfiguration& WithCommonAttributes(Aws::Vector<HttpEndpointCommonAttribute>&& value) { SetCommonAttributes(std::move(value)); return *this;}

    /**
     * <p>Describes the metadata sent to the HTTP endpoint destination.</p>
     */
    inline HttpEndpointRequestConfiguration& AddCommonAttributes(const HttpEndpointCommonAttribute& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes.push_back(value); return *this; }

    /**
     * <p>Describes the metadata sent to the HTTP endpoint destination.</p>
     */
    inline HttpEndpointRequestConfiguration& AddCommonAttributes(HttpEndpointCommonAttribute&& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes.push_back(std::move(value)); return *this; }

  private:

    ContentEncoding m_contentEncoding;
    bool m_contentEncodingHasBeenSet = false;

    Aws::Vector<HttpEndpointCommonAttribute> m_commonAttributes;
    bool m_commonAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
