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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/ServiceUpdateSeverity.h>
#include <aws/elasticache/model/ServiceUpdateStatus.h>
#include <aws/elasticache/model/ServiceUpdateType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>An update that you can apply to your Redis clusters.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ServiceUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API ServiceUpdate
  {
  public:
    ServiceUpdate();
    ServiceUpdate(const Aws::Utils::Xml::XmlNode& xmlNode);
    ServiceUpdate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}


    /**
     * <p>The date when the service update is initially available</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateReleaseDate() const{ return m_serviceUpdateReleaseDate; }

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline bool ServiceUpdateReleaseDateHasBeenSet() const { return m_serviceUpdateReleaseDateHasBeenSet; }

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline void SetServiceUpdateReleaseDate(const Aws::Utils::DateTime& value) { m_serviceUpdateReleaseDateHasBeenSet = true; m_serviceUpdateReleaseDate = value; }

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline void SetServiceUpdateReleaseDate(Aws::Utils::DateTime&& value) { m_serviceUpdateReleaseDateHasBeenSet = true; m_serviceUpdateReleaseDate = std::move(value); }

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline ServiceUpdate& WithServiceUpdateReleaseDate(const Aws::Utils::DateTime& value) { SetServiceUpdateReleaseDate(value); return *this;}

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline ServiceUpdate& WithServiceUpdateReleaseDate(Aws::Utils::DateTime&& value) { SetServiceUpdateReleaseDate(std::move(value)); return *this;}


    /**
     * <p>The date after which the service update is no longer available</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateEndDate() const{ return m_serviceUpdateEndDate; }

    /**
     * <p>The date after which the service update is no longer available</p>
     */
    inline bool ServiceUpdateEndDateHasBeenSet() const { return m_serviceUpdateEndDateHasBeenSet; }

    /**
     * <p>The date after which the service update is no longer available</p>
     */
    inline void SetServiceUpdateEndDate(const Aws::Utils::DateTime& value) { m_serviceUpdateEndDateHasBeenSet = true; m_serviceUpdateEndDate = value; }

    /**
     * <p>The date after which the service update is no longer available</p>
     */
    inline void SetServiceUpdateEndDate(Aws::Utils::DateTime&& value) { m_serviceUpdateEndDateHasBeenSet = true; m_serviceUpdateEndDate = std::move(value); }

    /**
     * <p>The date after which the service update is no longer available</p>
     */
    inline ServiceUpdate& WithServiceUpdateEndDate(const Aws::Utils::DateTime& value) { SetServiceUpdateEndDate(value); return *this;}

    /**
     * <p>The date after which the service update is no longer available</p>
     */
    inline ServiceUpdate& WithServiceUpdateEndDate(Aws::Utils::DateTime&& value) { SetServiceUpdateEndDate(std::move(value)); return *this;}


    /**
     * <p>The severity of the service update</p>
     */
    inline const ServiceUpdateSeverity& GetServiceUpdateSeverity() const{ return m_serviceUpdateSeverity; }

    /**
     * <p>The severity of the service update</p>
     */
    inline bool ServiceUpdateSeverityHasBeenSet() const { return m_serviceUpdateSeverityHasBeenSet; }

    /**
     * <p>The severity of the service update</p>
     */
    inline void SetServiceUpdateSeverity(const ServiceUpdateSeverity& value) { m_serviceUpdateSeverityHasBeenSet = true; m_serviceUpdateSeverity = value; }

    /**
     * <p>The severity of the service update</p>
     */
    inline void SetServiceUpdateSeverity(ServiceUpdateSeverity&& value) { m_serviceUpdateSeverityHasBeenSet = true; m_serviceUpdateSeverity = std::move(value); }

    /**
     * <p>The severity of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateSeverity(const ServiceUpdateSeverity& value) { SetServiceUpdateSeverity(value); return *this;}

    /**
     * <p>The severity of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateSeverity(ServiceUpdateSeverity&& value) { SetServiceUpdateSeverity(std::move(value)); return *this;}


    /**
     * <p>The recommendend date to apply the service update in order to ensure
     * compliance. For information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateRecommendedApplyByDate() const{ return m_serviceUpdateRecommendedApplyByDate; }

    /**
     * <p>The recommendend date to apply the service update in order to ensure
     * compliance. For information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline bool ServiceUpdateRecommendedApplyByDateHasBeenSet() const { return m_serviceUpdateRecommendedApplyByDateHasBeenSet; }

    /**
     * <p>The recommendend date to apply the service update in order to ensure
     * compliance. For information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline void SetServiceUpdateRecommendedApplyByDate(const Aws::Utils::DateTime& value) { m_serviceUpdateRecommendedApplyByDateHasBeenSet = true; m_serviceUpdateRecommendedApplyByDate = value; }

    /**
     * <p>The recommendend date to apply the service update in order to ensure
     * compliance. For information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline void SetServiceUpdateRecommendedApplyByDate(Aws::Utils::DateTime&& value) { m_serviceUpdateRecommendedApplyByDateHasBeenSet = true; m_serviceUpdateRecommendedApplyByDate = std::move(value); }

    /**
     * <p>The recommendend date to apply the service update in order to ensure
     * compliance. For information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline ServiceUpdate& WithServiceUpdateRecommendedApplyByDate(const Aws::Utils::DateTime& value) { SetServiceUpdateRecommendedApplyByDate(value); return *this;}

    /**
     * <p>The recommendend date to apply the service update in order to ensure
     * compliance. For information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline ServiceUpdate& WithServiceUpdateRecommendedApplyByDate(Aws::Utils::DateTime&& value) { SetServiceUpdateRecommendedApplyByDate(std::move(value)); return *this;}


    /**
     * <p>The status of the service update</p>
     */
    inline const ServiceUpdateStatus& GetServiceUpdateStatus() const{ return m_serviceUpdateStatus; }

    /**
     * <p>The status of the service update</p>
     */
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetServiceUpdateStatus(const ServiceUpdateStatus& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = value; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetServiceUpdateStatus(ServiceUpdateStatus&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = std::move(value); }

    /**
     * <p>The status of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateStatus(const ServiceUpdateStatus& value) { SetServiceUpdateStatus(value); return *this;}

    /**
     * <p>The status of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateStatus(ServiceUpdateStatus&& value) { SetServiceUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>Provides details of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateDescription() const{ return m_serviceUpdateDescription; }

    /**
     * <p>Provides details of the service update</p>
     */
    inline bool ServiceUpdateDescriptionHasBeenSet() const { return m_serviceUpdateDescriptionHasBeenSet; }

    /**
     * <p>Provides details of the service update</p>
     */
    inline void SetServiceUpdateDescription(const Aws::String& value) { m_serviceUpdateDescriptionHasBeenSet = true; m_serviceUpdateDescription = value; }

    /**
     * <p>Provides details of the service update</p>
     */
    inline void SetServiceUpdateDescription(Aws::String&& value) { m_serviceUpdateDescriptionHasBeenSet = true; m_serviceUpdateDescription = std::move(value); }

    /**
     * <p>Provides details of the service update</p>
     */
    inline void SetServiceUpdateDescription(const char* value) { m_serviceUpdateDescriptionHasBeenSet = true; m_serviceUpdateDescription.assign(value); }

    /**
     * <p>Provides details of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateDescription(const Aws::String& value) { SetServiceUpdateDescription(value); return *this;}

    /**
     * <p>Provides details of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateDescription(Aws::String&& value) { SetServiceUpdateDescription(std::move(value)); return *this;}

    /**
     * <p>Provides details of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateDescription(const char* value) { SetServiceUpdateDescription(value); return *this;}


    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline const ServiceUpdateType& GetServiceUpdateType() const{ return m_serviceUpdateType; }

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline bool ServiceUpdateTypeHasBeenSet() const { return m_serviceUpdateTypeHasBeenSet; }

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline void SetServiceUpdateType(const ServiceUpdateType& value) { m_serviceUpdateTypeHasBeenSet = true; m_serviceUpdateType = value; }

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline void SetServiceUpdateType(ServiceUpdateType&& value) { m_serviceUpdateTypeHasBeenSet = true; m_serviceUpdateType = std::move(value); }

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateType(const ServiceUpdateType& value) { SetServiceUpdateType(value); return *this;}

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateType(ServiceUpdateType&& value) { SetServiceUpdateType(std::move(value)); return *this;}


    /**
     * <p>The Redis engine to which the service update applies</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The Redis engine to which the service update applies</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The Redis engine to which the service update applies</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The Redis engine to which the service update applies</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The Redis engine to which the service update applies</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The Redis engine to which the service update applies</p>
     */
    inline ServiceUpdate& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The Redis engine to which the service update applies</p>
     */
    inline ServiceUpdate& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The Redis engine to which the service update applies</p>
     */
    inline ServiceUpdate& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The Redis engine version to which the service update applies</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The Redis engine version to which the service update applies</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The Redis engine version to which the service update applies</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The Redis engine version to which the service update applies</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The Redis engine version to which the service update applies</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The Redis engine version to which the service update applies</p>
     */
    inline ServiceUpdate& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The Redis engine version to which the service update applies</p>
     */
    inline ServiceUpdate& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The Redis engine version to which the service update applies</p>
     */
    inline ServiceUpdate& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Indicates whether the service update will be automatically applied once the
     * recommended apply-by date has expired. </p>
     */
    inline bool GetAutoUpdateAfterRecommendedApplyByDate() const{ return m_autoUpdateAfterRecommendedApplyByDate; }

    /**
     * <p>Indicates whether the service update will be automatically applied once the
     * recommended apply-by date has expired. </p>
     */
    inline bool AutoUpdateAfterRecommendedApplyByDateHasBeenSet() const { return m_autoUpdateAfterRecommendedApplyByDateHasBeenSet; }

    /**
     * <p>Indicates whether the service update will be automatically applied once the
     * recommended apply-by date has expired. </p>
     */
    inline void SetAutoUpdateAfterRecommendedApplyByDate(bool value) { m_autoUpdateAfterRecommendedApplyByDateHasBeenSet = true; m_autoUpdateAfterRecommendedApplyByDate = value; }

    /**
     * <p>Indicates whether the service update will be automatically applied once the
     * recommended apply-by date has expired. </p>
     */
    inline ServiceUpdate& WithAutoUpdateAfterRecommendedApplyByDate(bool value) { SetAutoUpdateAfterRecommendedApplyByDate(value); return *this;}


    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline const Aws::String& GetEstimatedUpdateTime() const{ return m_estimatedUpdateTime; }

    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline bool EstimatedUpdateTimeHasBeenSet() const { return m_estimatedUpdateTimeHasBeenSet; }

    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline void SetEstimatedUpdateTime(const Aws::String& value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime = value; }

    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline void SetEstimatedUpdateTime(Aws::String&& value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime = std::move(value); }

    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline void SetEstimatedUpdateTime(const char* value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime.assign(value); }

    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline ServiceUpdate& WithEstimatedUpdateTime(const Aws::String& value) { SetEstimatedUpdateTime(value); return *this;}

    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline ServiceUpdate& WithEstimatedUpdateTime(Aws::String&& value) { SetEstimatedUpdateTime(std::move(value)); return *this;}

    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline ServiceUpdate& WithEstimatedUpdateTime(const char* value) { SetEstimatedUpdateTime(value); return *this;}

  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet;

    Aws::Utils::DateTime m_serviceUpdateReleaseDate;
    bool m_serviceUpdateReleaseDateHasBeenSet;

    Aws::Utils::DateTime m_serviceUpdateEndDate;
    bool m_serviceUpdateEndDateHasBeenSet;

    ServiceUpdateSeverity m_serviceUpdateSeverity;
    bool m_serviceUpdateSeverityHasBeenSet;

    Aws::Utils::DateTime m_serviceUpdateRecommendedApplyByDate;
    bool m_serviceUpdateRecommendedApplyByDateHasBeenSet;

    ServiceUpdateStatus m_serviceUpdateStatus;
    bool m_serviceUpdateStatusHasBeenSet;

    Aws::String m_serviceUpdateDescription;
    bool m_serviceUpdateDescriptionHasBeenSet;

    ServiceUpdateType m_serviceUpdateType;
    bool m_serviceUpdateTypeHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_autoUpdateAfterRecommendedApplyByDate;
    bool m_autoUpdateAfterRecommendedApplyByDateHasBeenSet;

    Aws::String m_estimatedUpdateTime;
    bool m_estimatedUpdateTimeHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
