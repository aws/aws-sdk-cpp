/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/model/SlotMigration.h>
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
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The status of an online resharding operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReshardingStatus">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API ReshardingStatus
  {
  public:
    ReshardingStatus();
    ReshardingStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReshardingStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Represents the progress of an online resharding operation.</p>
     */
    inline const SlotMigration& GetSlotMigration() const{ return m_slotMigration; }

    /**
     * <p>Represents the progress of an online resharding operation.</p>
     */
    inline bool SlotMigrationHasBeenSet() const { return m_slotMigrationHasBeenSet; }

    /**
     * <p>Represents the progress of an online resharding operation.</p>
     */
    inline void SetSlotMigration(const SlotMigration& value) { m_slotMigrationHasBeenSet = true; m_slotMigration = value; }

    /**
     * <p>Represents the progress of an online resharding operation.</p>
     */
    inline void SetSlotMigration(SlotMigration&& value) { m_slotMigrationHasBeenSet = true; m_slotMigration = std::move(value); }

    /**
     * <p>Represents the progress of an online resharding operation.</p>
     */
    inline ReshardingStatus& WithSlotMigration(const SlotMigration& value) { SetSlotMigration(value); return *this;}

    /**
     * <p>Represents the progress of an online resharding operation.</p>
     */
    inline ReshardingStatus& WithSlotMigration(SlotMigration&& value) { SetSlotMigration(std::move(value)); return *this;}

  private:

    SlotMigration m_slotMigration;
    bool m_slotMigrationHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
