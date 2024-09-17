/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/SourceDatabase.h>
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
   * <p>Specifies the source database metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/SourceDatabaseMetadata">AWS
   * API Reference</a></p>
   */
  class SourceDatabaseMetadata
  {
  public:
    AWS_APPTEST_API SourceDatabaseMetadata();
    AWS_APPTEST_API SourceDatabaseMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API SourceDatabaseMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the source database metadata.</p>
     */
    inline const SourceDatabase& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SourceDatabase& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SourceDatabase&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SourceDatabaseMetadata& WithType(const SourceDatabase& value) { SetType(value); return *this;}
    inline SourceDatabaseMetadata& WithType(SourceDatabase&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capture tool of the source database metadata.</p>
     */
    inline const CaptureTool& GetCaptureTool() const{ return m_captureTool; }
    inline bool CaptureToolHasBeenSet() const { return m_captureToolHasBeenSet; }
    inline void SetCaptureTool(const CaptureTool& value) { m_captureToolHasBeenSet = true; m_captureTool = value; }
    inline void SetCaptureTool(CaptureTool&& value) { m_captureToolHasBeenSet = true; m_captureTool = std::move(value); }
    inline SourceDatabaseMetadata& WithCaptureTool(const CaptureTool& value) { SetCaptureTool(value); return *this;}
    inline SourceDatabaseMetadata& WithCaptureTool(CaptureTool&& value) { SetCaptureTool(std::move(value)); return *this;}
    ///@}
  private:

    SourceDatabase m_type;
    bool m_typeHasBeenSet = false;

    CaptureTool m_captureTool;
    bool m_captureToolHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
