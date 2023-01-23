/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/StagingSourceServer.h>
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
namespace drs
{
namespace Model
{
  class ListExtensibleSourceServersResult
  {
  public:
    AWS_DRS_API ListExtensibleSourceServersResult();
    AWS_DRS_API ListExtensibleSourceServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API ListExtensibleSourceServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of source servers on a staging Account that are extensible.</p>
     */
    inline const Aws::Vector<StagingSourceServer>& GetItems() const{ return m_items; }

    /**
     * <p>A list of source servers on a staging Account that are extensible.</p>
     */
    inline void SetItems(const Aws::Vector<StagingSourceServer>& value) { m_items = value; }

    /**
     * <p>A list of source servers on a staging Account that are extensible.</p>
     */
    inline void SetItems(Aws::Vector<StagingSourceServer>&& value) { m_items = std::move(value); }

    /**
     * <p>A list of source servers on a staging Account that are extensible.</p>
     */
    inline ListExtensibleSourceServersResult& WithItems(const Aws::Vector<StagingSourceServer>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of source servers on a staging Account that are extensible.</p>
     */
    inline ListExtensibleSourceServersResult& WithItems(Aws::Vector<StagingSourceServer>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of source servers on a staging Account that are extensible.</p>
     */
    inline ListExtensibleSourceServersResult& AddItems(const StagingSourceServer& value) { m_items.push_back(value); return *this; }

    /**
     * <p>A list of source servers on a staging Account that are extensible.</p>
     */
    inline ListExtensibleSourceServersResult& AddItems(StagingSourceServer&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline ListExtensibleSourceServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline ListExtensibleSourceServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline ListExtensibleSourceServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StagingSourceServer> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
