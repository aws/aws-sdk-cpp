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
    AWS_APIGATEWAY_API DomainNameAccessAssociation();
    AWS_APIGATEWAY_API DomainNameAccessAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API DomainNameAccessAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the domain name access association resource. </p>
     */
    inline const Aws::String& GetDomainNameAccessAssociationArn() const{ return m_domainNameAccessAssociationArn; }
    inline bool DomainNameAccessAssociationArnHasBeenSet() const { return m_domainNameAccessAssociationArnHasBeenSet; }
    inline void SetDomainNameAccessAssociationArn(const Aws::String& value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn = value; }
    inline void SetDomainNameAccessAssociationArn(Aws::String&& value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn = std::move(value); }
    inline void SetDomainNameAccessAssociationArn(const char* value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn.assign(value); }
    inline DomainNameAccessAssociation& WithDomainNameAccessAssociationArn(const Aws::String& value) { SetDomainNameAccessAssociationArn(value); return *this;}
    inline DomainNameAccessAssociation& WithDomainNameAccessAssociationArn(Aws::String&& value) { SetDomainNameAccessAssociationArn(std::move(value)); return *this;}
    inline DomainNameAccessAssociation& WithDomainNameAccessAssociationArn(const char* value) { SetDomainNameAccessAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain name. </p>
     */
    inline const Aws::String& GetDomainNameArn() const{ return m_domainNameArn; }
    inline bool DomainNameArnHasBeenSet() const { return m_domainNameArnHasBeenSet; }
    inline void SetDomainNameArn(const Aws::String& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = value; }
    inline void SetDomainNameArn(Aws::String&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::move(value); }
    inline void SetDomainNameArn(const char* value) { m_domainNameArnHasBeenSet = true; m_domainNameArn.assign(value); }
    inline DomainNameAccessAssociation& WithDomainNameArn(const Aws::String& value) { SetDomainNameArn(value); return *this;}
    inline DomainNameAccessAssociation& WithDomainNameArn(Aws::String&& value) { SetDomainNameArn(std::move(value)); return *this;}
    inline DomainNameAccessAssociation& WithDomainNameArn(const char* value) { SetDomainNameArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the domain name access association source. </p>
     */
    inline const AccessAssociationSourceType& GetAccessAssociationSourceType() const{ return m_accessAssociationSourceType; }
    inline bool AccessAssociationSourceTypeHasBeenSet() const { return m_accessAssociationSourceTypeHasBeenSet; }
    inline void SetAccessAssociationSourceType(const AccessAssociationSourceType& value) { m_accessAssociationSourceTypeHasBeenSet = true; m_accessAssociationSourceType = value; }
    inline void SetAccessAssociationSourceType(AccessAssociationSourceType&& value) { m_accessAssociationSourceTypeHasBeenSet = true; m_accessAssociationSourceType = std::move(value); }
    inline DomainNameAccessAssociation& WithAccessAssociationSourceType(const AccessAssociationSourceType& value) { SetAccessAssociationSourceType(value); return *this;}
    inline DomainNameAccessAssociation& WithAccessAssociationSourceType(AccessAssociationSourceType&& value) { SetAccessAssociationSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the domain name access association source. For a VPCE, the ARN
     * must be a VPC endpoint. </p>
     */
    inline const Aws::String& GetAccessAssociationSource() const{ return m_accessAssociationSource; }
    inline bool AccessAssociationSourceHasBeenSet() const { return m_accessAssociationSourceHasBeenSet; }
    inline void SetAccessAssociationSource(const Aws::String& value) { m_accessAssociationSourceHasBeenSet = true; m_accessAssociationSource = value; }
    inline void SetAccessAssociationSource(Aws::String&& value) { m_accessAssociationSourceHasBeenSet = true; m_accessAssociationSource = std::move(value); }
    inline void SetAccessAssociationSource(const char* value) { m_accessAssociationSourceHasBeenSet = true; m_accessAssociationSource.assign(value); }
    inline DomainNameAccessAssociation& WithAccessAssociationSource(const Aws::String& value) { SetAccessAssociationSource(value); return *this;}
    inline DomainNameAccessAssociation& WithAccessAssociationSource(Aws::String&& value) { SetAccessAssociationSource(std::move(value)); return *this;}
    inline DomainNameAccessAssociation& WithAccessAssociationSource(const char* value) { SetAccessAssociationSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The collection of tags. Each tag element is associated with a given
     * resource. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DomainNameAccessAssociation& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DomainNameAccessAssociation& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DomainNameAccessAssociation& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline DomainNameAccessAssociation& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DomainNameAccessAssociation& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DomainNameAccessAssociation& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DomainNameAccessAssociation& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DomainNameAccessAssociation& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DomainNameAccessAssociation& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline DomainNameAccessAssociation& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DomainNameAccessAssociation& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DomainNameAccessAssociation& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainNameAccessAssociationArn;
    bool m_domainNameAccessAssociationArnHasBeenSet = false;

    Aws::String m_domainNameArn;
    bool m_domainNameArnHasBeenSet = false;

    AccessAssociationSourceType m_accessAssociationSourceType;
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
