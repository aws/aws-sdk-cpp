/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisRulePolicyV1.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Controls on the query specifications that can be run on configured
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisRulePolicy">AWS
   * API Reference</a></p>
   */
  class AnalysisRulePolicy
  {
  public:
    AWS_CLEANROOMS_API AnalysisRulePolicy() = default;
    AWS_CLEANROOMS_API AnalysisRulePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRulePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Controls on the query specifications that can be run on configured table.</p>
     */
    inline const AnalysisRulePolicyV1& GetV1() const { return m_v1; }
    inline bool V1HasBeenSet() const { return m_v1HasBeenSet; }
    template<typename V1T = AnalysisRulePolicyV1>
    void SetV1(V1T&& value) { m_v1HasBeenSet = true; m_v1 = std::forward<V1T>(value); }
    template<typename V1T = AnalysisRulePolicyV1>
    AnalysisRulePolicy& WithV1(V1T&& value) { SetV1(std::forward<V1T>(value)); return *this;}
    ///@}
  private:

    AnalysisRulePolicyV1 m_v1;
    bool m_v1HasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
