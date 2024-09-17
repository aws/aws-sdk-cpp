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
    AWS_APPTEST_API M2ManagedApplicationStepOutput();
    AWS_APPTEST_API M2ManagedApplicationStepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2ManagedApplicationStepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The import data set summary of the AWS Mainframe Modernization managed
     * application step output.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetImportDataSetSummary() const{ return m_importDataSetSummary; }
    inline bool ImportDataSetSummaryHasBeenSet() const { return m_importDataSetSummaryHasBeenSet; }
    inline void SetImportDataSetSummary(const Aws::Map<Aws::String, Aws::String>& value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary = value; }
    inline void SetImportDataSetSummary(Aws::Map<Aws::String, Aws::String>&& value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary = std::move(value); }
    inline M2ManagedApplicationStepOutput& WithImportDataSetSummary(const Aws::Map<Aws::String, Aws::String>& value) { SetImportDataSetSummary(value); return *this;}
    inline M2ManagedApplicationStepOutput& WithImportDataSetSummary(Aws::Map<Aws::String, Aws::String>&& value) { SetImportDataSetSummary(std::move(value)); return *this;}
    inline M2ManagedApplicationStepOutput& AddImportDataSetSummary(const Aws::String& key, const Aws::String& value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary.emplace(key, value); return *this; }
    inline M2ManagedApplicationStepOutput& AddImportDataSetSummary(Aws::String&& key, const Aws::String& value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary.emplace(std::move(key), value); return *this; }
    inline M2ManagedApplicationStepOutput& AddImportDataSetSummary(const Aws::String& key, Aws::String&& value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary.emplace(key, std::move(value)); return *this; }
    inline M2ManagedApplicationStepOutput& AddImportDataSetSummary(Aws::String&& key, Aws::String&& value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary.emplace(std::move(key), std::move(value)); return *this; }
    inline M2ManagedApplicationStepOutput& AddImportDataSetSummary(const char* key, Aws::String&& value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary.emplace(key, std::move(value)); return *this; }
    inline M2ManagedApplicationStepOutput& AddImportDataSetSummary(Aws::String&& key, const char* value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary.emplace(std::move(key), value); return *this; }
    inline M2ManagedApplicationStepOutput& AddImportDataSetSummary(const char* key, const char* value) { m_importDataSetSummaryHasBeenSet = true; m_importDataSetSummary.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_importDataSetSummary;
    bool m_importDataSetSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
