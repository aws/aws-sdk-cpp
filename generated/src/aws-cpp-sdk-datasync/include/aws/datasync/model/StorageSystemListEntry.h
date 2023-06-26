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
    AWS_DATASYNC_API StorageSystemListEntry();
    AWS_DATASYNC_API StorageSystemListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API StorageSystemListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Names (ARN) of an on-premises storage system that you
     * added to DataSync Discovery.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const{ return m_storageSystemArn; }

    /**
     * <p>The Amazon Resource Names (ARN) of an on-premises storage system that you
     * added to DataSync Discovery.</p>
     */
    inline bool StorageSystemArnHasBeenSet() const { return m_storageSystemArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of an on-premises storage system that you
     * added to DataSync Discovery.</p>
     */
    inline void SetStorageSystemArn(const Aws::String& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of an on-premises storage system that you
     * added to DataSync Discovery.</p>
     */
    inline void SetStorageSystemArn(Aws::String&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of an on-premises storage system that you
     * added to DataSync Discovery.</p>
     */
    inline void SetStorageSystemArn(const char* value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn.assign(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of an on-premises storage system that you
     * added to DataSync Discovery.</p>
     */
    inline StorageSystemListEntry& WithStorageSystemArn(const Aws::String& value) { SetStorageSystemArn(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of an on-premises storage system that you
     * added to DataSync Discovery.</p>
     */
    inline StorageSystemListEntry& WithStorageSystemArn(Aws::String&& value) { SetStorageSystemArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of an on-premises storage system that you
     * added to DataSync Discovery.</p>
     */
    inline StorageSystemListEntry& WithStorageSystemArn(const char* value) { SetStorageSystemArn(value); return *this;}


    /**
     * <p>The name of an on-premises storage system that you added to DataSync
     * Discovery.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an on-premises storage system that you added to DataSync
     * Discovery.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an on-premises storage system that you added to DataSync
     * Discovery.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an on-premises storage system that you added to DataSync
     * Discovery.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an on-premises storage system that you added to DataSync
     * Discovery.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an on-premises storage system that you added to DataSync
     * Discovery.</p>
     */
    inline StorageSystemListEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an on-premises storage system that you added to DataSync
     * Discovery.</p>
     */
    inline StorageSystemListEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of an on-premises storage system that you added to DataSync
     * Discovery.</p>
     */
    inline StorageSystemListEntry& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
