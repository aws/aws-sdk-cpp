/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/EfsStorageConfiguration.h>
#include <aws/m2/model/FsxStorageConfiguration.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Defines the storage configuration for a runtime environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/StorageConfiguration">AWS
   * API Reference</a></p>
   */
  class StorageConfiguration
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API StorageConfiguration();
    AWS_MAINFRAMEMODERNIZATION_API StorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API StorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the storage configuration for an Amazon EFS file system.</p>
     */
    inline const EfsStorageConfiguration& GetEfs() const{ return m_efs; }

    /**
     * <p>Defines the storage configuration for an Amazon EFS file system.</p>
     */
    inline bool EfsHasBeenSet() const { return m_efsHasBeenSet; }

    /**
     * <p>Defines the storage configuration for an Amazon EFS file system.</p>
     */
    inline void SetEfs(const EfsStorageConfiguration& value) { m_efsHasBeenSet = true; m_efs = value; }

    /**
     * <p>Defines the storage configuration for an Amazon EFS file system.</p>
     */
    inline void SetEfs(EfsStorageConfiguration&& value) { m_efsHasBeenSet = true; m_efs = std::move(value); }

    /**
     * <p>Defines the storage configuration for an Amazon EFS file system.</p>
     */
    inline StorageConfiguration& WithEfs(const EfsStorageConfiguration& value) { SetEfs(value); return *this;}

    /**
     * <p>Defines the storage configuration for an Amazon EFS file system.</p>
     */
    inline StorageConfiguration& WithEfs(EfsStorageConfiguration&& value) { SetEfs(std::move(value)); return *this;}


    /**
     * <p>Defines the storage configuration for an Amazon FSx file system.</p>
     */
    inline const FsxStorageConfiguration& GetFsx() const{ return m_fsx; }

    /**
     * <p>Defines the storage configuration for an Amazon FSx file system.</p>
     */
    inline bool FsxHasBeenSet() const { return m_fsxHasBeenSet; }

    /**
     * <p>Defines the storage configuration for an Amazon FSx file system.</p>
     */
    inline void SetFsx(const FsxStorageConfiguration& value) { m_fsxHasBeenSet = true; m_fsx = value; }

    /**
     * <p>Defines the storage configuration for an Amazon FSx file system.</p>
     */
    inline void SetFsx(FsxStorageConfiguration&& value) { m_fsxHasBeenSet = true; m_fsx = std::move(value); }

    /**
     * <p>Defines the storage configuration for an Amazon FSx file system.</p>
     */
    inline StorageConfiguration& WithFsx(const FsxStorageConfiguration& value) { SetFsx(value); return *this;}

    /**
     * <p>Defines the storage configuration for an Amazon FSx file system.</p>
     */
    inline StorageConfiguration& WithFsx(FsxStorageConfiguration&& value) { SetFsx(std::move(value)); return *this;}

  private:

    EfsStorageConfiguration m_efs;
    bool m_efsHasBeenSet = false;

    FsxStorageConfiguration m_fsx;
    bool m_fsxHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
