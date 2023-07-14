﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBCluster.h>
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
  class AWS_RDS_API DeleteDBClusterResult
  {
  public:
    DeleteDBClusterResult();
    DeleteDBClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteDBClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBCluster& GetDBCluster() const{ return m_dBCluster; }

    
    inline void SetDBCluster(const DBCluster& value) { m_dBCluster = value; }

    
    inline void SetDBCluster(DBCluster&& value) { m_dBCluster = std::move(value); }

    
    inline DeleteDBClusterResult& WithDBCluster(const DBCluster& value) { SetDBCluster(value); return *this;}

    
    inline DeleteDBClusterResult& WithDBCluster(DBCluster&& value) { SetDBCluster(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteDBClusterResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteDBClusterResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBCluster m_dBCluster;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
