/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPSTREAM_API ImagePermissions
  {
  public:
    ImagePermissions();
    ImagePermissions(Aws::Utils::Json::JsonView jsonValue);
    ImagePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the image can be used for a fleet.</p>
     */
    inline bool GetAllowFleet() const{ return m_allowFleet; }

    /**
     * <p>Indicates whether the image can be used for a fleet.</p>
     */
    inline bool AllowFleetHasBeenSet() const { return m_allowFleetHasBeenSet; }

    /**
     * <p>Indicates whether the image can be used for a fleet.</p>
     */
    inline void SetAllowFleet(bool value) { m_allowFleetHasBeenSet = true; m_allowFleet = value; }

    /**
     * <p>Indicates whether the image can be used for a fleet.</p>
     */
    inline ImagePermissions& WithAllowFleet(bool value) { SetAllowFleet(value); return *this;}


    /**
     * <p>Indicates whether the image can be used for an image builder.</p>
     */
    inline bool GetAllowImageBuilder() const{ return m_allowImageBuilder; }

    /**
     * <p>Indicates whether the image can be used for an image builder.</p>
     */
    inline bool AllowImageBuilderHasBeenSet() const { return m_allowImageBuilderHasBeenSet; }

    /**
     * <p>Indicates whether the image can be used for an image builder.</p>
     */
    inline void SetAllowImageBuilder(bool value) { m_allowImageBuilderHasBeenSet = true; m_allowImageBuilder = value; }

    /**
     * <p>Indicates whether the image can be used for an image builder.</p>
     */
    inline ImagePermissions& WithAllowImageBuilder(bool value) { SetAllowImageBuilder(value); return *this;}

  private:

    bool m_allowFleet;
    bool m_allowFleetHasBeenSet;

    bool m_allowImageBuilder;
    bool m_allowImageBuilderHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
