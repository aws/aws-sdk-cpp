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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/EffectivePolicy.h>
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
  class AWS_IOT_API GetEffectivePoliciesResult
  {
  public:
    GetEffectivePoliciesResult();
    GetEffectivePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEffectivePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The effective policies.</p>
     */
    inline const Aws::Vector<EffectivePolicy>& GetEffectivePolicies() const{ return m_effectivePolicies; }

    /**
     * <p>The effective policies.</p>
     */
    inline void SetEffectivePolicies(const Aws::Vector<EffectivePolicy>& value) { m_effectivePolicies = value; }

    /**
     * <p>The effective policies.</p>
     */
    inline void SetEffectivePolicies(Aws::Vector<EffectivePolicy>&& value) { m_effectivePolicies = std::move(value); }

    /**
     * <p>The effective policies.</p>
     */
    inline GetEffectivePoliciesResult& WithEffectivePolicies(const Aws::Vector<EffectivePolicy>& value) { SetEffectivePolicies(value); return *this;}

    /**
     * <p>The effective policies.</p>
     */
    inline GetEffectivePoliciesResult& WithEffectivePolicies(Aws::Vector<EffectivePolicy>&& value) { SetEffectivePolicies(std::move(value)); return *this;}

    /**
     * <p>The effective policies.</p>
     */
    inline GetEffectivePoliciesResult& AddEffectivePolicies(const EffectivePolicy& value) { m_effectivePolicies.push_back(value); return *this; }

    /**
     * <p>The effective policies.</p>
     */
    inline GetEffectivePoliciesResult& AddEffectivePolicies(EffectivePolicy&& value) { m_effectivePolicies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EffectivePolicy> m_effectivePolicies;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
