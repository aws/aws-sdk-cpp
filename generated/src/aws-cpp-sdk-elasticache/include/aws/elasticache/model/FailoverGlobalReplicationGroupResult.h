/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/GlobalReplicationGroup.h>
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
  class FailoverGlobalReplicationGroupResult
  {
  public:
    AWS_ELASTICACHE_API FailoverGlobalReplicationGroupResult() = default;
    AWS_ELASTICACHE_API FailoverGlobalReplicationGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API FailoverGlobalReplicationGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const GlobalReplicationGroup& GetGlobalReplicationGroup() const { return m_globalReplicationGroup; }
    template<typename GlobalReplicationGroupT = GlobalReplicationGroup>
    void SetGlobalReplicationGroup(GlobalReplicationGroupT&& value) { m_globalReplicationGroupHasBeenSet = true; m_globalReplicationGroup = std::forward<GlobalReplicationGroupT>(value); }
    template<typename GlobalReplicationGroupT = GlobalReplicationGroup>
    FailoverGlobalReplicationGroupResult& WithGlobalReplicationGroup(GlobalReplicationGroupT&& value) { SetGlobalReplicationGroup(std::forward<GlobalReplicationGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    FailoverGlobalReplicationGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    GlobalReplicationGroup m_globalReplicationGroup;
    bool m_globalReplicationGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
