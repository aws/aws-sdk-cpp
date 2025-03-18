/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/BusinessNameGenerationConfiguration.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The configuration of the prediction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PredictionConfiguration">AWS
   * API Reference</a></p>
   */
  class PredictionConfiguration
  {
  public:
    AWS_DATAZONE_API PredictionConfiguration() = default;
    AWS_DATAZONE_API PredictionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PredictionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The business name generation mechanism.</p>
     */
    inline const BusinessNameGenerationConfiguration& GetBusinessNameGeneration() const { return m_businessNameGeneration; }
    inline bool BusinessNameGenerationHasBeenSet() const { return m_businessNameGenerationHasBeenSet; }
    template<typename BusinessNameGenerationT = BusinessNameGenerationConfiguration>
    void SetBusinessNameGeneration(BusinessNameGenerationT&& value) { m_businessNameGenerationHasBeenSet = true; m_businessNameGeneration = std::forward<BusinessNameGenerationT>(value); }
    template<typename BusinessNameGenerationT = BusinessNameGenerationConfiguration>
    PredictionConfiguration& WithBusinessNameGeneration(BusinessNameGenerationT&& value) { SetBusinessNameGeneration(std::forward<BusinessNameGenerationT>(value)); return *this;}
    ///@}
  private:

    BusinessNameGenerationConfiguration m_businessNameGeneration;
    bool m_businessNameGenerationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
