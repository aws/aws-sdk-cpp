/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/DestinationConfiguration.h>
#include <utility>

namespace Aws
{
namespace AppFabric
{
namespace Model
{

  /**
   */
  class UpdateIngestionDestinationRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API UpdateIngestionDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIngestionDestination"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }
    inline UpdateIngestionDestinationRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}
    inline UpdateIngestionDestinationRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}
    inline UpdateIngestionDestinationRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline const Aws::String& GetIngestionIdentifier() const{ return m_ingestionIdentifier; }
    inline bool IngestionIdentifierHasBeenSet() const { return m_ingestionIdentifierHasBeenSet; }
    inline void SetIngestionIdentifier(const Aws::String& value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier = value; }
    inline void SetIngestionIdentifier(Aws::String&& value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier = std::move(value); }
    inline void SetIngestionIdentifier(const char* value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier.assign(value); }
    inline UpdateIngestionDestinationRequest& WithIngestionIdentifier(const Aws::String& value) { SetIngestionIdentifier(value); return *this;}
    inline UpdateIngestionDestinationRequest& WithIngestionIdentifier(Aws::String&& value) { SetIngestionIdentifier(std::move(value)); return *this;}
    inline UpdateIngestionDestinationRequest& WithIngestionIdentifier(const char* value) { SetIngestionIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline const Aws::String& GetIngestionDestinationIdentifier() const{ return m_ingestionDestinationIdentifier; }
    inline bool IngestionDestinationIdentifierHasBeenSet() const { return m_ingestionDestinationIdentifierHasBeenSet; }
    inline void SetIngestionDestinationIdentifier(const Aws::String& value) { m_ingestionDestinationIdentifierHasBeenSet = true; m_ingestionDestinationIdentifier = value; }
    inline void SetIngestionDestinationIdentifier(Aws::String&& value) { m_ingestionDestinationIdentifierHasBeenSet = true; m_ingestionDestinationIdentifier = std::move(value); }
    inline void SetIngestionDestinationIdentifier(const char* value) { m_ingestionDestinationIdentifierHasBeenSet = true; m_ingestionDestinationIdentifier.assign(value); }
    inline UpdateIngestionDestinationRequest& WithIngestionDestinationIdentifier(const Aws::String& value) { SetIngestionDestinationIdentifier(value); return *this;}
    inline UpdateIngestionDestinationRequest& WithIngestionDestinationIdentifier(Aws::String&& value) { SetIngestionDestinationIdentifier(std::move(value)); return *this;}
    inline UpdateIngestionDestinationRequest& WithIngestionDestinationIdentifier(const char* value) { SetIngestionDestinationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the destination of ingested data.</p>
     */
    inline const DestinationConfiguration& GetDestinationConfiguration() const{ return m_destinationConfiguration; }
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
    inline void SetDestinationConfiguration(const DestinationConfiguration& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = value; }
    inline void SetDestinationConfiguration(DestinationConfiguration&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::move(value); }
    inline UpdateIngestionDestinationRequest& WithDestinationConfiguration(const DestinationConfiguration& value) { SetDestinationConfiguration(value); return *this;}
    inline UpdateIngestionDestinationRequest& WithDestinationConfiguration(DestinationConfiguration&& value) { SetDestinationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::String m_ingestionIdentifier;
    bool m_ingestionIdentifierHasBeenSet = false;

    Aws::String m_ingestionDestinationIdentifier;
    bool m_ingestionDestinationIdentifierHasBeenSet = false;

    DestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
