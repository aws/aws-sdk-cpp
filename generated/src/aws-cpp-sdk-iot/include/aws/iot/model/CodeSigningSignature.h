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
    AWS_IOT_API CodeSigningSignature() = default;
    AWS_IOT_API CodeSigningSignature(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CodeSigningSignature& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A base64 encoded binary representation of the code signing signature.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetInlineDocument() const { return m_inlineDocument; }
    inline bool InlineDocumentHasBeenSet() const { return m_inlineDocumentHasBeenSet; }
    template<typename InlineDocumentT = Aws::Utils::ByteBuffer>
    void SetInlineDocument(InlineDocumentT&& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = std::forward<InlineDocumentT>(value); }
    template<typename InlineDocumentT = Aws::Utils::ByteBuffer>
    CodeSigningSignature& WithInlineDocument(InlineDocumentT&& value) { SetInlineDocument(std::forward<InlineDocumentT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_inlineDocument{};
    bool m_inlineDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
