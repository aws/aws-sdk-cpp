/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>

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
namespace deadline
{
namespace Model
{

  /**
   * <p>Specifies the EBS volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/Ec2EbsVolume">AWS
   * API Reference</a></p>
   */
  class Ec2EbsVolume
  {
  public:
    AWS_DEADLINE_API Ec2EbsVolume();
    AWS_DEADLINE_API Ec2EbsVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Ec2EbsVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IOPS per volume.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The IOPS per volume.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The IOPS per volume.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The IOPS per volume.</p>
     */
    inline Ec2EbsVolume& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The EBS volume size in GiB.</p>
     */
    inline int GetSizeGiB() const{ return m_sizeGiB; }

    /**
     * <p>The EBS volume size in GiB.</p>
     */
    inline bool SizeGiBHasBeenSet() const { return m_sizeGiBHasBeenSet; }

    /**
     * <p>The EBS volume size in GiB.</p>
     */
    inline void SetSizeGiB(int value) { m_sizeGiBHasBeenSet = true; m_sizeGiB = value; }

    /**
     * <p>The EBS volume size in GiB.</p>
     */
    inline Ec2EbsVolume& WithSizeGiB(int value) { SetSizeGiB(value); return *this;}


    /**
     * <p>The throughput per volume in MiB.</p>
     */
    inline int GetThroughputMiB() const{ return m_throughputMiB; }

    /**
     * <p>The throughput per volume in MiB.</p>
     */
    inline bool ThroughputMiBHasBeenSet() const { return m_throughputMiBHasBeenSet; }

    /**
     * <p>The throughput per volume in MiB.</p>
     */
    inline void SetThroughputMiB(int value) { m_throughputMiBHasBeenSet = true; m_throughputMiB = value; }

    /**
     * <p>The throughput per volume in MiB.</p>
     */
    inline Ec2EbsVolume& WithThroughputMiB(int value) { SetThroughputMiB(value); return *this;}

  private:

    int m_iops;
    bool m_iopsHasBeenSet = false;

    int m_sizeGiB;
    bool m_sizeGiBHasBeenSet = false;

    int m_throughputMiB;
    bool m_throughputMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
