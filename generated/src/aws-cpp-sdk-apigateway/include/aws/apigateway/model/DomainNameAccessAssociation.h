/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/AccessAssociationSourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a domain name access association between an access association
   * source and a private custom domain name. With a domain name access association,
   * an access association source can invoke a private custom domain name while
   * isolated from the public internet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DomainNameAccessAssociation">AWS
   * API Reference</a></p>
   */
  class DomainNameAccessAssociation
  {
  public:
    AWS_APIGATEWAY_API DomainNameAccessAssociation() = default;
    AWS_APIGATEWAY_API DomainNameAccessAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API DomainNameAccessAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the domain name access association resource. </p>
     */
    inline const Aws::String& GetDomainNameAccessAssociationArn() const { return m_domainNameAccessAssociationArn; }
    inline bool DomainNameAccessAssociationArnHasBeenSet() const { return m_domainNameAccessAssociationArnHasBeenSet; }
    template<typename DomainNameAccessAssociationArnT = Aws::String>
    void SetDomainNameAccessAssociationArn(DomainNameAccessAssociationArnT&& value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn = std::forward<DomainNameAccessAssociationArnT>(value); }
    template<typename DomainNameAccessAssociationArnT = Aws::String>
    DomainNameAccessAssociation& WithDomainNameAccessAssociationArn(DomainNameAccessAssociationArnT&& value) { SetDomainNameAccessAssociationArn(std::forward<DomainNameAccessAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain name. </p>
     */
    inline const Aws::String& GetDomainNameArn() const { return m_domainNameArn; }
    inline bool DomainNameArnHasBeenSet() const { return m_domainNameArnHasBeenSet; }
    template<typename DomainNameArnT = Aws::String>
    void SetDomainNameArn(DomainNameArnT&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::forward<DomainNameArnT>(value); }
    template<typename DomainNameArnT = Aws::String>
    DomainNameAccessAssociation& WithDomainNameArn(DomainNameArnT&& value) { SetDomainNameArn(std::forward<DomainNameArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the domain name access association source. </p>
     */
    inline AccessAssociationSourceType GetAccessAssociationSourceType() const { return m_accessAssociationSourceType; }
    inline bool AccessAssociationSourceTypeHasBeenSet() const { return m_accessAssociationSourceTypeHasBeenSet; }
    inline void SetAccessAssociationSourceType(AccessAssociationSourceType value) { m_accessAssociationSourceTypeHasBeenSet = true; m_accessAssociationSourceType = value; }
    inline DomainNameAccessAssociation& WithAccessAssociationSourceType(AccessAssociationSourceType value) { SetAccessAssociationSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the domain name access association source. For a VPCE, the ARN
     * must be a VPC endpoint. </p>
     */
    inline const Aws::String& GetAccessAssociationSource() const { return m_accessAssociationSource; }
    inline bool AccessAssociationSourceHasBeenSet() const { return m_accessAssociationSourceHasBeenSet; }
    template<typename AccessAssociationSourceT = Aws::String>
    void SetAccessAssociationSource(AccessAssociationSourceT&& value) { m_accessAssociationSourceHasBeenSet = true; m_accessAssociationSource = std::forward<AccessAssociationSourceT>(value); }
    template<typename AccessAssociationSourceT = Aws::String>
    DomainNameAccessAssociation& WithAccessAssociationSource(AccessAssociationSourceT&& value) { SetAccessAssociationSource(std::forward<AccessAssociationSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The collection of tags. Each tag element is associated with a given
     * resource. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DomainNameAccessAssociation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DomainNameAccessAssociation& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DomainNameAccessAssociation& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainNameAccessAssociationArn;
    bool m_domainNameAccessAssociationArnHasBeenSet = false;

    Aws::String m_domainNameArn;
    bool m_domainNameArnHasBeenSet = false;

    AccessAssociationSourceType m_accessAssociationSourceType{AccessAssociationSourceType::NOT_SET};
    bool m_accessAssociationSourceTypeHasBeenSet = false;

    Aws::String m_accessAssociationSource;
    bool m_accessAssociationSourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
