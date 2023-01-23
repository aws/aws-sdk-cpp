/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The Amazon Linux release specified for a cluster in the RunJobFlow
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/OSRelease">AWS
   * API Reference</a></p>
   */
  class OSRelease
  {
  public:
    AWS_EMR_API OSRelease();
    AWS_EMR_API OSRelease(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API OSRelease& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Linux release specified for a cluster in the RunJobFlow request.
     * The format is as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, 2.0.20220218.1.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The Amazon Linux release specified for a cluster in the RunJobFlow request.
     * The format is as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, 2.0.20220218.1.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The Amazon Linux release specified for a cluster in the RunJobFlow request.
     * The format is as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, 2.0.20220218.1.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The Amazon Linux release specified for a cluster in the RunJobFlow request.
     * The format is as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, 2.0.20220218.1.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The Amazon Linux release specified for a cluster in the RunJobFlow request.
     * The format is as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, 2.0.20220218.1.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The Amazon Linux release specified for a cluster in the RunJobFlow request.
     * The format is as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, 2.0.20220218.1.</p>
     */
    inline OSRelease& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The Amazon Linux release specified for a cluster in the RunJobFlow request.
     * The format is as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, 2.0.20220218.1.</p>
     */
    inline OSRelease& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The Amazon Linux release specified for a cluster in the RunJobFlow request.
     * The format is as shown in <a
     * href="https://docs.aws.amazon.com/AL2/latest/relnotes/relnotes-20220218.html">
     * <i>Amazon Linux 2 Release Notes</i> </a>. For example, 2.0.20220218.1.</p>
     */
    inline OSRelease& WithLabel(const char* value) { SetLabel(value); return *this;}

  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
