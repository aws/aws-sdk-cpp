/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/KeyspaceSummary.h>
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
namespace Keyspaces
{
namespace Model
{
  class ListKeyspacesResult
  {
  public:
    AWS_KEYSPACES_API ListKeyspacesResult();
    AWS_KEYSPACES_API ListKeyspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API ListKeyspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline ListKeyspacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline ListKeyspacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline ListKeyspacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of keyspaces.</p>
     */
    inline const Aws::Vector<KeyspaceSummary>& GetKeyspaces() const{ return m_keyspaces; }

    /**
     * <p>A list of keyspaces.</p>
     */
    inline void SetKeyspaces(const Aws::Vector<KeyspaceSummary>& value) { m_keyspaces = value; }

    /**
     * <p>A list of keyspaces.</p>
     */
    inline void SetKeyspaces(Aws::Vector<KeyspaceSummary>&& value) { m_keyspaces = std::move(value); }

    /**
     * <p>A list of keyspaces.</p>
     */
    inline ListKeyspacesResult& WithKeyspaces(const Aws::Vector<KeyspaceSummary>& value) { SetKeyspaces(value); return *this;}

    /**
     * <p>A list of keyspaces.</p>
     */
    inline ListKeyspacesResult& WithKeyspaces(Aws::Vector<KeyspaceSummary>&& value) { SetKeyspaces(std::move(value)); return *this;}

    /**
     * <p>A list of keyspaces.</p>
     */
    inline ListKeyspacesResult& AddKeyspaces(const KeyspaceSummary& value) { m_keyspaces.push_back(value); return *this; }

    /**
     * <p>A list of keyspaces.</p>
     */
    inline ListKeyspacesResult& AddKeyspaces(KeyspaceSummary&& value) { m_keyspaces.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<KeyspaceSummary> m_keyspaces;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
