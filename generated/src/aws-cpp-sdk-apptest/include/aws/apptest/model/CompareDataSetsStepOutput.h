/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/ComparisonStatusEnum.h>
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
   * <p>Specifies the compare data sets step output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CompareDataSetsStepOutput">AWS
   * API Reference</a></p>
   */
  class CompareDataSetsStepOutput
  {
  public:
    AWS_APPTEST_API CompareDataSetsStepOutput() = default;
    AWS_APPTEST_API CompareDataSetsStepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareDataSetsStepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparison output location of the compare data sets step output.</p>
     */
    inline const Aws::String& GetComparisonOutputLocation() const { return m_comparisonOutputLocation; }
    inline bool ComparisonOutputLocationHasBeenSet() const { return m_comparisonOutputLocationHasBeenSet; }
    template<typename ComparisonOutputLocationT = Aws::String>
    void SetComparisonOutputLocation(ComparisonOutputLocationT&& value) { m_comparisonOutputLocationHasBeenSet = true; m_comparisonOutputLocation = std::forward<ComparisonOutputLocationT>(value); }
    template<typename ComparisonOutputLocationT = Aws::String>
    CompareDataSetsStepOutput& WithComparisonOutputLocation(ComparisonOutputLocationT&& value) { SetComparisonOutputLocation(std::forward<ComparisonOutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison status of the compare data sets step output.</p>
     */
    inline ComparisonStatusEnum GetComparisonStatus() const { return m_comparisonStatus; }
    inline bool ComparisonStatusHasBeenSet() const { return m_comparisonStatusHasBeenSet; }
    inline void SetComparisonStatus(ComparisonStatusEnum value) { m_comparisonStatusHasBeenSet = true; m_comparisonStatus = value; }
    inline CompareDataSetsStepOutput& WithComparisonStatus(ComparisonStatusEnum value) { SetComparisonStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_comparisonOutputLocation;
    bool m_comparisonOutputLocationHasBeenSet = false;

    ComparisonStatusEnum m_comparisonStatus{ComparisonStatusEnum::NOT_SET};
    bool m_comparisonStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
