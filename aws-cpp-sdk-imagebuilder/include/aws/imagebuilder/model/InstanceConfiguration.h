/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/InstanceBlockDeviceMapping.h>
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
   * <p>Defines a custom base AMI and block device mapping configurations of an
   * instance used for building and testing container images.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/InstanceConfiguration">AWS
   * API Reference</a></p>
   */
  class InstanceConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API InstanceConfiguration();
    AWS_IMAGEBUILDER_API InstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API InstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AMI ID to use as the base image for a container build and test instance.
     * If not specified, Image Builder will use the appropriate ECS-optimized AMI as a
     * base image.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The AMI ID to use as the base image for a container build and test instance.
     * If not specified, Image Builder will use the appropriate ECS-optimized AMI as a
     * base image.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The AMI ID to use as the base image for a container build and test instance.
     * If not specified, Image Builder will use the appropriate ECS-optimized AMI as a
     * base image.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The AMI ID to use as the base image for a container build and test instance.
     * If not specified, Image Builder will use the appropriate ECS-optimized AMI as a
     * base image.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The AMI ID to use as the base image for a container build and test instance.
     * If not specified, Image Builder will use the appropriate ECS-optimized AMI as a
     * base image.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The AMI ID to use as the base image for a container build and test instance.
     * If not specified, Image Builder will use the appropriate ECS-optimized AMI as a
     * base image.</p>
     */
    inline InstanceConfiguration& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The AMI ID to use as the base image for a container build and test instance.
     * If not specified, Image Builder will use the appropriate ECS-optimized AMI as a
     * base image.</p>
     */
    inline InstanceConfiguration& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The AMI ID to use as the base image for a container build and test instance.
     * If not specified, Image Builder will use the appropriate ECS-optimized AMI as a
     * base image.</p>
     */
    inline InstanceConfiguration& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>Defines the block devices to attach for building an instance from this Image
     * Builder AMI.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>Defines the block devices to attach for building an instance from this Image
     * Builder AMI.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>Defines the block devices to attach for building an instance from this Image
     * Builder AMI.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>Defines the block devices to attach for building an instance from this Image
     * Builder AMI.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>Defines the block devices to attach for building an instance from this Image
     * Builder AMI.</p>
     */
    inline InstanceConfiguration& WithBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>Defines the block devices to attach for building an instance from this Image
     * Builder AMI.</p>
     */
    inline InstanceConfiguration& WithBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>Defines the block devices to attach for building an instance from this Image
     * Builder AMI.</p>
     */
    inline InstanceConfiguration& AddBlockDeviceMappings(const InstanceBlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>Defines the block devices to attach for building an instance from this Image
     * Builder AMI.</p>
     */
    inline InstanceConfiguration& AddBlockDeviceMappings(InstanceBlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
