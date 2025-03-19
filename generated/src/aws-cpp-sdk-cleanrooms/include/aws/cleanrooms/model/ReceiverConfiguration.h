/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisType.h>
#include <aws/cleanrooms/model/ConfigurationDetails.h>
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
   * <p> The receiver configuration for a protected query.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ReceiverConfiguration">AWS
   * API Reference</a></p>
   */
  class ReceiverConfiguration
  {
  public:
    AWS_CLEANROOMS_API ReceiverConfiguration() = default;
    AWS_CLEANROOMS_API ReceiverConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ReceiverConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of analysis for the protected query. The results of the query can
     * be analyzed directly (<code>DIRECT_ANALYSIS</code>) or used as input into
     * additional analyses (<code>ADDITIONAL_ANALYSIS</code>), such as a query that is
     * a seed for a lookalike ML model.</p>
     */
    inline AnalysisType GetAnalysisType() const { return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(AnalysisType value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline ReceiverConfiguration& WithAnalysisType(AnalysisType value) { SetAnalysisType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration details of the receiver configuration.</p>
     */
    inline const ConfigurationDetails& GetConfigurationDetails() const { return m_configurationDetails; }
    inline bool ConfigurationDetailsHasBeenSet() const { return m_configurationDetailsHasBeenSet; }
    template<typename ConfigurationDetailsT = ConfigurationDetails>
    void SetConfigurationDetails(ConfigurationDetailsT&& value) { m_configurationDetailsHasBeenSet = true; m_configurationDetails = std::forward<ConfigurationDetailsT>(value); }
    template<typename ConfigurationDetailsT = ConfigurationDetails>
    ReceiverConfiguration& WithConfigurationDetails(ConfigurationDetailsT&& value) { SetConfigurationDetails(std::forward<ConfigurationDetailsT>(value)); return *this;}
    ///@}
  private:

    AnalysisType m_analysisType{AnalysisType::NOT_SET};
    bool m_analysisTypeHasBeenSet = false;

    ConfigurationDetails m_configurationDetails;
    bool m_configurationDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
