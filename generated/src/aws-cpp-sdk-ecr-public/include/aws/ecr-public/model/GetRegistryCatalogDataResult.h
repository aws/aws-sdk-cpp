/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/RegistryCatalogData.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRegistryCatalogDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRegistryCatalogDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRegistryCatalogDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RegistryCatalogData m_registryCatalogData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
