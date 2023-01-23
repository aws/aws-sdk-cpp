/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
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
namespace EFS
{
namespace Model
{
  class PutFileSystemPolicyResult
  {
  public:
    AWS_EFS_API PutFileSystemPolicyResult();
    AWS_EFS_API PutFileSystemPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API PutFileSystemPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the EFS file system to which the <code>FileSystemPolicy</code>
     * applies.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>Specifies the EFS file system to which the <code>FileSystemPolicy</code>
     * applies.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }

    /**
     * <p>Specifies the EFS file system to which the <code>FileSystemPolicy</code>
     * applies.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = std::move(value); }

    /**
     * <p>Specifies the EFS file system to which the <code>FileSystemPolicy</code>
     * applies.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }

    /**
     * <p>Specifies the EFS file system to which the <code>FileSystemPolicy</code>
     * applies.</p>
     */
    inline PutFileSystemPolicyResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>Specifies the EFS file system to which the <code>FileSystemPolicy</code>
     * applies.</p>
     */
    inline PutFileSystemPolicyResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>Specifies the EFS file system to which the <code>FileSystemPolicy</code>
     * applies.</p>
     */
    inline PutFileSystemPolicyResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The JSON formatted <code>FileSystemPolicy</code> for the EFS file system.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The JSON formatted <code>FileSystemPolicy</code> for the EFS file system.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The JSON formatted <code>FileSystemPolicy</code> for the EFS file system.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The JSON formatted <code>FileSystemPolicy</code> for the EFS file system.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The JSON formatted <code>FileSystemPolicy</code> for the EFS file system.</p>
     */
    inline PutFileSystemPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The JSON formatted <code>FileSystemPolicy</code> for the EFS file system.</p>
     */
    inline PutFileSystemPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON formatted <code>FileSystemPolicy</code> for the EFS file system.</p>
     */
    inline PutFileSystemPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_fileSystemId;

    Aws::String m_policy;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
