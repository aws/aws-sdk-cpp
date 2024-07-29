/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRulePolicyV1.h>
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
   * <p> Controls on the query specifications that can be run on an associated
   * configured table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableAssociationAnalysisRulePolicy">AWS
   * API Reference</a></p>
   */
  class ConfiguredTableAssociationAnalysisRulePolicy
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRulePolicy();
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRulePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRulePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The policy for the configured table association analysis rule.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRulePolicyV1& GetV1() const{ return m_v1; }
    inline bool V1HasBeenSet() const { return m_v1HasBeenSet; }
    inline void SetV1(const ConfiguredTableAssociationAnalysisRulePolicyV1& value) { m_v1HasBeenSet = true; m_v1 = value; }
    inline void SetV1(ConfiguredTableAssociationAnalysisRulePolicyV1&& value) { m_v1HasBeenSet = true; m_v1 = std::move(value); }
    inline ConfiguredTableAssociationAnalysisRulePolicy& WithV1(const ConfiguredTableAssociationAnalysisRulePolicyV1& value) { SetV1(value); return *this;}
    inline ConfiguredTableAssociationAnalysisRulePolicy& WithV1(ConfiguredTableAssociationAnalysisRulePolicyV1&& value) { SetV1(std::move(value)); return *this;}
    ///@}
  private:

    ConfiguredTableAssociationAnalysisRulePolicyV1 m_v1;
    bool m_v1HasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
