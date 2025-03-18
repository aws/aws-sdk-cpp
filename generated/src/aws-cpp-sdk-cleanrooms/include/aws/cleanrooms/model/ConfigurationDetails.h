/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DirectAnalysisConfigurationDetails.h>
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
   * <p> The configuration details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class ConfigurationDetails
  {
  public:
    AWS_CLEANROOMS_API ConfigurationDetails() = default;
    AWS_CLEANROOMS_API ConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The direct analysis configuration details.</p>
     */
    inline const DirectAnalysisConfigurationDetails& GetDirectAnalysisConfigurationDetails() const { return m_directAnalysisConfigurationDetails; }
    inline bool DirectAnalysisConfigurationDetailsHasBeenSet() const { return m_directAnalysisConfigurationDetailsHasBeenSet; }
    template<typename DirectAnalysisConfigurationDetailsT = DirectAnalysisConfigurationDetails>
    void SetDirectAnalysisConfigurationDetails(DirectAnalysisConfigurationDetailsT&& value) { m_directAnalysisConfigurationDetailsHasBeenSet = true; m_directAnalysisConfigurationDetails = std::forward<DirectAnalysisConfigurationDetailsT>(value); }
    template<typename DirectAnalysisConfigurationDetailsT = DirectAnalysisConfigurationDetails>
    ConfigurationDetails& WithDirectAnalysisConfigurationDetails(DirectAnalysisConfigurationDetailsT&& value) { SetDirectAnalysisConfigurationDetails(std::forward<DirectAnalysisConfigurationDetailsT>(value)); return *this;}
    ///@}
  private:

    DirectAnalysisConfigurationDetails m_directAnalysisConfigurationDetails;
    bool m_directAnalysisConfigurationDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
