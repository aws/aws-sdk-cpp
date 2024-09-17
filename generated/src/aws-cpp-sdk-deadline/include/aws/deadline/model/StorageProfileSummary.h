/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StorageProfileOperatingSystemFamily.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a storage profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StorageProfileSummary">AWS
   * API Reference</a></p>
   */
  class StorageProfileSummary
  {
  public:
    AWS_DEADLINE_API StorageProfileSummary();
    AWS_DEADLINE_API StorageProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StorageProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The storage profile ID.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }
    inline bool StorageProfileIdHasBeenSet() const { return m_storageProfileIdHasBeenSet; }
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = value; }
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::move(value); }
    inline void SetStorageProfileId(const char* value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId.assign(value); }
    inline StorageProfileSummary& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}
    inline StorageProfileSummary& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}
    inline StorageProfileSummary& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the storage profile summary to update.</p> 
     * <p>This field can store any content. Escape or encode this content before
     * displaying it on a webpage or any other system that might interpret the content
     * of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline StorageProfileSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline StorageProfileSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline StorageProfileSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) family.</p>
     */
    inline const StorageProfileOperatingSystemFamily& GetOsFamily() const{ return m_osFamily; }
    inline bool OsFamilyHasBeenSet() const { return m_osFamilyHasBeenSet; }
    inline void SetOsFamily(const StorageProfileOperatingSystemFamily& value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }
    inline void SetOsFamily(StorageProfileOperatingSystemFamily&& value) { m_osFamilyHasBeenSet = true; m_osFamily = std::move(value); }
    inline StorageProfileSummary& WithOsFamily(const StorageProfileOperatingSystemFamily& value) { SetOsFamily(value); return *this;}
    inline StorageProfileSummary& WithOsFamily(StorageProfileOperatingSystemFamily&& value) { SetOsFamily(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    StorageProfileOperatingSystemFamily m_osFamily;
    bool m_osFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
