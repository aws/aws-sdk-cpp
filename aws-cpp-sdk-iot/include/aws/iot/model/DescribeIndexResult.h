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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/IndexStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class AWS_IOT_API DescribeIndexResult
  {
  public:
    DescribeIndexResult();
    DescribeIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The index name.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }

    /**
     * <p>The index name.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }

    /**
     * <p>The index name.</p>
     */
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }

    /**
     * <p>The index name.</p>
     */
    inline DescribeIndexResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The index name.</p>
     */
    inline DescribeIndexResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The index name.</p>
     */
    inline DescribeIndexResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The index status.</p>
     */
    inline const IndexStatus& GetIndexStatus() const{ return m_indexStatus; }

    /**
     * <p>The index status.</p>
     */
    inline void SetIndexStatus(const IndexStatus& value) { m_indexStatus = value; }

    /**
     * <p>The index status.</p>
     */
    inline void SetIndexStatus(IndexStatus&& value) { m_indexStatus = std::move(value); }

    /**
     * <p>The index status.</p>
     */
    inline DescribeIndexResult& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}

    /**
     * <p>The index status.</p>
     */
    inline DescribeIndexResult& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}


    /**
     * <p>Contains a value that specifies the type of indexing performed. Valid values
     * are:</p> <ul> <li> <p>REGISTRY – Your thing index contains only registry
     * data.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your thing index contains registry
     * data and shadow data.</p> </li> <li> <p>REGISTRY_AND_CONNECTIVITY_STATUS - Your
     * thing index contains registry data and thing connectivity status data.</p> </li>
     * <li> <p>REGISTRY_AND_SHADOW_AND_CONNECTIVITY_STATUS - Your thing index contains
     * registry data, shadow data, and thing connectivity status data.</p> </li> </ul>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>Contains a value that specifies the type of indexing performed. Valid values
     * are:</p> <ul> <li> <p>REGISTRY – Your thing index contains only registry
     * data.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your thing index contains registry
     * data and shadow data.</p> </li> <li> <p>REGISTRY_AND_CONNECTIVITY_STATUS - Your
     * thing index contains registry data and thing connectivity status data.</p> </li>
     * <li> <p>REGISTRY_AND_SHADOW_AND_CONNECTIVITY_STATUS - Your thing index contains
     * registry data, shadow data, and thing connectivity status data.</p> </li> </ul>
     */
    inline void SetSchema(const Aws::String& value) { m_schema = value; }

    /**
     * <p>Contains a value that specifies the type of indexing performed. Valid values
     * are:</p> <ul> <li> <p>REGISTRY – Your thing index contains only registry
     * data.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your thing index contains registry
     * data and shadow data.</p> </li> <li> <p>REGISTRY_AND_CONNECTIVITY_STATUS - Your
     * thing index contains registry data and thing connectivity status data.</p> </li>
     * <li> <p>REGISTRY_AND_SHADOW_AND_CONNECTIVITY_STATUS - Your thing index contains
     * registry data, shadow data, and thing connectivity status data.</p> </li> </ul>
     */
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }

    /**
     * <p>Contains a value that specifies the type of indexing performed. Valid values
     * are:</p> <ul> <li> <p>REGISTRY – Your thing index contains only registry
     * data.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your thing index contains registry
     * data and shadow data.</p> </li> <li> <p>REGISTRY_AND_CONNECTIVITY_STATUS - Your
     * thing index contains registry data and thing connectivity status data.</p> </li>
     * <li> <p>REGISTRY_AND_SHADOW_AND_CONNECTIVITY_STATUS - Your thing index contains
     * registry data, shadow data, and thing connectivity status data.</p> </li> </ul>
     */
    inline void SetSchema(const char* value) { m_schema.assign(value); }

    /**
     * <p>Contains a value that specifies the type of indexing performed. Valid values
     * are:</p> <ul> <li> <p>REGISTRY – Your thing index contains only registry
     * data.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your thing index contains registry
     * data and shadow data.</p> </li> <li> <p>REGISTRY_AND_CONNECTIVITY_STATUS - Your
     * thing index contains registry data and thing connectivity status data.</p> </li>
     * <li> <p>REGISTRY_AND_SHADOW_AND_CONNECTIVITY_STATUS - Your thing index contains
     * registry data, shadow data, and thing connectivity status data.</p> </li> </ul>
     */
    inline DescribeIndexResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>Contains a value that specifies the type of indexing performed. Valid values
     * are:</p> <ul> <li> <p>REGISTRY – Your thing index contains only registry
     * data.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your thing index contains registry
     * data and shadow data.</p> </li> <li> <p>REGISTRY_AND_CONNECTIVITY_STATUS - Your
     * thing index contains registry data and thing connectivity status data.</p> </li>
     * <li> <p>REGISTRY_AND_SHADOW_AND_CONNECTIVITY_STATUS - Your thing index contains
     * registry data, shadow data, and thing connectivity status data.</p> </li> </ul>
     */
    inline DescribeIndexResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>Contains a value that specifies the type of indexing performed. Valid values
     * are:</p> <ul> <li> <p>REGISTRY – Your thing index contains only registry
     * data.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your thing index contains registry
     * data and shadow data.</p> </li> <li> <p>REGISTRY_AND_CONNECTIVITY_STATUS - Your
     * thing index contains registry data and thing connectivity status data.</p> </li>
     * <li> <p>REGISTRY_AND_SHADOW_AND_CONNECTIVITY_STATUS - Your thing index contains
     * registry data, shadow data, and thing connectivity status data.</p> </li> </ul>
     */
    inline DescribeIndexResult& WithSchema(const char* value) { SetSchema(value); return *this;}

  private:

    Aws::String m_indexName;

    IndexStatus m_indexStatus;

    Aws::String m_schema;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
