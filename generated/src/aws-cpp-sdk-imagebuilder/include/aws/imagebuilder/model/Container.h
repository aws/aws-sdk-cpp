/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>A container encapsulates the runtime environment for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Container">AWS
   * API Reference</a></p>
   */
  class Container
  {
  public:
    AWS_IMAGEBUILDER_API Container() = default;
    AWS_IMAGEBUILDER_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Containers and container images are Region-specific. This is the Region
     * context for the container.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Container& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageUris() const { return m_imageUris; }
    inline bool ImageUrisHasBeenSet() const { return m_imageUrisHasBeenSet; }
    template<typename ImageUrisT = Aws::Vector<Aws::String>>
    void SetImageUris(ImageUrisT&& value) { m_imageUrisHasBeenSet = true; m_imageUris = std::forward<ImageUrisT>(value); }
    template<typename ImageUrisT = Aws::Vector<Aws::String>>
    Container& WithImageUris(ImageUrisT&& value) { SetImageUris(std::forward<ImageUrisT>(value)); return *this;}
    template<typename ImageUrisT = Aws::String>
    Container& AddImageUris(ImageUrisT&& value) { m_imageUrisHasBeenSet = true; m_imageUris.emplace_back(std::forward<ImageUrisT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageUris;
    bool m_imageUrisHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
