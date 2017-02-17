/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>A structure containing the Letter of Authorization - Connecting Facility
   * Assignment (LOA-CFA) for a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Loa">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DescribeLoaResult
  {
  public:
    DescribeLoaResult();
    DescribeLoaResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLoaResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Utils::ByteBuffer& GetLoaContent() const{ return m_loaContent; }

    
    inline void SetLoaContent(const Aws::Utils::ByteBuffer& value) { m_loaContent = value; }

    
    inline void SetLoaContent(Aws::Utils::ByteBuffer&& value) { m_loaContent = value; }

    
    inline DescribeLoaResult& WithLoaContent(const Aws::Utils::ByteBuffer& value) { SetLoaContent(value); return *this;}

    
    inline DescribeLoaResult& WithLoaContent(Aws::Utils::ByteBuffer&& value) { SetLoaContent(value); return *this;}

    
    inline const LoaContentType& GetLoaContentType() const{ return m_loaContentType; }

    
    inline void SetLoaContentType(const LoaContentType& value) { m_loaContentType = value; }

    
    inline void SetLoaContentType(LoaContentType&& value) { m_loaContentType = value; }

    
    inline DescribeLoaResult& WithLoaContentType(const LoaContentType& value) { SetLoaContentType(value); return *this;}

    
    inline DescribeLoaResult& WithLoaContentType(LoaContentType&& value) { SetLoaContentType(value); return *this;}

  private:
    Aws::Utils::ByteBuffer m_loaContent;
    LoaContentType m_loaContentType;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
