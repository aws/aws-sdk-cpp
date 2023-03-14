/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class GetCardinalityResult
  {
  public:
    AWS_IOT_API GetCardinalityResult();
    AWS_IOT_API GetCardinalityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetCardinalityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCardinalityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCardinalityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCardinalityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_cardinality;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
