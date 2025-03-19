/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The authorizer summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuthorizerSummary">AWS
   * API Reference</a></p>
   */
  class AuthorizerSummary
  {
  public:
    AWS_IOT_API AuthorizerSummary() = default;
    AWS_IOT_API AuthorizerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuthorizerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const { return m_authorizerName; }
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }
    template<typename AuthorizerNameT = Aws::String>
    void SetAuthorizerName(AuthorizerNameT&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::forward<AuthorizerNameT>(value); }
    template<typename AuthorizerNameT = Aws::String>
    AuthorizerSummary& WithAuthorizerName(AuthorizerNameT&& value) { SetAuthorizerName(std::forward<AuthorizerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer ARN.</p>
     */
    inline const Aws::String& GetAuthorizerArn() const { return m_authorizerArn; }
    inline bool AuthorizerArnHasBeenSet() const { return m_authorizerArnHasBeenSet; }
    template<typename AuthorizerArnT = Aws::String>
    void SetAuthorizerArn(AuthorizerArnT&& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = std::forward<AuthorizerArnT>(value); }
    template<typename AuthorizerArnT = Aws::String>
    AuthorizerSummary& WithAuthorizerArn(AuthorizerArnT&& value) { SetAuthorizerArn(std::forward<AuthorizerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet = false;

    Aws::String m_authorizerArn;
    bool m_authorizerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
