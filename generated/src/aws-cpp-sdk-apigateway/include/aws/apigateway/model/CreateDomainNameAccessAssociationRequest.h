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
    AWS_APIGATEWAY_API CreateDomainNameAccessAssociationRequest() = default;

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
    inline const Aws::String& GetDomainNameArn() const { return m_domainNameArn; }
    inline bool DomainNameArnHasBeenSet() const { return m_domainNameArnHasBeenSet; }
    template<typename DomainNameArnT = Aws::String>
    void SetDomainNameArn(DomainNameArnT&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::forward<DomainNameArnT>(value); }
    template<typename DomainNameArnT = Aws::String>
    CreateDomainNameAccessAssociationRequest& WithDomainNameArn(DomainNameArnT&& value) { SetDomainNameArn(std::forward<DomainNameArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the domain name access association source. </p>
     */
    inline AccessAssociationSourceType GetAccessAssociationSourceType() const { return m_accessAssociationSourceType; }
    inline bool AccessAssociationSourceTypeHasBeenSet() const { return m_accessAssociationSourceTypeHasBeenSet; }
    inline void SetAccessAssociationSourceType(AccessAssociationSourceType value) { m_accessAssociationSourceTypeHasBeenSet = true; m_accessAssociationSourceType = value; }
    inline CreateDomainNameAccessAssociationRequest& WithAccessAssociationSourceType(AccessAssociationSourceType value) { SetAccessAssociationSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the domain name access association source. For a VPCE, the
     * value is the VPC endpoint ID. </p>
     */
    inline const Aws::String& GetAccessAssociationSource() const { return m_accessAssociationSource; }
    inline bool AccessAssociationSourceHasBeenSet() const { return m_accessAssociationSourceHasBeenSet; }
    template<typename AccessAssociationSourceT = Aws::String>
    void SetAccessAssociationSource(AccessAssociationSourceT&& value) { m_accessAssociationSourceHasBeenSet = true; m_accessAssociationSource = std::forward<AccessAssociationSourceT>(value); }
    template<typename AccessAssociationSourceT = Aws::String>
    CreateDomainNameAccessAssociationRequest& WithAccessAssociationSource(AccessAssociationSourceT&& value) { SetAccessAssociationSource(std::forward<AccessAssociationSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDomainNameAccessAssociationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDomainNameAccessAssociationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_domainNameArn;
    bool m_domainNameArnHasBeenSet = false;

    AccessAssociationSourceType m_accessAssociationSourceType{AccessAssociationSourceType::NOT_SET};
    bool m_accessAssociationSourceTypeHasBeenSet = false;

    Aws::String m_accessAssociationSource;
    bool m_accessAssociationSourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
