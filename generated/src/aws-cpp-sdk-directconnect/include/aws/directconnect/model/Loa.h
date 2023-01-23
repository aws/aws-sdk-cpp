/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/directconnect/model/LoaContentType.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about a Letter of Authorization - Connecting Facility Assignment
   * (LOA-CFA) for a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Loa">AWS
   * API Reference</a></p>
   */
  class Loa
  {
  public:
    AWS_DIRECTCONNECT_API Loa();
    AWS_DIRECTCONNECT_API Loa(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Loa& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLoaContent() const{ return m_loaContent; }

    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline bool LoaContentHasBeenSet() const { return m_loaContentHasBeenSet; }

    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline void SetLoaContent(const Aws::Utils::ByteBuffer& value) { m_loaContentHasBeenSet = true; m_loaContent = value; }

    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline void SetLoaContent(Aws::Utils::ByteBuffer&& value) { m_loaContentHasBeenSet = true; m_loaContent = std::move(value); }

    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline Loa& WithLoaContent(const Aws::Utils::ByteBuffer& value) { SetLoaContent(value); return *this;}

    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline Loa& WithLoaContent(Aws::Utils::ByteBuffer&& value) { SetLoaContent(std::move(value)); return *this;}


    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline const LoaContentType& GetLoaContentType() const{ return m_loaContentType; }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline bool LoaContentTypeHasBeenSet() const { return m_loaContentTypeHasBeenSet; }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline void SetLoaContentType(const LoaContentType& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = value; }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline void SetLoaContentType(LoaContentType&& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = std::move(value); }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline Loa& WithLoaContentType(const LoaContentType& value) { SetLoaContentType(value); return *this;}

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline Loa& WithLoaContentType(LoaContentType&& value) { SetLoaContentType(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_loaContent;
    bool m_loaContentHasBeenSet = false;

    LoaContentType m_loaContentType;
    bool m_loaContentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
