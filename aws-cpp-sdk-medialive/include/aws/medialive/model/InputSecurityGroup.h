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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputWhitelistRule.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * An Input Security Group<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSecurityGroup">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputSecurityGroup
  {
  public:
    InputSecurityGroup();
    InputSecurityGroup(const Aws::Utils::Json::JsonValue& jsonValue);
    InputSecurityGroup& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Unique ARN of Input Security Group
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Unique ARN of Input Security Group
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * Unique ARN of Input Security Group
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * Unique ARN of Input Security Group
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * Unique ARN of Input Security Group
     */
    inline InputSecurityGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Unique ARN of Input Security Group
     */
    inline InputSecurityGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Unique ARN of Input Security Group
     */
    inline InputSecurityGroup& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The Id of the Input Security Group
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The Id of the Input Security Group
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The Id of the Input Security Group
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The Id of the Input Security Group
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The Id of the Input Security Group
     */
    inline InputSecurityGroup& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The Id of the Input Security Group
     */
    inline InputSecurityGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The Id of the Input Security Group
     */
    inline InputSecurityGroup& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Whitelist rules and their sync status
     */
    inline const Aws::Vector<InputWhitelistRule>& GetWhitelistRules() const{ return m_whitelistRules; }

    /**
     * Whitelist rules and their sync status
     */
    inline void SetWhitelistRules(const Aws::Vector<InputWhitelistRule>& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules = value; }

    /**
     * Whitelist rules and their sync status
     */
    inline void SetWhitelistRules(Aws::Vector<InputWhitelistRule>&& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules = std::move(value); }

    /**
     * Whitelist rules and their sync status
     */
    inline InputSecurityGroup& WithWhitelistRules(const Aws::Vector<InputWhitelistRule>& value) { SetWhitelistRules(value); return *this;}

    /**
     * Whitelist rules and their sync status
     */
    inline InputSecurityGroup& WithWhitelistRules(Aws::Vector<InputWhitelistRule>&& value) { SetWhitelistRules(std::move(value)); return *this;}

    /**
     * Whitelist rules and their sync status
     */
    inline InputSecurityGroup& AddWhitelistRules(const InputWhitelistRule& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules.push_back(value); return *this; }

    /**
     * Whitelist rules and their sync status
     */
    inline InputSecurityGroup& AddWhitelistRules(InputWhitelistRule&& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Vector<InputWhitelistRule> m_whitelistRules;
    bool m_whitelistRulesHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
