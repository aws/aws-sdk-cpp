/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/DBClusterParameterGroup.h>
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
  class CopyDBClusterParameterGroupResult
  {
  public:
    AWS_DOCDB_API CopyDBClusterParameterGroupResult();
    AWS_DOCDB_API CopyDBClusterParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API CopyDBClusterParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBClusterParameterGroup& GetDBClusterParameterGroup() const{ return m_dBClusterParameterGroup; }

    
    inline void SetDBClusterParameterGroup(const DBClusterParameterGroup& value) { m_dBClusterParameterGroup = value; }

    
    inline void SetDBClusterParameterGroup(DBClusterParameterGroup&& value) { m_dBClusterParameterGroup = std::move(value); }

    
    inline CopyDBClusterParameterGroupResult& WithDBClusterParameterGroup(const DBClusterParameterGroup& value) { SetDBClusterParameterGroup(value); return *this;}

    
    inline CopyDBClusterParameterGroupResult& WithDBClusterParameterGroup(DBClusterParameterGroup&& value) { SetDBClusterParameterGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CopyDBClusterParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CopyDBClusterParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBClusterParameterGroup m_dBClusterParameterGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
