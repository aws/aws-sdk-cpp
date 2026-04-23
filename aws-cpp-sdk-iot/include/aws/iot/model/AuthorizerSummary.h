/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API AuthorizerSummary
  {
  public:
    AuthorizerSummary();
    AuthorizerSummary(Aws::Utils::Json::JsonView jsonValue);
    AuthorizerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }

    /**
     * <p>The authorizer name.</p>
     */
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }

    /**
     * <p>The authorizer name.</p>
     */
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = value; }

    /**
     * <p>The authorizer name.</p>
     */
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::move(value); }

    /**
     * <p>The authorizer name.</p>
     */
    inline void SetAuthorizerName(const char* value) { m_authorizerNameHasBeenSet = true; m_authorizerName.assign(value); }

    /**
     * <p>The authorizer name.</p>
     */
    inline AuthorizerSummary& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}

    /**
     * <p>The authorizer name.</p>
     */
    inline AuthorizerSummary& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}

    /**
     * <p>The authorizer name.</p>
     */
    inline AuthorizerSummary& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}


    /**
     * <p>The authorizer ARN.</p>
     */
    inline const Aws::String& GetAuthorizerArn() const{ return m_authorizerArn; }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline bool AuthorizerArnHasBeenSet() const { return m_authorizerArnHasBeenSet; }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline void SetAuthorizerArn(const Aws::String& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = value; }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline void SetAuthorizerArn(Aws::String&& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = std::move(value); }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline void SetAuthorizerArn(const char* value) { m_authorizerArnHasBeenSet = true; m_authorizerArn.assign(value); }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline AuthorizerSummary& WithAuthorizerArn(const Aws::String& value) { SetAuthorizerArn(value); return *this;}

    /**
     * <p>The authorizer ARN.</p>
     */
    inline AuthorizerSummary& WithAuthorizerArn(Aws::String&& value) { SetAuthorizerArn(std::move(value)); return *this;}

    /**
     * <p>The authorizer ARN.</p>
     */
    inline AuthorizerSummary& WithAuthorizerArn(const char* value) { SetAuthorizerArn(value); return *this;}

  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet;

    Aws::String m_authorizerArn;
    bool m_authorizerArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
