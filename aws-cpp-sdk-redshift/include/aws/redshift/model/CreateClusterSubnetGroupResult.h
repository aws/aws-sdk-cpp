/**
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
  class CreateClusterSubnetGroupResult
  {
  public:
    AWS_REDSHIFT_API CreateClusterSubnetGroupResult();
    AWS_REDSHIFT_API CreateClusterSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateClusterSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ClusterSubnetGroup& GetClusterSubnetGroup() const{ return m_clusterSubnetGroup; }

    
    inline void SetClusterSubnetGroup(const ClusterSubnetGroup& value) { m_clusterSubnetGroup = value; }

    
    inline void SetClusterSubnetGroup(ClusterSubnetGroup&& value) { m_clusterSubnetGroup = std::move(value); }

    
    inline CreateClusterSubnetGroupResult& WithClusterSubnetGroup(const ClusterSubnetGroup& value) { SetClusterSubnetGroup(value); return *this;}

    
    inline CreateClusterSubnetGroupResult& WithClusterSubnetGroup(ClusterSubnetGroup&& value) { SetClusterSubnetGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateClusterSubnetGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateClusterSubnetGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ClusterSubnetGroup m_clusterSubnetGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
