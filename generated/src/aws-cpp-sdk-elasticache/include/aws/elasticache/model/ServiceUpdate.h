/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An update that you can apply to your Valkey or Redis OSS
   * clusters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ServiceUpdate">AWS
   * API Reference</a></p>
   */
  class ServiceUpdate
  {
  public:
    AWS_ELASTICACHE_API ServiceUpdate();
    AWS_ELASTICACHE_API ServiceUpdate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ServiceUpdate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }
    inline ServiceUpdate& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}
    inline ServiceUpdate& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}
    inline ServiceUpdate& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the service update is initially available</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateReleaseDate() const{ return m_serviceUpdateReleaseDate; }
    inline bool ServiceUpdateReleaseDateHasBeenSet() const { return m_serviceUpdateReleaseDateHasBeenSet; }
    inline void SetServiceUpdateReleaseDate(const Aws::Utils::DateTime& value) { m_serviceUpdateReleaseDateHasBeenSet = true; m_serviceUpdateReleaseDate = value; }
    inline void SetServiceUpdateReleaseDate(Aws::Utils::DateTime&& value) { m_serviceUpdateReleaseDateHasBeenSet = true; m_serviceUpdateReleaseDate = std::move(value); }
    inline ServiceUpdate& WithServiceUpdateReleaseDate(const Aws::Utils::DateTime& value) { SetServiceUpdateReleaseDate(value); return *this;}
    inline ServiceUpdate& WithServiceUpdateReleaseDate(Aws::Utils::DateTime&& value) { SetServiceUpdateReleaseDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date after which the service update is no longer available</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateEndDate() const{ return m_serviceUpdateEndDate; }
    inline bool ServiceUpdateEndDateHasBeenSet() const { return m_serviceUpdateEndDateHasBeenSet; }
    inline void SetServiceUpdateEndDate(const Aws::Utils::DateTime& value) { m_serviceUpdateEndDateHasBeenSet = true; m_serviceUpdateEndDate = value; }
    inline void SetServiceUpdateEndDate(Aws::Utils::DateTime&& value) { m_serviceUpdateEndDateHasBeenSet = true; m_serviceUpdateEndDate = std::move(value); }
    inline ServiceUpdate& WithServiceUpdateEndDate(const Aws::Utils::DateTime& value) { SetServiceUpdateEndDate(value); return *this;}
    inline ServiceUpdate& WithServiceUpdateEndDate(Aws::Utils::DateTime&& value) { SetServiceUpdateEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the service update</p>
     */
    inline const ServiceUpdateSeverity& GetServiceUpdateSeverity() const{ return m_serviceUpdateSeverity; }
    inline bool ServiceUpdateSeverityHasBeenSet() const { return m_serviceUpdateSeverityHasBeenSet; }
    inline void SetServiceUpdateSeverity(const ServiceUpdateSeverity& value) { m_serviceUpdateSeverityHasBeenSet = true; m_serviceUpdateSeverity = value; }
    inline void SetServiceUpdateSeverity(ServiceUpdateSeverity&& value) { m_serviceUpdateSeverityHasBeenSet = true; m_serviceUpdateSeverity = std::move(value); }
    inline ServiceUpdate& WithServiceUpdateSeverity(const ServiceUpdateSeverity& value) { SetServiceUpdateSeverity(value); return *this;}
    inline ServiceUpdate& WithServiceUpdateSeverity(ServiceUpdateSeverity&& value) { SetServiceUpdateSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendend date to apply the service update in order to ensure
     * compliance. For information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateRecommendedApplyByDate() const{ return m_serviceUpdateRecommendedApplyByDate; }
    inline bool ServiceUpdateRecommendedApplyByDateHasBeenSet() const { return m_serviceUpdateRecommendedApplyByDateHasBeenSet; }
    inline void SetServiceUpdateRecommendedApplyByDate(const Aws::Utils::DateTime& value) { m_serviceUpdateRecommendedApplyByDateHasBeenSet = true; m_serviceUpdateRecommendedApplyByDate = value; }
    inline void SetServiceUpdateRecommendedApplyByDate(Aws::Utils::DateTime&& value) { m_serviceUpdateRecommendedApplyByDateHasBeenSet = true; m_serviceUpdateRecommendedApplyByDate = std::move(value); }
    inline ServiceUpdate& WithServiceUpdateRecommendedApplyByDate(const Aws::Utils::DateTime& value) { SetServiceUpdateRecommendedApplyByDate(value); return *this;}
    inline ServiceUpdate& WithServiceUpdateRecommendedApplyByDate(Aws::Utils::DateTime&& value) { SetServiceUpdateRecommendedApplyByDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update</p>
     */
    inline const ServiceUpdateStatus& GetServiceUpdateStatus() const{ return m_serviceUpdateStatus; }
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }
    inline void SetServiceUpdateStatus(const ServiceUpdateStatus& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = value; }
    inline void SetServiceUpdateStatus(ServiceUpdateStatus&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = std::move(value); }
    inline ServiceUpdate& WithServiceUpdateStatus(const ServiceUpdateStatus& value) { SetServiceUpdateStatus(value); return *this;}
    inline ServiceUpdate& WithServiceUpdateStatus(ServiceUpdateStatus&& value) { SetServiceUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateDescription() const{ return m_serviceUpdateDescription; }
    inline bool ServiceUpdateDescriptionHasBeenSet() const { return m_serviceUpdateDescriptionHasBeenSet; }
    inline void SetServiceUpdateDescription(const Aws::String& value) { m_serviceUpdateDescriptionHasBeenSet = true; m_serviceUpdateDescription = value; }
    inline void SetServiceUpdateDescription(Aws::String&& value) { m_serviceUpdateDescriptionHasBeenSet = true; m_serviceUpdateDescription = std::move(value); }
    inline void SetServiceUpdateDescription(const char* value) { m_serviceUpdateDescriptionHasBeenSet = true; m_serviceUpdateDescription.assign(value); }
    inline ServiceUpdate& WithServiceUpdateDescription(const Aws::String& value) { SetServiceUpdateDescription(value); return *this;}
    inline ServiceUpdate& WithServiceUpdateDescription(Aws::String&& value) { SetServiceUpdateDescription(std::move(value)); return *this;}
    inline ServiceUpdate& WithServiceUpdateDescription(const char* value) { SetServiceUpdateDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline const ServiceUpdateType& GetServiceUpdateType() const{ return m_serviceUpdateType; }
    inline bool ServiceUpdateTypeHasBeenSet() const { return m_serviceUpdateTypeHasBeenSet; }
    inline void SetServiceUpdateType(const ServiceUpdateType& value) { m_serviceUpdateTypeHasBeenSet = true; m_serviceUpdateType = value; }
    inline void SetServiceUpdateType(ServiceUpdateType&& value) { m_serviceUpdateTypeHasBeenSet = true; m_serviceUpdateType = std::move(value); }
    inline ServiceUpdate& WithServiceUpdateType(const ServiceUpdateType& value) { SetServiceUpdateType(value); return *this;}
    inline ServiceUpdate& WithServiceUpdateType(ServiceUpdateType&& value) { SetServiceUpdateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticache engine to which the update applies. Either Valkey, Redis OSS
     * or Memcached.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline ServiceUpdate& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ServiceUpdate& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ServiceUpdate& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticache engine version to which the update applies. Either Valkey,
     * Redis OSS or Memcached engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline ServiceUpdate& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline ServiceUpdate& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline ServiceUpdate& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the service update will be automatically applied once the
     * recommended apply-by date has expired. </p>
     */
    inline bool GetAutoUpdateAfterRecommendedApplyByDate() const{ return m_autoUpdateAfterRecommendedApplyByDate; }
    inline bool AutoUpdateAfterRecommendedApplyByDateHasBeenSet() const { return m_autoUpdateAfterRecommendedApplyByDateHasBeenSet; }
    inline void SetAutoUpdateAfterRecommendedApplyByDate(bool value) { m_autoUpdateAfterRecommendedApplyByDateHasBeenSet = true; m_autoUpdateAfterRecommendedApplyByDate = value; }
    inline ServiceUpdate& WithAutoUpdateAfterRecommendedApplyByDate(bool value) { SetAutoUpdateAfterRecommendedApplyByDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline const Aws::String& GetEstimatedUpdateTime() const{ return m_estimatedUpdateTime; }
    inline bool EstimatedUpdateTimeHasBeenSet() const { return m_estimatedUpdateTimeHasBeenSet; }
    inline void SetEstimatedUpdateTime(const Aws::String& value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime = value; }
    inline void SetEstimatedUpdateTime(Aws::String&& value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime = std::move(value); }
    inline void SetEstimatedUpdateTime(const char* value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime.assign(value); }
    inline ServiceUpdate& WithEstimatedUpdateTime(const Aws::String& value) { SetEstimatedUpdateTime(value); return *this;}
    inline ServiceUpdate& WithEstimatedUpdateTime(Aws::String&& value) { SetEstimatedUpdateTime(std::move(value)); return *this;}
    inline ServiceUpdate& WithEstimatedUpdateTime(const char* value) { SetEstimatedUpdateTime(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateReleaseDate;
    bool m_serviceUpdateReleaseDateHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateEndDate;
    bool m_serviceUpdateEndDateHasBeenSet = false;

    ServiceUpdateSeverity m_serviceUpdateSeverity;
    bool m_serviceUpdateSeverityHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateRecommendedApplyByDate;
    bool m_serviceUpdateRecommendedApplyByDateHasBeenSet = false;

    ServiceUpdateStatus m_serviceUpdateStatus;
    bool m_serviceUpdateStatusHasBeenSet = false;

    Aws::String m_serviceUpdateDescription;
    bool m_serviceUpdateDescriptionHasBeenSet = false;

    ServiceUpdateType m_serviceUpdateType;
    bool m_serviceUpdateTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoUpdateAfterRecommendedApplyByDate;
    bool m_autoUpdateAfterRecommendedApplyByDateHasBeenSet = false;

    Aws::String m_estimatedUpdateTime;
    bool m_estimatedUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
