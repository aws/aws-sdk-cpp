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
#include <aws/mediaconnect/model/Entitlement.h>
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
namespace MediaConnect
{
namespace Model
{
  class AWS_MEDIACONNECT_API UpdateFlowEntitlementResult
  {
  public:
    UpdateFlowEntitlementResult();
    UpdateFlowEntitlementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateFlowEntitlementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Entitlement& GetEntitlement() const{ return m_entitlement; }

    
    inline void SetEntitlement(const Entitlement& value) { m_entitlement = value; }

    
    inline void SetEntitlement(Entitlement&& value) { m_entitlement = std::move(value); }

    
    inline UpdateFlowEntitlementResult& WithEntitlement(const Entitlement& value) { SetEntitlement(value); return *this;}

    
    inline UpdateFlowEntitlementResult& WithEntitlement(Entitlement&& value) { SetEntitlement(std::move(value)); return *this;}


    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline UpdateFlowEntitlementResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline UpdateFlowEntitlementResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline UpdateFlowEntitlementResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}

  private:

    Entitlement m_entitlement;

    Aws::String m_flowArn;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
