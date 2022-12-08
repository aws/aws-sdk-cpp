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
   * <p> The connector-specific profile credentials required when using Trend Micro.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/TrendmicroConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class TrendmicroConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API TrendmicroConnectorProfileCredentials();
    AWS_APPFLOW_API TrendmicroConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API TrendmicroConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Secret Access Key portion of the credentials. </p>
     */
    inline const Aws::String& GetApiSecretKey() const{ return m_apiSecretKey; }

    /**
     * <p> The Secret Access Key portion of the credentials. </p>
     */
    inline bool ApiSecretKeyHasBeenSet() const { return m_apiSecretKeyHasBeenSet; }

    /**
     * <p> The Secret Access Key portion of the credentials. </p>
     */
    inline void SetApiSecretKey(const Aws::String& value) { m_apiSecretKeyHasBeenSet = true; m_apiSecretKey = value; }

    /**
     * <p> The Secret Access Key portion of the credentials. </p>
     */
    inline void SetApiSecretKey(Aws::String&& value) { m_apiSecretKeyHasBeenSet = true; m_apiSecretKey = std::move(value); }

    /**
     * <p> The Secret Access Key portion of the credentials. </p>
     */
    inline void SetApiSecretKey(const char* value) { m_apiSecretKeyHasBeenSet = true; m_apiSecretKey.assign(value); }

    /**
     * <p> The Secret Access Key portion of the credentials. </p>
     */
    inline TrendmicroConnectorProfileCredentials& WithApiSecretKey(const Aws::String& value) { SetApiSecretKey(value); return *this;}

    /**
     * <p> The Secret Access Key portion of the credentials. </p>
     */
    inline TrendmicroConnectorProfileCredentials& WithApiSecretKey(Aws::String&& value) { SetApiSecretKey(std::move(value)); return *this;}

    /**
     * <p> The Secret Access Key portion of the credentials. </p>
     */
    inline TrendmicroConnectorProfileCredentials& WithApiSecretKey(const char* value) { SetApiSecretKey(value); return *this;}

  private:

    Aws::String m_apiSecretKey;
    bool m_apiSecretKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
