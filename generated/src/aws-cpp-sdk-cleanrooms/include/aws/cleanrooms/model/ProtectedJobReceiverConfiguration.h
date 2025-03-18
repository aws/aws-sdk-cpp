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
    AWS_CLEANROOMS_API ProtectedJobReceiverConfiguration();
    AWS_CLEANROOMS_API ProtectedJobReceiverConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobReceiverConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The analysis type for the protected job receiver configuration.</p>
     */
    inline const ProtectedJobAnalysisType& GetAnalysisType() const{ return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(const ProtectedJobAnalysisType& value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline void SetAnalysisType(ProtectedJobAnalysisType&& value) { m_analysisTypeHasBeenSet = true; m_analysisType = std::move(value); }
    inline ProtectedJobReceiverConfiguration& WithAnalysisType(const ProtectedJobAnalysisType& value) { SetAnalysisType(value); return *this;}
    inline ProtectedJobReceiverConfiguration& WithAnalysisType(ProtectedJobAnalysisType&& value) { SetAnalysisType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration details for the protected job receiver.</p>
     */
    inline const ProtectedJobConfigurationDetails& GetConfigurationDetails() const{ return m_configurationDetails; }
    inline bool ConfigurationDetailsHasBeenSet() const { return m_configurationDetailsHasBeenSet; }
    inline void SetConfigurationDetails(const ProtectedJobConfigurationDetails& value) { m_configurationDetailsHasBeenSet = true; m_configurationDetails = value; }
    inline void SetConfigurationDetails(ProtectedJobConfigurationDetails&& value) { m_configurationDetailsHasBeenSet = true; m_configurationDetails = std::move(value); }
    inline ProtectedJobReceiverConfiguration& WithConfigurationDetails(const ProtectedJobConfigurationDetails& value) { SetConfigurationDetails(value); return *this;}
    inline ProtectedJobReceiverConfiguration& WithConfigurationDetails(ProtectedJobConfigurationDetails&& value) { SetConfigurationDetails(std::move(value)); return *this;}
    ///@}
  private:

    ProtectedJobAnalysisType m_analysisType;
    bool m_analysisTypeHasBeenSet = false;

    ProtectedJobConfigurationDetails m_configurationDetails;
    bool m_configurationDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
