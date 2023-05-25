/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Indicates the slot configuration and global identifier for a slice
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/GlobalNodeGroup">AWS
   * API Reference</a></p>
   */
  class GlobalNodeGroup
  {
  public:
    AWS_ELASTICACHE_API GlobalNodeGroup();
    AWS_ELASTICACHE_API GlobalNodeGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API GlobalNodeGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the global node group</p>
     */
    inline const Aws::String& GetGlobalNodeGroupId() const{ return m_globalNodeGroupId; }

    /**
     * <p>The name of the global node group</p>
     */
    inline bool GlobalNodeGroupIdHasBeenSet() const { return m_globalNodeGroupIdHasBeenSet; }

    /**
     * <p>The name of the global node group</p>
     */
    inline void SetGlobalNodeGroupId(const Aws::String& value) { m_globalNodeGroupIdHasBeenSet = true; m_globalNodeGroupId = value; }

    /**
     * <p>The name of the global node group</p>
     */
    inline void SetGlobalNodeGroupId(Aws::String&& value) { m_globalNodeGroupIdHasBeenSet = true; m_globalNodeGroupId = std::move(value); }

    /**
     * <p>The name of the global node group</p>
     */
    inline void SetGlobalNodeGroupId(const char* value) { m_globalNodeGroupIdHasBeenSet = true; m_globalNodeGroupId.assign(value); }

    /**
     * <p>The name of the global node group</p>
     */
    inline GlobalNodeGroup& WithGlobalNodeGroupId(const Aws::String& value) { SetGlobalNodeGroupId(value); return *this;}

    /**
     * <p>The name of the global node group</p>
     */
    inline GlobalNodeGroup& WithGlobalNodeGroupId(Aws::String&& value) { SetGlobalNodeGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the global node group</p>
     */
    inline GlobalNodeGroup& WithGlobalNodeGroupId(const char* value) { SetGlobalNodeGroupId(value); return *this;}


    /**
     * <p>The keyspace for this node group</p>
     */
    inline const Aws::String& GetSlots() const{ return m_slots; }

    /**
     * <p>The keyspace for this node group</p>
     */
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }

    /**
     * <p>The keyspace for this node group</p>
     */
    inline void SetSlots(const Aws::String& value) { m_slotsHasBeenSet = true; m_slots = value; }

    /**
     * <p>The keyspace for this node group</p>
     */
    inline void SetSlots(Aws::String&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }

    /**
     * <p>The keyspace for this node group</p>
     */
    inline void SetSlots(const char* value) { m_slotsHasBeenSet = true; m_slots.assign(value); }

    /**
     * <p>The keyspace for this node group</p>
     */
    inline GlobalNodeGroup& WithSlots(const Aws::String& value) { SetSlots(value); return *this;}

    /**
     * <p>The keyspace for this node group</p>
     */
    inline GlobalNodeGroup& WithSlots(Aws::String&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>The keyspace for this node group</p>
     */
    inline GlobalNodeGroup& WithSlots(const char* value) { SetSlots(value); return *this;}

  private:

    Aws::String m_globalNodeGroupId;
    bool m_globalNodeGroupIdHasBeenSet = false;

    Aws::String m_slots;
    bool m_slotsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
