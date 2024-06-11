/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeIndexResult
  {
  public:
    AWS_IOT_API DescribeIndexResult();
    AWS_IOT_API DescribeIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }
    inline DescribeIndexResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline DescribeIndexResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline DescribeIndexResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index status.</p>
     */
    inline const IndexStatus& GetIndexStatus() const{ return m_indexStatus; }
    inline void SetIndexStatus(const IndexStatus& value) { m_indexStatus = value; }
    inline void SetIndexStatus(IndexStatus&& value) { m_indexStatus = std::move(value); }
    inline DescribeIndexResult& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}
    inline DescribeIndexResult& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a value that specifies the type of indexing performed. Valid values
     * are:</p> <ul> <li> <p>REGISTRY – Your thing index contains only registry
     * data.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your thing index contains registry
     * data and shadow data.</p> </li> <li> <p>REGISTRY_AND_CONNECTIVITY_STATUS - Your
     * thing index contains registry data and thing connectivity status data.</p> </li>
     * <li> <p>REGISTRY_AND_SHADOW_AND_CONNECTIVITY_STATUS - Your thing index contains
     * registry data, shadow data, and thing connectivity status data.</p> </li> <li>
     * <p>MULTI_INDEXING_MODE - Your thing index contains multiple data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_GetIndexingConfiguration.html">GetIndexingConfiguration</a>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline void SetSchema(const Aws::String& value) { m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schema.assign(value); }
    inline DescribeIndexResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline DescribeIndexResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline DescribeIndexResult& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeIndexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeIndexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeIndexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_indexName;

    IndexStatus m_indexStatus;

    Aws::String m_schema;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
