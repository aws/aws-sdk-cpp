/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/AccessAssociationSourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   */
  class CreateDomainNameAccessAssociationRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateDomainNameAccessAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomainNameAccessAssociation"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ARN of the domain name. </p>
     */
    inline const Aws::String& GetDomainNameArn() const{ return m_domainNameArn; }
    inline bool DomainNameArnHasBeenSet() const { return m_domainNameArnHasBeenSet; }
    inline void SetDomainNameArn(const Aws::String& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = value; }
    inline void SetDomainNameArn(Aws::String&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::move(value); }
    inline void SetDomainNameArn(const char* value) { m_domainNameArnHasBeenSet = true; m_domainNameArn.assign(value); }
    inline CreateDomainNameAccessAssociationRequest& WithDomainNameArn(const Aws::String& value) { SetDomainNameArn(value); return *this;}
    inline CreateDomainNameAccessAssociationRequest& WithDomainNameArn(Aws::String&& value) { SetDomainNameArn(std::move(value)); return *this;}
    inline CreateDomainNameAccessAssociationRequest& WithDomainNameArn(const char* value) { SetDomainNameArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the domain name access association source. </p>
     */
    inline const AccessAssociationSourceType& GetAccessAssociationSourceType() const{ return m_accessAssociationSourceType; }
    inline bool AccessAssociationSourceTypeHasBeenSet() const { return m_accessAssociationSourceTypeHasBeenSet; }
    inline void SetAccessAssociationSourceType(const AccessAssociationSourceType& value) { m_accessAssociationSourceTypeHasBeenSet = true; m_accessAssociationSourceType = value; }
    inline void SetAccessAssociationSourceType(AccessAssociationSourceType&& value) { m_accessAssociationSourceTypeHasBeenSet = true; m_accessAssociationSourceType = std::move(value); }
    inline CreateDomainNameAccessAssociationRequest& WithAccessAssociationSourceType(const AccessAssociationSourceType& value) { SetAccessAssociationSourceType(value); return *this;}
    inline CreateDomainNameAccessAssociationRequest& WithAccessAssociationSourceType(AccessAssociationSourceType&& value) { SetAccessAssociationSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the domain name access association source. For a VPCE, the
     * value is the VPC endpoint ID. </p>
     */
    inline const Aws::String& GetAccessAssociationSource() const{ return m_accessAssociationSource; }
    inline bool AccessAssociationSourceHasBeenSet() const { return m_accessAssociationSourceHasBeenSet; }
    inline void SetAccessAssociationSource(const Aws::String& value) { m_accessAssociationSourceHasBeenSet = true; m_accessAssociationSource = value; }
    inline void SetAccessAssociationSource(Aws::String&& value) { m_accessAssociationSourceHasBeenSet = true; m_accessAssociationSource = std::move(value); }
    inline void SetAccessAssociationSource(const char* value) { m_accessAssociationSourceHasBeenSet = true; m_accessAssociationSource.assign(value); }
    inline CreateDomainNameAccessAssociationRequest& WithAccessAssociationSource(const Aws::String& value) { SetAccessAssociationSource(value); return *this;}
    inline CreateDomainNameAccessAssociationRequest& WithAccessAssociationSource(Aws::String&& value) { SetAccessAssociationSource(std::move(value)); return *this;}
    inline CreateDomainNameAccessAssociationRequest& WithAccessAssociationSource(const char* value) { SetAccessAssociationSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDomainNameAccessAssociationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDomainNameAccessAssociationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDomainNameAccessAssociationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateDomainNameAccessAssociationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainNameAccessAssociationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainNameAccessAssociationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDomainNameAccessAssociationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainNameAccessAssociationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainNameAccessAssociationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_domainNameArn;
    bool m_domainNameArnHasBeenSet = false;

    AccessAssociationSourceType m_accessAssociationSourceType;
    bool m_accessAssociationSourceTypeHasBeenSet = false;

    Aws::String m_accessAssociationSource;
    bool m_accessAssociationSourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
