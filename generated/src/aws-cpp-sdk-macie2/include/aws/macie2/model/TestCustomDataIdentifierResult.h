/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{
  class TestCustomDataIdentifierResult
  {
  public:
    AWS_MACIE2_API TestCustomDataIdentifierResult();
    AWS_MACIE2_API TestCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API TestCustomDataIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of occurrences of sample text that matched the criteria specified
     * by the custom data identifier.</p>
     */
    inline int GetMatchCount() const{ return m_matchCount; }

    /**
     * <p>The number of occurrences of sample text that matched the criteria specified
     * by the custom data identifier.</p>
     */
    inline void SetMatchCount(int value) { m_matchCount = value; }

    /**
     * <p>The number of occurrences of sample text that matched the criteria specified
     * by the custom data identifier.</p>
     */
    inline TestCustomDataIdentifierResult& WithMatchCount(int value) { SetMatchCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TestCustomDataIdentifierResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TestCustomDataIdentifierResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TestCustomDataIdentifierResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_matchCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
