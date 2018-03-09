﻿/*
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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * The profile information of the EC2 instance.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/IamInstanceProfile">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API IamInstanceProfile
  {
  public:
    IamInstanceProfile();
    IamInstanceProfile(const Aws::Utils::Json::JsonValue& jsonValue);
    IamInstanceProfile& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * AWS EC2 instance profile ARN.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * AWS EC2 instance profile ARN.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * AWS EC2 instance profile ARN.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * AWS EC2 instance profile ARN.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * AWS EC2 instance profile ARN.
     */
    inline IamInstanceProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * AWS EC2 instance profile ARN.
     */
    inline IamInstanceProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * AWS EC2 instance profile ARN.
     */
    inline IamInstanceProfile& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * AWS EC2 instance profile ID.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * AWS EC2 instance profile ID.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * AWS EC2 instance profile ID.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * AWS EC2 instance profile ID.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * AWS EC2 instance profile ID.
     */
    inline IamInstanceProfile& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * AWS EC2 instance profile ID.
     */
    inline IamInstanceProfile& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * AWS EC2 instance profile ID.
     */
    inline IamInstanceProfile& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
