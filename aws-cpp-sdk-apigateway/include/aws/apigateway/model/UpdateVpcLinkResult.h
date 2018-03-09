﻿/*
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/VpcLinkStatus.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>A API Gateway VPC link for a <a>RestApi</a> to access resources in an Amazon
   * Virtual Private Cloud (VPC).</p> <div class="remarks"> <p><p>To enable access to
   * a resource in an Amazon Virtual Private Cloud through Amazon API Gateway, you,
   * as an API developer, create a <a>VpcLink</a> resource targeted for one or more
   * network load balancers of the VPC and then integrate an API method with a
   * private integration that uses the <a>VpcLink</a>. The private integration has an
   * integration type of <code>HTTP</code> or <code>HTTP_PROXY</code> and has a
   * connection type of <code>VPC_LINK</code>. The integration uses the
   * <code>connectionId</code> property to identify the <a>VpcLink</a> used.</p> </p>
   * </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/VpcLink">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UpdateVpcLinkResult
  {
  public:
    UpdateVpcLinkResult();
    UpdateVpcLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateVpcLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the <a>VpcLink</a>. It is used in an <a>Integration</a> to
     * reference this <a>VpcLink</a>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the <a>VpcLink</a>. It is used in an <a>Integration</a> to
     * reference this <a>VpcLink</a>.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the <a>VpcLink</a>. It is used in an <a>Integration</a> to
     * reference this <a>VpcLink</a>.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the <a>VpcLink</a>. It is used in an <a>Integration</a> to
     * reference this <a>VpcLink</a>.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the <a>VpcLink</a>. It is used in an <a>Integration</a> to
     * reference this <a>VpcLink</a>.</p>
     */
    inline UpdateVpcLinkResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the <a>VpcLink</a>. It is used in an <a>Integration</a> to
     * reference this <a>VpcLink</a>.</p>
     */
    inline UpdateVpcLinkResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the <a>VpcLink</a>. It is used in an <a>Integration</a> to
     * reference this <a>VpcLink</a>.</p>
     */
    inline UpdateVpcLinkResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name used to label and identify the VPC link.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name used to label and identify the VPC link.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name used to label and identify the VPC link.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name used to label and identify the VPC link.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name used to label and identify the VPC link.</p>
     */
    inline UpdateVpcLinkResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name used to label and identify the VPC link.</p>
     */
    inline UpdateVpcLinkResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name used to label and identify the VPC link.</p>
     */
    inline UpdateVpcLinkResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the VPC link.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the VPC link.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the VPC link.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the VPC link.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the VPC link.</p>
     */
    inline UpdateVpcLinkResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the VPC link.</p>
     */
    inline UpdateVpcLinkResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the VPC link.</p>
     */
    inline UpdateVpcLinkResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARNs of network load balancers of the VPC targeted by the VPC link. The
     * network load balancers must be owned by the same AWS account of the API
     * owner.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetArns() const{ return m_targetArns; }

    /**
     * <p>The ARNs of network load balancers of the VPC targeted by the VPC link. The
     * network load balancers must be owned by the same AWS account of the API
     * owner.</p>
     */
    inline void SetTargetArns(const Aws::Vector<Aws::String>& value) { m_targetArns = value; }

    /**
     * <p>The ARNs of network load balancers of the VPC targeted by the VPC link. The
     * network load balancers must be owned by the same AWS account of the API
     * owner.</p>
     */
    inline void SetTargetArns(Aws::Vector<Aws::String>&& value) { m_targetArns = std::move(value); }

    /**
     * <p>The ARNs of network load balancers of the VPC targeted by the VPC link. The
     * network load balancers must be owned by the same AWS account of the API
     * owner.</p>
     */
    inline UpdateVpcLinkResult& WithTargetArns(const Aws::Vector<Aws::String>& value) { SetTargetArns(value); return *this;}

    /**
     * <p>The ARNs of network load balancers of the VPC targeted by the VPC link. The
     * network load balancers must be owned by the same AWS account of the API
     * owner.</p>
     */
    inline UpdateVpcLinkResult& WithTargetArns(Aws::Vector<Aws::String>&& value) { SetTargetArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of network load balancers of the VPC targeted by the VPC link. The
     * network load balancers must be owned by the same AWS account of the API
     * owner.</p>
     */
    inline UpdateVpcLinkResult& AddTargetArns(const Aws::String& value) { m_targetArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of network load balancers of the VPC targeted by the VPC link. The
     * network load balancers must be owned by the same AWS account of the API
     * owner.</p>
     */
    inline UpdateVpcLinkResult& AddTargetArns(Aws::String&& value) { m_targetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of network load balancers of the VPC targeted by the VPC link. The
     * network load balancers must be owned by the same AWS account of the API
     * owner.</p>
     */
    inline UpdateVpcLinkResult& AddTargetArns(const char* value) { m_targetArns.push_back(value); return *this; }


    /**
     * <p>The status of the VPC link. The valid values are <code>AVAILABLE</code>,
     * <code>PENDING</code>, <code>DELETING</code>, or <code>FAILED</code>. Deploying
     * an API will wait if the status is <code>PENDING</code> and will fail if the
     * status is <code>DELETING</code>. </p>
     */
    inline const VpcLinkStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the VPC link. The valid values are <code>AVAILABLE</code>,
     * <code>PENDING</code>, <code>DELETING</code>, or <code>FAILED</code>. Deploying
     * an API will wait if the status is <code>PENDING</code> and will fail if the
     * status is <code>DELETING</code>. </p>
     */
    inline void SetStatus(const VpcLinkStatus& value) { m_status = value; }

    /**
     * <p>The status of the VPC link. The valid values are <code>AVAILABLE</code>,
     * <code>PENDING</code>, <code>DELETING</code>, or <code>FAILED</code>. Deploying
     * an API will wait if the status is <code>PENDING</code> and will fail if the
     * status is <code>DELETING</code>. </p>
     */
    inline void SetStatus(VpcLinkStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the VPC link. The valid values are <code>AVAILABLE</code>,
     * <code>PENDING</code>, <code>DELETING</code>, or <code>FAILED</code>. Deploying
     * an API will wait if the status is <code>PENDING</code> and will fail if the
     * status is <code>DELETING</code>. </p>
     */
    inline UpdateVpcLinkResult& WithStatus(const VpcLinkStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPC link. The valid values are <code>AVAILABLE</code>,
     * <code>PENDING</code>, <code>DELETING</code>, or <code>FAILED</code>. Deploying
     * an API will wait if the status is <code>PENDING</code> and will fail if the
     * status is <code>DELETING</code>. </p>
     */
    inline UpdateVpcLinkResult& WithStatus(VpcLinkStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description about the VPC link status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A description about the VPC link status.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>A description about the VPC link status.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>A description about the VPC link status.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>A description about the VPC link status.</p>
     */
    inline UpdateVpcLinkResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A description about the VPC link status.</p>
     */
    inline UpdateVpcLinkResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A description about the VPC link status.</p>
     */
    inline UpdateVpcLinkResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_targetArns;

    VpcLinkStatus m_status;

    Aws::String m_statusMessage;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
