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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/directconnect/model/LoaContentType.h>
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
  class AWS_DIRECTCONNECT_API DescribeLoaResult
  {
  public:
    DescribeLoaResult();
    DescribeLoaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLoaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLoaContent() const{ return m_loaContent; }

    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline void SetLoaContent(const Aws::Utils::ByteBuffer& value) { m_loaContent = value; }

    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline void SetLoaContent(Aws::Utils::ByteBuffer&& value) { m_loaContent = std::move(value); }

    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline DescribeLoaResult& WithLoaContent(const Aws::Utils::ByteBuffer& value) { SetLoaContent(value); return *this;}

    /**
     * <p>The binary contents of the LOA-CFA document.</p>
     */
    inline DescribeLoaResult& WithLoaContent(Aws::Utils::ByteBuffer&& value) { SetLoaContent(std::move(value)); return *this;}


    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline const LoaContentType& GetLoaContentType() const{ return m_loaContentType; }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline void SetLoaContentType(const LoaContentType& value) { m_loaContentType = value; }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline void SetLoaContentType(LoaContentType&& value) { m_loaContentType = std::move(value); }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline DescribeLoaResult& WithLoaContentType(const LoaContentType& value) { SetLoaContentType(value); return *this;}

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline DescribeLoaResult& WithLoaContentType(LoaContentType&& value) { SetLoaContentType(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_loaContent;

    LoaContentType m_loaContentType;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
