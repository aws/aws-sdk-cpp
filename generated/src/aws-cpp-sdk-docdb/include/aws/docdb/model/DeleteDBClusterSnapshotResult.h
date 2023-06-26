/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/DBClusterSnapshot.h>
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
  class DeleteDBClusterSnapshotResult
  {
  public:
    AWS_DOCDB_API DeleteDBClusterSnapshotResult();
    AWS_DOCDB_API DeleteDBClusterSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DeleteDBClusterSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBClusterSnapshot& GetDBClusterSnapshot() const{ return m_dBClusterSnapshot; }

    
    inline void SetDBClusterSnapshot(const DBClusterSnapshot& value) { m_dBClusterSnapshot = value; }

    
    inline void SetDBClusterSnapshot(DBClusterSnapshot&& value) { m_dBClusterSnapshot = std::move(value); }

    
    inline DeleteDBClusterSnapshotResult& WithDBClusterSnapshot(const DBClusterSnapshot& value) { SetDBClusterSnapshot(value); return *this;}

    
    inline DeleteDBClusterSnapshotResult& WithDBClusterSnapshot(DBClusterSnapshot&& value) { SetDBClusterSnapshot(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteDBClusterSnapshotResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteDBClusterSnapshotResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBClusterSnapshot m_dBClusterSnapshot;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
