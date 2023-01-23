/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/SalesforceDataTransferApi.h>
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
   * <p> The connector metadata specific to Salesforce. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SalesforceMetadata">AWS
   * API Reference</a></p>
   */
  class SalesforceMetadata
  {
  public:
    AWS_APPFLOW_API SalesforceMetadata();
    AWS_APPFLOW_API SalesforceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SalesforceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOAuthScopes() const{ return m_oAuthScopes; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline void SetOAuthScopes(const Aws::Vector<Aws::String>& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = value; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline void SetOAuthScopes(Aws::Vector<Aws::String>&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::move(value); }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& WithOAuthScopes(const Aws::Vector<Aws::String>& value) { SetOAuthScopes(value); return *this;}

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& WithOAuthScopes(Aws::Vector<Aws::String>&& value) { SetOAuthScopes(std::move(value)); return *this;}

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& AddOAuthScopes(const Aws::String& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& AddOAuthScopes(Aws::String&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(std::move(value)); return *this; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& AddOAuthScopes(const char* value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }


    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline const Aws::Vector<SalesforceDataTransferApi>& GetDataTransferApis() const{ return m_dataTransferApis; }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline bool DataTransferApisHasBeenSet() const { return m_dataTransferApisHasBeenSet; }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline void SetDataTransferApis(const Aws::Vector<SalesforceDataTransferApi>& value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis = value; }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline void SetDataTransferApis(Aws::Vector<SalesforceDataTransferApi>&& value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis = std::move(value); }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline SalesforceMetadata& WithDataTransferApis(const Aws::Vector<SalesforceDataTransferApi>& value) { SetDataTransferApis(value); return *this;}

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline SalesforceMetadata& WithDataTransferApis(Aws::Vector<SalesforceDataTransferApi>&& value) { SetDataTransferApis(std::move(value)); return *this;}

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline SalesforceMetadata& AddDataTransferApis(const SalesforceDataTransferApi& value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis.push_back(value); return *this; }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline SalesforceMetadata& AddDataTransferApis(SalesforceDataTransferApi&& value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_oAuthScopes;
    bool m_oAuthScopesHasBeenSet = false;

    Aws::Vector<SalesforceDataTransferApi> m_dataTransferApis;
    bool m_dataTransferApisHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
