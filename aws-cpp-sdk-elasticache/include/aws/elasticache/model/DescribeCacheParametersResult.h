/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/Parameter.h>
#include <aws/elasticache/model/CacheNodeTypeSpecificParameter.h>
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
  /**
   * <p>Represents the output of a <code>DescribeCacheParameters</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheParameterGroupDetails">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API DescribeCacheParametersResult
  {
  public:
    DescribeCacheParametersResult();
    DescribeCacheParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeCacheParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheParametersResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheParametersResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheParametersResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of <a>Parameter</a> instances.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of <a>Parameter</a> instances.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parameters = value; }

    /**
     * <p>A list of <a>Parameter</a> instances.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parameters = std::move(value); }

    /**
     * <p>A list of <a>Parameter</a> instances.</p>
     */
    inline DescribeCacheParametersResult& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <a>Parameter</a> instances.</p>
     */
    inline DescribeCacheParametersResult& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <a>Parameter</a> instances.</p>
     */
    inline DescribeCacheParametersResult& AddParameters(const Parameter& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <a>Parameter</a> instances.</p>
     */
    inline DescribeCacheParametersResult& AddParameters(Parameter&& value) { m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline const Aws::Vector<CacheNodeTypeSpecificParameter>& GetCacheNodeTypeSpecificParameters() const{ return m_cacheNodeTypeSpecificParameters; }

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline void SetCacheNodeTypeSpecificParameters(const Aws::Vector<CacheNodeTypeSpecificParameter>& value) { m_cacheNodeTypeSpecificParameters = value; }

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline void SetCacheNodeTypeSpecificParameters(Aws::Vector<CacheNodeTypeSpecificParameter>&& value) { m_cacheNodeTypeSpecificParameters = std::move(value); }

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline DescribeCacheParametersResult& WithCacheNodeTypeSpecificParameters(const Aws::Vector<CacheNodeTypeSpecificParameter>& value) { SetCacheNodeTypeSpecificParameters(value); return *this;}

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline DescribeCacheParametersResult& WithCacheNodeTypeSpecificParameters(Aws::Vector<CacheNodeTypeSpecificParameter>&& value) { SetCacheNodeTypeSpecificParameters(std::move(value)); return *this;}

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline DescribeCacheParametersResult& AddCacheNodeTypeSpecificParameters(const CacheNodeTypeSpecificParameter& value) { m_cacheNodeTypeSpecificParameters.push_back(value); return *this; }

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline DescribeCacheParametersResult& AddCacheNodeTypeSpecificParameters(CacheNodeTypeSpecificParameter&& value) { m_cacheNodeTypeSpecificParameters.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCacheParametersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCacheParametersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<Parameter> m_parameters;

    Aws::Vector<CacheNodeTypeSpecificParameter> m_cacheNodeTypeSpecificParameters;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
