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
   * <p>Update action that has failed to be processed for the corresponding
   * apply/stop request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/UnprocessedUpdateAction">AWS
   * API Reference</a></p>
   */
  class UnprocessedUpdateAction
  {
  public:
    AWS_ELASTICACHE_API UnprocessedUpdateAction();
    AWS_ELASTICACHE_API UnprocessedUpdateAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API UnprocessedUpdateAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The replication group ID</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The replication group ID</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The replication group ID</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The replication group ID</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The replication group ID</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The replication group ID</p>
     */
    inline UnprocessedUpdateAction& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The replication group ID</p>
     */
    inline UnprocessedUpdateAction& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The replication group ID</p>
     */
    inline UnprocessedUpdateAction& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>The ID of the cache cluster</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The ID of the cache cluster</p>
     */
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }

    /**
     * <p>The ID of the cache cluster</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The ID of the cache cluster</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }

    /**
     * <p>The ID of the cache cluster</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The ID of the cache cluster</p>
     */
    inline UnprocessedUpdateAction& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The ID of the cache cluster</p>
     */
    inline UnprocessedUpdateAction& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the cache cluster</p>
     */
    inline UnprocessedUpdateAction& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}


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
    inline UnprocessedUpdateAction& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline UnprocessedUpdateAction& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline UnprocessedUpdateAction& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}


    /**
     * <p>The error type for requests that are not processed</p>
     */
    inline const Aws::String& GetErrorType() const{ return m_errorType; }

    /**
     * <p>The error type for requests that are not processed</p>
     */
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }

    /**
     * <p>The error type for requests that are not processed</p>
     */
    inline void SetErrorType(const Aws::String& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }

    /**
     * <p>The error type for requests that are not processed</p>
     */
    inline void SetErrorType(Aws::String&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }

    /**
     * <p>The error type for requests that are not processed</p>
     */
    inline void SetErrorType(const char* value) { m_errorTypeHasBeenSet = true; m_errorType.assign(value); }

    /**
     * <p>The error type for requests that are not processed</p>
     */
    inline UnprocessedUpdateAction& WithErrorType(const Aws::String& value) { SetErrorType(value); return *this;}

    /**
     * <p>The error type for requests that are not processed</p>
     */
    inline UnprocessedUpdateAction& WithErrorType(Aws::String&& value) { SetErrorType(std::move(value)); return *this;}

    /**
     * <p>The error type for requests that are not processed</p>
     */
    inline UnprocessedUpdateAction& WithErrorType(const char* value) { SetErrorType(value); return *this;}


    /**
     * <p>The error message that describes the reason the request was not processed</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message that describes the reason the request was not processed</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message that describes the reason the request was not processed</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message that describes the reason the request was not processed</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message that describes the reason the request was not processed</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message that describes the reason the request was not processed</p>
     */
    inline UnprocessedUpdateAction& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message that describes the reason the request was not processed</p>
     */
    inline UnprocessedUpdateAction& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message that describes the reason the request was not processed</p>
     */
    inline UnprocessedUpdateAction& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::String m_errorType;
    bool m_errorTypeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
