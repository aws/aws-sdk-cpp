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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBSubnetGroup.h>
#include <aws/rds/model/ResponseMetadata.h>

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
namespace RDS
{
namespace Model
{
  class AWS_RDS_API CreateDBSubnetGroupResult
  {
  public:
    CreateDBSubnetGroupResult();
    CreateDBSubnetGroupResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateDBSubnetGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const DBSubnetGroup& GetDBSubnetGroup() const{ return m_dBSubnetGroup; }

    
    inline void SetDBSubnetGroup(const DBSubnetGroup& value) { m_dBSubnetGroup = value; }

    
    inline void SetDBSubnetGroup(DBSubnetGroup&& value) { m_dBSubnetGroup = value; }

    
    inline CreateDBSubnetGroupResult& WithDBSubnetGroup(const DBSubnetGroup& value) { SetDBSubnetGroup(value); return *this;}

    
    inline CreateDBSubnetGroupResult& WithDBSubnetGroup(DBSubnetGroup&& value) { SetDBSubnetGroup(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateDBSubnetGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDBSubnetGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    DBSubnetGroup m_dBSubnetGroup;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws