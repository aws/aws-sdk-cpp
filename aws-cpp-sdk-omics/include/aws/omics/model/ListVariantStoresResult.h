/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/VariantStoreItem.h>
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
namespace Omics
{
namespace Model
{
  class ListVariantStoresResult
  {
  public:
    AWS_OMICS_API ListVariantStoresResult();
    AWS_OMICS_API ListVariantStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListVariantStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListVariantStoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListVariantStoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListVariantStoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of variant stores.</p>
     */
    inline const Aws::Vector<VariantStoreItem>& GetVariantStores() const{ return m_variantStores; }

    /**
     * <p>A list of variant stores.</p>
     */
    inline void SetVariantStores(const Aws::Vector<VariantStoreItem>& value) { m_variantStores = value; }

    /**
     * <p>A list of variant stores.</p>
     */
    inline void SetVariantStores(Aws::Vector<VariantStoreItem>&& value) { m_variantStores = std::move(value); }

    /**
     * <p>A list of variant stores.</p>
     */
    inline ListVariantStoresResult& WithVariantStores(const Aws::Vector<VariantStoreItem>& value) { SetVariantStores(value); return *this;}

    /**
     * <p>A list of variant stores.</p>
     */
    inline ListVariantStoresResult& WithVariantStores(Aws::Vector<VariantStoreItem>&& value) { SetVariantStores(std::move(value)); return *this;}

    /**
     * <p>A list of variant stores.</p>
     */
    inline ListVariantStoresResult& AddVariantStores(const VariantStoreItem& value) { m_variantStores.push_back(value); return *this; }

    /**
     * <p>A list of variant stores.</p>
     */
    inline ListVariantStoresResult& AddVariantStores(VariantStoreItem&& value) { m_variantStores.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<VariantStoreItem> m_variantStores;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
