/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/TargetDatabase.h>
#include <aws/apptest/model/CaptureTool.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies a target database metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TargetDatabaseMetadata">AWS
   * API Reference</a></p>
   */
  class TargetDatabaseMetadata
  {
  public:
    AWS_APPTEST_API TargetDatabaseMetadata() = default;
    AWS_APPTEST_API TargetDatabaseMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TargetDatabaseMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the target database metadata.</p>
     */
    inline TargetDatabase GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TargetDatabase value) { m_typeHasBeenSet = true; m_type = value; }
    inline TargetDatabaseMetadata& WithType(TargetDatabase value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capture tool of the target database metadata.</p>
     */
    inline CaptureTool GetCaptureTool() const { return m_captureTool; }
    inline bool CaptureToolHasBeenSet() const { return m_captureToolHasBeenSet; }
    inline void SetCaptureTool(CaptureTool value) { m_captureToolHasBeenSet = true; m_captureTool = value; }
    inline TargetDatabaseMetadata& WithCaptureTool(CaptureTool value) { SetCaptureTool(value); return *this;}
    ///@}
  private:

    TargetDatabase m_type{TargetDatabase::NOT_SET};
    bool m_typeHasBeenSet = false;

    CaptureTool m_captureTool{CaptureTool::NOT_SET};
    bool m_captureToolHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
