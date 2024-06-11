﻿/**
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
    AWS_DIRECTCONNECT_API DescribeLoaResult();
    AWS_DIRECTCONNECT_API DescribeLoaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeLoaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLoaContent() const{ return m_loaContent; }
    inline void SetLoaContent(const Aws::Utils::ByteBuffer& value) { m_loaContent = value; }
    inline void SetLoaContent(Aws::Utils::ByteBuffer&& value) { m_loaContent = std::move(value); }
    inline DescribeLoaResult& WithLoaContent(const Aws::Utils::ByteBuffer& value) { SetLoaContent(value); return *this;}
    inline DescribeLoaResult& WithLoaContent(Aws::Utils::ByteBuffer&& value) { SetLoaContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline const LoaContentType& GetLoaContentType() const{ return m_loaContentType; }
    inline void SetLoaContentType(const LoaContentType& value) { m_loaContentType = value; }
    inline void SetLoaContentType(LoaContentType&& value) { m_loaContentType = std::move(value); }
    inline DescribeLoaResult& WithLoaContentType(const LoaContentType& value) { SetLoaContentType(value); return *this;}
    inline DescribeLoaResult& WithLoaContentType(LoaContentType&& value) { SetLoaContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLoaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLoaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLoaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_loaContent;

    LoaContentType m_loaContentType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
