/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRulePolicyV1.h>
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
   * <p>Controls on the query specifications that can be run on a configured
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableAnalysisRulePolicy">AWS
   * API Reference</a></p>
   */
  class ConfiguredTableAnalysisRulePolicy
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTableAnalysisRulePolicy();
    AWS_CLEANROOMS_API ConfiguredTableAnalysisRulePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAnalysisRulePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Controls on the query specifications that can be run on a configured
     * table.</p>
     */
    inline const ConfiguredTableAnalysisRulePolicyV1& GetV1() const{ return m_v1; }

    /**
     * <p>Controls on the query specifications that can be run on a configured
     * table.</p>
     */
    inline bool V1HasBeenSet() const { return m_v1HasBeenSet; }

    /**
     * <p>Controls on the query specifications that can be run on a configured
     * table.</p>
     */
    inline void SetV1(const ConfiguredTableAnalysisRulePolicyV1& value) { m_v1HasBeenSet = true; m_v1 = value; }

    /**
     * <p>Controls on the query specifications that can be run on a configured
     * table.</p>
     */
    inline void SetV1(ConfiguredTableAnalysisRulePolicyV1&& value) { m_v1HasBeenSet = true; m_v1 = std::move(value); }

    /**
     * <p>Controls on the query specifications that can be run on a configured
     * table.</p>
     */
    inline ConfiguredTableAnalysisRulePolicy& WithV1(const ConfiguredTableAnalysisRulePolicyV1& value) { SetV1(value); return *this;}

    /**
     * <p>Controls on the query specifications that can be run on a configured
     * table.</p>
     */
    inline ConfiguredTableAnalysisRulePolicy& WithV1(ConfiguredTableAnalysisRulePolicyV1&& value) { SetV1(std::move(value)); return *this;}

  private:

    ConfiguredTableAnalysisRulePolicyV1 m_v1;
    bool m_v1HasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
