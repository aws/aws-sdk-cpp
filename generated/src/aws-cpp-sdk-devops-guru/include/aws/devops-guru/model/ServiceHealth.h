/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ServiceName.h>
#include <aws/devops-guru/model/ServiceInsightHealth.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Represents the health of an Amazon Web Services service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ServiceHealth">AWS
   * API Reference</a></p>
   */
  class ServiceHealth
  {
  public:
    AWS_DEVOPSGURU_API ServiceHealth() = default;
    AWS_DEVOPSGURU_API ServiceHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ServiceHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Web Services service.</p>
     */
    inline ServiceName GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(ServiceName value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline ServiceHealth& WithServiceName(ServiceName value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the health of an Amazon Web Services service. This is a
     * <code>ServiceInsightHealth</code> that contains the number of open proactive and
     * reactive insights for this service.</p>
     */
    inline const ServiceInsightHealth& GetInsight() const { return m_insight; }
    inline bool InsightHasBeenSet() const { return m_insightHasBeenSet; }
    template<typename InsightT = ServiceInsightHealth>
    void SetInsight(InsightT&& value) { m_insightHasBeenSet = true; m_insight = std::forward<InsightT>(value); }
    template<typename InsightT = ServiceInsightHealth>
    ServiceHealth& WithInsight(InsightT&& value) { SetInsight(std::forward<InsightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Number of resources that DevOps Guru is monitoring in an analyzed Amazon Web
     * Services service. </p>
     */
    inline long long GetAnalyzedResourceCount() const { return m_analyzedResourceCount; }
    inline bool AnalyzedResourceCountHasBeenSet() const { return m_analyzedResourceCountHasBeenSet; }
    inline void SetAnalyzedResourceCount(long long value) { m_analyzedResourceCountHasBeenSet = true; m_analyzedResourceCount = value; }
    inline ServiceHealth& WithAnalyzedResourceCount(long long value) { SetAnalyzedResourceCount(value); return *this;}
    ///@}
  private:

    ServiceName m_serviceName{ServiceName::NOT_SET};
    bool m_serviceNameHasBeenSet = false;

    ServiceInsightHealth m_insight;
    bool m_insightHasBeenSet = false;

    long long m_analyzedResourceCount{0};
    bool m_analyzedResourceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
