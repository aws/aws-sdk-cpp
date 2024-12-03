/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Catalog.h>
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
namespace Glue
{
namespace Model
{
  class GetCatalogsResult
  {
  public:
    AWS_GLUE_API GetCatalogsResult();
    AWS_GLUE_API GetCatalogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCatalogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Catalog</code> objects. A list of <code>Catalog</code>
     * objects from the specified parent catalog.</p>
     */
    inline const Aws::Vector<Catalog>& GetCatalogList() const{ return m_catalogList; }
    inline void SetCatalogList(const Aws::Vector<Catalog>& value) { m_catalogList = value; }
    inline void SetCatalogList(Aws::Vector<Catalog>&& value) { m_catalogList = std::move(value); }
    inline GetCatalogsResult& WithCatalogList(const Aws::Vector<Catalog>& value) { SetCatalogList(value); return *this;}
    inline GetCatalogsResult& WithCatalogList(Aws::Vector<Catalog>&& value) { SetCatalogList(std::move(value)); return *this;}
    inline GetCatalogsResult& AddCatalogList(const Catalog& value) { m_catalogList.push_back(value); return *this; }
    inline GetCatalogsResult& AddCatalogList(Catalog&& value) { m_catalogList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetCatalogsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCatalogsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCatalogsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCatalogsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCatalogsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCatalogsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Catalog> m_catalogList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
