/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/EngineDefaults.h>
#include <aws/elasticache/model/ResponseMetadata.h>
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
namespace ElastiCache
{
namespace Model
{
  class DescribeEngineDefaultParametersResult
  {
  public:
    AWS_ELASTICACHE_API DescribeEngineDefaultParametersResult();
    AWS_ELASTICACHE_API DescribeEngineDefaultParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeEngineDefaultParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const EngineDefaults& GetEngineDefaults() const{ return m_engineDefaults; }

    
    inline void SetEngineDefaults(const EngineDefaults& value) { m_engineDefaults = value; }

    
    inline void SetEngineDefaults(EngineDefaults&& value) { m_engineDefaults = std::move(value); }

    
    inline DescribeEngineDefaultParametersResult& WithEngineDefaults(const EngineDefaults& value) { SetEngineDefaults(value); return *this;}

    
    inline DescribeEngineDefaultParametersResult& WithEngineDefaults(EngineDefaults&& value) { SetEngineDefaults(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEngineDefaultParametersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEngineDefaultParametersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    EngineDefaults m_engineDefaults;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
