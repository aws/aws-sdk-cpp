/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/EBSResourceUtilization.h>
#include <aws/ce/model/DiskResourceUtilization.h>
#include <aws/ce/model/NetworkResourceUtilization.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Utilization metrics for the instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/EC2ResourceUtilization">AWS
   * API Reference</a></p>
   */
  class EC2ResourceUtilization
  {
  public:
    AWS_COSTEXPLORER_API EC2ResourceUtilization() = default;
    AWS_COSTEXPLORER_API EC2ResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API EC2ResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum observed or expected CPU utilization of the instance.</p>
     */
    inline const Aws::String& GetMaxCpuUtilizationPercentage() const { return m_maxCpuUtilizationPercentage; }
    inline bool MaxCpuUtilizationPercentageHasBeenSet() const { return m_maxCpuUtilizationPercentageHasBeenSet; }
    template<typename MaxCpuUtilizationPercentageT = Aws::String>
    void SetMaxCpuUtilizationPercentage(MaxCpuUtilizationPercentageT&& value) { m_maxCpuUtilizationPercentageHasBeenSet = true; m_maxCpuUtilizationPercentage = std::forward<MaxCpuUtilizationPercentageT>(value); }
    template<typename MaxCpuUtilizationPercentageT = Aws::String>
    EC2ResourceUtilization& WithMaxCpuUtilizationPercentage(MaxCpuUtilizationPercentageT&& value) { SetMaxCpuUtilizationPercentage(std::forward<MaxCpuUtilizationPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum observed or expected memory utilization of the instance.</p>
     */
    inline const Aws::String& GetMaxMemoryUtilizationPercentage() const { return m_maxMemoryUtilizationPercentage; }
    inline bool MaxMemoryUtilizationPercentageHasBeenSet() const { return m_maxMemoryUtilizationPercentageHasBeenSet; }
    template<typename MaxMemoryUtilizationPercentageT = Aws::String>
    void SetMaxMemoryUtilizationPercentage(MaxMemoryUtilizationPercentageT&& value) { m_maxMemoryUtilizationPercentageHasBeenSet = true; m_maxMemoryUtilizationPercentage = std::forward<MaxMemoryUtilizationPercentageT>(value); }
    template<typename MaxMemoryUtilizationPercentageT = Aws::String>
    EC2ResourceUtilization& WithMaxMemoryUtilizationPercentage(MaxMemoryUtilizationPercentageT&& value) { SetMaxMemoryUtilizationPercentage(std::forward<MaxMemoryUtilizationPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum observed or expected storage utilization of the instance. This
     * doesn't include EBS storage.</p>
     */
    inline const Aws::String& GetMaxStorageUtilizationPercentage() const { return m_maxStorageUtilizationPercentage; }
    inline bool MaxStorageUtilizationPercentageHasBeenSet() const { return m_maxStorageUtilizationPercentageHasBeenSet; }
    template<typename MaxStorageUtilizationPercentageT = Aws::String>
    void SetMaxStorageUtilizationPercentage(MaxStorageUtilizationPercentageT&& value) { m_maxStorageUtilizationPercentageHasBeenSet = true; m_maxStorageUtilizationPercentage = std::forward<MaxStorageUtilizationPercentageT>(value); }
    template<typename MaxStorageUtilizationPercentageT = Aws::String>
    EC2ResourceUtilization& WithMaxStorageUtilizationPercentage(MaxStorageUtilizationPercentageT&& value) { SetMaxStorageUtilizationPercentage(std::forward<MaxStorageUtilizationPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EBS field that contains a list of EBS metrics that are associated with
     * the current instance. </p>
     */
    inline const EBSResourceUtilization& GetEBSResourceUtilization() const { return m_eBSResourceUtilization; }
    inline bool EBSResourceUtilizationHasBeenSet() const { return m_eBSResourceUtilizationHasBeenSet; }
    template<typename EBSResourceUtilizationT = EBSResourceUtilization>
    void SetEBSResourceUtilization(EBSResourceUtilizationT&& value) { m_eBSResourceUtilizationHasBeenSet = true; m_eBSResourceUtilization = std::forward<EBSResourceUtilizationT>(value); }
    template<typename EBSResourceUtilizationT = EBSResourceUtilization>
    EC2ResourceUtilization& WithEBSResourceUtilization(EBSResourceUtilizationT&& value) { SetEBSResourceUtilization(std::forward<EBSResourceUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that contains a list of disk (local storage) metrics that are
     * associated with the current instance. </p>
     */
    inline const DiskResourceUtilization& GetDiskResourceUtilization() const { return m_diskResourceUtilization; }
    inline bool DiskResourceUtilizationHasBeenSet() const { return m_diskResourceUtilizationHasBeenSet; }
    template<typename DiskResourceUtilizationT = DiskResourceUtilization>
    void SetDiskResourceUtilization(DiskResourceUtilizationT&& value) { m_diskResourceUtilizationHasBeenSet = true; m_diskResourceUtilization = std::forward<DiskResourceUtilizationT>(value); }
    template<typename DiskResourceUtilizationT = DiskResourceUtilization>
    EC2ResourceUtilization& WithDiskResourceUtilization(DiskResourceUtilizationT&& value) { SetDiskResourceUtilization(std::forward<DiskResourceUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network field that contains a list of network metrics that are associated
     * with the current instance. </p>
     */
    inline const NetworkResourceUtilization& GetNetworkResourceUtilization() const { return m_networkResourceUtilization; }
    inline bool NetworkResourceUtilizationHasBeenSet() const { return m_networkResourceUtilizationHasBeenSet; }
    template<typename NetworkResourceUtilizationT = NetworkResourceUtilization>
    void SetNetworkResourceUtilization(NetworkResourceUtilizationT&& value) { m_networkResourceUtilizationHasBeenSet = true; m_networkResourceUtilization = std::forward<NetworkResourceUtilizationT>(value); }
    template<typename NetworkResourceUtilizationT = NetworkResourceUtilization>
    EC2ResourceUtilization& WithNetworkResourceUtilization(NetworkResourceUtilizationT&& value) { SetNetworkResourceUtilization(std::forward<NetworkResourceUtilizationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_maxCpuUtilizationPercentage;
    bool m_maxCpuUtilizationPercentageHasBeenSet = false;

    Aws::String m_maxMemoryUtilizationPercentage;
    bool m_maxMemoryUtilizationPercentageHasBeenSet = false;

    Aws::String m_maxStorageUtilizationPercentage;
    bool m_maxStorageUtilizationPercentageHasBeenSet = false;

    EBSResourceUtilization m_eBSResourceUtilization;
    bool m_eBSResourceUtilizationHasBeenSet = false;

    DiskResourceUtilization m_diskResourceUtilization;
    bool m_diskResourceUtilizationHasBeenSet = false;

    NetworkResourceUtilization m_networkResourceUtilization;
    bool m_networkResourceUtilizationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
