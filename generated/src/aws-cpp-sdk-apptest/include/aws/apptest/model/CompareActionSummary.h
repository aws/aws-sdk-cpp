/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/File.h>
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
   * <p>Specifies the compare action summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CompareActionSummary">AWS
   * API Reference</a></p>
   */
  class CompareActionSummary
  {
  public:
    AWS_APPTEST_API CompareActionSummary();
    AWS_APPTEST_API CompareActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the compare action summary.</p>
     */
    inline const File& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const File& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(File&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CompareActionSummary& WithType(const File& value) { SetType(value); return *this;}
    inline CompareActionSummary& WithType(File&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    File m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
