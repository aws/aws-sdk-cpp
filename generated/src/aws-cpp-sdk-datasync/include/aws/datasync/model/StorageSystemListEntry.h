/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Information that identifies an on-premises storage system that you're using
   * with DataSync Discovery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/StorageSystemListEntry">AWS
   * API Reference</a></p>
   */
  class StorageSystemListEntry
  {
  public:
    AWS_DATASYNC_API StorageSystemListEntry() = default;
    AWS_DATASYNC_API StorageSystemListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API StorageSystemListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of an on-premises storage system that you
     * added to DataSync Discovery.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const { return m_storageSystemArn; }
    inline bool StorageSystemArnHasBeenSet() const { return m_storageSystemArnHasBeenSet; }
    template<typename StorageSystemArnT = Aws::String>
    void SetStorageSystemArn(StorageSystemArnT&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::forward<StorageSystemArnT>(value); }
    template<typename StorageSystemArnT = Aws::String>
    StorageSystemListEntry& WithStorageSystemArn(StorageSystemArnT&& value) { SetStorageSystemArn(std::forward<StorageSystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an on-premises storage system that you added to DataSync
     * Discovery.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StorageSystemListEntry& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
