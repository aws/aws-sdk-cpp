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
    AWS_APPFLOW_API ApiKeyCredentials();
    AWS_APPFLOW_API ApiKeyCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ApiKeyCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API key required for API key authentication.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The API key required for API key authentication.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>The API key required for API key authentication.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The API key required for API key authentication.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>The API key required for API key authentication.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>The API key required for API key authentication.</p>
     */
    inline ApiKeyCredentials& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>The API key required for API key authentication.</p>
     */
    inline ApiKeyCredentials& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>The API key required for API key authentication.</p>
     */
    inline ApiKeyCredentials& WithApiKey(const char* value) { SetApiKey(value); return *this;}


    /**
     * <p>The API secret key required for API key authentication.</p>
     */
    inline const Aws::String& GetApiSecretKey() const{ return m_apiSecretKey; }

    /**
     * <p>The API secret key required for API key authentication.</p>
     */
    inline bool ApiSecretKeyHasBeenSet() const { return m_apiSecretKeyHasBeenSet; }

    /**
     * <p>The API secret key required for API key authentication.</p>
     */
    inline void SetApiSecretKey(const Aws::String& value) { m_apiSecretKeyHasBeenSet = true; m_apiSecretKey = value; }

    /**
     * <p>The API secret key required for API key authentication.</p>
     */
    inline void SetApiSecretKey(Aws::String&& value) { m_apiSecretKeyHasBeenSet = true; m_apiSecretKey = std::move(value); }

    /**
     * <p>The API secret key required for API key authentication.</p>
     */
    inline void SetApiSecretKey(const char* value) { m_apiSecretKeyHasBeenSet = true; m_apiSecretKey.assign(value); }

    /**
     * <p>The API secret key required for API key authentication.</p>
     */
    inline ApiKeyCredentials& WithApiSecretKey(const Aws::String& value) { SetApiSecretKey(value); return *this;}

    /**
     * <p>The API secret key required for API key authentication.</p>
     */
    inline ApiKeyCredentials& WithApiSecretKey(Aws::String&& value) { SetApiSecretKey(std::move(value)); return *this;}

    /**
     * <p>The API secret key required for API key authentication.</p>
     */
    inline ApiKeyCredentials& WithApiSecretKey(const char* value) { SetApiSecretKey(value); return *this;}

  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    Aws::String m_apiSecretKey;
    bool m_apiSecretKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
