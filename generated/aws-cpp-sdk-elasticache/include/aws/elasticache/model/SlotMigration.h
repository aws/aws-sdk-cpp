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
   * <p>Represents the progress of an online resharding operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/SlotMigration">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API SlotMigration
  {
  public:
    SlotMigration();
    SlotMigration(const Aws::Utils::Xml::XmlNode& xmlNode);
    SlotMigration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The percentage of the slot migration that is complete.</p>
     */
    inline double GetProgressPercentage() const{ return m_progressPercentage; }

    /**
     * <p>The percentage of the slot migration that is complete.</p>
     */
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }

    /**
     * <p>The percentage of the slot migration that is complete.</p>
     */
    inline void SetProgressPercentage(double value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }

    /**
     * <p>The percentage of the slot migration that is complete.</p>
     */
    inline SlotMigration& WithProgressPercentage(double value) { SetProgressPercentage(value); return *this;}

  private:

    double m_progressPercentage;
    bool m_progressPercentageHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
