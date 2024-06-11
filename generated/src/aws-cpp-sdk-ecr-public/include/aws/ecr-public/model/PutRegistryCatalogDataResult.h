﻿/**
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
  class PutRegistryCatalogDataResult
  {
  public:
    AWS_ECRPUBLIC_API PutRegistryCatalogDataResult();
    AWS_ECRPUBLIC_API PutRegistryCatalogDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API PutRegistryCatalogDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The catalog data for the public registry.</p>
     */
    inline const RegistryCatalogData& GetRegistryCatalogData() const{ return m_registryCatalogData; }
    inline void SetRegistryCatalogData(const RegistryCatalogData& value) { m_registryCatalogData = value; }
    inline void SetRegistryCatalogData(RegistryCatalogData&& value) { m_registryCatalogData = std::move(value); }
    inline PutRegistryCatalogDataResult& WithRegistryCatalogData(const RegistryCatalogData& value) { SetRegistryCatalogData(value); return *this;}
    inline PutRegistryCatalogDataResult& WithRegistryCatalogData(RegistryCatalogData&& value) { SetRegistryCatalogData(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutRegistryCatalogDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutRegistryCatalogDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutRegistryCatalogDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RegistryCatalogData m_registryCatalogData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
