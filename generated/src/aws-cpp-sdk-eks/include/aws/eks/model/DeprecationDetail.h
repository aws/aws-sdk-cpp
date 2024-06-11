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
    AWS_EKS_API DeprecationDetail();
    AWS_EKS_API DeprecationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API DeprecationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deprecated version of the resource.</p>
     */
    inline const Aws::String& GetUsage() const{ return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(const Aws::String& value) { m_usageHasBeenSet = true; m_usage = value; }
    inline void SetUsage(Aws::String&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }
    inline void SetUsage(const char* value) { m_usageHasBeenSet = true; m_usage.assign(value); }
    inline DeprecationDetail& WithUsage(const Aws::String& value) { SetUsage(value); return *this;}
    inline DeprecationDetail& WithUsage(Aws::String&& value) { SetUsage(std::move(value)); return *this;}
    inline DeprecationDetail& WithUsage(const char* value) { SetUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The newer version of the resource to migrate to if applicable. </p>
     */
    inline const Aws::String& GetReplacedWith() const{ return m_replacedWith; }
    inline bool ReplacedWithHasBeenSet() const { return m_replacedWithHasBeenSet; }
    inline void SetReplacedWith(const Aws::String& value) { m_replacedWithHasBeenSet = true; m_replacedWith = value; }
    inline void SetReplacedWith(Aws::String&& value) { m_replacedWithHasBeenSet = true; m_replacedWith = std::move(value); }
    inline void SetReplacedWith(const char* value) { m_replacedWithHasBeenSet = true; m_replacedWith.assign(value); }
    inline DeprecationDetail& WithReplacedWith(const Aws::String& value) { SetReplacedWith(value); return *this;}
    inline DeprecationDetail& WithReplacedWith(Aws::String&& value) { SetReplacedWith(std::move(value)); return *this;}
    inline DeprecationDetail& WithReplacedWith(const char* value) { SetReplacedWith(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software where the deprecated resource version will stop
     * being served.</p>
     */
    inline const Aws::String& GetStopServingVersion() const{ return m_stopServingVersion; }
    inline bool StopServingVersionHasBeenSet() const { return m_stopServingVersionHasBeenSet; }
    inline void SetStopServingVersion(const Aws::String& value) { m_stopServingVersionHasBeenSet = true; m_stopServingVersion = value; }
    inline void SetStopServingVersion(Aws::String&& value) { m_stopServingVersionHasBeenSet = true; m_stopServingVersion = std::move(value); }
    inline void SetStopServingVersion(const char* value) { m_stopServingVersionHasBeenSet = true; m_stopServingVersion.assign(value); }
    inline DeprecationDetail& WithStopServingVersion(const Aws::String& value) { SetStopServingVersion(value); return *this;}
    inline DeprecationDetail& WithStopServingVersion(Aws::String&& value) { SetStopServingVersion(std::move(value)); return *this;}
    inline DeprecationDetail& WithStopServingVersion(const char* value) { SetStopServingVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software where the newer resource version became available
     * to migrate to if applicable.</p>
     */
    inline const Aws::String& GetStartServingReplacementVersion() const{ return m_startServingReplacementVersion; }
    inline bool StartServingReplacementVersionHasBeenSet() const { return m_startServingReplacementVersionHasBeenSet; }
    inline void SetStartServingReplacementVersion(const Aws::String& value) { m_startServingReplacementVersionHasBeenSet = true; m_startServingReplacementVersion = value; }
    inline void SetStartServingReplacementVersion(Aws::String&& value) { m_startServingReplacementVersionHasBeenSet = true; m_startServingReplacementVersion = std::move(value); }
    inline void SetStartServingReplacementVersion(const char* value) { m_startServingReplacementVersionHasBeenSet = true; m_startServingReplacementVersion.assign(value); }
    inline DeprecationDetail& WithStartServingReplacementVersion(const Aws::String& value) { SetStartServingReplacementVersion(value); return *this;}
    inline DeprecationDetail& WithStartServingReplacementVersion(Aws::String&& value) { SetStartServingReplacementVersion(std::move(value)); return *this;}
    inline DeprecationDetail& WithStartServingReplacementVersion(const char* value) { SetStartServingReplacementVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about Kubernetes clients using the deprecated resources.</p>
     */
    inline const Aws::Vector<ClientStat>& GetClientStats() const{ return m_clientStats; }
    inline bool ClientStatsHasBeenSet() const { return m_clientStatsHasBeenSet; }
    inline void SetClientStats(const Aws::Vector<ClientStat>& value) { m_clientStatsHasBeenSet = true; m_clientStats = value; }
    inline void SetClientStats(Aws::Vector<ClientStat>&& value) { m_clientStatsHasBeenSet = true; m_clientStats = std::move(value); }
    inline DeprecationDetail& WithClientStats(const Aws::Vector<ClientStat>& value) { SetClientStats(value); return *this;}
    inline DeprecationDetail& WithClientStats(Aws::Vector<ClientStat>&& value) { SetClientStats(std::move(value)); return *this;}
    inline DeprecationDetail& AddClientStats(const ClientStat& value) { m_clientStatsHasBeenSet = true; m_clientStats.push_back(value); return *this; }
    inline DeprecationDetail& AddClientStats(ClientStat&& value) { m_clientStatsHasBeenSet = true; m_clientStats.push_back(std::move(value)); return *this; }
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
