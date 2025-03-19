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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class DescribeLoaResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeLoaResult() = default;
    AWS_DIRECTCONNECT_API DescribeLoaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeLoaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLoaContent() const { return m_loaContent; }
    template<typename LoaContentT = Aws::Utils::ByteBuffer>
    void SetLoaContent(LoaContentT&& value) { m_loaContentHasBeenSet = true; m_loaContent = std::forward<LoaContentT>(value); }
    template<typename LoaContentT = Aws::Utils::ByteBuffer>
    DescribeLoaResult& WithLoaContent(LoaContentT&& value) { SetLoaContent(std::forward<LoaContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline LoaContentType GetLoaContentType() const { return m_loaContentType; }
    inline void SetLoaContentType(LoaContentType value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = value; }
    inline DescribeLoaResult& WithLoaContentType(LoaContentType value) { SetLoaContentType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLoaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_loaContent{};
    bool m_loaContentHasBeenSet = false;

    LoaContentType m_loaContentType{LoaContentType::NOT_SET};
    bool m_loaContentTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
