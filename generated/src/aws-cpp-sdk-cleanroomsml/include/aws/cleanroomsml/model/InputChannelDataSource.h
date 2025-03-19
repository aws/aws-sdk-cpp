/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/ProtectedQueryInputParameters.h>
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
   * <p>Provides the data source that is used to define an input
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/InputChannelDataSource">AWS
   * API Reference</a></p>
   */
  class InputChannelDataSource
  {
  public:
    AWS_CLEANROOMSML_API InputChannelDataSource() = default;
    AWS_CLEANROOMSML_API InputChannelDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API InputChannelDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ProtectedQueryInputParameters& GetProtectedQueryInputParameters() const { return m_protectedQueryInputParameters; }
    inline bool ProtectedQueryInputParametersHasBeenSet() const { return m_protectedQueryInputParametersHasBeenSet; }
    template<typename ProtectedQueryInputParametersT = ProtectedQueryInputParameters>
    void SetProtectedQueryInputParameters(ProtectedQueryInputParametersT&& value) { m_protectedQueryInputParametersHasBeenSet = true; m_protectedQueryInputParameters = std::forward<ProtectedQueryInputParametersT>(value); }
    template<typename ProtectedQueryInputParametersT = ProtectedQueryInputParameters>
    InputChannelDataSource& WithProtectedQueryInputParameters(ProtectedQueryInputParametersT&& value) { SetProtectedQueryInputParameters(std::forward<ProtectedQueryInputParametersT>(value)); return *this;}
    ///@}
  private:

    ProtectedQueryInputParameters m_protectedQueryInputParameters;
    bool m_protectedQueryInputParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
