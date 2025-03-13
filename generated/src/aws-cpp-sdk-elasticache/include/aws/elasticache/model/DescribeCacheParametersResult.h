/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeCacheParametersResult
  {
  public:
    AWS_ELASTICACHE_API DescribeCacheParametersResult() = default;
    AWS_ELASTICACHE_API DescribeCacheParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeCacheParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeCacheParametersResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a>Parameter</a> instances.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    DescribeCacheParametersResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    DescribeCacheParametersResult& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline const Aws::Vector<CacheNodeTypeSpecificParameter>& GetCacheNodeTypeSpecificParameters() const { return m_cacheNodeTypeSpecificParameters; }
    template<typename CacheNodeTypeSpecificParametersT = Aws::Vector<CacheNodeTypeSpecificParameter>>
    void SetCacheNodeTypeSpecificParameters(CacheNodeTypeSpecificParametersT&& value) { m_cacheNodeTypeSpecificParametersHasBeenSet = true; m_cacheNodeTypeSpecificParameters = std::forward<CacheNodeTypeSpecificParametersT>(value); }
    template<typename CacheNodeTypeSpecificParametersT = Aws::Vector<CacheNodeTypeSpecificParameter>>
    DescribeCacheParametersResult& WithCacheNodeTypeSpecificParameters(CacheNodeTypeSpecificParametersT&& value) { SetCacheNodeTypeSpecificParameters(std::forward<CacheNodeTypeSpecificParametersT>(value)); return *this;}
    template<typename CacheNodeTypeSpecificParametersT = CacheNodeTypeSpecificParameter>
    DescribeCacheParametersResult& AddCacheNodeTypeSpecificParameters(CacheNodeTypeSpecificParametersT&& value) { m_cacheNodeTypeSpecificParametersHasBeenSet = true; m_cacheNodeTypeSpecificParameters.emplace_back(std::forward<CacheNodeTypeSpecificParametersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCacheParametersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<CacheNodeTypeSpecificParameter> m_cacheNodeTypeSpecificParameters;
    bool m_cacheNodeTypeSpecificParametersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
