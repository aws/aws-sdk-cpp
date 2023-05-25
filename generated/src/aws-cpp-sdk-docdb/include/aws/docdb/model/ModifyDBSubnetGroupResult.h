/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/DBSubnetGroup.h>
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
  class ModifyDBSubnetGroupResult
  {
  public:
    AWS_DOCDB_API ModifyDBSubnetGroupResult();
    AWS_DOCDB_API ModifyDBSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API ModifyDBSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBSubnetGroup& GetDBSubnetGroup() const{ return m_dBSubnetGroup; }

    
    inline void SetDBSubnetGroup(const DBSubnetGroup& value) { m_dBSubnetGroup = value; }

    
    inline void SetDBSubnetGroup(DBSubnetGroup&& value) { m_dBSubnetGroup = std::move(value); }

    
    inline ModifyDBSubnetGroupResult& WithDBSubnetGroup(const DBSubnetGroup& value) { SetDBSubnetGroup(value); return *this;}

    
    inline ModifyDBSubnetGroupResult& WithDBSubnetGroup(DBSubnetGroup&& value) { SetDBSubnetGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyDBSubnetGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyDBSubnetGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBSubnetGroup m_dBSubnetGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
