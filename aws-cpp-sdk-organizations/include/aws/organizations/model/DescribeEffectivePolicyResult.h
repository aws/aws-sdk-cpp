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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/EffectivePolicy.h>
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
namespace Organizations
{
namespace Model
{
  class AWS_ORGANIZATIONS_API DescribeEffectivePolicyResult
  {
  public:
    DescribeEffectivePolicyResult();
    DescribeEffectivePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEffectivePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The contents of the effective policy.</p>
     */
    inline const EffectivePolicy& GetEffectivePolicy() const{ return m_effectivePolicy; }

    /**
     * <p>The contents of the effective policy.</p>
     */
    inline void SetEffectivePolicy(const EffectivePolicy& value) { m_effectivePolicy = value; }

    /**
     * <p>The contents of the effective policy.</p>
     */
    inline void SetEffectivePolicy(EffectivePolicy&& value) { m_effectivePolicy = std::move(value); }

    /**
     * <p>The contents of the effective policy.</p>
     */
    inline DescribeEffectivePolicyResult& WithEffectivePolicy(const EffectivePolicy& value) { SetEffectivePolicy(value); return *this;}

    /**
     * <p>The contents of the effective policy.</p>
     */
    inline DescribeEffectivePolicyResult& WithEffectivePolicy(EffectivePolicy&& value) { SetEffectivePolicy(std::move(value)); return *this;}

  private:

    EffectivePolicy m_effectivePolicy;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
