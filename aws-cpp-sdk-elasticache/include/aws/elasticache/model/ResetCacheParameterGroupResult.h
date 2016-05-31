/*
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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/ResponseMetadata.h>

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
   * <p>Represents the output of one of the following actions:</p> <ul> <li> <p>
   * <i>ModifyCacheParameterGroup</i> </p> </li> <li> <p>
   * <i>ResetCacheParameterGroup</i> </p> </li> </ul>
   */
  class AWS_ELASTICACHE_API ResetCacheParameterGroupResult
  {
  public:
    ResetCacheParameterGroupResult();
    ResetCacheParameterGroupResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ResetCacheParameterGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline ResetCacheParameterGroupResult& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline ResetCacheParameterGroupResult& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline ResetCacheParameterGroupResult& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ResetCacheParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ResetCacheParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_cacheParameterGroupName;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws