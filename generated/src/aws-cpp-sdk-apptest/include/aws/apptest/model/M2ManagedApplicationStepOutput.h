/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the AWS Mainframe Modernization managed application step
   * output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/M2ManagedApplicationStepOutput">AWS
   * API Reference</a></p>
   */
  class M2ManagedApplicationStepOutput
  {
  public:
    AWS_APPTEST_API M2ManagedApplicationStepOutput() = default;
    AWS_APPTEST_API M2ManagedApplicationStepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2ManagedApplicationStepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The import data set summary of the AWS Mainframe Modernization managed
     * application step output.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetImportDataSetSummary() const { return m_importDataSetSummary; }
    inline bool ImportDataSetSummaryHasBeenSet() const { return m_importDataSetSummaryHasBeenSet; }
    template<typename ImportDataSetSummaryT = Aws::Map<Aws::String, Aws::String>>
    void SetImportDataSetSummary(ImportDataSetSummaryT&& value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary = std::forward<ImportDataSetSummaryT>(value); }
    template<typename ImportDataSetSummaryT = Aws::Map<Aws::String, Aws::String>>
    M2ManagedApplicationStepOutput& WithImportDataSetSummary(ImportDataSetSummaryT&& value) { SetImportDataSetSummary(std::forward<ImportDataSetSummaryT>(value)); return *this;}
    template<typename ImportDataSetSummaryKeyT = Aws::String, typename ImportDataSetSummaryValueT = Aws::String>
    M2ManagedApplicationStepOutput& AddImportDataSetSummary(ImportDataSetSummaryKeyT&& key, ImportDataSetSummaryValueT&& value) {
      m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary.emplace(std::forward<ImportDataSetSummaryKeyT>(key), std::forward<ImportDataSetSummaryValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_importDataSetSummary;
    bool m_importDataSetSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
