/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobAnalysisType.h>
#include <aws/cleanrooms/model/ProtectedJobConfigurationDetails.h>
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
   * <p>The protected job receiver configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobReceiverConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtectedJobReceiverConfiguration
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobReceiverConfiguration() = default;
    AWS_CLEANROOMS_API ProtectedJobReceiverConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobReceiverConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The analysis type for the protected job receiver configuration.</p>
     */
    inline ProtectedJobAnalysisType GetAnalysisType() const { return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(ProtectedJobAnalysisType value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline ProtectedJobReceiverConfiguration& WithAnalysisType(ProtectedJobAnalysisType value) { SetAnalysisType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration details for the protected job receiver.</p>
     */
    inline const ProtectedJobConfigurationDetails& GetConfigurationDetails() const { return m_configurationDetails; }
    inline bool ConfigurationDetailsHasBeenSet() const { return m_configurationDetailsHasBeenSet; }
    template<typename ConfigurationDetailsT = ProtectedJobConfigurationDetails>
    void SetConfigurationDetails(ConfigurationDetailsT&& value) { m_configurationDetailsHasBeenSet = true; m_configurationDetails = std::forward<ConfigurationDetailsT>(value); }
    template<typename ConfigurationDetailsT = ProtectedJobConfigurationDetails>
    ProtectedJobReceiverConfiguration& WithConfigurationDetails(ConfigurationDetailsT&& value) { SetConfigurationDetails(std::forward<ConfigurationDetailsT>(value)); return *this;}
    ///@}
  private:

    ProtectedJobAnalysisType m_analysisType{ProtectedJobAnalysisType::NOT_SET};
    bool m_analysisTypeHasBeenSet = false;

    ProtectedJobConfigurationDetails m_configurationDetails;
    bool m_configurationDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
