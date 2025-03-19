/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/KxSavedownStorageType.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The size and type of temporary storage that is used to hold data during the
   * savedown process. All the data written to this storage space is lost when the
   * cluster node is restarted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxSavedownStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class KxSavedownStorageConfiguration
  {
  public:
    AWS_FINSPACE_API KxSavedownStorageConfiguration() = default;
    AWS_FINSPACE_API KxSavedownStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxSavedownStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of writeable storage space for temporarily storing your savedown
     * data. The valid values are:</p> <ul> <li> <p>SDS01 – This type represents 3000
     * IOPS and io2 ebs volume type.</p> </li> </ul>
     */
    inline KxSavedownStorageType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(KxSavedownStorageType value) { m_typeHasBeenSet = true; m_type = value; }
    inline KxSavedownStorageConfiguration& WithType(KxSavedownStorageType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of temporary storage in gibibytes.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline KxSavedownStorageConfiguration& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the kdb volume that you want to use as writeable save-down
     * storage for clusters. </p>
     */
    inline const Aws::String& GetVolumeName() const { return m_volumeName; }
    inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }
    template<typename VolumeNameT = Aws::String>
    void SetVolumeName(VolumeNameT&& value) { m_volumeNameHasBeenSet = true; m_volumeName = std::forward<VolumeNameT>(value); }
    template<typename VolumeNameT = Aws::String>
    KxSavedownStorageConfiguration& WithVolumeName(VolumeNameT&& value) { SetVolumeName(std::forward<VolumeNameT>(value)); return *this;}
    ///@}
  private:

    KxSavedownStorageType m_type{KxSavedownStorageType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;

    Aws::String m_volumeName;
    bool m_volumeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
