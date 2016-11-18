﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/ReplicationGroup.h>
#include <aws/elasticache/model/ResponseMetadata.h>

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
  class AWS_ELASTICACHE_API DeleteReplicationGroupResult
  {
  public:
    DeleteReplicationGroupResult();
    DeleteReplicationGroupResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteReplicationGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const ReplicationGroup& GetReplicationGroup() const{ return m_replicationGroup; }

    
    inline void SetReplicationGroup(const ReplicationGroup& value) { m_replicationGroup = value; }

    
    inline void SetReplicationGroup(ReplicationGroup&& value) { m_replicationGroup = value; }

    
    inline DeleteReplicationGroupResult& WithReplicationGroup(const ReplicationGroup& value) { SetReplicationGroup(value); return *this;}

    
    inline DeleteReplicationGroupResult& WithReplicationGroup(ReplicationGroup&& value) { SetReplicationGroup(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DeleteReplicationGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteReplicationGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    ReplicationGroup m_replicationGroup;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws