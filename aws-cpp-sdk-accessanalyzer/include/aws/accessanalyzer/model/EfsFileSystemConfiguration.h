/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The proposed access control configuration for an Amazon EFS file system. You
   * can propose a configuration for a new Amazon EFS file system or an existing
   * Amazon EFS file system that you own by specifying the Amazon EFS policy. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/using-fs.html">Using file
   * systems in Amazon EFS</a>.</p> <ul> <li> <p>If the configuration is for an
   * existing Amazon EFS file system and you do not specify the Amazon EFS policy,
   * then the access preview uses the existing Amazon EFS policy for the file
   * system.</p> </li> <li> <p>If the access preview is for a new resource and you do
   * not specify the policy, then the access preview assumes an Amazon EFS file
   * system without a policy.</p> </li> <li> <p>To propose deletion of an existing
   * Amazon EFS file system policy, you can specify an empty string for the Amazon
   * EFS policy.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/EfsFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class EfsFileSystemConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API EfsFileSystemConfiguration();
    AWS_ACCESSANALYZER_API EfsFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API EfsFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The JSON policy definition to apply to the Amazon EFS file system. For more
     * information on the elements that make up a file system policy, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">Amazon
     * EFS Resource-based policies</a>.</p>
     */
    inline const Aws::String& GetFileSystemPolicy() const{ return m_fileSystemPolicy; }

    /**
     * <p>The JSON policy definition to apply to the Amazon EFS file system. For more
     * information on the elements that make up a file system policy, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">Amazon
     * EFS Resource-based policies</a>.</p>
     */
    inline bool FileSystemPolicyHasBeenSet() const { return m_fileSystemPolicyHasBeenSet; }

    /**
     * <p>The JSON policy definition to apply to the Amazon EFS file system. For more
     * information on the elements that make up a file system policy, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">Amazon
     * EFS Resource-based policies</a>.</p>
     */
    inline void SetFileSystemPolicy(const Aws::String& value) { m_fileSystemPolicyHasBeenSet = true; m_fileSystemPolicy = value; }

    /**
     * <p>The JSON policy definition to apply to the Amazon EFS file system. For more
     * information on the elements that make up a file system policy, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">Amazon
     * EFS Resource-based policies</a>.</p>
     */
    inline void SetFileSystemPolicy(Aws::String&& value) { m_fileSystemPolicyHasBeenSet = true; m_fileSystemPolicy = std::move(value); }

    /**
     * <p>The JSON policy definition to apply to the Amazon EFS file system. For more
     * information on the elements that make up a file system policy, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">Amazon
     * EFS Resource-based policies</a>.</p>
     */
    inline void SetFileSystemPolicy(const char* value) { m_fileSystemPolicyHasBeenSet = true; m_fileSystemPolicy.assign(value); }

    /**
     * <p>The JSON policy definition to apply to the Amazon EFS file system. For more
     * information on the elements that make up a file system policy, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">Amazon
     * EFS Resource-based policies</a>.</p>
     */
    inline EfsFileSystemConfiguration& WithFileSystemPolicy(const Aws::String& value) { SetFileSystemPolicy(value); return *this;}

    /**
     * <p>The JSON policy definition to apply to the Amazon EFS file system. For more
     * information on the elements that make up a file system policy, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">Amazon
     * EFS Resource-based policies</a>.</p>
     */
    inline EfsFileSystemConfiguration& WithFileSystemPolicy(Aws::String&& value) { SetFileSystemPolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON policy definition to apply to the Amazon EFS file system. For more
     * information on the elements that make up a file system policy, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">Amazon
     * EFS Resource-based policies</a>.</p>
     */
    inline EfsFileSystemConfiguration& WithFileSystemPolicy(const char* value) { SetFileSystemPolicy(value); return *this;}

  private:

    Aws::String m_fileSystemPolicy;
    bool m_fileSystemPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
