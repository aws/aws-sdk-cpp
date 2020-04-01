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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_MEDIACONNECT_API RemoveFlowVpcInterfaceResult
  {
  public:
    RemoveFlowVpcInterfaceResult();
    RemoveFlowVpcInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RemoveFlowVpcInterfaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that is associated with the VPC interface you removed.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that is associated with the VPC interface you removed.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that is associated with the VPC interface you removed.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that is associated with the VPC interface you removed.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that is associated with the VPC interface you removed.
     */
    inline RemoveFlowVpcInterfaceResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that is associated with the VPC interface you removed.
     */
    inline RemoveFlowVpcInterfaceResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that is associated with the VPC interface you removed.
     */
    inline RemoveFlowVpcInterfaceResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * IDs of network interfaces associated with the removed VPC interface that Media
     * Connect was unable to remove.
     */
    inline const Aws::Vector<Aws::String>& GetNonDeletedNetworkInterfaceIds() const{ return m_nonDeletedNetworkInterfaceIds; }

    /**
     * IDs of network interfaces associated with the removed VPC interface that Media
     * Connect was unable to remove.
     */
    inline void SetNonDeletedNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_nonDeletedNetworkInterfaceIds = value; }

    /**
     * IDs of network interfaces associated with the removed VPC interface that Media
     * Connect was unable to remove.
     */
    inline void SetNonDeletedNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_nonDeletedNetworkInterfaceIds = std::move(value); }

    /**
     * IDs of network interfaces associated with the removed VPC interface that Media
     * Connect was unable to remove.
     */
    inline RemoveFlowVpcInterfaceResult& WithNonDeletedNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNonDeletedNetworkInterfaceIds(value); return *this;}

    /**
     * IDs of network interfaces associated with the removed VPC interface that Media
     * Connect was unable to remove.
     */
    inline RemoveFlowVpcInterfaceResult& WithNonDeletedNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNonDeletedNetworkInterfaceIds(std::move(value)); return *this;}

    /**
     * IDs of network interfaces associated with the removed VPC interface that Media
     * Connect was unable to remove.
     */
    inline RemoveFlowVpcInterfaceResult& AddNonDeletedNetworkInterfaceIds(const Aws::String& value) { m_nonDeletedNetworkInterfaceIds.push_back(value); return *this; }

    /**
     * IDs of network interfaces associated with the removed VPC interface that Media
     * Connect was unable to remove.
     */
    inline RemoveFlowVpcInterfaceResult& AddNonDeletedNetworkInterfaceIds(Aws::String&& value) { m_nonDeletedNetworkInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * IDs of network interfaces associated with the removed VPC interface that Media
     * Connect was unable to remove.
     */
    inline RemoveFlowVpcInterfaceResult& AddNonDeletedNetworkInterfaceIds(const char* value) { m_nonDeletedNetworkInterfaceIds.push_back(value); return *this; }


    /**
     * The name of the VPC interface that was removed.
     */
    inline const Aws::String& GetVpcInterfaceName() const{ return m_vpcInterfaceName; }

    /**
     * The name of the VPC interface that was removed.
     */
    inline void SetVpcInterfaceName(const Aws::String& value) { m_vpcInterfaceName = value; }

    /**
     * The name of the VPC interface that was removed.
     */
    inline void SetVpcInterfaceName(Aws::String&& value) { m_vpcInterfaceName = std::move(value); }

    /**
     * The name of the VPC interface that was removed.
     */
    inline void SetVpcInterfaceName(const char* value) { m_vpcInterfaceName.assign(value); }

    /**
     * The name of the VPC interface that was removed.
     */
    inline RemoveFlowVpcInterfaceResult& WithVpcInterfaceName(const Aws::String& value) { SetVpcInterfaceName(value); return *this;}

    /**
     * The name of the VPC interface that was removed.
     */
    inline RemoveFlowVpcInterfaceResult& WithVpcInterfaceName(Aws::String&& value) { SetVpcInterfaceName(std::move(value)); return *this;}

    /**
     * The name of the VPC interface that was removed.
     */
    inline RemoveFlowVpcInterfaceResult& WithVpcInterfaceName(const char* value) { SetVpcInterfaceName(value); return *this;}

  private:

    Aws::String m_flowArn;

    Aws::Vector<Aws::String> m_nonDeletedNetworkInterfaceIds;

    Aws::String m_vpcInterfaceName;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
