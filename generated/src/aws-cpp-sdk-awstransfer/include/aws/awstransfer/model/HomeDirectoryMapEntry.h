/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/MapType.h>
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
    AWS_TRANSFER_API HomeDirectoryMapEntry() = default;
    AWS_TRANSFER_API HomeDirectoryMapEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API HomeDirectoryMapEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents an entry for <code>HomeDirectoryMappings</code>.</p>
     */
    inline const Aws::String& GetEntry() const { return m_entry; }
    inline bool EntryHasBeenSet() const { return m_entryHasBeenSet; }
    template<typename EntryT = Aws::String>
    void SetEntry(EntryT&& value) { m_entryHasBeenSet = true; m_entry = std::forward<EntryT>(value); }
    template<typename EntryT = Aws::String>
    HomeDirectoryMapEntry& WithEntry(EntryT&& value) { SetEntry(std::forward<EntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectoryMapEntry</code>.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    HomeDirectoryMapEntry& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of mapping. Set the type to <code>FILE</code> if you want
     * the mapping to point to a file, or <code>DIRECTORY</code> for the directory to
     * point to a directory.</p>  <p>By default, home directory mappings have a
     * <code>Type</code> of <code>DIRECTORY</code> when you create a Transfer Family
     * server. You would need to explicitly set <code>Type</code> to <code>FILE</code>
     * if you want a mapping to have a file target.</p> 
     */
    inline MapType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MapType value) { m_typeHasBeenSet = true; m_type = value; }
    inline HomeDirectoryMapEntry& WithType(MapType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_entry;
    bool m_entryHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    MapType m_type{MapType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
