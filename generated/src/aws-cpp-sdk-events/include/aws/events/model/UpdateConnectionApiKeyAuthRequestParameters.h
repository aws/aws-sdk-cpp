/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Contains the API key authorization parameters to use to update the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateConnectionApiKeyAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class UpdateConnectionApiKeyAuthRequestParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API UpdateConnectionApiKeyAuthRequestParameters() = default;
    AWS_CLOUDWATCHEVENTS_API UpdateConnectionApiKeyAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API UpdateConnectionApiKeyAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline const Aws::String& GetApiKeyName() const { return m_apiKeyName; }
    inline bool ApiKeyNameHasBeenSet() const { return m_apiKeyNameHasBeenSet; }
    template<typename ApiKeyNameT = Aws::String>
    void SetApiKeyName(ApiKeyNameT&& value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName = std::forward<ApiKeyNameT>(value); }
    template<typename ApiKeyNameT = Aws::String>
    UpdateConnectionApiKeyAuthRequestParameters& WithApiKeyName(ApiKeyNameT&& value) { SetApiKeyName(std::forward<ApiKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value associated with teh API key to use for authorization.</p>
     */
    inline const Aws::String& GetApiKeyValue() const { return m_apiKeyValue; }
    inline bool ApiKeyValueHasBeenSet() const { return m_apiKeyValueHasBeenSet; }
    template<typename ApiKeyValueT = Aws::String>
    void SetApiKeyValue(ApiKeyValueT&& value) { m_apiKeyValueHasBeenSet = true; m_apiKeyValue = std::forward<ApiKeyValueT>(value); }
    template<typename ApiKeyValueT = Aws::String>
    UpdateConnectionApiKeyAuthRequestParameters& WithApiKeyValue(ApiKeyValueT&& value) { SetApiKeyValue(std::forward<ApiKeyValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiKeyName;
    bool m_apiKeyNameHasBeenSet = false;

    Aws::String m_apiKeyValue;
    bool m_apiKeyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
