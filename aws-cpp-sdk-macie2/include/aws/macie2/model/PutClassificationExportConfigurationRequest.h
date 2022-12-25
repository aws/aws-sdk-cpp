/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/ClassificationExportConfiguration.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class PutClassificationExportConfigurationRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API PutClassificationExportConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutClassificationExportConfiguration"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The location to store data classification results in, and the encryption
     * settings to use when storing results in that location.</p>
     */
    inline const ClassificationExportConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The location to store data classification results in, and the encryption
     * settings to use when storing results in that location.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The location to store data classification results in, and the encryption
     * settings to use when storing results in that location.</p>
     */
    inline void SetConfiguration(const ClassificationExportConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The location to store data classification results in, and the encryption
     * settings to use when storing results in that location.</p>
     */
    inline void SetConfiguration(ClassificationExportConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The location to store data classification results in, and the encryption
     * settings to use when storing results in that location.</p>
     */
    inline PutClassificationExportConfigurationRequest& WithConfiguration(const ClassificationExportConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The location to store data classification results in, and the encryption
     * settings to use when storing results in that location.</p>
     */
    inline PutClassificationExportConfigurationRequest& WithConfiguration(ClassificationExportConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    ClassificationExportConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
