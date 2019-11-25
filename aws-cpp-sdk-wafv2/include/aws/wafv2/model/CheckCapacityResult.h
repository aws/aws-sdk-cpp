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
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
namespace WAFV2
{
namespace Model
{
  class AWS_WAFV2_API CheckCapacityResult
  {
  public:
    CheckCapacityResult();
    CheckCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CheckCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The capacity required by the rules and scope.</p>
     */
    inline long long GetCapacity() const{ return m_capacity; }

    /**
     * <p>The capacity required by the rules and scope.</p>
     */
    inline void SetCapacity(long long value) { m_capacity = value; }

    /**
     * <p>The capacity required by the rules and scope.</p>
     */
    inline CheckCapacityResult& WithCapacity(long long value) { SetCapacity(value); return *this;}

  private:

    long long m_capacity;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
