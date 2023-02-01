/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{
  class CreateFrameworkResult
  {
  public:
    AWS_BACKUP_API CreateFrameworkResult();
    AWS_BACKUP_API CreateFrameworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateFrameworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline const Aws::String& GetFrameworkName() const{ return m_frameworkName; }

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline void SetFrameworkName(const Aws::String& value) { m_frameworkName = value; }

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline void SetFrameworkName(Aws::String&& value) { m_frameworkName = std::move(value); }

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline void SetFrameworkName(const char* value) { m_frameworkName.assign(value); }

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline CreateFrameworkResult& WithFrameworkName(const Aws::String& value) { SetFrameworkName(value); return *this;}

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline CreateFrameworkResult& WithFrameworkName(Aws::String&& value) { SetFrameworkName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline CreateFrameworkResult& WithFrameworkName(const char* value) { SetFrameworkName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetFrameworkArn() const{ return m_frameworkArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetFrameworkArn(const Aws::String& value) { m_frameworkArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetFrameworkArn(Aws::String&& value) { m_frameworkArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetFrameworkArn(const char* value) { m_frameworkArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline CreateFrameworkResult& WithFrameworkArn(const Aws::String& value) { SetFrameworkArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline CreateFrameworkResult& WithFrameworkArn(Aws::String&& value) { SetFrameworkArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline CreateFrameworkResult& WithFrameworkArn(const char* value) { SetFrameworkArn(value); return *this;}

  private:

    Aws::String m_frameworkName;

    Aws::String m_frameworkArn;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
