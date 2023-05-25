/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CatalogImportStatus.h>
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
  class GetCatalogImportStatusResult
  {
  public:
    AWS_GLUE_API GetCatalogImportStatusResult();
    AWS_GLUE_API GetCatalogImportStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCatalogImportStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the specified catalog migration.</p>
     */
    inline const CatalogImportStatus& GetImportStatus() const{ return m_importStatus; }

    /**
     * <p>The status of the specified catalog migration.</p>
     */
    inline void SetImportStatus(const CatalogImportStatus& value) { m_importStatus = value; }

    /**
     * <p>The status of the specified catalog migration.</p>
     */
    inline void SetImportStatus(CatalogImportStatus&& value) { m_importStatus = std::move(value); }

    /**
     * <p>The status of the specified catalog migration.</p>
     */
    inline GetCatalogImportStatusResult& WithImportStatus(const CatalogImportStatus& value) { SetImportStatus(value); return *this;}

    /**
     * <p>The status of the specified catalog migration.</p>
     */
    inline GetCatalogImportStatusResult& WithImportStatus(CatalogImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCatalogImportStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCatalogImportStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCatalogImportStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CatalogImportStatus m_importStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
