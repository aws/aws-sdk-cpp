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
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CognitoSync
{
namespace Model
{

  /**
   * <p>Configuration options to be applied to the identity pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/PushSync">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOSYNC_API PushSync
  {
  public:
    PushSync();
    PushSync(Aws::Utils::Json::JsonView jsonValue);
    PushSync& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationArns() const{ return m_applicationArns; }

    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline bool ApplicationArnsHasBeenSet() const { return m_applicationArnsHasBeenSet; }

    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline void SetApplicationArns(const Aws::Vector<Aws::String>& value) { m_applicationArnsHasBeenSet = true; m_applicationArns = value; }

    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline void SetApplicationArns(Aws::Vector<Aws::String>&& value) { m_applicationArnsHasBeenSet = true; m_applicationArns = std::move(value); }

    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline PushSync& WithApplicationArns(const Aws::Vector<Aws::String>& value) { SetApplicationArns(value); return *this;}

    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline PushSync& WithApplicationArns(Aws::Vector<Aws::String>&& value) { SetApplicationArns(std::move(value)); return *this;}

    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline PushSync& AddApplicationArns(const Aws::String& value) { m_applicationArnsHasBeenSet = true; m_applicationArns.push_back(value); return *this; }

    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline PushSync& AddApplicationArns(Aws::String&& value) { m_applicationArnsHasBeenSet = true; m_applicationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline PushSync& AddApplicationArns(const char* value) { m_applicationArnsHasBeenSet = true; m_applicationArns.push_back(value); return *this; }


    /**
     * <p>A role configured to allow Cognito to call SNS on behalf of the
     * developer.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>A role configured to allow Cognito to call SNS on behalf of the
     * developer.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>A role configured to allow Cognito to call SNS on behalf of the
     * developer.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>A role configured to allow Cognito to call SNS on behalf of the
     * developer.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>A role configured to allow Cognito to call SNS on behalf of the
     * developer.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>A role configured to allow Cognito to call SNS on behalf of the
     * developer.</p>
     */
    inline PushSync& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>A role configured to allow Cognito to call SNS on behalf of the
     * developer.</p>
     */
    inline PushSync& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>A role configured to allow Cognito to call SNS on behalf of the
     * developer.</p>
     */
    inline PushSync& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_applicationArns;
    bool m_applicationArnsHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
