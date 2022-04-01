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
   * <p>Contains the authorization parameters for the connection if API Key is
   * specified as the authorization type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ConnectionApiKeyAuthResponseParameters">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API ConnectionApiKeyAuthResponseParameters
  {
  public:
    ConnectionApiKeyAuthResponseParameters();
    ConnectionApiKeyAuthResponseParameters(Aws::Utils::Json::JsonView jsonValue);
    ConnectionApiKeyAuthResponseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the header to use for the <code>APIKeyValue</code> used for
     * authorization.</p>
     */
    inline const Aws::String& GetApiKeyName() const{ return m_apiKeyName; }

    /**
     * <p>The name of the header to use for the <code>APIKeyValue</code> used for
     * authorization.</p>
     */
    inline bool ApiKeyNameHasBeenSet() const { return m_apiKeyNameHasBeenSet; }

    /**
     * <p>The name of the header to use for the <code>APIKeyValue</code> used for
     * authorization.</p>
     */
    inline void SetApiKeyName(const Aws::String& value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName = value; }

    /**
     * <p>The name of the header to use for the <code>APIKeyValue</code> used for
     * authorization.</p>
     */
    inline void SetApiKeyName(Aws::String&& value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName = std::move(value); }

    /**
     * <p>The name of the header to use for the <code>APIKeyValue</code> used for
     * authorization.</p>
     */
    inline void SetApiKeyName(const char* value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName.assign(value); }

    /**
     * <p>The name of the header to use for the <code>APIKeyValue</code> used for
     * authorization.</p>
     */
    inline ConnectionApiKeyAuthResponseParameters& WithApiKeyName(const Aws::String& value) { SetApiKeyName(value); return *this;}

    /**
     * <p>The name of the header to use for the <code>APIKeyValue</code> used for
     * authorization.</p>
     */
    inline ConnectionApiKeyAuthResponseParameters& WithApiKeyName(Aws::String&& value) { SetApiKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the header to use for the <code>APIKeyValue</code> used for
     * authorization.</p>
     */
    inline ConnectionApiKeyAuthResponseParameters& WithApiKeyName(const char* value) { SetApiKeyName(value); return *this;}

  private:

    Aws::String m_apiKeyName;
    bool m_apiKeyNameHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
