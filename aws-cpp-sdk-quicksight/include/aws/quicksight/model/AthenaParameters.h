/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Amazon Athena parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AthenaParameters">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API AthenaParameters
  {
  public:
    AthenaParameters();
    AthenaParameters(Aws::Utils::Json::JsonView jsonValue);
    AthenaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline AthenaParameters& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline AthenaParameters& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline AthenaParameters& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}

  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
