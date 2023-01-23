/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/FindingPublishingFrequency.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/MacieStatus.h>
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
namespace Macie2
{
namespace Model
{
  class GetMacieSessionResult
  {
  public:
    AWS_MACIE2_API GetMacieSessionResult();
    AWS_MACIE2_API GetMacieSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetMacieSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * account was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * account was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * account was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * account was created.</p>
     */
    inline GetMacieSessionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * account was created.</p>
     */
    inline GetMacieSessionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The frequency with which Amazon Macie publishes updates to policy findings
     * for the account. This includes publishing updates to Security Hub and Amazon
     * EventBridge (formerly Amazon CloudWatch Events).</p>
     */
    inline const FindingPublishingFrequency& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    /**
     * <p>The frequency with which Amazon Macie publishes updates to policy findings
     * for the account. This includes publishing updates to Security Hub and Amazon
     * EventBridge (formerly Amazon CloudWatch Events).</p>
     */
    inline void SetFindingPublishingFrequency(const FindingPublishingFrequency& value) { m_findingPublishingFrequency = value; }

    /**
     * <p>The frequency with which Amazon Macie publishes updates to policy findings
     * for the account. This includes publishing updates to Security Hub and Amazon
     * EventBridge (formerly Amazon CloudWatch Events).</p>
     */
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency&& value) { m_findingPublishingFrequency = std::move(value); }

    /**
     * <p>The frequency with which Amazon Macie publishes updates to policy findings
     * for the account. This includes publishing updates to Security Hub and Amazon
     * EventBridge (formerly Amazon CloudWatch Events).</p>
     */
    inline GetMacieSessionResult& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * <p>The frequency with which Amazon Macie publishes updates to policy findings
     * for the account. This includes publishing updates to Security Hub and Amazon
     * EventBridge (formerly Amazon CloudWatch Events).</p>
     */
    inline GetMacieSessionResult& WithFindingPublishingFrequency(FindingPublishingFrequency&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that allows Amazon
     * Macie to monitor and analyze data in Amazon Web Services resources for the
     * account.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that allows Amazon
     * Macie to monitor and analyze data in Amazon Web Services resources for the
     * account.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that allows Amazon
     * Macie to monitor and analyze data in Amazon Web Services resources for the
     * account.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that allows Amazon
     * Macie to monitor and analyze data in Amazon Web Services resources for the
     * account.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that allows Amazon
     * Macie to monitor and analyze data in Amazon Web Services resources for the
     * account.</p>
     */
    inline GetMacieSessionResult& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that allows Amazon
     * Macie to monitor and analyze data in Amazon Web Services resources for the
     * account.</p>
     */
    inline GetMacieSessionResult& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that allows Amazon
     * Macie to monitor and analyze data in Amazon Web Services resources for the
     * account.</p>
     */
    inline GetMacieSessionResult& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The current status of the Amazon Macie account. Possible values are: PAUSED,
     * the account is enabled but all Macie activities are suspended (paused) for the
     * account; and, ENABLED, the account is enabled and all Macie activities are
     * enabled for the account.</p>
     */
    inline const MacieStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Amazon Macie account. Possible values are: PAUSED,
     * the account is enabled but all Macie activities are suspended (paused) for the
     * account; and, ENABLED, the account is enabled and all Macie activities are
     * enabled for the account.</p>
     */
    inline void SetStatus(const MacieStatus& value) { m_status = value; }

    /**
     * <p>The current status of the Amazon Macie account. Possible values are: PAUSED,
     * the account is enabled but all Macie activities are suspended (paused) for the
     * account; and, ENABLED, the account is enabled and all Macie activities are
     * enabled for the account.</p>
     */
    inline void SetStatus(MacieStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the Amazon Macie account. Possible values are: PAUSED,
     * the account is enabled but all Macie activities are suspended (paused) for the
     * account; and, ENABLED, the account is enabled and all Macie activities are
     * enabled for the account.</p>
     */
    inline GetMacieSessionResult& WithStatus(const MacieStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Amazon Macie account. Possible values are: PAUSED,
     * the account is enabled but all Macie activities are suspended (paused) for the
     * account; and, ENABLED, the account is enabled and all Macie activities are
     * enabled for the account.</p>
     */
    inline GetMacieSessionResult& WithStatus(MacieStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the Amazon Macie account.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the Amazon Macie account.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the Amazon Macie account.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the Amazon Macie account.</p>
     */
    inline GetMacieSessionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the Amazon Macie account.</p>
     */
    inline GetMacieSessionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    FindingPublishingFrequency m_findingPublishingFrequency;

    Aws::String m_serviceRole;

    MacieStatus m_status;

    Aws::Utils::DateTime m_updatedAt;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
