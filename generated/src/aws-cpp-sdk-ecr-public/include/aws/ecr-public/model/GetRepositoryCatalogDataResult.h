/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/RepositoryCatalogData.h>
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
namespace ECRPublic
{
namespace Model
{
  class GetRepositoryCatalogDataResult
  {
  public:
    AWS_ECRPUBLIC_API GetRepositoryCatalogDataResult() = default;
    AWS_ECRPUBLIC_API GetRepositoryCatalogDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API GetRepositoryCatalogDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The catalog metadata for the repository.</p>
     */
    inline const RepositoryCatalogData& GetCatalogData() const { return m_catalogData; }
    template<typename CatalogDataT = RepositoryCatalogData>
    void SetCatalogData(CatalogDataT&& value) { m_catalogDataHasBeenSet = true; m_catalogData = std::forward<CatalogDataT>(value); }
    template<typename CatalogDataT = RepositoryCatalogData>
    GetRepositoryCatalogDataResult& WithCatalogData(CatalogDataT&& value) { SetCatalogData(std::forward<CatalogDataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRepositoryCatalogDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RepositoryCatalogData m_catalogData;
    bool m_catalogDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
