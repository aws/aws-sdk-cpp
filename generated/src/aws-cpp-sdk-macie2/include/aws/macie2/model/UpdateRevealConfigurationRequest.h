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
    AWS_MACIE2_API UpdateRevealConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRevealConfiguration"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The KMS key to use to encrypt the sensitive data, and the status of the
     * configuration for the Amazon Macie account.</p>
     */
    inline const RevealConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The KMS key to use to encrypt the sensitive data, and the status of the
     * configuration for the Amazon Macie account.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The KMS key to use to encrypt the sensitive data, and the status of the
     * configuration for the Amazon Macie account.</p>
     */
    inline void SetConfiguration(const RevealConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The KMS key to use to encrypt the sensitive data, and the status of the
     * configuration for the Amazon Macie account.</p>
     */
    inline void SetConfiguration(RevealConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The KMS key to use to encrypt the sensitive data, and the status of the
     * configuration for the Amazon Macie account.</p>
     */
    inline UpdateRevealConfigurationRequest& WithConfiguration(const RevealConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The KMS key to use to encrypt the sensitive data, and the status of the
     * configuration for the Amazon Macie account.</p>
     */
    inline UpdateRevealConfigurationRequest& WithConfiguration(RevealConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The access method and settings to use when retrieving the sensitive data.</p>
     */
    inline const UpdateRetrievalConfiguration& GetRetrievalConfiguration() const{ return m_retrievalConfiguration; }

    /**
     * <p>The access method and settings to use when retrieving the sensitive data.</p>
     */
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }

    /**
     * <p>The access method and settings to use when retrieving the sensitive data.</p>
     */
    inline void SetRetrievalConfiguration(const UpdateRetrievalConfiguration& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = value; }

    /**
     * <p>The access method and settings to use when retrieving the sensitive data.</p>
     */
    inline void SetRetrievalConfiguration(UpdateRetrievalConfiguration&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::move(value); }

    /**
     * <p>The access method and settings to use when retrieving the sensitive data.</p>
     */
    inline UpdateRevealConfigurationRequest& WithRetrievalConfiguration(const UpdateRetrievalConfiguration& value) { SetRetrievalConfiguration(value); return *this;}

    /**
     * <p>The access method and settings to use when retrieving the sensitive data.</p>
     */
    inline UpdateRevealConfigurationRequest& WithRetrievalConfiguration(UpdateRetrievalConfiguration&& value) { SetRetrievalConfiguration(std::move(value)); return *this;}

  private:

    RevealConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    UpdateRetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
