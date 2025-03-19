/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/DBClusterSnapshotAttributesResult.h>
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
  class DescribeDBClusterSnapshotAttributesResult
  {
  public:
    AWS_DOCDB_API DescribeDBClusterSnapshotAttributesResult() = default;
    AWS_DOCDB_API DescribeDBClusterSnapshotAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DescribeDBClusterSnapshotAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBClusterSnapshotAttributesResult& GetDBClusterSnapshotAttributesResult() const { return m_dBClusterSnapshotAttributesResult; }
    template<typename DBClusterSnapshotAttributesResultT = DBClusterSnapshotAttributesResult>
    void SetDBClusterSnapshotAttributesResult(DBClusterSnapshotAttributesResultT&& value) { m_dBClusterSnapshotAttributesResultHasBeenSet = true; m_dBClusterSnapshotAttributesResult = std::forward<DBClusterSnapshotAttributesResultT>(value); }
    template<typename DBClusterSnapshotAttributesResultT = DBClusterSnapshotAttributesResult>
    DescribeDBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributesResult(DBClusterSnapshotAttributesResultT&& value) { SetDBClusterSnapshotAttributesResult(std::forward<DBClusterSnapshotAttributesResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBClusterSnapshotAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBClusterSnapshotAttributesResult m_dBClusterSnapshotAttributesResult;
    bool m_dBClusterSnapshotAttributesResultHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
