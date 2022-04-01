/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/Compute.h>
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
   * <p>Describes the compute type of the bundle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ComputeType">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API ComputeType
  {
  public:
    ComputeType();
    ComputeType(Aws::Utils::Json::JsonView jsonValue);
    ComputeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The compute type.</p>
     */
    inline const Compute& GetName() const{ return m_name; }

    /**
     * <p>The compute type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The compute type.</p>
     */
    inline void SetName(const Compute& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The compute type.</p>
     */
    inline void SetName(Compute&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The compute type.</p>
     */
    inline ComputeType& WithName(const Compute& value) { SetName(value); return *this;}

    /**
     * <p>The compute type.</p>
     */
    inline ComputeType& WithName(Compute&& value) { SetName(std::move(value)); return *this;}

  private:

    Compute m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
