/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/directconnect/model/LoaContentType.h>
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


    ///@{
    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLoaContent() const{ return m_loaContent; }
    inline bool LoaContentHasBeenSet() const { return m_loaContentHasBeenSet; }
    inline void SetLoaContent(const Aws::Utils::ByteBuffer& value) { m_loaContentHasBeenSet = true; m_loaContent = value; }
    inline void SetLoaContent(Aws::Utils::ByteBuffer&& value) { m_loaContentHasBeenSet = true; m_loaContent = std::move(value); }
    inline Loa& WithLoaContent(const Aws::Utils::ByteBuffer& value) { SetLoaContent(value); return *this;}
    inline Loa& WithLoaContent(Aws::Utils::ByteBuffer&& value) { SetLoaContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline const LoaContentType& GetLoaContentType() const{ return m_loaContentType; }
    inline bool LoaContentTypeHasBeenSet() const { return m_loaContentTypeHasBeenSet; }
    inline void SetLoaContentType(const LoaContentType& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = value; }
    inline void SetLoaContentType(LoaContentType&& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = std::move(value); }
    inline Loa& WithLoaContentType(const LoaContentType& value) { SetLoaContentType(value); return *this;}
    inline Loa& WithLoaContentType(LoaContentType&& value) { SetLoaContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline Loa& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline Loa& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline Loa& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_loaContent;
    bool m_loaContentHasBeenSet = false;

    LoaContentType m_loaContentType;
    bool m_loaContentTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
