/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/RegistryCatalogData.h>
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
  class GetRegistryCatalogDataResult
  {
  public:
    AWS_ECRPUBLIC_API GetRegistryCatalogDataResult();
    AWS_ECRPUBLIC_API GetRegistryCatalogDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API GetRegistryCatalogDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The catalog metadata for the public registry.</p>
     */
    inline const RegistryCatalogData& GetRegistryCatalogData() const{ return m_registryCatalogData; }

    /**
     * <p>The catalog metadata for the public registry.</p>
     */
    inline void SetRegistryCatalogData(const RegistryCatalogData& value) { m_registryCatalogData = value; }

    /**
     * <p>The catalog metadata for the public registry.</p>
     */
    inline void SetRegistryCatalogData(RegistryCatalogData&& value) { m_registryCatalogData = std::move(value); }

    /**
     * <p>The catalog metadata for the public registry.</p>
     */
    inline GetRegistryCatalogDataResult& WithRegistryCatalogData(const RegistryCatalogData& value) { SetRegistryCatalogData(value); return *this;}

    /**
     * <p>The catalog metadata for the public registry.</p>
     */
    inline GetRegistryCatalogDataResult& WithRegistryCatalogData(RegistryCatalogData&& value) { SetRegistryCatalogData(std::move(value)); return *this;}

  private:

    RegistryCatalogData m_registryCatalogData;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
