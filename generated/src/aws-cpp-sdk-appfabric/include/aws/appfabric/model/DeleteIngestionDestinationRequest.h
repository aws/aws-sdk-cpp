/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppFabric
{
namespace Model
{

  /**
   */
  class DeleteIngestionDestinationRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API DeleteIngestionDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIngestionDestination"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const { return m_appBundleIdentifier; }
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }
    template<typename AppBundleIdentifierT = Aws::String>
    void SetAppBundleIdentifier(AppBundleIdentifierT&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::forward<AppBundleIdentifierT>(value); }
    template<typename AppBundleIdentifierT = Aws::String>
    DeleteIngestionDestinationRequest& WithAppBundleIdentifier(AppBundleIdentifierT&& value) { SetAppBundleIdentifier(std::forward<AppBundleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline const Aws::String& GetIngestionIdentifier() const { return m_ingestionIdentifier; }
    inline bool IngestionIdentifierHasBeenSet() const { return m_ingestionIdentifierHasBeenSet; }
    template<typename IngestionIdentifierT = Aws::String>
    void SetIngestionIdentifier(IngestionIdentifierT&& value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier = std::forward<IngestionIdentifierT>(value); }
    template<typename IngestionIdentifierT = Aws::String>
    DeleteIngestionDestinationRequest& WithIngestionIdentifier(IngestionIdentifierT&& value) { SetIngestionIdentifier(std::forward<IngestionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline const Aws::String& GetIngestionDestinationIdentifier() const { return m_ingestionDestinationIdentifier; }
    inline bool IngestionDestinationIdentifierHasBeenSet() const { return m_ingestionDestinationIdentifierHasBeenSet; }
    template<typename IngestionDestinationIdentifierT = Aws::String>
    void SetIngestionDestinationIdentifier(IngestionDestinationIdentifierT&& value) { m_ingestionDestinationIdentifierHasBeenSet = true; m_ingestionDestinationIdentifier = std::forward<IngestionDestinationIdentifierT>(value); }
    template<typename IngestionDestinationIdentifierT = Aws::String>
    DeleteIngestionDestinationRequest& WithIngestionDestinationIdentifier(IngestionDestinationIdentifierT&& value) { SetIngestionDestinationIdentifier(std::forward<IngestionDestinationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::String m_ingestionIdentifier;
    bool m_ingestionIdentifierHasBeenSet = false;

    Aws::String m_ingestionDestinationIdentifier;
    bool m_ingestionDestinationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
