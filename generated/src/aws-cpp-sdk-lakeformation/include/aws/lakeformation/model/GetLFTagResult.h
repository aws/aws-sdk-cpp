﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LakeFormation
{
namespace Model
{
  class GetLFTagResult
  {
  public:
    AWS_LAKEFORMATION_API GetLFTagResult();
    AWS_LAKEFORMATION_API GetLFTagResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetLFTagResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogId.assign(value); }
    inline GetLFTagResult& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GetLFTagResult& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GetLFTagResult& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }
    inline void SetTagKey(const Aws::String& value) { m_tagKey = value; }
    inline void SetTagKey(Aws::String&& value) { m_tagKey = std::move(value); }
    inline void SetTagKey(const char* value) { m_tagKey.assign(value); }
    inline GetLFTagResult& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}
    inline GetLFTagResult& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}
    inline GetLFTagResult& WithTagKey(const char* value) { SetTagKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValues = value; }
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValues = std::move(value); }
    inline GetLFTagResult& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}
    inline GetLFTagResult& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}
    inline GetLFTagResult& AddTagValues(const Aws::String& value) { m_tagValues.push_back(value); return *this; }
    inline GetLFTagResult& AddTagValues(Aws::String&& value) { m_tagValues.push_back(std::move(value)); return *this; }
    inline GetLFTagResult& AddTagValues(const char* value) { m_tagValues.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLFTagResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLFTagResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLFTagResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;

    Aws::String m_tagKey;

    Aws::Vector<Aws::String> m_tagValues;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
