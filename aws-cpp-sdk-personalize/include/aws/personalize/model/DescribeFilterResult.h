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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Filter.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API DescribeFilterResult
  {
  public:
    DescribeFilterResult();
    DescribeFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The filter's details.</p>
     */
    inline const Filter& GetFilter() const{ return m_filter; }

    /**
     * <p>The filter's details.</p>
     */
    inline void SetFilter(const Filter& value) { m_filter = value; }

    /**
     * <p>The filter's details.</p>
     */
    inline void SetFilter(Filter&& value) { m_filter = std::move(value); }

    /**
     * <p>The filter's details.</p>
     */
    inline DescribeFilterResult& WithFilter(const Filter& value) { SetFilter(value); return *this;}

    /**
     * <p>The filter's details.</p>
     */
    inline DescribeFilterResult& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Filter m_filter;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
