/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/PrivateDnsNamespaceProperties.h>
#include <aws/servicediscovery/model/Tag.h>
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
  class CreatePrivateDnsNamespaceRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API CreatePrivateDnsNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePrivateDnsNamespace"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, Cloud Map automatically creates an Amazon Route 53 private hosted
     * zone that has the same name as the namespace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, Cloud Map automatically creates an Amazon Route 53 private hosted
     * zone that has the same name as the namespace.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, Cloud Map automatically creates an Amazon Route 53 private hosted
     * zone that has the same name as the namespace.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, Cloud Map automatically creates an Amazon Route 53 private hosted
     * zone that has the same name as the namespace.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, Cloud Map automatically creates an Amazon Route 53 private hosted
     * zone that has the same name as the namespace.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, Cloud Map automatically creates an Amazon Route 53 private hosted
     * zone that has the same name as the namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, Cloud Map automatically creates an Amazon Route 53 private hosted
     * zone that has the same name as the namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you want to assign to this namespace. When you create a private
     * DNS namespace, Cloud Map automatically creates an Amazon Route 53 private hosted
     * zone that has the same name as the namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePrivateDnsNamespace</code> requests to be retried without the risk
     * of running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
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


    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Properties for the private DNS namespace.</p>
     */
    inline const PrivateDnsNamespaceProperties& GetProperties() const{ return m_properties; }

    /**
     * <p>Properties for the private DNS namespace.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>Properties for the private DNS namespace.</p>
     */
    inline void SetProperties(const PrivateDnsNamespaceProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>Properties for the private DNS namespace.</p>
     */
    inline void SetProperties(PrivateDnsNamespaceProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>Properties for the private DNS namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithProperties(const PrivateDnsNamespaceProperties& value) { SetProperties(value); return *this;}

    /**
     * <p>Properties for the private DNS namespace.</p>
     */
    inline CreatePrivateDnsNamespaceRequest& WithProperties(PrivateDnsNamespaceProperties&& value) { SetProperties(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_vpc;
    bool m_vpcHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    PrivateDnsNamespaceProperties m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
