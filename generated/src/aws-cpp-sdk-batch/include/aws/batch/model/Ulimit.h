/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The <code>ulimit</code> settings to pass to the container. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_Ulimit.html">Ulimit</a>.</p>
   *  <p>This object isn't applicable to jobs that are running on Fargate
   * resources.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Ulimit">AWS API
   * Reference</a></p>
   */
  class Ulimit
  {
  public:
    AWS_BATCH_API Ulimit() = default;
    AWS_BATCH_API Ulimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Ulimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hard limit for the <code>ulimit</code> type. </p>
     */
    inline int GetHardLimit() const { return m_hardLimit; }
    inline bool HardLimitHasBeenSet() const { return m_hardLimitHasBeenSet; }
    inline void SetHardLimit(int value) { m_hardLimitHasBeenSet = true; m_hardLimit = value; }
    inline Ulimit& WithHardLimit(int value) { SetHardLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>type</code> of the <code>ulimit</code>. Valid values are:
     * <code>core</code> | <code>cpu</code> | <code>data</code> | <code>fsize</code> |
     * <code>locks</code> | <code>memlock</code> | <code>msgqueue</code> |
     * <code>nice</code> | <code>nofile</code> | <code>nproc</code> | <code>rss</code>
     * | <code>rtprio</code> | <code>rttime</code> | <code>sigpending</code> |
     * <code>stack</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Ulimit& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The soft limit for the <code>ulimit</code> type.</p>
     */
    inline int GetSoftLimit() const { return m_softLimit; }
    inline bool SoftLimitHasBeenSet() const { return m_softLimitHasBeenSet; }
    inline void SetSoftLimit(int value) { m_softLimitHasBeenSet = true; m_softLimit = value; }
    inline Ulimit& WithSoftLimit(int value) { SetSoftLimit(value); return *this;}
    ///@}
  private:

    int m_hardLimit{0};
    bool m_hardLimitHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_softLimit{0};
    bool m_softLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
