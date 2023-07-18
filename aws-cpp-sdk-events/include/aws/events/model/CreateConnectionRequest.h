/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ConnectionAuthorizationType.h>
#include <aws/events/model/CreateConnectionAuthRequestParameters.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVENTS_API CreateConnectionRequest : public CloudWatchEventsRequest
  {
  public:
    CreateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the connection to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the connection to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the connection to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the connection to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the connection to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the connection to create.</p>
     */
    inline CreateConnectionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the connection to create.</p>
     */
    inline CreateConnectionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the connection to create.</p>
     */
    inline CreateConnectionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description for the connection to create.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the connection to create.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the connection to create.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the connection to create.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the connection to create.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the connection to create.</p>
     */
    inline CreateConnectionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the connection to create.</p>
     */
    inline CreateConnectionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the connection to create.</p>
     */
    inline CreateConnectionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateConnectionRequest& WithAuthorizationType(const ConnectionAuthorizationType& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The type of authorization to use for the connection.</p>
     */
    inline CreateConnectionRequest& WithAuthorizationType(ConnectionAuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    /**
     * <p>A <code>CreateConnectionAuthRequestParameters</code> object that contains the
     * authorization parameters to use to authorize with the endpoint. </p>
     */
    inline const CreateConnectionAuthRequestParameters& GetAuthParameters() const{ return m_authParameters; }

    /**
     * <p>A <code>CreateConnectionAuthRequestParameters</code> object that contains the
     * authorization parameters to use to authorize with the endpoint. </p>
     */
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }

    /**
     * <p>A <code>CreateConnectionAuthRequestParameters</code> object that contains the
     * authorization parameters to use to authorize with the endpoint. </p>
     */
    inline void SetAuthParameters(const CreateConnectionAuthRequestParameters& value) { m_authParametersHasBeenSet = true; m_authParameters = value; }

    /**
     * <p>A <code>CreateConnectionAuthRequestParameters</code> object that contains the
     * authorization parameters to use to authorize with the endpoint. </p>
     */
    inline void SetAuthParameters(CreateConnectionAuthRequestParameters&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::move(value); }

    /**
     * <p>A <code>CreateConnectionAuthRequestParameters</code> object that contains the
     * authorization parameters to use to authorize with the endpoint. </p>
     */
    inline CreateConnectionRequest& WithAuthParameters(const CreateConnectionAuthRequestParameters& value) { SetAuthParameters(value); return *this;}

    /**
     * <p>A <code>CreateConnectionAuthRequestParameters</code> object that contains the
     * authorization parameters to use to authorize with the endpoint. </p>
     */
    inline CreateConnectionRequest& WithAuthParameters(CreateConnectionAuthRequestParameters&& value) { SetAuthParameters(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ConnectionAuthorizationType m_authorizationType;
    bool m_authorizationTypeHasBeenSet;

    CreateConnectionAuthRequestParameters m_authParameters;
    bool m_authParametersHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
