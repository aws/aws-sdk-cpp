/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/Repository.h>
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
  class CreateRepositoryResult
  {
  public:
    AWS_ECRPUBLIC_API CreateRepositoryResult();
    AWS_ECRPUBLIC_API CreateRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API CreateRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The repository that was created.</p>
     */
    inline const Repository& GetRepository() const{ return m_repository; }

    /**
     * <p>The repository that was created.</p>
     */
    inline void SetRepository(const Repository& value) { m_repository = value; }

    /**
     * <p>The repository that was created.</p>
     */
    inline void SetRepository(Repository&& value) { m_repository = std::move(value); }

    /**
     * <p>The repository that was created.</p>
     */
    inline CreateRepositoryResult& WithRepository(const Repository& value) { SetRepository(value); return *this;}

    /**
     * <p>The repository that was created.</p>
     */
    inline CreateRepositoryResult& WithRepository(Repository&& value) { SetRepository(std::move(value)); return *this;}


    
    inline const RepositoryCatalogData& GetCatalogData() const{ return m_catalogData; }

    
    inline void SetCatalogData(const RepositoryCatalogData& value) { m_catalogData = value; }

    
    inline void SetCatalogData(RepositoryCatalogData&& value) { m_catalogData = std::move(value); }

    
    inline CreateRepositoryResult& WithCatalogData(const RepositoryCatalogData& value) { SetCatalogData(value); return *this;}

    
    inline CreateRepositoryResult& WithCatalogData(RepositoryCatalogData&& value) { SetCatalogData(std::move(value)); return *this;}

  private:

    Repository m_repository;

    RepositoryCatalogData m_catalogData;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
