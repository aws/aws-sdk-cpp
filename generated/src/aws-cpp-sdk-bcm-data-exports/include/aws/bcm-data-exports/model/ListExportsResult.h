/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-data-exports/model/ExportReference.h>
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
namespace BCMDataExports
{
namespace Model
{
  class ListExportsResult
  {
  public:
    AWS_BCMDATAEXPORTS_API ListExportsResult();
    AWS_BCMDATAEXPORTS_API ListExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API ListExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the exports, including name and export status.</p>
     */
    inline const Aws::Vector<ExportReference>& GetExports() const{ return m_exports; }

    /**
     * <p>The details of the exports, including name and export status.</p>
     */
    inline void SetExports(const Aws::Vector<ExportReference>& value) { m_exports = value; }

    /**
     * <p>The details of the exports, including name and export status.</p>
     */
    inline void SetExports(Aws::Vector<ExportReference>&& value) { m_exports = std::move(value); }

    /**
     * <p>The details of the exports, including name and export status.</p>
     */
    inline ListExportsResult& WithExports(const Aws::Vector<ExportReference>& value) { SetExports(value); return *this;}

    /**
     * <p>The details of the exports, including name and export status.</p>
     */
    inline ListExportsResult& WithExports(Aws::Vector<ExportReference>&& value) { SetExports(std::move(value)); return *this;}

    /**
     * <p>The details of the exports, including name and export status.</p>
     */
    inline ListExportsResult& AddExports(const ExportReference& value) { m_exports.push_back(value); return *this; }

    /**
     * <p>The details of the exports, including name and export status.</p>
     */
    inline ListExportsResult& AddExports(ExportReference&& value) { m_exports.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListExportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListExportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListExportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListExportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListExportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListExportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ExportReference> m_exports;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
