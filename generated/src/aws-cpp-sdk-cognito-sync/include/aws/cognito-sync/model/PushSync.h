/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PushSync
  {
  public:
    AWS_COGNITOSYNC_API PushSync() = default;
    AWS_COGNITOSYNC_API PushSync(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API PushSync& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of SNS platform application ARNs that could be used by clients.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationArns() const { return m_applicationArns; }
    inline bool ApplicationArnsHasBeenSet() const { return m_applicationArnsHasBeenSet; }
    template<typename ApplicationArnsT = Aws::Vector<Aws::String>>
    void SetApplicationArns(ApplicationArnsT&& value) { m_applicationArnsHasBeenSet = true; m_applicationArns = std::forward<ApplicationArnsT>(value); }
    template<typename ApplicationArnsT = Aws::Vector<Aws::String>>
    PushSync& WithApplicationArns(ApplicationArnsT&& value) { SetApplicationArns(std::forward<ApplicationArnsT>(value)); return *this;}
    template<typename ApplicationArnsT = Aws::String>
    PushSync& AddApplicationArns(ApplicationArnsT&& value) { m_applicationArnsHasBeenSet = true; m_applicationArns.emplace_back(std::forward<ApplicationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A role configured to allow Cognito to call SNS on behalf of the
     * developer.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    PushSync& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationArns;
    bool m_applicationArnsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
