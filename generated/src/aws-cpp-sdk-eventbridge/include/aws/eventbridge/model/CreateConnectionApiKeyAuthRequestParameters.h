/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Contains the API key authorization parameters for the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreateConnectionApiKeyAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class CreateConnectionApiKeyAuthRequestParameters
  {
  public:
    AWS_EVENTBRIDGE_API CreateConnectionApiKeyAuthRequestParameters();
    AWS_EVENTBRIDGE_API CreateConnectionApiKeyAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API CreateConnectionApiKeyAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline const Aws::String& GetApiKeyName() const{ return m_apiKeyName; }

    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline bool ApiKeyNameHasBeenSet() const { return m_apiKeyNameHasBeenSet; }

    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline void SetApiKeyName(const Aws::String& value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName = value; }

    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline void SetApiKeyName(Aws::String&& value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName = std::move(value); }

    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline void SetApiKeyName(const char* value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName.assign(value); }

    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline CreateConnectionApiKeyAuthRequestParameters& WithApiKeyName(const Aws::String& value) { SetApiKeyName(value); return *this;}

    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline CreateConnectionApiKeyAuthRequestParameters& WithApiKeyName(Aws::String&& value) { SetApiKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline CreateConnectionApiKeyAuthRequestParameters& WithApiKeyName(const char* value) { SetApiKeyName(value); return *this;}


    /**
     * <p>The value for the API key to use for authorization.</p>
     */
    inline const Aws::String& GetApiKeyValue() const{ return m_apiKeyValue; }

    /**
     * <p>The value for the API key to use for authorization.</p>
     */
    inline bool ApiKeyValueHasBeenSet() const { return m_apiKeyValueHasBeenSet; }

    /**
     * <p>The value for the API key to use for authorization.</p>
     */
    inline void SetApiKeyValue(const Aws::String& value) { m_apiKeyValueHasBeenSet = true; m_apiKeyValue = value; }

    /**
     * <p>The value for the API key to use for authorization.</p>
     */
    inline void SetApiKeyValue(Aws::String&& value) { m_apiKeyValueHasBeenSet = true; m_apiKeyValue = std::move(value); }

    /**
     * <p>The value for the API key to use for authorization.</p>
     */
    inline void SetApiKeyValue(const char* value) { m_apiKeyValueHasBeenSet = true; m_apiKeyValue.assign(value); }

    /**
     * <p>The value for the API key to use for authorization.</p>
     */
    inline CreateConnectionApiKeyAuthRequestParameters& WithApiKeyValue(const Aws::String& value) { SetApiKeyValue(value); return *this;}

    /**
     * <p>The value for the API key to use for authorization.</p>
     */
    inline CreateConnectionApiKeyAuthRequestParameters& WithApiKeyValue(Aws::String&& value) { SetApiKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value for the API key to use for authorization.</p>
     */
    inline CreateConnectionApiKeyAuthRequestParameters& WithApiKeyValue(const char* value) { SetApiKeyValue(value); return *this;}

  private:

    Aws::String m_apiKeyName;
    bool m_apiKeyNameHasBeenSet = false;

    Aws::String m_apiKeyValue;
    bool m_apiKeyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
