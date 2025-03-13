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
    AWS_APPFLOW_API TrendmicroConnectorProfileCredentials() = default;
    AWS_APPFLOW_API TrendmicroConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API TrendmicroConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Secret Access Key portion of the credentials. </p>
     */
    inline const Aws::String& GetApiSecretKey() const { return m_apiSecretKey; }
    inline bool ApiSecretKeyHasBeenSet() const { return m_apiSecretKeyHasBeenSet; }
    template<typename ApiSecretKeyT = Aws::String>
    void SetApiSecretKey(ApiSecretKeyT&& value) { m_apiSecretKeyHasBeenSet = true; m_apiSecretKey = std::forward<ApiSecretKeyT>(value); }
    template<typename ApiSecretKeyT = Aws::String>
    TrendmicroConnectorProfileCredentials& WithApiSecretKey(ApiSecretKeyT&& value) { SetApiSecretKey(std::forward<ApiSecretKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiSecretKey;
    bool m_apiSecretKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
