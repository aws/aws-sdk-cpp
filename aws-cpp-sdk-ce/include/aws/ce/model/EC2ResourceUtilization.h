/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/EBSResourceUtilization.h>
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
   * <p> Utilization metrics of the instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/EC2ResourceUtilization">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API EC2ResourceUtilization
  {
  public:
    EC2ResourceUtilization();
    EC2ResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    EC2ResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Maximum observed or expected CPU utilization of the instance.</p>
     */
    inline const Aws::String& GetMaxCpuUtilizationPercentage() const{ return m_maxCpuUtilizationPercentage; }

    /**
     * <p> Maximum observed or expected CPU utilization of the instance.</p>
     */
    inline bool MaxCpuUtilizationPercentageHasBeenSet() const { return m_maxCpuUtilizationPercentageHasBeenSet; }

    /**
     * <p> Maximum observed or expected CPU utilization of the instance.</p>
     */
    inline void SetMaxCpuUtilizationPercentage(const Aws::String& value) { m_maxCpuUtilizationPercentageHasBeenSet = true; m_maxCpuUtilizationPercentage = value; }

    /**
     * <p> Maximum observed or expected CPU utilization of the instance.</p>
     */
    inline void SetMaxCpuUtilizationPercentage(Aws::String&& value) { m_maxCpuUtilizationPercentageHasBeenSet = true; m_maxCpuUtilizationPercentage = std::move(value); }

    /**
     * <p> Maximum observed or expected CPU utilization of the instance.</p>
     */
    inline void SetMaxCpuUtilizationPercentage(const char* value) { m_maxCpuUtilizationPercentageHasBeenSet = true; m_maxCpuUtilizationPercentage.assign(value); }

    /**
     * <p> Maximum observed or expected CPU utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxCpuUtilizationPercentage(const Aws::String& value) { SetMaxCpuUtilizationPercentage(value); return *this;}

    /**
     * <p> Maximum observed or expected CPU utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxCpuUtilizationPercentage(Aws::String&& value) { SetMaxCpuUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p> Maximum observed or expected CPU utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxCpuUtilizationPercentage(const char* value) { SetMaxCpuUtilizationPercentage(value); return *this;}


    /**
     * <p> Maximum observed or expected memory utilization of the instance.</p>
     */
    inline const Aws::String& GetMaxMemoryUtilizationPercentage() const{ return m_maxMemoryUtilizationPercentage; }

    /**
     * <p> Maximum observed or expected memory utilization of the instance.</p>
     */
    inline bool MaxMemoryUtilizationPercentageHasBeenSet() const { return m_maxMemoryUtilizationPercentageHasBeenSet; }

    /**
     * <p> Maximum observed or expected memory utilization of the instance.</p>
     */
    inline void SetMaxMemoryUtilizationPercentage(const Aws::String& value) { m_maxMemoryUtilizationPercentageHasBeenSet = true; m_maxMemoryUtilizationPercentage = value; }

    /**
     * <p> Maximum observed or expected memory utilization of the instance.</p>
     */
    inline void SetMaxMemoryUtilizationPercentage(Aws::String&& value) { m_maxMemoryUtilizationPercentageHasBeenSet = true; m_maxMemoryUtilizationPercentage = std::move(value); }

    /**
     * <p> Maximum observed or expected memory utilization of the instance.</p>
     */
    inline void SetMaxMemoryUtilizationPercentage(const char* value) { m_maxMemoryUtilizationPercentageHasBeenSet = true; m_maxMemoryUtilizationPercentage.assign(value); }

    /**
     * <p> Maximum observed or expected memory utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxMemoryUtilizationPercentage(const Aws::String& value) { SetMaxMemoryUtilizationPercentage(value); return *this;}

    /**
     * <p> Maximum observed or expected memory utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxMemoryUtilizationPercentage(Aws::String&& value) { SetMaxMemoryUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p> Maximum observed or expected memory utilization of the instance.</p>
     */
    inline EC2ResourceUtilization& WithMaxMemoryUtilizationPercentage(const char* value) { SetMaxMemoryUtilizationPercentage(value); return *this;}


    /**
     * <p> Maximum observed or expected storage utilization of the instance (does not
     * measure EBS storage).</p>
     */
    inline const Aws::String& GetMaxStorageUtilizationPercentage() const{ return m_maxStorageUtilizationPercentage; }

    /**
     * <p> Maximum observed or expected storage utilization of the instance (does not
     * measure EBS storage).</p>
     */
    inline bool MaxStorageUtilizationPercentageHasBeenSet() const { return m_maxStorageUtilizationPercentageHasBeenSet; }

    /**
     * <p> Maximum observed or expected storage utilization of the instance (does not
     * measure EBS storage).</p>
     */
    inline void SetMaxStorageUtilizationPercentage(const Aws::String& value) { m_maxStorageUtilizationPercentageHasBeenSet = true; m_maxStorageUtilizationPercentage = value; }

    /**
     * <p> Maximum observed or expected storage utilization of the instance (does not
     * measure EBS storage).</p>
     */
    inline void SetMaxStorageUtilizationPercentage(Aws::String&& value) { m_maxStorageUtilizationPercentageHasBeenSet = true; m_maxStorageUtilizationPercentage = std::move(value); }

    /**
     * <p> Maximum observed or expected storage utilization of the instance (does not
     * measure EBS storage).</p>
     */
    inline void SetMaxStorageUtilizationPercentage(const char* value) { m_maxStorageUtilizationPercentageHasBeenSet = true; m_maxStorageUtilizationPercentage.assign(value); }

    /**
     * <p> Maximum observed or expected storage utilization of the instance (does not
     * measure EBS storage).</p>
     */
    inline EC2ResourceUtilization& WithMaxStorageUtilizationPercentage(const Aws::String& value) { SetMaxStorageUtilizationPercentage(value); return *this;}

    /**
     * <p> Maximum observed or expected storage utilization of the instance (does not
     * measure EBS storage).</p>
     */
    inline EC2ResourceUtilization& WithMaxStorageUtilizationPercentage(Aws::String&& value) { SetMaxStorageUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p> Maximum observed or expected storage utilization of the instance (does not
     * measure EBS storage).</p>
     */
    inline EC2ResourceUtilization& WithMaxStorageUtilizationPercentage(const char* value) { SetMaxStorageUtilizationPercentage(value); return *this;}


    /**
     * <p> The EBS field that contains a list of EBS metrics associated with the
     * current instance. </p>
     */
    inline const EBSResourceUtilization& GetEBSResourceUtilization() const{ return m_eBSResourceUtilization; }

    /**
     * <p> The EBS field that contains a list of EBS metrics associated with the
     * current instance. </p>
     */
    inline bool EBSResourceUtilizationHasBeenSet() const { return m_eBSResourceUtilizationHasBeenSet; }

    /**
     * <p> The EBS field that contains a list of EBS metrics associated with the
     * current instance. </p>
     */
    inline void SetEBSResourceUtilization(const EBSResourceUtilization& value) { m_eBSResourceUtilizationHasBeenSet = true; m_eBSResourceUtilization = value; }

    /**
     * <p> The EBS field that contains a list of EBS metrics associated with the
     * current instance. </p>
     */
    inline void SetEBSResourceUtilization(EBSResourceUtilization&& value) { m_eBSResourceUtilizationHasBeenSet = true; m_eBSResourceUtilization = std::move(value); }

    /**
     * <p> The EBS field that contains a list of EBS metrics associated with the
     * current instance. </p>
     */
    inline EC2ResourceUtilization& WithEBSResourceUtilization(const EBSResourceUtilization& value) { SetEBSResourceUtilization(value); return *this;}

    /**
     * <p> The EBS field that contains a list of EBS metrics associated with the
     * current instance. </p>
     */
    inline EC2ResourceUtilization& WithEBSResourceUtilization(EBSResourceUtilization&& value) { SetEBSResourceUtilization(std::move(value)); return *this;}

  private:

    Aws::String m_maxCpuUtilizationPercentage;
    bool m_maxCpuUtilizationPercentageHasBeenSet;

    Aws::String m_maxMemoryUtilizationPercentage;
    bool m_maxMemoryUtilizationPercentageHasBeenSet;

    Aws::String m_maxStorageUtilizationPercentage;
    bool m_maxStorageUtilizationPercentageHasBeenSet;

    EBSResourceUtilization m_eBSResourceUtilization;
    bool m_eBSResourceUtilizationHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
