/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Creates a CloudFormation step output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CreateCloudFormationStepOutput">AWS
   * API Reference</a></p>
   */
  class CreateCloudFormationStepOutput
  {
  public:
    AWS_APPTEST_API CreateCloudFormationStepOutput() = default;
    AWS_APPTEST_API CreateCloudFormationStepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CreateCloudFormationStepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stack ID of the CloudFormation step output.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    CreateCloudFormationStepOutput& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exports of the CloudFormation step output.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExports() const { return m_exports; }
    inline bool ExportsHasBeenSet() const { return m_exportsHasBeenSet; }
    template<typename ExportsT = Aws::Map<Aws::String, Aws::String>>
    void SetExports(ExportsT&& value) { m_exportsHasBeenSet = true; m_exports = std::forward<ExportsT>(value); }
    template<typename ExportsT = Aws::Map<Aws::String, Aws::String>>
    CreateCloudFormationStepOutput& WithExports(ExportsT&& value) { SetExports(std::forward<ExportsT>(value)); return *this;}
    template<typename ExportsKeyT = Aws::String, typename ExportsValueT = Aws::String>
    CreateCloudFormationStepOutput& AddExports(ExportsKeyT&& key, ExportsValueT&& value) {
      m_exportsHasBeenSet = true; m_exports.emplace(std::forward<ExportsKeyT>(key), std::forward<ExportsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_exports;
    bool m_exportsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
