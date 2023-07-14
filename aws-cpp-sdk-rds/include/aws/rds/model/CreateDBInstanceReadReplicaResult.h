﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBInstance.h>
#include <aws/rds/model/ResponseMetadata.h>
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
namespace RDS
{
namespace Model
{
  class AWS_RDS_API CreateDBInstanceReadReplicaResult
  {
  public:
    CreateDBInstanceReadReplicaResult();
    CreateDBInstanceReadReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateDBInstanceReadReplicaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBInstance& GetDBInstance() const{ return m_dBInstance; }

    
    inline void SetDBInstance(const DBInstance& value) { m_dBInstance = value; }

    
    inline void SetDBInstance(DBInstance&& value) { m_dBInstance = std::move(value); }

    
    inline CreateDBInstanceReadReplicaResult& WithDBInstance(const DBInstance& value) { SetDBInstance(value); return *this;}

    
    inline CreateDBInstanceReadReplicaResult& WithDBInstance(DBInstance&& value) { SetDBInstance(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateDBInstanceReadReplicaResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDBInstanceReadReplicaResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBInstance m_dBInstance;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
