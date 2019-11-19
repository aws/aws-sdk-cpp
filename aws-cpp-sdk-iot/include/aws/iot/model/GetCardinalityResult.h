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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API GetCardinalityResult
  {
  public:
    GetCardinalityResult();
    GetCardinalityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCardinalityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The approximate count of unique values that match the query.</p>
     */
    inline int GetCardinality() const{ return m_cardinality; }

    /**
     * <p>The approximate count of unique values that match the query.</p>
     */
    inline void SetCardinality(int value) { m_cardinality = value; }

    /**
     * <p>The approximate count of unique values that match the query.</p>
     */
    inline GetCardinalityResult& WithCardinality(int value) { SetCardinality(value); return *this;}

  private:

    int m_cardinality;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
