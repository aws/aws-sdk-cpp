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
    AWS_APPTEST_API CreateCloudFormationStepOutput();
    AWS_APPTEST_API CreateCloudFormationStepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CreateCloudFormationStepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stack ID of the CloudFormation step output.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline CreateCloudFormationStepOutput& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline CreateCloudFormationStepOutput& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline CreateCloudFormationStepOutput& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exports of the CloudFormation step output.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExports() const{ return m_exports; }
    inline bool ExportsHasBeenSet() const { return m_exportsHasBeenSet; }
    inline void SetExports(const Aws::Map<Aws::String, Aws::String>& value) { m_exportsHasBeenSet = true; m_exports = value; }
    inline void SetExports(Aws::Map<Aws::String, Aws::String>&& value) { m_exportsHasBeenSet = true; m_exports = std::move(value); }
    inline CreateCloudFormationStepOutput& WithExports(const Aws::Map<Aws::String, Aws::String>& value) { SetExports(value); return *this;}
    inline CreateCloudFormationStepOutput& WithExports(Aws::Map<Aws::String, Aws::String>&& value) { SetExports(std::move(value)); return *this;}
    inline CreateCloudFormationStepOutput& AddExports(const Aws::String& key, const Aws::String& value) { m_exportsHasBeenSet = true; m_exports.emplace(key, value); return *this; }
    inline CreateCloudFormationStepOutput& AddExports(Aws::String&& key, const Aws::String& value) { m_exportsHasBeenSet = true; m_exports.emplace(std::move(key), value); return *this; }
    inline CreateCloudFormationStepOutput& AddExports(const Aws::String& key, Aws::String&& value) { m_exportsHasBeenSet = true; m_exports.emplace(key, std::move(value)); return *this; }
    inline CreateCloudFormationStepOutput& AddExports(Aws::String&& key, Aws::String&& value) { m_exportsHasBeenSet = true; m_exports.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateCloudFormationStepOutput& AddExports(const char* key, Aws::String&& value) { m_exportsHasBeenSet = true; m_exports.emplace(key, std::move(value)); return *this; }
    inline CreateCloudFormationStepOutput& AddExports(Aws::String&& key, const char* value) { m_exportsHasBeenSet = true; m_exports.emplace(std::move(key), value); return *this; }
    inline CreateCloudFormationStepOutput& AddExports(const char* key, const char* value) { m_exportsHasBeenSet = true; m_exports.emplace(key, value); return *this; }
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
