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
   * <p>The API key credentials required for API key authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ApiKeyCredentials">AWS
   * API Reference</a></p>
   */
  class ApiKeyCredentials
  {
  public:
    AWS_APPFLOW_API ApiKeyCredentials() = default;
    AWS_APPFLOW_API ApiKeyCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ApiKeyCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API key required for API key authentication.</p>
     */
    inline const Aws::String& GetApiKey() const { return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    template<typename ApiKeyT = Aws::String>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = Aws::String>
    ApiKeyCredentials& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API secret key required for API key authentication.</p>
     */
    inline const Aws::String& GetApiSecretKey() const { return m_apiSecretKey; }
    inline bool ApiSecretKeyHasBeenSet() const { return m_apiSecretKeyHasBeenSet; }
    template<typename ApiSecretKeyT = Aws::String>
    void SetApiSecretKey(ApiSecretKeyT&& value) { m_apiSecretKeyHasBeenSet = true; m_apiSecretKey = std::forward<ApiSecretKeyT>(value); }
    template<typename ApiSecretKeyT = Aws::String>
    ApiKeyCredentials& WithApiSecretKey(ApiSecretKeyT&& value) { SetApiSecretKey(std::forward<ApiSecretKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    Aws::String m_apiSecretKey;
    bool m_apiSecretKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
