/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile properties required when using Salesforce.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SalesforceConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class SalesforceConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API SalesforceConnectorProfileProperties();
    AWS_APPFLOW_API SalesforceConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SalesforceConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline const Aws::String& GetInstanceUrl() const{ return m_instanceUrl; }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline void SetInstanceUrl(const Aws::String& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = value; }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline void SetInstanceUrl(Aws::String&& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = std::move(value); }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline void SetInstanceUrl(const char* value) { m_instanceUrlHasBeenSet = true; m_instanceUrl.assign(value); }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline SalesforceConnectorProfileProperties& WithInstanceUrl(const Aws::String& value) { SetInstanceUrl(value); return *this;}

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline SalesforceConnectorProfileProperties& WithInstanceUrl(Aws::String&& value) { SetInstanceUrl(std::move(value)); return *this;}

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline SalesforceConnectorProfileProperties& WithInstanceUrl(const char* value) { SetInstanceUrl(value); return *this;}


    /**
     * <p> Indicates whether the connector profile applies to a sandbox or production
     * environment. </p>
     */
    inline bool GetIsSandboxEnvironment() const{ return m_isSandboxEnvironment; }

    /**
     * <p> Indicates whether the connector profile applies to a sandbox or production
     * environment. </p>
     */
    inline bool IsSandboxEnvironmentHasBeenSet() const { return m_isSandboxEnvironmentHasBeenSet; }

    /**
     * <p> Indicates whether the connector profile applies to a sandbox or production
     * environment. </p>
     */
    inline void SetIsSandboxEnvironment(bool value) { m_isSandboxEnvironmentHasBeenSet = true; m_isSandboxEnvironment = value; }

    /**
     * <p> Indicates whether the connector profile applies to a sandbox or production
     * environment. </p>
     */
    inline SalesforceConnectorProfileProperties& WithIsSandboxEnvironment(bool value) { SetIsSandboxEnvironment(value); return *this;}


    /**
     * <p>If the connection mode for the connector profile is private, this parameter
     * sets whether Amazon AppFlow uses the private network to send metadata and
     * authorization calls to Salesforce. Amazon AppFlow sends private calls through
     * Amazon Web Services PrivateLink. These calls travel through Amazon Web Services
     * infrastructure without being exposed to the public internet.</p> <p>Set either
     * of the following values:</p> <dl> <dt>true</dt> <dd> <p>Amazon AppFlow sends all
     * calls to Salesforce over the private network.</p> <p>These private calls
     * are:</p> <ul> <li> <p>Calls to get metadata about your Salesforce records. This
     * metadata describes your Salesforce objects and their fields.</p> </li> <li>
     * <p>Calls to get or refresh access tokens that allow Amazon AppFlow to access
     * your Salesforce records.</p> </li> <li> <p>Calls to transfer your Salesforce
     * records as part of a flow run.</p> </li> </ul> </dd> <dt>false</dt> <dd> <p>The
     * default value. Amazon AppFlow sends some calls to Salesforce privately and other
     * calls over the public internet.</p> <p>The public calls are: </p> <ul> <li>
     * <p>Calls to get metadata about your Salesforce records.</p> </li> <li> <p>Calls
     * to get or refresh access tokens.</p> </li> </ul> <p>The private calls are:</p>
     * <ul> <li> <p>Calls to transfer your Salesforce records as part of a flow
     * run.</p> </li> </ul> </dd> </dl>
     */
    inline bool GetUsePrivateLinkForMetadataAndAuthorization() const{ return m_usePrivateLinkForMetadataAndAuthorization; }

    /**
     * <p>If the connection mode for the connector profile is private, this parameter
     * sets whether Amazon AppFlow uses the private network to send metadata and
     * authorization calls to Salesforce. Amazon AppFlow sends private calls through
     * Amazon Web Services PrivateLink. These calls travel through Amazon Web Services
     * infrastructure without being exposed to the public internet.</p> <p>Set either
     * of the following values:</p> <dl> <dt>true</dt> <dd> <p>Amazon AppFlow sends all
     * calls to Salesforce over the private network.</p> <p>These private calls
     * are:</p> <ul> <li> <p>Calls to get metadata about your Salesforce records. This
     * metadata describes your Salesforce objects and their fields.</p> </li> <li>
     * <p>Calls to get or refresh access tokens that allow Amazon AppFlow to access
     * your Salesforce records.</p> </li> <li> <p>Calls to transfer your Salesforce
     * records as part of a flow run.</p> </li> </ul> </dd> <dt>false</dt> <dd> <p>The
     * default value. Amazon AppFlow sends some calls to Salesforce privately and other
     * calls over the public internet.</p> <p>The public calls are: </p> <ul> <li>
     * <p>Calls to get metadata about your Salesforce records.</p> </li> <li> <p>Calls
     * to get or refresh access tokens.</p> </li> </ul> <p>The private calls are:</p>
     * <ul> <li> <p>Calls to transfer your Salesforce records as part of a flow
     * run.</p> </li> </ul> </dd> </dl>
     */
    inline bool UsePrivateLinkForMetadataAndAuthorizationHasBeenSet() const { return m_usePrivateLinkForMetadataAndAuthorizationHasBeenSet; }

    /**
     * <p>If the connection mode for the connector profile is private, this parameter
     * sets whether Amazon AppFlow uses the private network to send metadata and
     * authorization calls to Salesforce. Amazon AppFlow sends private calls through
     * Amazon Web Services PrivateLink. These calls travel through Amazon Web Services
     * infrastructure without being exposed to the public internet.</p> <p>Set either
     * of the following values:</p> <dl> <dt>true</dt> <dd> <p>Amazon AppFlow sends all
     * calls to Salesforce over the private network.</p> <p>These private calls
     * are:</p> <ul> <li> <p>Calls to get metadata about your Salesforce records. This
     * metadata describes your Salesforce objects and their fields.</p> </li> <li>
     * <p>Calls to get or refresh access tokens that allow Amazon AppFlow to access
     * your Salesforce records.</p> </li> <li> <p>Calls to transfer your Salesforce
     * records as part of a flow run.</p> </li> </ul> </dd> <dt>false</dt> <dd> <p>The
     * default value. Amazon AppFlow sends some calls to Salesforce privately and other
     * calls over the public internet.</p> <p>The public calls are: </p> <ul> <li>
     * <p>Calls to get metadata about your Salesforce records.</p> </li> <li> <p>Calls
     * to get or refresh access tokens.</p> </li> </ul> <p>The private calls are:</p>
     * <ul> <li> <p>Calls to transfer your Salesforce records as part of a flow
     * run.</p> </li> </ul> </dd> </dl>
     */
    inline void SetUsePrivateLinkForMetadataAndAuthorization(bool value) { m_usePrivateLinkForMetadataAndAuthorizationHasBeenSet = true; m_usePrivateLinkForMetadataAndAuthorization = value; }

    /**
     * <p>If the connection mode for the connector profile is private, this parameter
     * sets whether Amazon AppFlow uses the private network to send metadata and
     * authorization calls to Salesforce. Amazon AppFlow sends private calls through
     * Amazon Web Services PrivateLink. These calls travel through Amazon Web Services
     * infrastructure without being exposed to the public internet.</p> <p>Set either
     * of the following values:</p> <dl> <dt>true</dt> <dd> <p>Amazon AppFlow sends all
     * calls to Salesforce over the private network.</p> <p>These private calls
     * are:</p> <ul> <li> <p>Calls to get metadata about your Salesforce records. This
     * metadata describes your Salesforce objects and their fields.</p> </li> <li>
     * <p>Calls to get or refresh access tokens that allow Amazon AppFlow to access
     * your Salesforce records.</p> </li> <li> <p>Calls to transfer your Salesforce
     * records as part of a flow run.</p> </li> </ul> </dd> <dt>false</dt> <dd> <p>The
     * default value. Amazon AppFlow sends some calls to Salesforce privately and other
     * calls over the public internet.</p> <p>The public calls are: </p> <ul> <li>
     * <p>Calls to get metadata about your Salesforce records.</p> </li> <li> <p>Calls
     * to get or refresh access tokens.</p> </li> </ul> <p>The private calls are:</p>
     * <ul> <li> <p>Calls to transfer your Salesforce records as part of a flow
     * run.</p> </li> </ul> </dd> </dl>
     */
    inline SalesforceConnectorProfileProperties& WithUsePrivateLinkForMetadataAndAuthorization(bool value) { SetUsePrivateLinkForMetadataAndAuthorization(value); return *this;}

  private:

    Aws::String m_instanceUrl;
    bool m_instanceUrlHasBeenSet = false;

    bool m_isSandboxEnvironment;
    bool m_isSandboxEnvironmentHasBeenSet = false;

    bool m_usePrivateLinkForMetadataAndAuthorization;
    bool m_usePrivateLinkForMetadataAndAuthorizationHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
