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
  class GetIngestionDestinationRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API GetIngestionDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIngestionDestination"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline GetIngestionDestinationRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline GetIngestionDestinationRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline GetIngestionDestinationRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline const Aws::String& GetIngestionIdentifier() const{ return m_ingestionIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline bool IngestionIdentifierHasBeenSet() const { return m_ingestionIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline void SetIngestionIdentifier(const Aws::String& value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline void SetIngestionIdentifier(Aws::String&& value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline void SetIngestionIdentifier(const char* value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline GetIngestionDestinationRequest& WithIngestionIdentifier(const Aws::String& value) { SetIngestionIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline GetIngestionDestinationRequest& WithIngestionIdentifier(Aws::String&& value) { SetIngestionIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline GetIngestionDestinationRequest& WithIngestionIdentifier(const char* value) { SetIngestionIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline const Aws::String& GetIngestionDestinationIdentifier() const{ return m_ingestionDestinationIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline bool IngestionDestinationIdentifierHasBeenSet() const { return m_ingestionDestinationIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline void SetIngestionDestinationIdentifier(const Aws::String& value) { m_ingestionDestinationIdentifierHasBeenSet = true; m_ingestionDestinationIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline void SetIngestionDestinationIdentifier(Aws::String&& value) { m_ingestionDestinationIdentifierHasBeenSet = true; m_ingestionDestinationIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline void SetIngestionDestinationIdentifier(const char* value) { m_ingestionDestinationIdentifierHasBeenSet = true; m_ingestionDestinationIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline GetIngestionDestinationRequest& WithIngestionDestinationIdentifier(const Aws::String& value) { SetIngestionDestinationIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline GetIngestionDestinationRequest& WithIngestionDestinationIdentifier(Aws::String&& value) { SetIngestionDestinationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion destination to use for the request.</p>
     */
    inline GetIngestionDestinationRequest& WithIngestionDestinationIdentifier(const char* value) { SetIngestionDestinationIdentifier(value); return *this;}

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
