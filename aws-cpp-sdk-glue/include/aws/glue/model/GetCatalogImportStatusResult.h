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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CatalogImportStatus.h>
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
  class AWS_GLUE_API GetCatalogImportStatusResult
  {
  public:
    GetCatalogImportStatusResult();
    GetCatalogImportStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCatalogImportStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    CatalogImportStatus m_importStatus;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
