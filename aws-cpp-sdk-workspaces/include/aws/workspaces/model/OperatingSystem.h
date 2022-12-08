/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class OperatingSystem
  {
  public:
    AWS_WORKSPACES_API OperatingSystem();
    AWS_WORKSPACES_API OperatingSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API OperatingSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
