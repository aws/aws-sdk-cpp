/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Parameter.h>
#include <aws/elasticache/model/CacheNodeTypeSpecificParameter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the output of a <code>DescribeEngineDefaultParameters</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/EngineDefaults">AWS
   * API Reference</a></p>
   */
  class EngineDefaults
  {
  public:
    AWS_ELASTICACHE_API EngineDefaults() = default;
    AWS_ELASTICACHE_API EngineDefaults(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API EngineDefaults& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the name of the cache parameter group family to which the engine
     * default parameters apply.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.0</code> | <code>redis6.x</code> |
     * <code>redis7</code> </p>
     */
    inline const Aws::String& GetCacheParameterGroupFamily() const { return m_cacheParameterGroupFamily; }
    inline bool CacheParameterGroupFamilyHasBeenSet() const { return m_cacheParameterGroupFamilyHasBeenSet; }
    template<typename CacheParameterGroupFamilyT = Aws::String>
    void SetCacheParameterGroupFamily(CacheParameterGroupFamilyT&& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = std::forward<CacheParameterGroupFamilyT>(value); }
    template<typename CacheParameterGroupFamilyT = Aws::String>
    EngineDefaults& WithCacheParameterGroupFamily(CacheParameterGroupFamilyT&& value) { SetCacheParameterGroupFamily(std::forward<CacheParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    EngineDefaults& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    EngineDefaults& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    EngineDefaults& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline const Aws::Vector<CacheNodeTypeSpecificParameter>& GetCacheNodeTypeSpecificParameters() const { return m_cacheNodeTypeSpecificParameters; }
    inline bool CacheNodeTypeSpecificParametersHasBeenSet() const { return m_cacheNodeTypeSpecificParametersHasBeenSet; }
    template<typename CacheNodeTypeSpecificParametersT = Aws::Vector<CacheNodeTypeSpecificParameter>>
    void SetCacheNodeTypeSpecificParameters(CacheNodeTypeSpecificParametersT&& value) { m_cacheNodeTypeSpecificParametersHasBeenSet = true; m_cacheNodeTypeSpecificParameters = std::forward<CacheNodeTypeSpecificParametersT>(value); }
    template<typename CacheNodeTypeSpecificParametersT = Aws::Vector<CacheNodeTypeSpecificParameter>>
    EngineDefaults& WithCacheNodeTypeSpecificParameters(CacheNodeTypeSpecificParametersT&& value) { SetCacheNodeTypeSpecificParameters(std::forward<CacheNodeTypeSpecificParametersT>(value)); return *this;}
    template<typename CacheNodeTypeSpecificParametersT = CacheNodeTypeSpecificParameter>
    EngineDefaults& AddCacheNodeTypeSpecificParameters(CacheNodeTypeSpecificParametersT&& value) { m_cacheNodeTypeSpecificParametersHasBeenSet = true; m_cacheNodeTypeSpecificParameters.emplace_back(std::forward<CacheNodeTypeSpecificParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cacheParameterGroupFamily;
    bool m_cacheParameterGroupFamilyHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<CacheNodeTypeSpecificParameter> m_cacheNodeTypeSpecificParameters;
    bool m_cacheNodeTypeSpecificParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
