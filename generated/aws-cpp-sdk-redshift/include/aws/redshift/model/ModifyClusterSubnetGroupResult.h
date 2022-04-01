﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ClusterSubnetGroup.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  class AWS_REDSHIFT_API ModifyClusterSubnetGroupResult
  {
  public:
    ModifyClusterSubnetGroupResult();
    ModifyClusterSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyClusterSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ClusterSubnetGroup& GetClusterSubnetGroup() const{ return m_clusterSubnetGroup; }

    
    inline void SetClusterSubnetGroup(const ClusterSubnetGroup& value) { m_clusterSubnetGroup = value; }

    
    inline void SetClusterSubnetGroup(ClusterSubnetGroup&& value) { m_clusterSubnetGroup = std::move(value); }

    
    inline ModifyClusterSubnetGroupResult& WithClusterSubnetGroup(const ClusterSubnetGroup& value) { SetClusterSubnetGroup(value); return *this;}

    
    inline ModifyClusterSubnetGroupResult& WithClusterSubnetGroup(ClusterSubnetGroup&& value) { SetClusterSubnetGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyClusterSubnetGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyClusterSubnetGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ClusterSubnetGroup m_clusterSubnetGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
