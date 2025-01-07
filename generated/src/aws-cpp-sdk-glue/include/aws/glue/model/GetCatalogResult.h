/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Catalog.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetCatalogResult
  {
  public:
    AWS_GLUE_API GetCatalogResult();
    AWS_GLUE_API GetCatalogResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCatalogResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>Catalog</code> object. The definition of the specified catalog in the
     * Glue Data Catalog.</p>
     */
    inline const Catalog& GetCatalog() const{ return m_catalog; }
    inline void SetCatalog(const Catalog& value) { m_catalog = value; }
    inline void SetCatalog(Catalog&& value) { m_catalog = std::move(value); }
    inline GetCatalogResult& WithCatalog(const Catalog& value) { SetCatalog(value); return *this;}
    inline GetCatalogResult& WithCatalog(Catalog&& value) { SetCatalog(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCatalogResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCatalogResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCatalogResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Catalog m_catalog;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
