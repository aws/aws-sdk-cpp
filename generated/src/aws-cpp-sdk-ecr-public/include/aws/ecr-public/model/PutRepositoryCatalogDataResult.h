/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/RepositoryCatalogData.h>
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
  class PutRepositoryCatalogDataResult
  {
  public:
    AWS_ECRPUBLIC_API PutRepositoryCatalogDataResult();
    AWS_ECRPUBLIC_API PutRepositoryCatalogDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API PutRepositoryCatalogDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The catalog data for the repository.</p>
     */
    inline const RepositoryCatalogData& GetCatalogData() const{ return m_catalogData; }

    /**
     * <p>The catalog data for the repository.</p>
     */
    inline void SetCatalogData(const RepositoryCatalogData& value) { m_catalogData = value; }

    /**
     * <p>The catalog data for the repository.</p>
     */
    inline void SetCatalogData(RepositoryCatalogData&& value) { m_catalogData = std::move(value); }

    /**
     * <p>The catalog data for the repository.</p>
     */
    inline PutRepositoryCatalogDataResult& WithCatalogData(const RepositoryCatalogData& value) { SetCatalogData(value); return *this;}

    /**
     * <p>The catalog data for the repository.</p>
     */
    inline PutRepositoryCatalogDataResult& WithCatalogData(RepositoryCatalogData&& value) { SetCatalogData(std::move(value)); return *this;}

  private:

    RepositoryCatalogData m_catalogData;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
