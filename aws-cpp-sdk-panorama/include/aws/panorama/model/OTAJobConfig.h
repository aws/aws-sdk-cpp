/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>An over-the-air update (OTA) job configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/OTAJobConfig">AWS
   * API Reference</a></p>
   */
  class OTAJobConfig
  {
  public:
    AWS_PANORAMA_API OTAJobConfig();
    AWS_PANORAMA_API OTAJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API OTAJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target version of the device software.</p>
     */
    inline const Aws::String& GetImageVersion() const{ return m_imageVersion; }

    /**
     * <p>The target version of the device software.</p>
     */
    inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }

    /**
     * <p>The target version of the device software.</p>
     */
    inline void SetImageVersion(const Aws::String& value) { m_imageVersionHasBeenSet = true; m_imageVersion = value; }

    /**
     * <p>The target version of the device software.</p>
     */
    inline void SetImageVersion(Aws::String&& value) { m_imageVersionHasBeenSet = true; m_imageVersion = std::move(value); }

    /**
     * <p>The target version of the device software.</p>
     */
    inline void SetImageVersion(const char* value) { m_imageVersionHasBeenSet = true; m_imageVersion.assign(value); }

    /**
     * <p>The target version of the device software.</p>
     */
    inline OTAJobConfig& WithImageVersion(const Aws::String& value) { SetImageVersion(value); return *this;}

    /**
     * <p>The target version of the device software.</p>
     */
    inline OTAJobConfig& WithImageVersion(Aws::String&& value) { SetImageVersion(std::move(value)); return *this;}

    /**
     * <p>The target version of the device software.</p>
     */
    inline OTAJobConfig& WithImageVersion(const char* value) { SetImageVersion(value); return *this;}

  private:

    Aws::String m_imageVersion;
    bool m_imageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
