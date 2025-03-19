/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a block storage disk mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DiskMap">AWS
   * API Reference</a></p>
   */
  class DiskMap
  {
  public:
    AWS_LIGHTSAIL_API DiskMap() = default;
    AWS_LIGHTSAIL_API DiskMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DiskMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The original disk path exposed to the instance (for example,
     * <code>/dev/sdh</code>).</p>
     */
    inline const Aws::String& GetOriginalDiskPath() const { return m_originalDiskPath; }
    inline bool OriginalDiskPathHasBeenSet() const { return m_originalDiskPathHasBeenSet; }
    template<typename OriginalDiskPathT = Aws::String>
    void SetOriginalDiskPath(OriginalDiskPathT&& value) { m_originalDiskPathHasBeenSet = true; m_originalDiskPath = std::forward<OriginalDiskPathT>(value); }
    template<typename OriginalDiskPathT = Aws::String>
    DiskMap& WithOriginalDiskPath(OriginalDiskPathT&& value) { SetOriginalDiskPath(std::forward<OriginalDiskPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new disk name (<code>my-new-disk</code>).</p>
     */
    inline const Aws::String& GetNewDiskName() const { return m_newDiskName; }
    inline bool NewDiskNameHasBeenSet() const { return m_newDiskNameHasBeenSet; }
    template<typename NewDiskNameT = Aws::String>
    void SetNewDiskName(NewDiskNameT&& value) { m_newDiskNameHasBeenSet = true; m_newDiskName = std::forward<NewDiskNameT>(value); }
    template<typename NewDiskNameT = Aws::String>
    DiskMap& WithNewDiskName(NewDiskNameT&& value) { SetNewDiskName(std::forward<NewDiskNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_originalDiskPath;
    bool m_originalDiskPathHasBeenSet = false;

    Aws::String m_newDiskName;
    bool m_newDiskNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
