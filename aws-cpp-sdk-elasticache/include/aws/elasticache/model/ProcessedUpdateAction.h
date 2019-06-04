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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/UpdateActionStatus.h>
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
   * <p>Update action that has been processed for the corresponding apply/stop
   * request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ProcessedUpdateAction">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API ProcessedUpdateAction
  {
  public:
    ProcessedUpdateAction();
    ProcessedUpdateAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    ProcessedUpdateAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the replication group</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The ID of the replication group</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The ID of the replication group</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The ID of the replication group</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The ID of the replication group</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The ID of the replication group</p>
     */
    inline ProcessedUpdateAction& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The ID of the replication group</p>
     */
    inline ProcessedUpdateAction& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the replication group</p>
     */
    inline ProcessedUpdateAction& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ProcessedUpdateAction& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ProcessedUpdateAction& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ProcessedUpdateAction& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}


    /**
     * <p>The status of the update action on the Redis cluster</p>
     */
    inline const UpdateActionStatus& GetUpdateActionStatus() const{ return m_updateActionStatus; }

    /**
     * <p>The status of the update action on the Redis cluster</p>
     */
    inline bool UpdateActionStatusHasBeenSet() const { return m_updateActionStatusHasBeenSet; }

    /**
     * <p>The status of the update action on the Redis cluster</p>
     */
    inline void SetUpdateActionStatus(const UpdateActionStatus& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = value; }

    /**
     * <p>The status of the update action on the Redis cluster</p>
     */
    inline void SetUpdateActionStatus(UpdateActionStatus&& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = std::move(value); }

    /**
     * <p>The status of the update action on the Redis cluster</p>
     */
    inline ProcessedUpdateAction& WithUpdateActionStatus(const UpdateActionStatus& value) { SetUpdateActionStatus(value); return *this;}

    /**
     * <p>The status of the update action on the Redis cluster</p>
     */
    inline ProcessedUpdateAction& WithUpdateActionStatus(UpdateActionStatus&& value) { SetUpdateActionStatus(std::move(value)); return *this;}

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet;

    UpdateActionStatus m_updateActionStatus;
    bool m_updateActionStatusHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
