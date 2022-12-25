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
   * <p>Details about a beta appliance software update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/AlternateSoftwareMetadata">AWS
   * API Reference</a></p>
   */
  class AlternateSoftwareMetadata
  {
  public:
    AWS_PANORAMA_API AlternateSoftwareMetadata();
    AWS_PANORAMA_API AlternateSoftwareMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API AlternateSoftwareMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The appliance software version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The appliance software version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The appliance software version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The appliance software version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The appliance software version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The appliance software version.</p>
     */
    inline AlternateSoftwareMetadata& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The appliance software version.</p>
     */
    inline AlternateSoftwareMetadata& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The appliance software version.</p>
     */
    inline AlternateSoftwareMetadata& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
