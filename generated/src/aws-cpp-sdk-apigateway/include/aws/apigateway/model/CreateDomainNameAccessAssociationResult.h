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
   * <p>Represents a domain name access association between an access association
   * source and a private custom domain name. With a domain name access association,
   * an access association source can invoke a private custom domain name while
   * isolated from the public internet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DomainNameAccessAssociation">AWS
   * API Reference</a></p>
   */
  class CreateDomainNameAccessAssociationResult
  {
  public:
    AWS_APIGATEWAY_API CreateDomainNameAccessAssociationResult() = default;
    AWS_APIGATEWAY_API CreateDomainNameAccessAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API CreateDomainNameAccessAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the domain name access association resource. </p>
     */
    inline const Aws::String& GetDomainNameAccessAssociationArn() const { return m_domainNameAccessAssociationArn; }
    template<typename DomainNameAccessAssociationArnT = Aws::String>
    void SetDomainNameAccessAssociationArn(DomainNameAccessAssociationArnT&& value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn = std::forward<DomainNameAccessAssociationArnT>(value); }
    template<typename DomainNameAccessAssociationArnT = Aws::String>
    CreateDomainNameAccessAssociationResult& WithDomainNameAccessAssociationArn(DomainNameAccessAssociationArnT&& value) { SetDomainNameAccessAssociationArn(std::forward<DomainNameAccessAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain name. </p>
     */
    inline const Aws::String& GetDomainNameArn() const { return m_domainNameArn; }
    template<typename DomainNameArnT = Aws::String>
    void SetDomainNameArn(DomainNameArnT&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::forward<DomainNameArnT>(value); }
    template<typename DomainNameArnT = Aws::String>
    CreateDomainNameAccessAssociationResult& WithDomainNameArn(DomainNameArnT&& value) { SetDomainNameArn(std::forward<DomainNameArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the domain name access association source. </p>
     */
    inline AccessAssociationSourceType GetAccessAssociationSourceType() const { return m_accessAssociationSourceType; }
    inline void SetAccessAssociationSourceType(AccessAssociationSourceType value) { m_accessAssociationSourceTypeHasBeenSet = true; m_accessAssociationSourceType = value; }
    inline CreateDomainNameAccessAssociationResult& WithAccessAssociationSourceType(AccessAssociationSourceType value) { SetAccessAssociationSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the domain name access association source. For a VPCE, the ARN
     * must be a VPC endpoint. </p>
     */
    inline const Aws::String& GetAccessAssociationSource() const { return m_accessAssociationSource; }
    template<typename AccessAssociationSourceT = Aws::String>
    void SetAccessAssociationSource(AccessAssociationSourceT&& value) { m_accessAssociationSourceHasBeenSet = true; m_accessAssociationSource = std::forward<AccessAssociationSourceT>(value); }
    template<typename AccessAssociationSourceT = Aws::String>
    CreateDomainNameAccessAssociationResult& WithAccessAssociationSource(AccessAssociationSourceT&& value) { SetAccessAssociationSource(std::forward<AccessAssociationSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The collection of tags. Each tag element is associated with a given
     * resource. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDomainNameAccessAssociationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDomainNameAccessAssociationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDomainNameAccessAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
