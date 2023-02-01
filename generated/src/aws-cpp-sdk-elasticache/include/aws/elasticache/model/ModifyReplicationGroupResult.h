/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/ReplicationGroup.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{
  class ModifyReplicationGroupResult
  {
  public:
    AWS_ELASTICACHE_API ModifyReplicationGroupResult();
    AWS_ELASTICACHE_API ModifyReplicationGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API ModifyReplicationGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ReplicationGroup& GetReplicationGroup() const{ return m_replicationGroup; }

    
    inline void SetReplicationGroup(const ReplicationGroup& value) { m_replicationGroup = value; }

    
    inline void SetReplicationGroup(ReplicationGroup&& value) { m_replicationGroup = std::move(value); }

    
    inline ModifyReplicationGroupResult& WithReplicationGroup(const ReplicationGroup& value) { SetReplicationGroup(value); return *this;}

    
    inline ModifyReplicationGroupResult& WithReplicationGroup(ReplicationGroup&& value) { SetReplicationGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyReplicationGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyReplicationGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ReplicationGroup m_replicationGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
