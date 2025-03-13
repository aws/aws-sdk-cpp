/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/RevealConfiguration.h>
#include <aws/macie2/model/UpdateRetrievalConfiguration.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateRevealConfigurationRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateRevealConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRevealConfiguration"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The KMS key to use to encrypt the sensitive data, and the status of the
     * configuration for the Amazon Macie account.</p>
     */
    inline const RevealConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = RevealConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = RevealConfiguration>
    UpdateRevealConfigurationRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access method and settings to use when retrieving the sensitive data.</p>
     */
    inline const UpdateRetrievalConfiguration& GetRetrievalConfiguration() const { return m_retrievalConfiguration; }
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }
    template<typename RetrievalConfigurationT = UpdateRetrievalConfiguration>
    void SetRetrievalConfiguration(RetrievalConfigurationT&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::forward<RetrievalConfigurationT>(value); }
    template<typename RetrievalConfigurationT = UpdateRetrievalConfiguration>
    UpdateRevealConfigurationRequest& WithRetrievalConfiguration(RetrievalConfigurationT&& value) { SetRetrievalConfiguration(std::forward<RetrievalConfigurationT>(value)); return *this;}
    ///@}
  private:

    RevealConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    UpdateRetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
