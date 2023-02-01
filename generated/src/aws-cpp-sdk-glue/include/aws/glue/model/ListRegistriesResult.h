/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/RegistryListItem.h>
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
  class ListRegistriesResult
  {
  public:
    AWS_GLUE_API ListRegistriesResult();
    AWS_GLUE_API ListRegistriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListRegistriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>RegistryDetailedListItem</code> objects containing minimal
     * details of each registry.</p>
     */
    inline const Aws::Vector<RegistryListItem>& GetRegistries() const{ return m_registries; }

    /**
     * <p>An array of <code>RegistryDetailedListItem</code> objects containing minimal
     * details of each registry.</p>
     */
    inline void SetRegistries(const Aws::Vector<RegistryListItem>& value) { m_registries = value; }

    /**
     * <p>An array of <code>RegistryDetailedListItem</code> objects containing minimal
     * details of each registry.</p>
     */
    inline void SetRegistries(Aws::Vector<RegistryListItem>&& value) { m_registries = std::move(value); }

    /**
     * <p>An array of <code>RegistryDetailedListItem</code> objects containing minimal
     * details of each registry.</p>
     */
    inline ListRegistriesResult& WithRegistries(const Aws::Vector<RegistryListItem>& value) { SetRegistries(value); return *this;}

    /**
     * <p>An array of <code>RegistryDetailedListItem</code> objects containing minimal
     * details of each registry.</p>
     */
    inline ListRegistriesResult& WithRegistries(Aws::Vector<RegistryListItem>&& value) { SetRegistries(std::move(value)); return *this;}

    /**
     * <p>An array of <code>RegistryDetailedListItem</code> objects containing minimal
     * details of each registry.</p>
     */
    inline ListRegistriesResult& AddRegistries(const RegistryListItem& value) { m_registries.push_back(value); return *this; }

    /**
     * <p>An array of <code>RegistryDetailedListItem</code> objects containing minimal
     * details of each registry.</p>
     */
    inline ListRegistriesResult& AddRegistries(RegistryListItem&& value) { m_registries.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListRegistriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListRegistriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListRegistriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RegistryListItem> m_registries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
