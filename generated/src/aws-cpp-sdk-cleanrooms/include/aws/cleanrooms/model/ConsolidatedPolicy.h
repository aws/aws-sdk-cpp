/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConsolidatedPolicyV1.h>
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
   * <p>Controls on the analysis specifications that can be run on a configured
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConsolidatedPolicy">AWS
   * API Reference</a></p>
   */
  class ConsolidatedPolicy
  {
  public:
    AWS_CLEANROOMS_API ConsolidatedPolicy() = default;
    AWS_CLEANROOMS_API ConsolidatedPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConsolidatedPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The consolidated policy version 1.</p>
     */
    inline const ConsolidatedPolicyV1& GetV1() const { return m_v1; }
    inline bool V1HasBeenSet() const { return m_v1HasBeenSet; }
    template<typename V1T = ConsolidatedPolicyV1>
    void SetV1(V1T&& value) { m_v1HasBeenSet = true; m_v1 = std::forward<V1T>(value); }
    template<typename V1T = ConsolidatedPolicyV1>
    ConsolidatedPolicy& WithV1(V1T&& value) { SetV1(std::forward<V1T>(value)); return *this;}
    ///@}
  private:

    ConsolidatedPolicyV1 m_v1;
    bool m_v1HasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
