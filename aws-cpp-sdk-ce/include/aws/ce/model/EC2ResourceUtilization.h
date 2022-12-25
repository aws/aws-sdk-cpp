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
    AWS_COSTEXPLORER_API EC2ResourceUtilization();
    AWS_COSTEXPLORER_API EC2ResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API EC2ResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum observed or expected CPU utilization of the instance.</p>
     */
    inline const Aws::String& GetMaxCpuUtilizationPercentage() const{ return m_maxCpuUtilizationPercentage; }

    /**
     * <p>The maximum observed or expected CPU utilization of the instance.</p>
     */
    inline bool MaxCpuUtilizationPercentageHasBeenSet() const { return m_maxCpuUtilizationPercentageHasBeenSet; }

    /**
     * <p>The maximum observed or expected CPU utilization of the instance.</p>
     */
    inline void SetMaxCpuUtilizationPercentage(const Aws::String& value) { m_maxCpuUtilizationPercentageHasBeenSet = true; m_maxCpuUtilizationPercentage = value; }

    /**
     * <p>The maximum observed or expected CPU utilization of the instance.</p>
     */
    inline void SetMaxCpuUtilizationPercentage(Aws::String&& value) { m_maxCpuUtilizationPercentageHasBeenSet = true; m_maxCpuUtilizationPercentage = std::move(value); }

    /**
     * <p>The maximum observed or expected CPU utilization of the instance.</p>
     */
    inline void SetMaxCpuUtilizationPercentage(const char* value) { m_maxCpuUtilizationPercentageHasBeenSet = true; m_maxCpuUtilizationPercentage.assign(value); }

    /**
     * <p>The maximum observed or expected CPU utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxCpuUtilizationPercentage(const Aws::String& value) { SetMaxCpuUtilizationPercentage(value); return *this;}

    /**
     * <p>The maximum observed or expected CPU utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxCpuUtilizationPercentage(Aws::String&& value) { SetMaxCpuUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p>The maximum observed or expected CPU utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxCpuUtilizationPercentage(const char* value) { SetMaxCpuUtilizationPercentage(value); return *this;}


    /**
     * <p>The maximum observed or expected memory utilization of the instance.</p>
     */
    inline const Aws::String& GetMaxMemoryUtilizationPercentage() const{ return m_maxMemoryUtilizationPercentage; }

    /**
     * <p>The maximum observed or expected memory utilization of the instance.</p>
     */
    inline bool MaxMemoryUtilizationPercentageHasBeenSet() const { return m_maxMemoryUtilizationPercentageHasBeenSet; }

    /**
     * <p>The maximum observed or expected memory utilization of the instance.</p>
     */
    inline void SetMaxMemoryUtilizationPercentage(const Aws::String& value) { m_maxMemoryUtilizationPercentageHasBeenSet = true; m_maxMemoryUtilizationPercentage = value; }

    /**
     * <p>The maximum observed or expected memory utilization of the instance.</p>
     */
    inline void SetMaxMemoryUtilizationPercentage(Aws::String&& value) { m_maxMemoryUtilizationPercentageHasBeenSet = true; m_maxMemoryUtilizationPercentage = std::move(value); }

    /**
     * <p>The maximum observed or expected memory utilization of the instance.</p>
     */
    inline void SetMaxMemoryUtilizationPercentage(const char* value) { m_maxMemoryUtilizationPercentageHasBeenSet = true; m_maxMemoryUtilizationPercentage.assign(value); }

    /**
     * <p>The maximum observed or expected memory utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxMemoryUtilizationPercentage(const Aws::String& value) { SetMaxMemoryUtilizationPercentage(value); return *this;}

    /**
     * <p>The maximum observed or expected memory utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxMemoryUtilizationPercentage(Aws::String&& value) { SetMaxMemoryUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p>The maximum observed or expected memory utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxMemoryUtilizationPercentage(const char* value) { SetMaxMemoryUtilizationPercentage(value); return *this;}


    /**
     * <p>The maximum observed or expected storage utilization of the instance. This
     * doesn't include EBS storage.</p>
     */
    inline const Aws::String& GetMaxStorageUtilizationPercentage() const{ return m_maxStorageUtilizationPercentage; }

    /**
     * <p>The maximum observed or expected storage utilization of the instance. This
     * doesn't include EBS storage.</p>
     */
    inline bool MaxStorageUtilizationPercentageHasBeenSet() const { return m_maxStorageUtilizationPercentageHasBeenSet; }

    /**
     * <p>The maximum observed or expected storage utilization of the instance. This
     * doesn't include EBS storage.</p>
     */
    inline void SetMaxStorageUtilizationPercentage(const Aws::String& value) { m_maxStorageUtilizationPercentageHasBeenSet = true; m_maxStorageUtilizationPercentage = value; }

    /**
     * <p>The maximum observed or expected storage utilization of the instance. This
     * doesn't include EBS storage.</p>
     */
    inline void SetMaxStorageUtilizationPercentage(Aws::String&& value) { m_maxStorageUtilizationPercentageHasBeenSet = true; m_maxStorageUtilizationPercentage = std::move(value); }

    /**
     * <p>The maximum observed or expected storage utilization of the instance. This
     * doesn't include EBS storage.</p>
     */
    inline void SetMaxStorageUtilizationPercentage(const char* value) { m_maxStorageUtilizationPercentageHasBeenSet = true; m_maxStorageUtilizationPercentage.assign(value); }

    /**
     * <p>The maximum observed or expected storage utilization of the instance. This
     * doesn't include EBS storage.</p>
     */
    inline EC2ResourceUtilization& WithMaxStorageUtilizationPercentage(const Aws::String& value) { SetMaxStorageUtilizationPercentage(value); return *this;}

    /**
     * <p>The maximum observed or expected storage utilization of the instance. This
     * doesn't include EBS storage.</p>
     */
    inline EC2ResourceUtilization& WithMaxStorageUtilizationPercentage(Aws::String&& value) { SetMaxStorageUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p>The maximum observed or expected storage utilization of the instance. This
     * doesn't include EBS storage.</p>
     */
    inline EC2ResourceUtilization& WithMaxStorageUtilizationPercentage(const char* value) { SetMaxStorageUtilizationPercentage(value); return *this;}


    /**
     * <p>The EBS field that contains a list of EBS metrics that are associated with
     * the current instance. </p>
     */
    inline const EBSResourceUtilization& GetEBSResourceUtilization() const{ return m_eBSResourceUtilization; }

    /**
     * <p>The EBS field that contains a list of EBS metrics that are associated with
     * the current instance. </p>
     */
    inline bool EBSResourceUtilizationHasBeenSet() const { return m_eBSResourceUtilizationHasBeenSet; }

    /**
     * <p>The EBS field that contains a list of EBS metrics that are associated with
     * the current instance. </p>
     */
    inline void SetEBSResourceUtilization(const EBSResourceUtilization& value) { m_eBSResourceUtilizationHasBeenSet = true; m_eBSResourceUtilization = value; }

    /**
     * <p>The EBS field that contains a list of EBS metrics that are associated with
     * the current instance. </p>
     */
    inline void SetEBSResourceUtilization(EBSResourceUtilization&& value) { m_eBSResourceUtilizationHasBeenSet = true; m_eBSResourceUtilization = std::move(value); }

    /**
     * <p>The EBS field that contains a list of EBS metrics that are associated with
     * the current instance. </p>
     */
    inline EC2ResourceUtilization& WithEBSResourceUtilization(const EBSResourceUtilization& value) { SetEBSResourceUtilization(value); return *this;}

    /**
     * <p>The EBS field that contains a list of EBS metrics that are associated with
     * the current instance. </p>
     */
    inline EC2ResourceUtilization& WithEBSResourceUtilization(EBSResourceUtilization&& value) { SetEBSResourceUtilization(std::move(value)); return *this;}


    /**
     * <p>The field that contains a list of disk (local storage) metrics that are
     * associated with the current instance. </p>
     */
    inline const DiskResourceUtilization& GetDiskResourceUtilization() const{ return m_diskResourceUtilization; }

    /**
     * <p>The field that contains a list of disk (local storage) metrics that are
     * associated with the current instance. </p>
     */
    inline bool DiskResourceUtilizationHasBeenSet() const { return m_diskResourceUtilizationHasBeenSet; }

    /**
     * <p>The field that contains a list of disk (local storage) metrics that are
     * associated with the current instance. </p>
     */
    inline void SetDiskResourceUtilization(const DiskResourceUtilization& value) { m_diskResourceUtilizationHasBeenSet = true; m_diskResourceUtilization = value; }

    /**
     * <p>The field that contains a list of disk (local storage) metrics that are
     * associated with the current instance. </p>
     */
    inline void SetDiskResourceUtilization(DiskResourceUtilization&& value) { m_diskResourceUtilizationHasBeenSet = true; m_diskResourceUtilization = std::move(value); }

    /**
     * <p>The field that contains a list of disk (local storage) metrics that are
     * associated with the current instance. </p>
     */
    inline EC2ResourceUtilization& WithDiskResourceUtilization(const DiskResourceUtilization& value) { SetDiskResourceUtilization(value); return *this;}

    /**
     * <p>The field that contains a list of disk (local storage) metrics that are
     * associated with the current instance. </p>
     */
    inline EC2ResourceUtilization& WithDiskResourceUtilization(DiskResourceUtilization&& value) { SetDiskResourceUtilization(std::move(value)); return *this;}


    /**
     * <p>The network field that contains a list of network metrics that are associated
     * with the current instance. </p>
     */
    inline const NetworkResourceUtilization& GetNetworkResourceUtilization() const{ return m_networkResourceUtilization; }

    /**
     * <p>The network field that contains a list of network metrics that are associated
     * with the current instance. </p>
     */
    inline bool NetworkResourceUtilizationHasBeenSet() const { return m_networkResourceUtilizationHasBeenSet; }

    /**
     * <p>The network field that contains a list of network metrics that are associated
     * with the current instance. </p>
     */
    inline void SetNetworkResourceUtilization(const NetworkResourceUtilization& value) { m_networkResourceUtilizationHasBeenSet = true; m_networkResourceUtilization = value; }

    /**
     * <p>The network field that contains a list of network metrics that are associated
     * with the current instance. </p>
     */
    inline void SetNetworkResourceUtilization(NetworkResourceUtilization&& value) { m_networkResourceUtilizationHasBeenSet = true; m_networkResourceUtilization = std::move(value); }

    /**
     * <p>The network field that contains a list of network metrics that are associated
     * with the current instance. </p>
     */
    inline EC2ResourceUtilization& WithNetworkResourceUtilization(const NetworkResourceUtilization& value) { SetNetworkResourceUtilization(value); return *this;}

    /**
     * <p>The network field that contains a list of network metrics that are associated
     * with the current instance. </p>
     */
    inline EC2ResourceUtilization& WithNetworkResourceUtilization(NetworkResourceUtilization&& value) { SetNetworkResourceUtilization(std::move(value)); return *this;}

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
