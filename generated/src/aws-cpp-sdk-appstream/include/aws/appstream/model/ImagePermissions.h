/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>

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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the permissions for an image. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ImagePermissions">AWS
   * API Reference</a></p>
   */
  class ImagePermissions
  {
  public:
    AWS_APPSTREAM_API ImagePermissions() = default;
    AWS_APPSTREAM_API ImagePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ImagePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the image can be used for a fleet.</p>
     */
    inline bool GetAllowFleet() const { return m_allowFleet; }
    inline bool AllowFleetHasBeenSet() const { return m_allowFleetHasBeenSet; }
    inline void SetAllowFleet(bool value) { m_allowFleetHasBeenSet = true; m_allowFleet = value; }
    inline ImagePermissions& WithAllowFleet(bool value) { SetAllowFleet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image can be used for an image builder.</p>
     */
    inline bool GetAllowImageBuilder() const { return m_allowImageBuilder; }
    inline bool AllowImageBuilderHasBeenSet() const { return m_allowImageBuilderHasBeenSet; }
    inline void SetAllowImageBuilder(bool value) { m_allowImageBuilderHasBeenSet = true; m_allowImageBuilder = value; }
    inline ImagePermissions& WithAllowImageBuilder(bool value) { SetAllowImageBuilder(value); return *this;}
    ///@}
  private:

    bool m_allowFleet{false};
    bool m_allowFleetHasBeenSet = false;

    bool m_allowImageBuilder{false};
    bool m_allowImageBuilderHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
