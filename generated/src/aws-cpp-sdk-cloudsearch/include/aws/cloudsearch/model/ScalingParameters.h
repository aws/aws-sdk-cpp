/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudsearch/model/PartitionInstanceType.h>
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
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>The desired instance type and desired number of replicas of each index
   * partition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ScalingParameters">AWS
   * API Reference</a></p>
   */
  class ScalingParameters
  {
  public:
    AWS_CLOUDSEARCH_API ScalingParameters();
    AWS_CLOUDSEARCH_API ScalingParameters(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API ScalingParameters& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance type that you want to preconfigure for your domain. For example,
     * <code>search.m1.small</code>.</p>
     */
    inline const PartitionInstanceType& GetDesiredInstanceType() const{ return m_desiredInstanceType; }

    /**
     * <p>The instance type that you want to preconfigure for your domain. For example,
     * <code>search.m1.small</code>.</p>
     */
    inline bool DesiredInstanceTypeHasBeenSet() const { return m_desiredInstanceTypeHasBeenSet; }

    /**
     * <p>The instance type that you want to preconfigure for your domain. For example,
     * <code>search.m1.small</code>.</p>
     */
    inline void SetDesiredInstanceType(const PartitionInstanceType& value) { m_desiredInstanceTypeHasBeenSet = true; m_desiredInstanceType = value; }

    /**
     * <p>The instance type that you want to preconfigure for your domain. For example,
     * <code>search.m1.small</code>.</p>
     */
    inline void SetDesiredInstanceType(PartitionInstanceType&& value) { m_desiredInstanceTypeHasBeenSet = true; m_desiredInstanceType = std::move(value); }

    /**
     * <p>The instance type that you want to preconfigure for your domain. For example,
     * <code>search.m1.small</code>.</p>
     */
    inline ScalingParameters& WithDesiredInstanceType(const PartitionInstanceType& value) { SetDesiredInstanceType(value); return *this;}

    /**
     * <p>The instance type that you want to preconfigure for your domain. For example,
     * <code>search.m1.small</code>.</p>
     */
    inline ScalingParameters& WithDesiredInstanceType(PartitionInstanceType&& value) { SetDesiredInstanceType(std::move(value)); return *this;}


    /**
     * <p>The number of replicas you want to preconfigure for each index partition.</p>
     */
    inline int GetDesiredReplicationCount() const{ return m_desiredReplicationCount; }

    /**
     * <p>The number of replicas you want to preconfigure for each index partition.</p>
     */
    inline bool DesiredReplicationCountHasBeenSet() const { return m_desiredReplicationCountHasBeenSet; }

    /**
     * <p>The number of replicas you want to preconfigure for each index partition.</p>
     */
    inline void SetDesiredReplicationCount(int value) { m_desiredReplicationCountHasBeenSet = true; m_desiredReplicationCount = value; }

    /**
     * <p>The number of replicas you want to preconfigure for each index partition.</p>
     */
    inline ScalingParameters& WithDesiredReplicationCount(int value) { SetDesiredReplicationCount(value); return *this;}


    /**
     * <p>The number of partitions you want to preconfigure for your domain. Only valid
     * when you select <code>m2.2xlarge</code> as the desired instance type.</p>
     */
    inline int GetDesiredPartitionCount() const{ return m_desiredPartitionCount; }

    /**
     * <p>The number of partitions you want to preconfigure for your domain. Only valid
     * when you select <code>m2.2xlarge</code> as the desired instance type.</p>
     */
    inline bool DesiredPartitionCountHasBeenSet() const { return m_desiredPartitionCountHasBeenSet; }

    /**
     * <p>The number of partitions you want to preconfigure for your domain. Only valid
     * when you select <code>m2.2xlarge</code> as the desired instance type.</p>
     */
    inline void SetDesiredPartitionCount(int value) { m_desiredPartitionCountHasBeenSet = true; m_desiredPartitionCount = value; }

    /**
     * <p>The number of partitions you want to preconfigure for your domain. Only valid
     * when you select <code>m2.2xlarge</code> as the desired instance type.</p>
     */
    inline ScalingParameters& WithDesiredPartitionCount(int value) { SetDesiredPartitionCount(value); return *this;}

  private:

    PartitionInstanceType m_desiredInstanceType;
    bool m_desiredInstanceTypeHasBeenSet = false;

    int m_desiredReplicationCount;
    bool m_desiredReplicationCountHasBeenSet = false;

    int m_desiredPartitionCount;
    bool m_desiredPartitionCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
