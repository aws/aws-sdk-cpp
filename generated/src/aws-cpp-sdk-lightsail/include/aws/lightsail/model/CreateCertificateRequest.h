/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateCertificateRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCertificate"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the certificate.</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    CreateCertificateRequest& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name (<code>example.com</code>) for the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateCertificateRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the alternate domains
     * (<code>example2.com</code>) and subdomains (<code>blog.example.com</code>) for
     * the certificate.</p> <p>You can specify a maximum of nine alternate domains (in
     * addition to the primary domain name).</p> <p>Wildcard domain entries
     * (<code>*.example.com</code>) are not supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const { return m_subjectAlternativeNames; }
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    void SetSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::forward<SubjectAlternativeNamesT>(value); }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    CreateCertificateRequest& WithSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { SetSubjectAlternativeNames(std::forward<SubjectAlternativeNamesT>(value)); return *this;}
    template<typename SubjectAlternativeNamesT = Aws::String>
    CreateCertificateRequest& AddSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.emplace_back(std::forward<SubjectAlternativeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the certificate during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCertificateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCertificateRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
