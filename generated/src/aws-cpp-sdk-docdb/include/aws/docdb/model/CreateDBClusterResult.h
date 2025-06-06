﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/DBCluster.h>
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
  class CreateDBClusterResult
  {
  public:
    AWS_DOCDB_API CreateDBClusterResult() = default;
    AWS_DOCDB_API CreateDBClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API CreateDBClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBCluster& GetDBCluster() const { return m_dBCluster; }
    template<typename DBClusterT = DBCluster>
    void SetDBCluster(DBClusterT&& value) { m_dBClusterHasBeenSet = true; m_dBCluster = std::forward<DBClusterT>(value); }
    template<typename DBClusterT = DBCluster>
    CreateDBClusterResult& WithDBCluster(DBClusterT&& value) { SetDBCluster(std::forward<DBClusterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateDBClusterResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBCluster m_dBCluster;
    bool m_dBClusterHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
