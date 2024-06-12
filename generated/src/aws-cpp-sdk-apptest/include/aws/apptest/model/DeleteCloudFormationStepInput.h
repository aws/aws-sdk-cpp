/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
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
   * <p>Deletes the CloudFormation step input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/DeleteCloudFormationStepInput">AWS
   * API Reference</a></p>
   */
  class DeleteCloudFormationStepInput
  {
  public:
    AWS_APPTEST_API DeleteCloudFormationStepInput();
    AWS_APPTEST_API DeleteCloudFormationStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API DeleteCloudFormationStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stack ID of the deleted CloudFormation step input.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline DeleteCloudFormationStepInput& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline DeleteCloudFormationStepInput& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline DeleteCloudFormationStepInput& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
