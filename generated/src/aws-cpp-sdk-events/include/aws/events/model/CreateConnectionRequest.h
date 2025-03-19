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
  class CreateConnectionRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CreateConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnection"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the connection to create.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateConnectionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the connection to create.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateConnectionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authorization to use for the connection.</p>
     */
    inline ConnectionAuthorizationType GetAuthorizationType() const { return m_authorizationType; }
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }
    inline void SetAuthorizationType(ConnectionAuthorizationType value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }
    inline CreateConnectionRequest& WithAuthorizationType(ConnectionAuthorizationType value) { SetAuthorizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CreateConnectionAuthRequestParameters</code> object that contains the
     * authorization parameters to use to authorize with the endpoint. </p>
     */
    inline const CreateConnectionAuthRequestParameters& GetAuthParameters() const { return m_authParameters; }
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }
    template<typename AuthParametersT = CreateConnectionAuthRequestParameters>
    void SetAuthParameters(AuthParametersT&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::forward<AuthParametersT>(value); }
    template<typename AuthParametersT = CreateConnectionAuthRequestParameters>
    CreateConnectionRequest& WithAuthParameters(AuthParametersT&& value) { SetAuthParameters(std::forward<AuthParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectionAuthorizationType m_authorizationType{ConnectionAuthorizationType::NOT_SET};
    bool m_authorizationTypeHasBeenSet = false;

    CreateConnectionAuthRequestParameters m_authParameters;
    bool m_authParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
