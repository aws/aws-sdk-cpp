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
    AWS_IMAGEBUILDER_API Container();
    AWS_IMAGEBUILDER_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Containers and container images are Region-specific. This is the Region
     * context for the container.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Containers and container images are Region-specific. This is the Region
     * context for the container.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Containers and container images are Region-specific. This is the Region
     * context for the container.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Containers and container images are Region-specific. This is the Region
     * context for the container.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Containers and container images are Region-specific. This is the Region
     * context for the container.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>Containers and container images are Region-specific. This is the Region
     * context for the container.</p>
     */
    inline Container& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Containers and container images are Region-specific. This is the Region
     * context for the container.</p>
     */
    inline Container& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Containers and container images are Region-specific. This is the Region
     * context for the container.</p>
     */
    inline Container& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageUris() const{ return m_imageUris; }

    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline bool ImageUrisHasBeenSet() const { return m_imageUrisHasBeenSet; }

    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline void SetImageUris(const Aws::Vector<Aws::String>& value) { m_imageUrisHasBeenSet = true; m_imageUris = value; }

    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline void SetImageUris(Aws::Vector<Aws::String>&& value) { m_imageUrisHasBeenSet = true; m_imageUris = std::move(value); }

    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline Container& WithImageUris(const Aws::Vector<Aws::String>& value) { SetImageUris(value); return *this;}

    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline Container& WithImageUris(Aws::Vector<Aws::String>&& value) { SetImageUris(std::move(value)); return *this;}

    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline Container& AddImageUris(const Aws::String& value) { m_imageUrisHasBeenSet = true; m_imageUris.push_back(value); return *this; }

    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline Container& AddImageUris(Aws::String&& value) { m_imageUrisHasBeenSet = true; m_imageUris.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of URIs for containers created in the context Region.</p>
     */
    inline Container& AddImageUris(const char* value) { m_imageUrisHasBeenSet = true; m_imageUris.push_back(value); return *this; }

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageUris;
    bool m_imageUrisHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
