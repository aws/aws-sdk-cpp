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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/Cluster.h>
#include <aws/redshift/model/ResponseMetadata.h>

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
namespace Redshift
{
namespace Model
{
  class AWS_REDSHIFT_API ModifyClusterResult
  {
  public:
    ModifyClusterResult();
    ModifyClusterResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyClusterResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Cluster& GetCluster() const{ return m_cluster; }

    
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    
    inline void SetCluster(Cluster&& value) { m_cluster = value; }

    
    inline ModifyClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    
    inline ModifyClusterResult& WithCluster(Cluster&& value) { SetCluster(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ModifyClusterResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyClusterResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Cluster m_cluster;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws