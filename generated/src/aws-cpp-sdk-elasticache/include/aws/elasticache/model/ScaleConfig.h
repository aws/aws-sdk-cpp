/**
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
   * <p>Configuration settings for horizontal or vertical scaling operations on
   * Memcached clusters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ScaleConfig">AWS
   * API Reference</a></p>
   */
  class ScaleConfig
  {
  public:
    AWS_ELASTICACHE_API ScaleConfig() = default;
    AWS_ELASTICACHE_API ScaleConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ScaleConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The percentage by which to scale the Memcached cluster, either horizontally
     * by adding nodes or vertically by increasing resources.</p>
     */
    inline int GetScalePercentage() const { return m_scalePercentage; }
    inline bool ScalePercentageHasBeenSet() const { return m_scalePercentageHasBeenSet; }
    inline void SetScalePercentage(int value) { m_scalePercentageHasBeenSet = true; m_scalePercentage = value; }
    inline ScaleConfig& WithScalePercentage(int value) { SetScalePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time interval in seconds between scaling operations when performing
     * gradual scaling for a Memcached cluster.</p>
     */
    inline int GetScaleIntervalMinutes() const { return m_scaleIntervalMinutes; }
    inline bool ScaleIntervalMinutesHasBeenSet() const { return m_scaleIntervalMinutesHasBeenSet; }
    inline void SetScaleIntervalMinutes(int value) { m_scaleIntervalMinutesHasBeenSet = true; m_scaleIntervalMinutes = value; }
    inline ScaleConfig& WithScaleIntervalMinutes(int value) { SetScaleIntervalMinutes(value); return *this;}
    ///@}
  private:

    int m_scalePercentage{0};
    bool m_scalePercentageHasBeenSet = false;

    int m_scaleIntervalMinutes{0};
    bool m_scaleIntervalMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
