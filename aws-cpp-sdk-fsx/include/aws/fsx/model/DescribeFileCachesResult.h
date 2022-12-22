/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileCache.h>
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
  class DescribeFileCachesResult
  {
  public:
    AWS_FSX_API DescribeFileCachesResult();
    AWS_FSX_API DescribeFileCachesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeFileCachesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response object for the <code>DescribeFileCaches</code> operation.</p>
     */
    inline const Aws::Vector<FileCache>& GetFileCaches() const{ return m_fileCaches; }

    /**
     * <p>The response object for the <code>DescribeFileCaches</code> operation.</p>
     */
    inline void SetFileCaches(const Aws::Vector<FileCache>& value) { m_fileCaches = value; }

    /**
     * <p>The response object for the <code>DescribeFileCaches</code> operation.</p>
     */
    inline void SetFileCaches(Aws::Vector<FileCache>&& value) { m_fileCaches = std::move(value); }

    /**
     * <p>The response object for the <code>DescribeFileCaches</code> operation.</p>
     */
    inline DescribeFileCachesResult& WithFileCaches(const Aws::Vector<FileCache>& value) { SetFileCaches(value); return *this;}

    /**
     * <p>The response object for the <code>DescribeFileCaches</code> operation.</p>
     */
    inline DescribeFileCachesResult& WithFileCaches(Aws::Vector<FileCache>&& value) { SetFileCaches(std::move(value)); return *this;}

    /**
     * <p>The response object for the <code>DescribeFileCaches</code> operation.</p>
     */
    inline DescribeFileCachesResult& AddFileCaches(const FileCache& value) { m_fileCaches.push_back(value); return *this; }

    /**
     * <p>The response object for the <code>DescribeFileCaches</code> operation.</p>
     */
    inline DescribeFileCachesResult& AddFileCaches(FileCache&& value) { m_fileCaches.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeFileCachesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeFileCachesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeFileCachesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FileCache> m_fileCaches;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
