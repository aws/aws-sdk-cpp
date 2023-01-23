/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action to write a message to a Salesforce IoT Cloud Input
   * Stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SalesforceAction">AWS
   * API Reference</a></p>
   */
  class SalesforceAction
  {
  public:
    AWS_IOT_API SalesforceAction();
    AWS_IOT_API SalesforceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SalesforceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The token used to authenticate access to the Salesforce IoT Cloud Input
     * Stream. The token is available from the Salesforce IoT Cloud platform after
     * creation of the Input Stream.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The token used to authenticate access to the Salesforce IoT Cloud Input
     * Stream. The token is available from the Salesforce IoT Cloud platform after
     * creation of the Input Stream.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The token used to authenticate access to the Salesforce IoT Cloud Input
     * Stream. The token is available from the Salesforce IoT Cloud platform after
     * creation of the Input Stream.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The token used to authenticate access to the Salesforce IoT Cloud Input
     * Stream. The token is available from the Salesforce IoT Cloud platform after
     * creation of the Input Stream.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The token used to authenticate access to the Salesforce IoT Cloud Input
     * Stream. The token is available from the Salesforce IoT Cloud platform after
     * creation of the Input Stream.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The token used to authenticate access to the Salesforce IoT Cloud Input
     * Stream. The token is available from the Salesforce IoT Cloud platform after
     * creation of the Input Stream.</p>
     */
    inline SalesforceAction& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The token used to authenticate access to the Salesforce IoT Cloud Input
     * Stream. The token is available from the Salesforce IoT Cloud platform after
     * creation of the Input Stream.</p>
     */
    inline SalesforceAction& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The token used to authenticate access to the Salesforce IoT Cloud Input
     * Stream. The token is available from the Salesforce IoT Cloud platform after
     * creation of the Input Stream.</p>
     */
    inline SalesforceAction& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>The URL exposed by the Salesforce IoT Cloud Input Stream. The URL is
     * available from the Salesforce IoT Cloud platform after creation of the Input
     * Stream.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL exposed by the Salesforce IoT Cloud Input Stream. The URL is
     * available from the Salesforce IoT Cloud platform after creation of the Input
     * Stream.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL exposed by the Salesforce IoT Cloud Input Stream. The URL is
     * available from the Salesforce IoT Cloud platform after creation of the Input
     * Stream.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL exposed by the Salesforce IoT Cloud Input Stream. The URL is
     * available from the Salesforce IoT Cloud platform after creation of the Input
     * Stream.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL exposed by the Salesforce IoT Cloud Input Stream. The URL is
     * available from the Salesforce IoT Cloud platform after creation of the Input
     * Stream.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL exposed by the Salesforce IoT Cloud Input Stream. The URL is
     * available from the Salesforce IoT Cloud platform after creation of the Input
     * Stream.</p>
     */
    inline SalesforceAction& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL exposed by the Salesforce IoT Cloud Input Stream. The URL is
     * available from the Salesforce IoT Cloud platform after creation of the Input
     * Stream.</p>
     */
    inline SalesforceAction& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL exposed by the Salesforce IoT Cloud Input Stream. The URL is
     * available from the Salesforce IoT Cloud platform after creation of the Input
     * Stream.</p>
     */
    inline SalesforceAction& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
