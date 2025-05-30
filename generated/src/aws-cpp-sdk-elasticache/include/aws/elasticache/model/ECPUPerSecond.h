﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>The configuration for the number of ElastiCache Processing Units (ECPU) the
   * cache can consume per second.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ECPUPerSecond">AWS
   * API Reference</a></p>
   */
  class ECPUPerSecond
  {
  public:
    AWS_ELASTICACHE_API ECPUPerSecond() = default;
    AWS_ELASTICACHE_API ECPUPerSecond(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ECPUPerSecond& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The configuration for the maximum number of ECPUs the cache can consume per
     * second.</p>
     */
    inline int GetMaximum() const { return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    inline void SetMaximum(int value) { m_maximumHasBeenSet = true; m_maximum = value; }
    inline ECPUPerSecond& WithMaximum(int value) { SetMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the minimum number of ECPUs the cache should be able
     * consume per second.</p>
     */
    inline int GetMinimum() const { return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    inline void SetMinimum(int value) { m_minimumHasBeenSet = true; m_minimum = value; }
    inline ECPUPerSecond& WithMinimum(int value) { SetMinimum(value); return *this;}
    ///@}
  private:

    int m_maximum{0};
    bool m_maximumHasBeenSet = false;

    int m_minimum{0};
    bool m_minimumHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
