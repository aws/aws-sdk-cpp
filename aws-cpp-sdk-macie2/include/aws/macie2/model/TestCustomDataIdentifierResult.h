/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
  class AWS_MACIE2_API TestCustomDataIdentifierResult
  {
  public:
    TestCustomDataIdentifierResult();
    TestCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestCustomDataIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of instances of sample text that matched the detection criteria
     * specified in the custom data identifier.</p>
     */
    inline int GetMatchCount() const{ return m_matchCount; }

    /**
     * <p>The number of instances of sample text that matched the detection criteria
     * specified in the custom data identifier.</p>
     */
    inline void SetMatchCount(int value) { m_matchCount = value; }

    /**
     * <p>The number of instances of sample text that matched the detection criteria
     * specified in the custom data identifier.</p>
     */
    inline TestCustomDataIdentifierResult& WithMatchCount(int value) { SetMatchCount(value); return *this;}

  private:

    int m_matchCount;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
