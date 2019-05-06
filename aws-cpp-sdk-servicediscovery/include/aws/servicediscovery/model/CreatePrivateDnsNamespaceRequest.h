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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class AWS_SERVICEDISCOVERY_API CreatePrivateDnsNamespaceRequest : public ServiceDiscoveryRequest
  {
  public:
    CreatePrivateDnsNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePrivateDnsNamespace"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, AWS Cloud Map automatically creates an Amazon Route 53 private
     * hosted zone that has the same name as the namespace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, AWS Cloud Map automatically creates an Amazon Route 53 private
     * hosted zone that has the same name as the namespace.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, AWS Cloud Map automatically creates an Amazon Route 53 private
     * hosted zone that has the same name as the namespace.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, AWS Cloud Map automatically creates an Amazon Route 53 private
     * hosted zone that has the same name as the namespace.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, AWS Cloud Map automatically creates an Amazon Route 53 private
     * hosted zone that has the same name as the namespace.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, AWS Cloud Map automatically creates an Amazon Route 53 private
     * hosted zone that has the same name as the namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, AWS Cloud Map automatically creates an Amazon Route 53 private
     * hosted zone that has the same name as the namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, AWS Cloud Map automatically creates an Amazon Route 53 private
     * hosted zone that has the same name as the namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of executing the operation twice. <code>CreatorRequestId</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of executing the operation twice. <code>CreatorRequestId</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of executing the operation twice. <code>CreatorRequestId</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of executing the operation twice. <code>CreatorRequestId</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of executing the operation twice. <code>CreatorRequestId</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of executing the operation twice. <code>CreatorRequestId</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of executing the operation twice. <code>CreatorRequestId</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of executing the operation twice. <code>CreatorRequestId</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A description for the namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon VPC that you want to associate the namespace with.</p>
     */
    inline const Aws::String& GetVpc() const{ return m_vpc; }

    /**
     * <p>The ID of the Amazon VPC that you want to associate the namespace with.</p>
     */
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }

    /**
     * <p>The ID of the Amazon VPC that you want to associate the namespace with.</p>
     */
    inline void SetVpc(const Aws::String& value) { m_vpcHasBeenSet = true; m_vpc = value; }

    /**
     * <p>The ID of the Amazon VPC that you want to associate the namespace with.</p>
     */
    inline void SetVpc(Aws::String&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }

    /**
     * <p>The ID of the Amazon VPC that you want to associate the namespace with.</p>
     */
    inline void SetVpc(const char* value) { m_vpcHasBeenSet = true; m_vpc.assign(value); }

    /**
     * <p>The ID of the Amazon VPC that you want to associate the namespace with.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithVpc(const Aws::String& value) { SetVpc(value); return *this;}

    /**
     * <p>The ID of the Amazon VPC that you want to associate the namespace with.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithVpc(Aws::String&& value) { SetVpc(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon VPC that you want to associate the namespace with.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithVpc(const char* value) { SetVpc(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_vpc;
    bool m_vpcHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
