/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The external URL source for the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ExternalUrlConfig">AWS
   * API Reference</a></p>
   */
  class ExternalUrlConfig
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ExternalUrlConfig();
    AWS_APPINTEGRATIONSSERVICE_API ExternalUrlConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ExternalUrlConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL to access the application.</p>
     */
    inline const Aws::String& GetAccessUrl() const{ return m_accessUrl; }

    /**
     * <p>The URL to access the application.</p>
     */
    inline bool AccessUrlHasBeenSet() const { return m_accessUrlHasBeenSet; }

    /**
     * <p>The URL to access the application.</p>
     */
    inline void SetAccessUrl(const Aws::String& value) { m_accessUrlHasBeenSet = true; m_accessUrl = value; }

    /**
     * <p>The URL to access the application.</p>
     */
    inline void SetAccessUrl(Aws::String&& value) { m_accessUrlHasBeenSet = true; m_accessUrl = std::move(value); }

    /**
     * <p>The URL to access the application.</p>
     */
    inline void SetAccessUrl(const char* value) { m_accessUrlHasBeenSet = true; m_accessUrl.assign(value); }

    /**
     * <p>The URL to access the application.</p>
     */
    inline ExternalUrlConfig& WithAccessUrl(const Aws::String& value) { SetAccessUrl(value); return *this;}

    /**
     * <p>The URL to access the application.</p>
     */
    inline ExternalUrlConfig& WithAccessUrl(Aws::String&& value) { SetAccessUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to access the application.</p>
     */
    inline ExternalUrlConfig& WithAccessUrl(const char* value) { SetAccessUrl(value); return *this;}


    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovedOrigins() const{ return m_approvedOrigins; }

    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline bool ApprovedOriginsHasBeenSet() const { return m_approvedOriginsHasBeenSet; }

    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline void SetApprovedOrigins(const Aws::Vector<Aws::String>& value) { m_approvedOriginsHasBeenSet = true; m_approvedOrigins = value; }

    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline void SetApprovedOrigins(Aws::Vector<Aws::String>&& value) { m_approvedOriginsHasBeenSet = true; m_approvedOrigins = std::move(value); }

    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline ExternalUrlConfig& WithApprovedOrigins(const Aws::Vector<Aws::String>& value) { SetApprovedOrigins(value); return *this;}

    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline ExternalUrlConfig& WithApprovedOrigins(Aws::Vector<Aws::String>&& value) { SetApprovedOrigins(std::move(value)); return *this;}

    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline ExternalUrlConfig& AddApprovedOrigins(const Aws::String& value) { m_approvedOriginsHasBeenSet = true; m_approvedOrigins.push_back(value); return *this; }

    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline ExternalUrlConfig& AddApprovedOrigins(Aws::String&& value) { m_approvedOriginsHasBeenSet = true; m_approvedOrigins.push_back(std::move(value)); return *this; }

    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline ExternalUrlConfig& AddApprovedOrigins(const char* value) { m_approvedOriginsHasBeenSet = true; m_approvedOrigins.push_back(value); return *this; }

  private:

    Aws::String m_accessUrl;
    bool m_accessUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_approvedOrigins;
    bool m_approvedOriginsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
