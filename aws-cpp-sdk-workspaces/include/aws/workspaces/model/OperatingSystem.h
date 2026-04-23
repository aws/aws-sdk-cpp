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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/OperatingSystemType.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>The operating system that the image is running.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/OperatingSystem">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API OperatingSystem
  {
  public:
    OperatingSystem();
    OperatingSystem(Aws::Utils::Json::JsonView jsonValue);
    OperatingSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operating system.</p>
     */
    inline const OperatingSystemType& GetType() const{ return m_type; }

    /**
     * <p>The operating system.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The operating system.</p>
     */
    inline void SetType(const OperatingSystemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The operating system.</p>
     */
    inline void SetType(OperatingSystemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The operating system.</p>
     */
    inline OperatingSystem& WithType(const OperatingSystemType& value) { SetType(value); return *this;}

    /**
     * <p>The operating system.</p>
     */
    inline OperatingSystem& WithType(OperatingSystemType&& value) { SetType(std::move(value)); return *this;}

  private:

    OperatingSystemType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
