/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Defines information about the data source used for model
   * inference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ModelInferenceDataSource">AWS
   * API Reference</a></p>
   */
  class ModelInferenceDataSource
  {
  public:
    AWS_CLEANROOMSML_API ModelInferenceDataSource() = default;
    AWS_CLEANROOMSML_API ModelInferenceDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ModelInferenceDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel for this model
     * inference data source.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const { return m_mlInputChannelArn; }
    inline bool MlInputChannelArnHasBeenSet() const { return m_mlInputChannelArnHasBeenSet; }
    template<typename MlInputChannelArnT = Aws::String>
    void SetMlInputChannelArn(MlInputChannelArnT&& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = std::forward<MlInputChannelArnT>(value); }
    template<typename MlInputChannelArnT = Aws::String>
    ModelInferenceDataSource& WithMlInputChannelArn(MlInputChannelArnT&& value) { SetMlInputChannelArn(std::forward<MlInputChannelArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mlInputChannelArn;
    bool m_mlInputChannelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
