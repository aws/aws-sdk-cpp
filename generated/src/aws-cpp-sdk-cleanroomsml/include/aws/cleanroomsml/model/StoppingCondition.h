/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>

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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>The criteria used to stop model training.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/StoppingCondition">AWS
   * API Reference</a></p>
   */
  class StoppingCondition
  {
  public:
    AWS_CLEANROOMSML_API StoppingCondition() = default;
    AWS_CLEANROOMSML_API StoppingCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API StoppingCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum amount of time, in seconds, that model training can run before it
     * is terminated.</p>
     */
    inline int GetMaxRuntimeInSeconds() const { return m_maxRuntimeInSeconds; }
    inline bool MaxRuntimeInSecondsHasBeenSet() const { return m_maxRuntimeInSecondsHasBeenSet; }
    inline void SetMaxRuntimeInSeconds(int value) { m_maxRuntimeInSecondsHasBeenSet = true; m_maxRuntimeInSeconds = value; }
    inline StoppingCondition& WithMaxRuntimeInSeconds(int value) { SetMaxRuntimeInSeconds(value); return *this;}
    ///@}
  private:

    int m_maxRuntimeInSeconds{0};
    bool m_maxRuntimeInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
