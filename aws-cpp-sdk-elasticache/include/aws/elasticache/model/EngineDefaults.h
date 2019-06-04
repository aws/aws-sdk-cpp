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
  class AWS_ELASTICACHE_API EngineDefaults
  {
  public:
    EngineDefaults();
    EngineDefaults(const Aws::Utils::Xml::XmlNode& xmlNode);
    EngineDefaults& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies the name of the cache parameter group family to which the engine
     * default parameters apply.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline const Aws::String& GetCacheParameterGroupFamily() const{ return m_cacheParameterGroupFamily; }

    /**
     * <p>Specifies the name of the cache parameter group family to which the engine
     * default parameters apply.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline bool CacheParameterGroupFamilyHasBeenSet() const { return m_cacheParameterGroupFamilyHasBeenSet; }

    /**
     * <p>Specifies the name of the cache parameter group family to which the engine
     * default parameters apply.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline void SetCacheParameterGroupFamily(const Aws::String& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = value; }

    /**
     * <p>Specifies the name of the cache parameter group family to which the engine
     * default parameters apply.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline void SetCacheParameterGroupFamily(Aws::String&& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = std::move(value); }

    /**
     * <p>Specifies the name of the cache parameter group family to which the engine
     * default parameters apply.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline void SetCacheParameterGroupFamily(const char* value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily.assign(value); }

    /**
     * <p>Specifies the name of the cache parameter group family to which the engine
     * default parameters apply.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline EngineDefaults& WithCacheParameterGroupFamily(const Aws::String& value) { SetCacheParameterGroupFamily(value); return *this;}

    /**
     * <p>Specifies the name of the cache parameter group family to which the engine
     * default parameters apply.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline EngineDefaults& WithCacheParameterGroupFamily(Aws::String&& value) { SetCacheParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the cache parameter group family to which the engine
     * default parameters apply.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>redis2.6</code> | <code>redis2.8</code> |
     * <code>redis3.2</code> | <code>redis4.0</code> | <code>redis5.0</code> | </p>
     */
    inline EngineDefaults& WithCacheParameterGroupFamily(const char* value) { SetCacheParameterGroupFamily(value); return *this;}


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline EngineDefaults& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline EngineDefaults& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline EngineDefaults& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline EngineDefaults& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline EngineDefaults& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline EngineDefaults& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline EngineDefaults& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline const Aws::Vector<CacheNodeTypeSpecificParameter>& GetCacheNodeTypeSpecificParameters() const{ return m_cacheNodeTypeSpecificParameters; }

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline bool CacheNodeTypeSpecificParametersHasBeenSet() const { return m_cacheNodeTypeSpecificParametersHasBeenSet; }

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline void SetCacheNodeTypeSpecificParameters(const Aws::Vector<CacheNodeTypeSpecificParameter>& value) { m_cacheNodeTypeSpecificParametersHasBeenSet = true; m_cacheNodeTypeSpecificParameters = value; }

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline void SetCacheNodeTypeSpecificParameters(Aws::Vector<CacheNodeTypeSpecificParameter>&& value) { m_cacheNodeTypeSpecificParametersHasBeenSet = true; m_cacheNodeTypeSpecificParameters = std::move(value); }

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline EngineDefaults& WithCacheNodeTypeSpecificParameters(const Aws::Vector<CacheNodeTypeSpecificParameter>& value) { SetCacheNodeTypeSpecificParameters(value); return *this;}

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline EngineDefaults& WithCacheNodeTypeSpecificParameters(Aws::Vector<CacheNodeTypeSpecificParameter>&& value) { SetCacheNodeTypeSpecificParameters(std::move(value)); return *this;}

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline EngineDefaults& AddCacheNodeTypeSpecificParameters(const CacheNodeTypeSpecificParameter& value) { m_cacheNodeTypeSpecificParametersHasBeenSet = true; m_cacheNodeTypeSpecificParameters.push_back(value); return *this; }

    /**
     * <p>A list of parameters specific to a particular cache node type. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline EngineDefaults& AddCacheNodeTypeSpecificParameters(CacheNodeTypeSpecificParameter&& value) { m_cacheNodeTypeSpecificParametersHasBeenSet = true; m_cacheNodeTypeSpecificParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cacheParameterGroupFamily;
    bool m_cacheParameterGroupFamilyHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::Vector<CacheNodeTypeSpecificParameter> m_cacheNodeTypeSpecificParameters;
    bool m_cacheNodeTypeSpecificParametersHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
