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
    AWS_ELASTICACHE_API ServiceUpdate() = default;
    AWS_ELASTICACHE_API ServiceUpdate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ServiceUpdate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const { return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    template<typename ServiceUpdateNameT = Aws::String>
    void SetServiceUpdateName(ServiceUpdateNameT&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::forward<ServiceUpdateNameT>(value); }
    template<typename ServiceUpdateNameT = Aws::String>
    ServiceUpdate& WithServiceUpdateName(ServiceUpdateNameT&& value) { SetServiceUpdateName(std::forward<ServiceUpdateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the service update is initially available</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateReleaseDate() const { return m_serviceUpdateReleaseDate; }
    inline bool ServiceUpdateReleaseDateHasBeenSet() const { return m_serviceUpdateReleaseDateHasBeenSet; }
    template<typename ServiceUpdateReleaseDateT = Aws::Utils::DateTime>
    void SetServiceUpdateReleaseDate(ServiceUpdateReleaseDateT&& value) { m_serviceUpdateReleaseDateHasBeenSet = true; m_serviceUpdateReleaseDate = std::forward<ServiceUpdateReleaseDateT>(value); }
    template<typename ServiceUpdateReleaseDateT = Aws::Utils::DateTime>
    ServiceUpdate& WithServiceUpdateReleaseDate(ServiceUpdateReleaseDateT&& value) { SetServiceUpdateReleaseDate(std::forward<ServiceUpdateReleaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date after which the service update is no longer available</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateEndDate() const { return m_serviceUpdateEndDate; }
    inline bool ServiceUpdateEndDateHasBeenSet() const { return m_serviceUpdateEndDateHasBeenSet; }
    template<typename ServiceUpdateEndDateT = Aws::Utils::DateTime>
    void SetServiceUpdateEndDate(ServiceUpdateEndDateT&& value) { m_serviceUpdateEndDateHasBeenSet = true; m_serviceUpdateEndDate = std::forward<ServiceUpdateEndDateT>(value); }
    template<typename ServiceUpdateEndDateT = Aws::Utils::DateTime>
    ServiceUpdate& WithServiceUpdateEndDate(ServiceUpdateEndDateT&& value) { SetServiceUpdateEndDate(std::forward<ServiceUpdateEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the service update</p>
     */
    inline ServiceUpdateSeverity GetServiceUpdateSeverity() const { return m_serviceUpdateSeverity; }
    inline bool ServiceUpdateSeverityHasBeenSet() const { return m_serviceUpdateSeverityHasBeenSet; }
    inline void SetServiceUpdateSeverity(ServiceUpdateSeverity value) { m_serviceUpdateSeverityHasBeenSet = true; m_serviceUpdateSeverity = value; }
    inline ServiceUpdate& WithServiceUpdateSeverity(ServiceUpdateSeverity value) { SetServiceUpdateSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendend date to apply the service update in order to ensure
     * compliance. For information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateRecommendedApplyByDate() const { return m_serviceUpdateRecommendedApplyByDate; }
    inline bool ServiceUpdateRecommendedApplyByDateHasBeenSet() const { return m_serviceUpdateRecommendedApplyByDateHasBeenSet; }
    template<typename ServiceUpdateRecommendedApplyByDateT = Aws::Utils::DateTime>
    void SetServiceUpdateRecommendedApplyByDate(ServiceUpdateRecommendedApplyByDateT&& value) { m_serviceUpdateRecommendedApplyByDateHasBeenSet = true; m_serviceUpdateRecommendedApplyByDate = std::forward<ServiceUpdateRecommendedApplyByDateT>(value); }
    template<typename ServiceUpdateRecommendedApplyByDateT = Aws::Utils::DateTime>
    ServiceUpdate& WithServiceUpdateRecommendedApplyByDate(ServiceUpdateRecommendedApplyByDateT&& value) { SetServiceUpdateRecommendedApplyByDate(std::forward<ServiceUpdateRecommendedApplyByDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update</p>
     */
    inline ServiceUpdateStatus GetServiceUpdateStatus() const { return m_serviceUpdateStatus; }
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }
    inline void SetServiceUpdateStatus(ServiceUpdateStatus value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = value; }
    inline ServiceUpdate& WithServiceUpdateStatus(ServiceUpdateStatus value) { SetServiceUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateDescription() const { return m_serviceUpdateDescription; }
    inline bool ServiceUpdateDescriptionHasBeenSet() const { return m_serviceUpdateDescriptionHasBeenSet; }
    template<typename ServiceUpdateDescriptionT = Aws::String>
    void SetServiceUpdateDescription(ServiceUpdateDescriptionT&& value) { m_serviceUpdateDescriptionHasBeenSet = true; m_serviceUpdateDescription = std::forward<ServiceUpdateDescriptionT>(value); }
    template<typename ServiceUpdateDescriptionT = Aws::String>
    ServiceUpdate& WithServiceUpdateDescription(ServiceUpdateDescriptionT&& value) { SetServiceUpdateDescription(std::forward<ServiceUpdateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline ServiceUpdateType GetServiceUpdateType() const { return m_serviceUpdateType; }
    inline bool ServiceUpdateTypeHasBeenSet() const { return m_serviceUpdateTypeHasBeenSet; }
    inline void SetServiceUpdateType(ServiceUpdateType value) { m_serviceUpdateTypeHasBeenSet = true; m_serviceUpdateType = value; }
    inline ServiceUpdate& WithServiceUpdateType(ServiceUpdateType value) { SetServiceUpdateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticache engine to which the update applies. Either Valkey, Redis OSS
     * or Memcached.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ServiceUpdate& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticache engine version to which the update applies. Either Valkey,
     * Redis OSS or Memcached engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ServiceUpdate& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the service update will be automatically applied once the
     * recommended apply-by date has expired. </p>
     */
    inline bool GetAutoUpdateAfterRecommendedApplyByDate() const { return m_autoUpdateAfterRecommendedApplyByDate; }
    inline bool AutoUpdateAfterRecommendedApplyByDateHasBeenSet() const { return m_autoUpdateAfterRecommendedApplyByDateHasBeenSet; }
    inline void SetAutoUpdateAfterRecommendedApplyByDate(bool value) { m_autoUpdateAfterRecommendedApplyByDateHasBeenSet = true; m_autoUpdateAfterRecommendedApplyByDate = value; }
    inline ServiceUpdate& WithAutoUpdateAfterRecommendedApplyByDate(bool value) { SetAutoUpdateAfterRecommendedApplyByDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated length of time the service update will take</p>
     */
    inline const Aws::String& GetEstimatedUpdateTime() const { return m_estimatedUpdateTime; }
    inline bool EstimatedUpdateTimeHasBeenSet() const { return m_estimatedUpdateTimeHasBeenSet; }
    template<typename EstimatedUpdateTimeT = Aws::String>
    void SetEstimatedUpdateTime(EstimatedUpdateTimeT&& value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime = std::forward<EstimatedUpdateTimeT>(value); }
    template<typename EstimatedUpdateTimeT = Aws::String>
    ServiceUpdate& WithEstimatedUpdateTime(EstimatedUpdateTimeT&& value) { SetEstimatedUpdateTime(std::forward<EstimatedUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateReleaseDate{};
    bool m_serviceUpdateReleaseDateHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateEndDate{};
    bool m_serviceUpdateEndDateHasBeenSet = false;

    ServiceUpdateSeverity m_serviceUpdateSeverity{ServiceUpdateSeverity::NOT_SET};
    bool m_serviceUpdateSeverityHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateRecommendedApplyByDate{};
    bool m_serviceUpdateRecommendedApplyByDateHasBeenSet = false;

    ServiceUpdateStatus m_serviceUpdateStatus{ServiceUpdateStatus::NOT_SET};
    bool m_serviceUpdateStatusHasBeenSet = false;

    Aws::String m_serviceUpdateDescription;
    bool m_serviceUpdateDescriptionHasBeenSet = false;

    ServiceUpdateType m_serviceUpdateType{ServiceUpdateType::NOT_SET};
    bool m_serviceUpdateTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoUpdateAfterRecommendedApplyByDate{false};
    bool m_autoUpdateAfterRecommendedApplyByDateHasBeenSet = false;

    Aws::String m_estimatedUpdateTime;
    bool m_estimatedUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
