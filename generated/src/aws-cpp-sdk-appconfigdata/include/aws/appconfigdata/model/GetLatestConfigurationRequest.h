﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/appconfigdata/AppConfigDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppConfigData
{
namespace Model
{

  /**
   */
  class GetLatestConfigurationRequest : public AppConfigDataRequest
  {
  public:
    AWS_APPCONFIGDATA_API GetLatestConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLatestConfiguration"; }

    AWS_APPCONFIGDATA_API Aws::String SerializePayload() const override;

    AWS_APPCONFIGDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Token describing the current state of the configuration session. To obtain a
     * token, first call the <a>StartConfigurationSession</a> API. Note that every call
     * to <code>GetLatestConfiguration</code> will return a new
     * <code>ConfigurationToken</code> (<code>NextPollConfigurationToken</code> in the
     * response) and <i>must</i> be provided to subsequent
     * <code>GetLatestConfiguration</code> API calls.</p>  <p>This token
     * should only be used once. To support long poll use cases, the token is valid for
     * up to 24 hours. If a <code>GetLatestConfiguration</code> call uses an expired
     * token, the system returns <code>BadRequestException</code>.</p> 
     */
    inline const Aws::String& GetConfigurationToken() const{ return m_configurationToken; }
    inline bool ConfigurationTokenHasBeenSet() const { return m_configurationTokenHasBeenSet; }
    inline void SetConfigurationToken(const Aws::String& value) { m_configurationTokenHasBeenSet = true; m_configurationToken = value; }
    inline void SetConfigurationToken(Aws::String&& value) { m_configurationTokenHasBeenSet = true; m_configurationToken = std::move(value); }
    inline void SetConfigurationToken(const char* value) { m_configurationTokenHasBeenSet = true; m_configurationToken.assign(value); }
    inline GetLatestConfigurationRequest& WithConfigurationToken(const Aws::String& value) { SetConfigurationToken(value); return *this;}
    inline GetLatestConfigurationRequest& WithConfigurationToken(Aws::String&& value) { SetConfigurationToken(std::move(value)); return *this;}
    inline GetLatestConfigurationRequest& WithConfigurationToken(const char* value) { SetConfigurationToken(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationToken;
    bool m_configurationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
