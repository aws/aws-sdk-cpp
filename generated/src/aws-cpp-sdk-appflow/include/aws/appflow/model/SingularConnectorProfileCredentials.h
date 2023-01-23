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
   * <p> The connector-specific profile credentials required when using Singular.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SingularConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class SingularConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API SingularConnectorProfileCredentials();
    AWS_APPFLOW_API SingularConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SingularConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline SingularConnectorProfileCredentials& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline SingularConnectorProfileCredentials& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline SingularConnectorProfileCredentials& WithApiKey(const char* value) { SetApiKey(value); return *this;}

  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
