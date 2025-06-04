/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/CheckType.h>
#include <aws/evs/model/CheckResult.h>
#include <aws/core/utils/DateTime.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p>A check on the environment to identify environment health and validate VMware
   * VCF licensing compliance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/Check">AWS API
   * Reference</a></p>
   */
  class Check
  {
  public:
    AWS_EVS_API Check() = default;
    AWS_EVS_API Check(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Check& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The check type. Amazon EVS performs the following checks.</p> <ul> <li> <p>
     * <code>KEY_REUSE</code>: checks that the VCF license key is not used by another
     * Amazon EVS environment. This check fails if a used license is added to the
     * environment.</p> </li> <li> <p> <code>KEY_COVERAGE</code>: checks that your VCF
     * license key allocates sufficient vCPU cores for all deployed hosts. The check
     * fails when any assigned hosts in the EVS environment are not covered by license
     * keys, or when any unassigned hosts cannot be covered by available vCPU cores in
     * keys.</p> </li> <li> <p> <code>REACHABILITY</code>: checks that the Amazon EVS
     * control plane has a persistent connection to SDDC Manager. If Amazon EVS cannot
     * reach the environment, this check fails.</p> </li> <li> <p>
     * <code>HOST_COUNT</code>: Checks that your environment has a minimum of 4 hosts,
     * which is a requirement for VCF 5.2.1.</p> <p>If this check fails, you will need
     * to add hosts so that your environment meets this minimum requirement. Amazon EVS
     * only supports environments with 4-16 hosts.</p> </li> </ul>
     */
    inline CheckType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CheckType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Check& WithType(CheckType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The check result.</p>
     */
    inline CheckResult GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(CheckResult value) { m_resultHasBeenSet = true; m_result = value; }
    inline Check& WithResult(CheckResult value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when environment health began to be impaired.</p>
     */
    inline const Aws::Utils::DateTime& GetImpairedSince() const { return m_impairedSince; }
    inline bool ImpairedSinceHasBeenSet() const { return m_impairedSinceHasBeenSet; }
    template<typename ImpairedSinceT = Aws::Utils::DateTime>
    void SetImpairedSince(ImpairedSinceT&& value) { m_impairedSinceHasBeenSet = true; m_impairedSince = std::forward<ImpairedSinceT>(value); }
    template<typename ImpairedSinceT = Aws::Utils::DateTime>
    Check& WithImpairedSince(ImpairedSinceT&& value) { SetImpairedSince(std::forward<ImpairedSinceT>(value)); return *this;}
    ///@}
  private:

    CheckType m_type{CheckType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CheckResult m_result{CheckResult::NOT_SET};
    bool m_resultHasBeenSet = false;

    Aws::Utils::DateTime m_impairedSince{};
    bool m_impairedSinceHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
