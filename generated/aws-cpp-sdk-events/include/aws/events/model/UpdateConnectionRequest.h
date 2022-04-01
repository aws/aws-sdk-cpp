/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ConnectionAuthorizationType.h>
#include <aws/events/model/UpdateConnectionAuthRequestParameters.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVENTS_API UpdateConnectionRequest : public CloudWatchEventsRequest
  {
  public:
    UpdateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the connection to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the connection to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the connection to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the connection to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the connection to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the connection to update.</p>
     */
    inline UpdateConnectionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the connection to update.</p>
     */
    inline UpdateConnectionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection to update.</p>
     */
    inline UpdateConnectionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description for the connection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the connection.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the connection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the connection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the connection.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the connection.</p>
     */
    inline UpdateConnectionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the connection.</p>
     */
    inline UpdateConnectionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the connection.</p>
     */
    inline UpdateConnectionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of authorization to use for the connection.</p>
     */
    inline const ConnectionAuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The type of authorization to use for the connection.</p>
     */
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }

    /**
     * <p>The type of authorization to use for the connection.</p>
     */
    inline void SetAuthorizationType(const ConnectionAuthorizationType& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>The type of authorization to use for the connection.</p>
     */
    inline void SetAuthorizationType(ConnectionAuthorizationType&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }

    /**
     * <p>The type of authorization to use for the connection.</p>
     */
    inline UpdateConnectionRequest& WithAuthorizationType(const ConnectionAuthorizationType& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The type of authorization to use for the connection.</p>
     */
    inline UpdateConnectionRequest& WithAuthorizationType(ConnectionAuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    /**
     * <p>The authorization parameters to use for the connection.</p>
     */
    inline const UpdateConnectionAuthRequestParameters& GetAuthParameters() const{ return m_authParameters; }

    /**
     * <p>The authorization parameters to use for the connection.</p>
     */
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }

    /**
     * <p>The authorization parameters to use for the connection.</p>
     */
    inline void SetAuthParameters(const UpdateConnectionAuthRequestParameters& value) { m_authParametersHasBeenSet = true; m_authParameters = value; }

    /**
     * <p>The authorization parameters to use for the connection.</p>
     */
    inline void SetAuthParameters(UpdateConnectionAuthRequestParameters&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::move(value); }

    /**
     * <p>The authorization parameters to use for the connection.</p>
     */
    inline UpdateConnectionRequest& WithAuthParameters(const UpdateConnectionAuthRequestParameters& value) { SetAuthParameters(value); return *this;}

    /**
     * <p>The authorization parameters to use for the connection.</p>
     */
    inline UpdateConnectionRequest& WithAuthParameters(UpdateConnectionAuthRequestParameters&& value) { SetAuthParameters(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ConnectionAuthorizationType m_authorizationType;
    bool m_authorizationTypeHasBeenSet;

    UpdateConnectionAuthRequestParameters m_authParameters;
    bool m_authParametersHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
