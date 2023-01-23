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
    AWS_LIGHTSAIL_API CreateCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCertificate"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the certificate.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name for the certificate.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The name for the certificate.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name for the certificate.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The name for the certificate.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name for the certificate.</p>
     */
    inline CreateCertificateRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name for the certificate.</p>
     */
    inline CreateCertificateRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name for the certificate.</p>
     */
    inline CreateCertificateRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>The domain name (e.g., <code>example.com</code>) for the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for the certificate.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for the certificate.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for the certificate.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for the certificate.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for the certificate.</p>
     */
    inline CreateCertificateRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for the certificate.</p>
     */
    inline CreateCertificateRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for the certificate.</p>
     */
    inline CreateCertificateRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * for the certificate.</p> <p>You can specify a maximum of nine alternate domains
     * (in addition to the primary domain name).</p> <p>Wildcard domain entries (e.g.,
     * <code>*.example.com</code>) are not supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * for the certificate.</p> <p>You can specify a maximum of nine alternate domains
     * (in addition to the primary domain name).</p> <p>Wildcard domain entries (e.g.,
     * <code>*.example.com</code>) are not supported.</p>
     */
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * for the certificate.</p> <p>You can specify a maximum of nine alternate domains
     * (in addition to the primary domain name).</p> <p>Wildcard domain entries (e.g.,
     * <code>*.example.com</code>) are not supported.</p>
     */
    inline void SetSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * for the certificate.</p> <p>You can specify a maximum of nine alternate domains
     * (in addition to the primary domain name).</p> <p>Wildcard domain entries (e.g.,
     * <code>*.example.com</code>) are not supported.</p>
     */
    inline void SetSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * for the certificate.</p> <p>You can specify a maximum of nine alternate domains
     * (in addition to the primary domain name).</p> <p>Wildcard domain entries (e.g.,
     * <code>*.example.com</code>) are not supported.</p>
     */
    inline CreateCertificateRequest& WithSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * for the certificate.</p> <p>You can specify a maximum of nine alternate domains
     * (in addition to the primary domain name).</p> <p>Wildcard domain entries (e.g.,
     * <code>*.example.com</code>) are not supported.</p>
     */
    inline CreateCertificateRequest& WithSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * for the certificate.</p> <p>You can specify a maximum of nine alternate domains
     * (in addition to the primary domain name).</p> <p>Wildcard domain entries (e.g.,
     * <code>*.example.com</code>) are not supported.</p>
     */
    inline CreateCertificateRequest& AddSubjectAlternativeNames(const Aws::String& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * for the certificate.</p> <p>You can specify a maximum of nine alternate domains
     * (in addition to the primary domain name).</p> <p>Wildcard domain entries (e.g.,
     * <code>*.example.com</code>) are not supported.</p>
     */
    inline CreateCertificateRequest& AddSubjectAlternativeNames(Aws::String&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * for the certificate.</p> <p>You can specify a maximum of nine alternate domains
     * (in addition to the primary domain name).</p> <p>Wildcard domain entries (e.g.,
     * <code>*.example.com</code>) are not supported.</p>
     */
    inline CreateCertificateRequest& AddSubjectAlternativeNames(const char* value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }


    /**
     * <p>The tag keys and optional values to add to the certificate during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the certificate during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the certificate during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the certificate during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the certificate during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateCertificateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the certificate during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateCertificateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the certificate during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateCertificateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the certificate during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateCertificateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
