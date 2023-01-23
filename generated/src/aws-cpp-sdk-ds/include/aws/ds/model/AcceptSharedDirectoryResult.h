/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/SharedDirectory.h>
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
  class AcceptSharedDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult();
    AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline const SharedDirectory& GetSharedDirectory() const{ return m_sharedDirectory; }

    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline void SetSharedDirectory(const SharedDirectory& value) { m_sharedDirectory = value; }

    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline void SetSharedDirectory(SharedDirectory&& value) { m_sharedDirectory = std::move(value); }

    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline AcceptSharedDirectoryResult& WithSharedDirectory(const SharedDirectory& value) { SetSharedDirectory(value); return *this;}

    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline AcceptSharedDirectoryResult& WithSharedDirectory(SharedDirectory&& value) { SetSharedDirectory(std::move(value)); return *this;}

  private:

    SharedDirectory m_sharedDirectory;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
