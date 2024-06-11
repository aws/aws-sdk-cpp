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
    AWS_IOT_API AuthorizerSummary();
    AWS_IOT_API AuthorizerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuthorizerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = value; }
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::move(value); }
    inline void SetAuthorizerName(const char* value) { m_authorizerNameHasBeenSet = true; m_authorizerName.assign(value); }
    inline AuthorizerSummary& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}
    inline AuthorizerSummary& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}
    inline AuthorizerSummary& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer ARN.</p>
     */
    inline const Aws::String& GetAuthorizerArn() const{ return m_authorizerArn; }
    inline bool AuthorizerArnHasBeenSet() const { return m_authorizerArnHasBeenSet; }
    inline void SetAuthorizerArn(const Aws::String& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = value; }
    inline void SetAuthorizerArn(Aws::String&& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = std::move(value); }
    inline void SetAuthorizerArn(const char* value) { m_authorizerArnHasBeenSet = true; m_authorizerArn.assign(value); }
    inline AuthorizerSummary& WithAuthorizerArn(const Aws::String& value) { SetAuthorizerArn(value); return *this;}
    inline AuthorizerSummary& WithAuthorizerArn(Aws::String&& value) { SetAuthorizerArn(std::move(value)); return *this;}
    inline AuthorizerSummary& WithAuthorizerArn(const char* value) { SetAuthorizerArn(value); return *this;}
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
