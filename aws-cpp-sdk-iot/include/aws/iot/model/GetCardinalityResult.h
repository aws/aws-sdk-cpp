/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
