/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/RemoteIpDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/LoginAttribute.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Indicates that a login attempt was made to the potentially compromised
   * database from a remote IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RdsLoginAttemptAction">AWS
   * API Reference</a></p>
   */
  class RdsLoginAttemptAction
  {
  public:
    AWS_GUARDDUTY_API RdsLoginAttemptAction();
    AWS_GUARDDUTY_API RdsLoginAttemptAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RdsLoginAttemptAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }

    
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }

    
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }

    
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }

    
    inline RdsLoginAttemptAction& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}

    
    inline RdsLoginAttemptAction& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}


    /**
     * <p>Indicates the login attributes used in the login attempt.</p>
     */
    inline const Aws::Vector<LoginAttribute>& GetLoginAttributes() const{ return m_loginAttributes; }

    /**
     * <p>Indicates the login attributes used in the login attempt.</p>
     */
    inline bool LoginAttributesHasBeenSet() const { return m_loginAttributesHasBeenSet; }

    /**
     * <p>Indicates the login attributes used in the login attempt.</p>
     */
    inline void SetLoginAttributes(const Aws::Vector<LoginAttribute>& value) { m_loginAttributesHasBeenSet = true; m_loginAttributes = value; }

    /**
     * <p>Indicates the login attributes used in the login attempt.</p>
     */
    inline void SetLoginAttributes(Aws::Vector<LoginAttribute>&& value) { m_loginAttributesHasBeenSet = true; m_loginAttributes = std::move(value); }

    /**
     * <p>Indicates the login attributes used in the login attempt.</p>
     */
    inline RdsLoginAttemptAction& WithLoginAttributes(const Aws::Vector<LoginAttribute>& value) { SetLoginAttributes(value); return *this;}

    /**
     * <p>Indicates the login attributes used in the login attempt.</p>
     */
    inline RdsLoginAttemptAction& WithLoginAttributes(Aws::Vector<LoginAttribute>&& value) { SetLoginAttributes(std::move(value)); return *this;}

    /**
     * <p>Indicates the login attributes used in the login attempt.</p>
     */
    inline RdsLoginAttemptAction& AddLoginAttributes(const LoginAttribute& value) { m_loginAttributesHasBeenSet = true; m_loginAttributes.push_back(value); return *this; }

    /**
     * <p>Indicates the login attributes used in the login attempt.</p>
     */
    inline RdsLoginAttemptAction& AddLoginAttributes(LoginAttribute&& value) { m_loginAttributesHasBeenSet = true; m_loginAttributes.push_back(std::move(value)); return *this; }

  private:

    RemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;

    Aws::Vector<LoginAttribute> m_loginAttributes;
    bool m_loginAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
