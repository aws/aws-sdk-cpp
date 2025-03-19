/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies test cases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TestCases">AWS
   * API Reference</a></p>
   */
  class TestCases
  {
  public:
    AWS_APPTEST_API TestCases() = default;
    AWS_APPTEST_API TestCases(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestCases& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sequential of the test case.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSequential() const { return m_sequential; }
    inline bool SequentialHasBeenSet() const { return m_sequentialHasBeenSet; }
    template<typename SequentialT = Aws::Vector<Aws::String>>
    void SetSequential(SequentialT&& value) { m_sequentialHasBeenSet = true; m_sequential = std::forward<SequentialT>(value); }
    template<typename SequentialT = Aws::Vector<Aws::String>>
    TestCases& WithSequential(SequentialT&& value) { SetSequential(std::forward<SequentialT>(value)); return *this;}
    template<typename SequentialT = Aws::String>
    TestCases& AddSequential(SequentialT&& value) { m_sequentialHasBeenSet = true; m_sequential.emplace_back(std::forward<SequentialT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_sequential;
    bool m_sequentialHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
