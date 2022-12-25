/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Represents an object that contains entries and targets for
   * <code>HomeDirectoryMappings</code>.</p> <p>The following is an
   * <code>Entry</code> and <code>Target</code> pair example for
   * <code>chroot</code>.</p> <p> <code>[ { "Entry": "/", "Target":
   * "/bucket_name/home/mydirectory" } ]</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/HomeDirectoryMapEntry">AWS
   * API Reference</a></p>
   */
  class HomeDirectoryMapEntry
  {
  public:
    AWS_TRANSFER_API HomeDirectoryMapEntry();
    AWS_TRANSFER_API HomeDirectoryMapEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API HomeDirectoryMapEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents an entry for <code>HomeDirectoryMappings</code>.</p>
     */
    inline const Aws::String& GetEntry() const{ return m_entry; }

    /**
     * <p>Represents an entry for <code>HomeDirectoryMappings</code>.</p>
     */
    inline bool EntryHasBeenSet() const { return m_entryHasBeenSet; }

    /**
     * <p>Represents an entry for <code>HomeDirectoryMappings</code>.</p>
     */
    inline void SetEntry(const Aws::String& value) { m_entryHasBeenSet = true; m_entry = value; }

    /**
     * <p>Represents an entry for <code>HomeDirectoryMappings</code>.</p>
     */
    inline void SetEntry(Aws::String&& value) { m_entryHasBeenSet = true; m_entry = std::move(value); }

    /**
     * <p>Represents an entry for <code>HomeDirectoryMappings</code>.</p>
     */
    inline void SetEntry(const char* value) { m_entryHasBeenSet = true; m_entry.assign(value); }

    /**
     * <p>Represents an entry for <code>HomeDirectoryMappings</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithEntry(const Aws::String& value) { SetEntry(value); return *this;}

    /**
     * <p>Represents an entry for <code>HomeDirectoryMappings</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithEntry(Aws::String&& value) { SetEntry(std::move(value)); return *this;}

    /**
     * <p>Represents an entry for <code>HomeDirectoryMappings</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithEntry(const char* value) { SetEntry(value); return *this;}


    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    Aws::String m_entry;
    bool m_entryHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
