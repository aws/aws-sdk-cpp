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
   * <p> The connector-specific profile credentials required by Dynatrace.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DynatraceConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class DynatraceConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API DynatraceConnectorProfileCredentials();
    AWS_APPFLOW_API DynatraceConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API DynatraceConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The API tokens used by Dynatrace API to authenticate various API calls. </p>
     */
    inline const Aws::String& GetApiToken() const{ return m_apiToken; }

    /**
     * <p> The API tokens used by Dynatrace API to authenticate various API calls. </p>
     */
    inline bool ApiTokenHasBeenSet() const { return m_apiTokenHasBeenSet; }

    /**
     * <p> The API tokens used by Dynatrace API to authenticate various API calls. </p>
     */
    inline void SetApiToken(const Aws::String& value) { m_apiTokenHasBeenSet = true; m_apiToken = value; }

    /**
     * <p> The API tokens used by Dynatrace API to authenticate various API calls. </p>
     */
    inline void SetApiToken(Aws::String&& value) { m_apiTokenHasBeenSet = true; m_apiToken = std::move(value); }

    /**
     * <p> The API tokens used by Dynatrace API to authenticate various API calls. </p>
     */
    inline void SetApiToken(const char* value) { m_apiTokenHasBeenSet = true; m_apiToken.assign(value); }

    /**
     * <p> The API tokens used by Dynatrace API to authenticate various API calls. </p>
     */
    inline DynatraceConnectorProfileCredentials& WithApiToken(const Aws::String& value) { SetApiToken(value); return *this;}

    /**
     * <p> The API tokens used by Dynatrace API to authenticate various API calls. </p>
     */
    inline DynatraceConnectorProfileCredentials& WithApiToken(Aws::String&& value) { SetApiToken(std::move(value)); return *this;}

    /**
     * <p> The API tokens used by Dynatrace API to authenticate various API calls. </p>
     */
    inline DynatraceConnectorProfileCredentials& WithApiToken(const char* value) { SetApiToken(value); return *this;}

  private:

    Aws::String m_apiToken;
    bool m_apiTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
