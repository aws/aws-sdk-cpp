/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The custom credentials required for custom authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CustomAuthCredentials">AWS
   * API Reference</a></p>
   */
  class CustomAuthCredentials
  {
  public:
    AWS_APPFLOW_API CustomAuthCredentials();
    AWS_APPFLOW_API CustomAuthCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomAuthCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom authentication type that the connector uses.</p>
     */
    inline const Aws::String& GetCustomAuthenticationType() const{ return m_customAuthenticationType; }
    inline bool CustomAuthenticationTypeHasBeenSet() const { return m_customAuthenticationTypeHasBeenSet; }
    inline void SetCustomAuthenticationType(const Aws::String& value) { m_customAuthenticationTypeHasBeenSet = true; m_customAuthenticationType = value; }
    inline void SetCustomAuthenticationType(Aws::String&& value) { m_customAuthenticationTypeHasBeenSet = true; m_customAuthenticationType = std::move(value); }
    inline void SetCustomAuthenticationType(const char* value) { m_customAuthenticationTypeHasBeenSet = true; m_customAuthenticationType.assign(value); }
    inline CustomAuthCredentials& WithCustomAuthenticationType(const Aws::String& value) { SetCustomAuthenticationType(value); return *this;}
    inline CustomAuthCredentials& WithCustomAuthenticationType(Aws::String&& value) { SetCustomAuthenticationType(std::move(value)); return *this;}
    inline CustomAuthCredentials& WithCustomAuthenticationType(const char* value) { SetCustomAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that holds custom authentication credentials.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCredentialsMap() const{ return m_credentialsMap; }
    inline bool CredentialsMapHasBeenSet() const { return m_credentialsMapHasBeenSet; }
    inline void SetCredentialsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_credentialsMapHasBeenSet = true; m_credentialsMap = value; }
    inline void SetCredentialsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_credentialsMapHasBeenSet = true; m_credentialsMap = std::move(value); }
    inline CustomAuthCredentials& WithCredentialsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetCredentialsMap(value); return *this;}
    inline CustomAuthCredentials& WithCredentialsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetCredentialsMap(std::move(value)); return *this;}
    inline CustomAuthCredentials& AddCredentialsMap(const Aws::String& key, const Aws::String& value) { m_credentialsMapHasBeenSet = true; m_credentialsMap.emplace(key, value); return *this; }
    inline CustomAuthCredentials& AddCredentialsMap(Aws::String&& key, const Aws::String& value) { m_credentialsMapHasBeenSet = true; m_credentialsMap.emplace(std::move(key), value); return *this; }
    inline CustomAuthCredentials& AddCredentialsMap(const Aws::String& key, Aws::String&& value) { m_credentialsMapHasBeenSet = true; m_credentialsMap.emplace(key, std::move(value)); return *this; }
    inline CustomAuthCredentials& AddCredentialsMap(Aws::String&& key, Aws::String&& value) { m_credentialsMapHasBeenSet = true; m_credentialsMap.emplace(std::move(key), std::move(value)); return *this; }
    inline CustomAuthCredentials& AddCredentialsMap(const char* key, Aws::String&& value) { m_credentialsMapHasBeenSet = true; m_credentialsMap.emplace(key, std::move(value)); return *this; }
    inline CustomAuthCredentials& AddCredentialsMap(Aws::String&& key, const char* value) { m_credentialsMapHasBeenSet = true; m_credentialsMap.emplace(std::move(key), value); return *this; }
    inline CustomAuthCredentials& AddCredentialsMap(const char* key, const char* value) { m_credentialsMapHasBeenSet = true; m_credentialsMap.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_customAuthenticationType;
    bool m_customAuthenticationTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_credentialsMap;
    bool m_credentialsMapHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
