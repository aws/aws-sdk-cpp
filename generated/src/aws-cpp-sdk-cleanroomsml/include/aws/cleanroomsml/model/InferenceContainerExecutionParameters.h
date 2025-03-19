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
   * <p>Provides execution parameters for the inference container.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/InferenceContainerExecutionParameters">AWS
   * API Reference</a></p>
   */
  class InferenceContainerExecutionParameters
  {
  public:
    AWS_CLEANROOMSML_API InferenceContainerExecutionParameters() = default;
    AWS_CLEANROOMSML_API InferenceContainerExecutionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API InferenceContainerExecutionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum size of the inference container payload, specified in MB. </p>
     */
    inline int GetMaxPayloadInMB() const { return m_maxPayloadInMB; }
    inline bool MaxPayloadInMBHasBeenSet() const { return m_maxPayloadInMBHasBeenSet; }
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMBHasBeenSet = true; m_maxPayloadInMB = value; }
    inline InferenceContainerExecutionParameters& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}
    ///@}
  private:

    int m_maxPayloadInMB{0};
    bool m_maxPayloadInMBHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
