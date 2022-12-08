/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/DefaultClusterParameters.h>
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
  class DescribeDefaultClusterParametersResult
  {
  public:
    AWS_REDSHIFT_API DescribeDefaultClusterParametersResult();
    AWS_REDSHIFT_API DescribeDefaultClusterParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeDefaultClusterParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DefaultClusterParameters& GetDefaultClusterParameters() const{ return m_defaultClusterParameters; }

    
    inline void SetDefaultClusterParameters(const DefaultClusterParameters& value) { m_defaultClusterParameters = value; }

    
    inline void SetDefaultClusterParameters(DefaultClusterParameters&& value) { m_defaultClusterParameters = std::move(value); }

    
    inline DescribeDefaultClusterParametersResult& WithDefaultClusterParameters(const DefaultClusterParameters& value) { SetDefaultClusterParameters(value); return *this;}

    
    inline DescribeDefaultClusterParametersResult& WithDefaultClusterParameters(DefaultClusterParameters&& value) { SetDefaultClusterParameters(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDefaultClusterParametersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDefaultClusterParametersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DefaultClusterParameters m_defaultClusterParameters;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
