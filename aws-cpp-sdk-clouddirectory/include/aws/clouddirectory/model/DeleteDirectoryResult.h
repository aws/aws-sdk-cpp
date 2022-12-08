/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class DeleteDirectoryResult
  {
  public:
    AWS_CLOUDDIRECTORY_API DeleteDirectoryResult();
    AWS_CLOUDDIRECTORY_API DeleteDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API DeleteDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the deleted directory.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN of the deleted directory.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArn = value; }

    /**
     * <p>The ARN of the deleted directory.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArn = std::move(value); }

    /**
     * <p>The ARN of the deleted directory.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArn.assign(value); }

    /**
     * <p>The ARN of the deleted directory.</p>
     */
    inline DeleteDirectoryResult& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the deleted directory.</p>
     */
    inline DeleteDirectoryResult& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the deleted directory.</p>
     */
    inline DeleteDirectoryResult& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

  private:

    Aws::String m_directoryArn;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
