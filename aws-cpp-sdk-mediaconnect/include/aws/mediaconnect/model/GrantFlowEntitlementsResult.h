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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Entitlement.h>
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
namespace MediaConnect
{
namespace Model
{
  class AWS_MEDIACONNECT_API GrantFlowEntitlementsResult
  {
  public:
    GrantFlowEntitlementsResult();
    GrantFlowEntitlementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GrantFlowEntitlementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The entitlements that were just granted.
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const{ return m_entitlements; }

    /**
     * The entitlements that were just granted.
     */
    inline void SetEntitlements(const Aws::Vector<Entitlement>& value) { m_entitlements = value; }

    /**
     * The entitlements that were just granted.
     */
    inline void SetEntitlements(Aws::Vector<Entitlement>&& value) { m_entitlements = std::move(value); }

    /**
     * The entitlements that were just granted.
     */
    inline GrantFlowEntitlementsResult& WithEntitlements(const Aws::Vector<Entitlement>& value) { SetEntitlements(value); return *this;}

    /**
     * The entitlements that were just granted.
     */
    inline GrantFlowEntitlementsResult& WithEntitlements(Aws::Vector<Entitlement>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * The entitlements that were just granted.
     */
    inline GrantFlowEntitlementsResult& AddEntitlements(const Entitlement& value) { m_entitlements.push_back(value); return *this; }

    /**
     * The entitlements that were just granted.
     */
    inline GrantFlowEntitlementsResult& AddEntitlements(Entitlement&& value) { m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * The ARN of the flow that these entitlements were granted to.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that these entitlements were granted to.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that these entitlements were granted to.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that these entitlements were granted to.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that these entitlements were granted to.
     */
    inline GrantFlowEntitlementsResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that these entitlements were granted to.
     */
    inline GrantFlowEntitlementsResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that these entitlements were granted to.
     */
    inline GrantFlowEntitlementsResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}

  private:

    Aws::Vector<Entitlement> m_entitlements;

    Aws::String m_flowArn;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
