/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Defines the rules by which an image pipeline is automatically disabled when
   * it fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/AutoDisablePolicy">AWS
   * API Reference</a></p>
   */
  class AutoDisablePolicy
  {
  public:
    AWS_IMAGEBUILDER_API AutoDisablePolicy() = default;
    AWS_IMAGEBUILDER_API AutoDisablePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API AutoDisablePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of consecutive scheduled image pipeline executions that must fail
     * before Image Builder automatically disables the pipeline.</p>
     */
    inline int GetFailureCount() const { return m_failureCount; }
    inline bool FailureCountHasBeenSet() const { return m_failureCountHasBeenSet; }
    inline void SetFailureCount(int value) { m_failureCountHasBeenSet = true; m_failureCount = value; }
    inline AutoDisablePolicy& WithFailureCount(int value) { SetFailureCount(value); return *this;}
    ///@}
  private:

    int m_failureCount{0};
    bool m_failureCountHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
