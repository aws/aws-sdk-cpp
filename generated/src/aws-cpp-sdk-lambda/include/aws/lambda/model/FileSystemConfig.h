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
    AWS_LAMBDA_API FileSystemConfig() = default;
    AWS_LAMBDA_API FileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API FileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    FileSystemConfig& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline const Aws::String& GetLocalMountPath() const { return m_localMountPath; }
    inline bool LocalMountPathHasBeenSet() const { return m_localMountPathHasBeenSet; }
    template<typename LocalMountPathT = Aws::String>
    void SetLocalMountPath(LocalMountPathT&& value) { m_localMountPathHasBeenSet = true; m_localMountPath = std::forward<LocalMountPathT>(value); }
    template<typename LocalMountPathT = Aws::String>
    FileSystemConfig& WithLocalMountPath(LocalMountPathT&& value) { SetLocalMountPath(std::forward<LocalMountPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_localMountPath;
    bool m_localMountPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
