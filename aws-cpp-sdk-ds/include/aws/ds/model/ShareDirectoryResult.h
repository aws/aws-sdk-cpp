/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{
  class ShareDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API ShareDirectoryResult();
    AWS_DIRECTORYSERVICE_API ShareDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API ShareDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifier of the directory that is stored in the directory consumer account
     * that is shared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const{ return m_sharedDirectoryId; }

    /**
     * <p>Identifier of the directory that is stored in the directory consumer account
     * that is shared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline void SetSharedDirectoryId(const Aws::String& value) { m_sharedDirectoryId = value; }

    /**
     * <p>Identifier of the directory that is stored in the directory consumer account
     * that is shared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline void SetSharedDirectoryId(Aws::String&& value) { m_sharedDirectoryId = std::move(value); }

    /**
     * <p>Identifier of the directory that is stored in the directory consumer account
     * that is shared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline void SetSharedDirectoryId(const char* value) { m_sharedDirectoryId.assign(value); }

    /**
     * <p>Identifier of the directory that is stored in the directory consumer account
     * that is shared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline ShareDirectoryResult& WithSharedDirectoryId(const Aws::String& value) { SetSharedDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the directory that is stored in the directory consumer account
     * that is shared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline ShareDirectoryResult& WithSharedDirectoryId(Aws::String&& value) { SetSharedDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory that is stored in the directory consumer account
     * that is shared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline ShareDirectoryResult& WithSharedDirectoryId(const char* value) { SetSharedDirectoryId(value); return *this;}

  private:

    Aws::String m_sharedDirectoryId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
