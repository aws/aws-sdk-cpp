/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>A pre-formed Amazon SageMaker model input you can include if your detector
   * version includes an imported Amazon SageMaker model endpoint with pass-through
   * input configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelEndpointDataBlob">AWS
   * API Reference</a></p>
   */
  class ModelEndpointDataBlob
  {
  public:
    AWS_FRAUDDETECTOR_API ModelEndpointDataBlob() = default;
    AWS_FRAUDDETECTOR_API ModelEndpointDataBlob(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelEndpointDataBlob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The byte buffer of the Amazon SageMaker model endpoint input data blob.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetByteBuffer() const { return m_byteBuffer; }
    inline bool ByteBufferHasBeenSet() const { return m_byteBufferHasBeenSet; }
    template<typename ByteBufferT = Aws::Utils::ByteBuffer>
    void SetByteBuffer(ByteBufferT&& value) { m_byteBufferHasBeenSet = true; m_byteBuffer = std::forward<ByteBufferT>(value); }
    template<typename ByteBufferT = Aws::Utils::ByteBuffer>
    ModelEndpointDataBlob& WithByteBuffer(ByteBufferT&& value) { SetByteBuffer(std::forward<ByteBufferT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the Amazon SageMaker model endpoint input data blob. </p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    ModelEndpointDataBlob& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_byteBuffer{};
    bool m_byteBufferHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
