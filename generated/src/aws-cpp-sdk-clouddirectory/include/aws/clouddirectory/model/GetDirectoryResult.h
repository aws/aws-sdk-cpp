/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/Directory.h>
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
namespace CloudDirectory
{
namespace Model
{
  class GetDirectoryResult
  {
  public:
    AWS_CLOUDDIRECTORY_API GetDirectoryResult();
    AWS_CLOUDDIRECTORY_API GetDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API GetDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata about the directory.</p>
     */
    inline const Directory& GetDirectory() const{ return m_directory; }

    /**
     * <p>Metadata about the directory.</p>
     */
    inline void SetDirectory(const Directory& value) { m_directory = value; }

    /**
     * <p>Metadata about the directory.</p>
     */
    inline void SetDirectory(Directory&& value) { m_directory = std::move(value); }

    /**
     * <p>Metadata about the directory.</p>
     */
    inline GetDirectoryResult& WithDirectory(const Directory& value) { SetDirectory(value); return *this;}

    /**
     * <p>Metadata about the directory.</p>
     */
    inline GetDirectoryResult& WithDirectory(Directory&& value) { SetDirectory(std::move(value)); return *this;}

  private:

    Directory m_directory;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
