/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceRecord.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the domain validation records of an Amazon Lightsail SSL/TLS
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DomainValidationRecord">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API DomainValidationRecord
  {
  public:
    DomainValidationRecord();
    DomainValidationRecord(Aws::Utils::Json::JsonView jsonValue);
    DomainValidationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline DomainValidationRecord& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline DomainValidationRecord& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline DomainValidationRecord& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>An object that describes the DNS records to add to your domain's DNS to
     * validate it for the certificate.</p>
     */
    inline const ResourceRecord& GetResourceRecord() const{ return m_resourceRecord; }

    /**
     * <p>An object that describes the DNS records to add to your domain's DNS to
     * validate it for the certificate.</p>
     */
    inline bool ResourceRecordHasBeenSet() const { return m_resourceRecordHasBeenSet; }

    /**
     * <p>An object that describes the DNS records to add to your domain's DNS to
     * validate it for the certificate.</p>
     */
    inline void SetResourceRecord(const ResourceRecord& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = value; }

    /**
     * <p>An object that describes the DNS records to add to your domain's DNS to
     * validate it for the certificate.</p>
     */
    inline void SetResourceRecord(ResourceRecord&& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = std::move(value); }

    /**
     * <p>An object that describes the DNS records to add to your domain's DNS to
     * validate it for the certificate.</p>
     */
    inline DomainValidationRecord& WithResourceRecord(const ResourceRecord& value) { SetResourceRecord(value); return *this;}

    /**
     * <p>An object that describes the DNS records to add to your domain's DNS to
     * validate it for the certificate.</p>
     */
    inline DomainValidationRecord& WithResourceRecord(ResourceRecord&& value) { SetResourceRecord(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    ResourceRecord m_resourceRecord;
    bool m_resourceRecordHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
