/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/Alias.h>
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
namespace FSx
{
namespace Model
{
  /**
   * <p>The response object for <code>DescribeFileSystemAliases</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemAliasesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeFileSystemAliasesResult
  {
  public:
    AWS_FSX_API DescribeFileSystemAliasesResult();
    AWS_FSX_API DescribeFileSystemAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeFileSystemAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of one or more DNS aliases currently associated with the specified
     * file system.</p>
     */
    inline const Aws::Vector<Alias>& GetAliases() const{ return m_aliases; }

    /**
     * <p>An array of one or more DNS aliases currently associated with the specified
     * file system.</p>
     */
    inline void SetAliases(const Aws::Vector<Alias>& value) { m_aliases = value; }

    /**
     * <p>An array of one or more DNS aliases currently associated with the specified
     * file system.</p>
     */
    inline void SetAliases(Aws::Vector<Alias>&& value) { m_aliases = std::move(value); }

    /**
     * <p>An array of one or more DNS aliases currently associated with the specified
     * file system.</p>
     */
    inline DescribeFileSystemAliasesResult& WithAliases(const Aws::Vector<Alias>& value) { SetAliases(value); return *this;}

    /**
     * <p>An array of one or more DNS aliases currently associated with the specified
     * file system.</p>
     */
    inline DescribeFileSystemAliasesResult& WithAliases(Aws::Vector<Alias>&& value) { SetAliases(std::move(value)); return *this;}

    /**
     * <p>An array of one or more DNS aliases currently associated with the specified
     * file system.</p>
     */
    inline DescribeFileSystemAliasesResult& AddAliases(const Alias& value) { m_aliases.push_back(value); return *this; }

    /**
     * <p>An array of one or more DNS aliases currently associated with the specified
     * file system.</p>
     */
    inline DescribeFileSystemAliasesResult& AddAliases(Alias&& value) { m_aliases.push_back(std::move(value)); return *this; }


    /**
     * <p>Present if there are more DNS aliases than returned in the response (String).
     * You can use the <code>NextToken</code> value in a later request to fetch
     * additional descriptions. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Present if there are more DNS aliases than returned in the response (String).
     * You can use the <code>NextToken</code> value in a later request to fetch
     * additional descriptions. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Present if there are more DNS aliases than returned in the response (String).
     * You can use the <code>NextToken</code> value in a later request to fetch
     * additional descriptions. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Present if there are more DNS aliases than returned in the response (String).
     * You can use the <code>NextToken</code> value in a later request to fetch
     * additional descriptions. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Present if there are more DNS aliases than returned in the response (String).
     * You can use the <code>NextToken</code> value in a later request to fetch
     * additional descriptions. </p>
     */
    inline DescribeFileSystemAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Present if there are more DNS aliases than returned in the response (String).
     * You can use the <code>NextToken</code> value in a later request to fetch
     * additional descriptions. </p>
     */
    inline DescribeFileSystemAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Present if there are more DNS aliases than returned in the response (String).
     * You can use the <code>NextToken</code> value in a later request to fetch
     * additional descriptions. </p>
     */
    inline DescribeFileSystemAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Alias> m_aliases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
