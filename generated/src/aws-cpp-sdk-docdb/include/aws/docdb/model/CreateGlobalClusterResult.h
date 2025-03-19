/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/GlobalCluster.h>
#include <aws/docdb/model/ResponseMetadata.h>
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
namespace DocDB
{
namespace Model
{
  class CreateGlobalClusterResult
  {
  public:
    AWS_DOCDB_API CreateGlobalClusterResult() = default;
    AWS_DOCDB_API CreateGlobalClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API CreateGlobalClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const GlobalCluster& GetGlobalCluster() const { return m_globalCluster; }
    template<typename GlobalClusterT = GlobalCluster>
    void SetGlobalCluster(GlobalClusterT&& value) { m_globalClusterHasBeenSet = true; m_globalCluster = std::forward<GlobalClusterT>(value); }
    template<typename GlobalClusterT = GlobalCluster>
    CreateGlobalClusterResult& WithGlobalCluster(GlobalClusterT&& value) { SetGlobalCluster(std::forward<GlobalClusterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateGlobalClusterResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    GlobalCluster m_globalCluster;
    bool m_globalClusterHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
