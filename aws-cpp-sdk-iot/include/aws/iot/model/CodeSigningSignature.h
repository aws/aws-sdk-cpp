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
  class AWS_IOT_API CodeSigningSignature
  {
  public:
    CodeSigningSignature();
    CodeSigningSignature(Aws::Utils::Json::JsonView jsonValue);
    CodeSigningSignature& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_inlineDocumentHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
