/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/ClientStat.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The summary information about deprecated resource usage for an insight check
   * in the <code>UPGRADE_READINESS</code> category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeprecationDetail">AWS
   * API Reference</a></p>
   */
  class DeprecationDetail
  {
  public:
    AWS_EKS_API DeprecationDetail() = default;
    AWS_EKS_API DeprecationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API DeprecationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deprecated version of the resource.</p>
     */
    inline const Aws::String& GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    template<typename UsageT = Aws::String>
    void SetUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage = std::forward<UsageT>(value); }
    template<typename UsageT = Aws::String>
    DeprecationDetail& WithUsage(UsageT&& value) { SetUsage(std::forward<UsageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The newer version of the resource to migrate to if applicable. </p>
     */
    inline const Aws::String& GetReplacedWith() const { return m_replacedWith; }
    inline bool ReplacedWithHasBeenSet() const { return m_replacedWithHasBeenSet; }
    template<typename ReplacedWithT = Aws::String>
    void SetReplacedWith(ReplacedWithT&& value) { m_replacedWithHasBeenSet = true; m_replacedWith = std::forward<ReplacedWithT>(value); }
    template<typename ReplacedWithT = Aws::String>
    DeprecationDetail& WithReplacedWith(ReplacedWithT&& value) { SetReplacedWith(std::forward<ReplacedWithT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software where the deprecated resource version will stop
     * being served.</p>
     */
    inline const Aws::String& GetStopServingVersion() const { return m_stopServingVersion; }
    inline bool StopServingVersionHasBeenSet() const { return m_stopServingVersionHasBeenSet; }
    template<typename StopServingVersionT = Aws::String>
    void SetStopServingVersion(StopServingVersionT&& value) { m_stopServingVersionHasBeenSet = true; m_stopServingVersion = std::forward<StopServingVersionT>(value); }
    template<typename StopServingVersionT = Aws::String>
    DeprecationDetail& WithStopServingVersion(StopServingVersionT&& value) { SetStopServingVersion(std::forward<StopServingVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software where the newer resource version became available
     * to migrate to if applicable.</p>
     */
    inline const Aws::String& GetStartServingReplacementVersion() const { return m_startServingReplacementVersion; }
    inline bool StartServingReplacementVersionHasBeenSet() const { return m_startServingReplacementVersionHasBeenSet; }
    template<typename StartServingReplacementVersionT = Aws::String>
    void SetStartServingReplacementVersion(StartServingReplacementVersionT&& value) { m_startServingReplacementVersionHasBeenSet = true; m_startServingReplacementVersion = std::forward<StartServingReplacementVersionT>(value); }
    template<typename StartServingReplacementVersionT = Aws::String>
    DeprecationDetail& WithStartServingReplacementVersion(StartServingReplacementVersionT&& value) { SetStartServingReplacementVersion(std::forward<StartServingReplacementVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about Kubernetes clients using the deprecated resources.</p>
     */
    inline const Aws::Vector<ClientStat>& GetClientStats() const { return m_clientStats; }
    inline bool ClientStatsHasBeenSet() const { return m_clientStatsHasBeenSet; }
    template<typename ClientStatsT = Aws::Vector<ClientStat>>
    void SetClientStats(ClientStatsT&& value) { m_clientStatsHasBeenSet = true; m_clientStats = std::forward<ClientStatsT>(value); }
    template<typename ClientStatsT = Aws::Vector<ClientStat>>
    DeprecationDetail& WithClientStats(ClientStatsT&& value) { SetClientStats(std::forward<ClientStatsT>(value)); return *this;}
    template<typename ClientStatsT = ClientStat>
    DeprecationDetail& AddClientStats(ClientStatsT&& value) { m_clientStatsHasBeenSet = true; m_clientStats.emplace_back(std::forward<ClientStatsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_usage;
    bool m_usageHasBeenSet = false;

    Aws::String m_replacedWith;
    bool m_replacedWithHasBeenSet = false;

    Aws::String m_stopServingVersion;
    bool m_stopServingVersionHasBeenSet = false;

    Aws::String m_startServingReplacementVersion;
    bool m_startServingReplacementVersionHasBeenSet = false;

    Aws::Vector<ClientStat> m_clientStats;
    bool m_clientStatsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
