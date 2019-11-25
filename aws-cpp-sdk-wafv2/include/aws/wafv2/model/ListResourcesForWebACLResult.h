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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WAFV2
{
namespace Model
{
  class AWS_WAFV2_API ListResourcesForWebACLResult
  {
  public:
    ListResourcesForWebACLResult();
    ListResourcesForWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResourcesForWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The array of Amazon Resource Names (ARNs) of the associated resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The array of Amazon Resource Names (ARNs) of the associated resources.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArns = value; }

    /**
     * <p>The array of Amazon Resource Names (ARNs) of the associated resources.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArns = std::move(value); }

    /**
     * <p>The array of Amazon Resource Names (ARNs) of the associated resources.</p>
     */
    inline ListResourcesForWebACLResult& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The array of Amazon Resource Names (ARNs) of the associated resources.</p>
     */
    inline ListResourcesForWebACLResult& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>The array of Amazon Resource Names (ARNs) of the associated resources.</p>
     */
    inline ListResourcesForWebACLResult& AddResourceArns(const Aws::String& value) { m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The array of Amazon Resource Names (ARNs) of the associated resources.</p>
     */
    inline ListResourcesForWebACLResult& AddResourceArns(Aws::String&& value) { m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The array of Amazon Resource Names (ARNs) of the associated resources.</p>
     */
    inline ListResourcesForWebACLResult& AddResourceArns(const char* value) { m_resourceArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceArns;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
