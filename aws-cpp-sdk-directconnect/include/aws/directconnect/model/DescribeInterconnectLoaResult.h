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
#include <aws/directconnect/model/Loa.h>

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
   * <p>The response received when DescribeInterconnectLoa is called.</p>
   */
  class AWS_DIRECTCONNECT_API DescribeInterconnectLoaResult
  {
  public:
    DescribeInterconnectLoaResult();
    DescribeInterconnectLoaResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInterconnectLoaResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Loa& GetLoa() const{ return m_loa; }

    
    inline void SetLoa(const Loa& value) { m_loa = value; }

    
    inline void SetLoa(Loa&& value) { m_loa = value; }

    
    inline DescribeInterconnectLoaResult& WithLoa(const Loa& value) { SetLoa(value); return *this;}

    
    inline DescribeInterconnectLoaResult& WithLoa(Loa&& value) { SetLoa(value); return *this;}

  private:
    Loa m_loa;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
