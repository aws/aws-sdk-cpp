/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/Snapshot.h>
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
  class CreateSnapshotResult
  {
  public:
    AWS_ELASTICACHE_API CreateSnapshotResult();
    AWS_ELASTICACHE_API CreateSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CreateSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Snapshot& GetSnapshot() const{ return m_snapshot; }

    
    inline void SetSnapshot(const Snapshot& value) { m_snapshot = value; }

    
    inline void SetSnapshot(Snapshot&& value) { m_snapshot = std::move(value); }

    
    inline CreateSnapshotResult& WithSnapshot(const Snapshot& value) { SetSnapshot(value); return *this;}

    
    inline CreateSnapshotResult& WithSnapshot(Snapshot&& value) { SetSnapshot(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateSnapshotResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateSnapshotResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Snapshot m_snapshot;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
