/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes the signature for a file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CodeSigningSignature">AWS
   * API Reference</a></p>
   */
  class CodeSigningSignature
  {
  public:
    AWS_IOT_API CodeSigningSignature();
    AWS_IOT_API CodeSigningSignature(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CodeSigningSignature& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A base64 encoded binary representation of the code signing signature.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetInlineDocument() const{ return m_inlineDocument; }

    /**
     * <p>A base64 encoded binary representation of the code signing signature.</p>
     */
    inline bool InlineDocumentHasBeenSet() const { return m_inlineDocumentHasBeenSet; }

    /**
     * <p>A base64 encoded binary representation of the code signing signature.</p>
     */
    inline void SetInlineDocument(const Aws::Utils::ByteBuffer& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = value; }

    /**
     * <p>A base64 encoded binary representation of the code signing signature.</p>
     */
    inline void SetInlineDocument(Aws::Utils::ByteBuffer&& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = std::move(value); }

    /**
     * <p>A base64 encoded binary representation of the code signing signature.</p>
     */
    inline CodeSigningSignature& WithInlineDocument(const Aws::Utils::ByteBuffer& value) { SetInlineDocument(value); return *this;}

    /**
     * <p>A base64 encoded binary representation of the code signing signature.</p>
     */
    inline CodeSigningSignature& WithInlineDocument(Aws::Utils::ByteBuffer&& value) { SetInlineDocument(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_inlineDocument;
    bool m_inlineDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
