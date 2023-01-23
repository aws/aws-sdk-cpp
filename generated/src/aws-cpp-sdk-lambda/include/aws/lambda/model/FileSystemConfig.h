/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about the connection between a Lambda function and an <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
   * EFS file system</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FileSystemConfig">AWS
   * API Reference</a></p>
   */
  class FileSystemConfig
  {
  public:
    AWS_LAMBDA_API FileSystemConfig();
    AWS_LAMBDA_API FileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API FileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline FileSystemConfig& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline FileSystemConfig& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline FileSystemConfig& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline const Aws::String& GetLocalMountPath() const{ return m_localMountPath; }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline bool LocalMountPathHasBeenSet() const { return m_localMountPathHasBeenSet; }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline void SetLocalMountPath(const Aws::String& value) { m_localMountPathHasBeenSet = true; m_localMountPath = value; }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline void SetLocalMountPath(Aws::String&& value) { m_localMountPathHasBeenSet = true; m_localMountPath = std::move(value); }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline void SetLocalMountPath(const char* value) { m_localMountPathHasBeenSet = true; m_localMountPath.assign(value); }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline FileSystemConfig& WithLocalMountPath(const Aws::String& value) { SetLocalMountPath(value); return *this;}

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline FileSystemConfig& WithLocalMountPath(Aws::String&& value) { SetLocalMountPath(std::move(value)); return *this;}

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline FileSystemConfig& WithLocalMountPath(const char* value) { SetLocalMountPath(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_localMountPath;
    bool m_localMountPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
