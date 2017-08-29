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
#include <aws/snowball/Snowball_EXPORTS.h>

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
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API GetSnowballUsageResult
  {
  public:
    GetSnowballUsageResult();
    GetSnowballUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSnowballUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service limit for number of Snowballs this account can have at once. The
     * default service limit is 1 (one).</p>
     */
    inline int GetSnowballLimit() const{ return m_snowballLimit; }

    /**
     * <p>The service limit for number of Snowballs this account can have at once. The
     * default service limit is 1 (one).</p>
     */
    inline void SetSnowballLimit(int value) { m_snowballLimit = value; }

    /**
     * <p>The service limit for number of Snowballs this account can have at once. The
     * default service limit is 1 (one).</p>
     */
    inline GetSnowballUsageResult& WithSnowballLimit(int value) { SetSnowballLimit(value); return *this;}


    /**
     * <p>The number of Snowballs that this account is currently using.</p>
     */
    inline int GetSnowballsInUse() const{ return m_snowballsInUse; }

    /**
     * <p>The number of Snowballs that this account is currently using.</p>
     */
    inline void SetSnowballsInUse(int value) { m_snowballsInUse = value; }

    /**
     * <p>The number of Snowballs that this account is currently using.</p>
     */
    inline GetSnowballUsageResult& WithSnowballsInUse(int value) { SetSnowballsInUse(value); return *this;}

  private:

    int m_snowballLimit;

    int m_snowballsInUse;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
