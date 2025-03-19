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
    AWS_MAINFRAMEMODERNIZATION_API StorageConfiguration() = default;
    AWS_MAINFRAMEMODERNIZATION_API StorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API StorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the storage configuration for an Amazon EFS file system.</p>
     */
    inline const EfsStorageConfiguration& GetEfs() const { return m_efs; }
    inline bool EfsHasBeenSet() const { return m_efsHasBeenSet; }
    template<typename EfsT = EfsStorageConfiguration>
    void SetEfs(EfsT&& value) { m_efsHasBeenSet = true; m_efs = std::forward<EfsT>(value); }
    template<typename EfsT = EfsStorageConfiguration>
    StorageConfiguration& WithEfs(EfsT&& value) { SetEfs(std::forward<EfsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the storage configuration for an Amazon FSx file system.</p>
     */
    inline const FsxStorageConfiguration& GetFsx() const { return m_fsx; }
    inline bool FsxHasBeenSet() const { return m_fsxHasBeenSet; }
    template<typename FsxT = FsxStorageConfiguration>
    void SetFsx(FsxT&& value) { m_fsxHasBeenSet = true; m_fsx = std::forward<FsxT>(value); }
    template<typename FsxT = FsxStorageConfiguration>
    StorageConfiguration& WithFsx(FsxT&& value) { SetFsx(std::forward<FsxT>(value)); return *this;}
    ///@}
  private:

    EfsStorageConfiguration m_efs;
    bool m_efsHasBeenSet = false;

    FsxStorageConfiguration m_fsx;
    bool m_fsxHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
