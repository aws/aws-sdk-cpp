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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/worklink/model/DomainStatus.h>
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
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API DescribeDomainResult
  {
  public:
    DescribeDomainResult();
    DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline DescribeDomainResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DescribeDomainResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DescribeDomainResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The name to display.</p>
     */
    inline DescribeDomainResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline DescribeDomainResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline DescribeDomainResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The time that the domain was added.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the domain was added.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The time that the domain was added.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The time that the domain was added.</p>
     */
    inline DescribeDomainResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the domain was added.</p>
     */
    inline DescribeDomainResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The current state for the domain.</p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    /**
     * <p>The current state for the domain.</p>
     */
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatus = value; }

    /**
     * <p>The current state for the domain.</p>
     */
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatus = std::move(value); }

    /**
     * <p>The current state for the domain.</p>
     */
    inline DescribeDomainResult& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}

    /**
     * <p>The current state for the domain.</p>
     */
    inline DescribeDomainResult& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline const Aws::String& GetAcmCertificateArn() const{ return m_acmCertificateArn; }

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline void SetAcmCertificateArn(const Aws::String& value) { m_acmCertificateArn = value; }

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline void SetAcmCertificateArn(Aws::String&& value) { m_acmCertificateArn = std::move(value); }

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline void SetAcmCertificateArn(const char* value) { m_acmCertificateArn.assign(value); }

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline DescribeDomainResult& WithAcmCertificateArn(const Aws::String& value) { SetAcmCertificateArn(value); return *this;}

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline DescribeDomainResult& WithAcmCertificateArn(Aws::String&& value) { SetAcmCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline DescribeDomainResult& WithAcmCertificateArn(const char* value) { SetAcmCertificateArn(value); return *this;}

  private:

    Aws::String m_domainName;

    Aws::String m_displayName;

    Aws::Utils::DateTime m_createdTime;

    DomainStatus m_domainStatus;

    Aws::String m_acmCertificateArn;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
