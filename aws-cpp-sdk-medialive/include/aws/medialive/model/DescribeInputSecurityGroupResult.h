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
#include <aws/medialive/model/InputSecurityGroupState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/InputWhitelistRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * Placeholder documentation for DescribeInputSecurityGroupResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroupResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DescribeInputSecurityGroupResult
  {
  public:
    DescribeInputSecurityGroupResult();
    DescribeInputSecurityGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInputSecurityGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Unique ARN of Input Security Group
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Unique ARN of Input Security Group
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * Unique ARN of Input Security Group
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * Unique ARN of Input Security Group
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * Unique ARN of Input Security Group
     */
    inline DescribeInputSecurityGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Unique ARN of Input Security Group
     */
    inline DescribeInputSecurityGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Unique ARN of Input Security Group
     */
    inline DescribeInputSecurityGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The Id of the Input Security Group
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The Id of the Input Security Group
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The Id of the Input Security Group
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The Id of the Input Security Group
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The Id of the Input Security Group
     */
    inline DescribeInputSecurityGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The Id of the Input Security Group
     */
    inline DescribeInputSecurityGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The Id of the Input Security Group
     */
    inline DescribeInputSecurityGroupResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputs = value; }

    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputs = std::move(value); }

    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline DescribeInputSecurityGroupResult& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline DescribeInputSecurityGroupResult& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline DescribeInputSecurityGroupResult& AddInputs(const Aws::String& value) { m_inputs.push_back(value); return *this; }

    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline DescribeInputSecurityGroupResult& AddInputs(Aws::String&& value) { m_inputs.push_back(std::move(value)); return *this; }

    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline DescribeInputSecurityGroupResult& AddInputs(const char* value) { m_inputs.push_back(value); return *this; }


    /**
     * The current state of the Input Security Group.
     */
    inline const InputSecurityGroupState& GetState() const{ return m_state; }

    /**
     * The current state of the Input Security Group.
     */
    inline void SetState(const InputSecurityGroupState& value) { m_state = value; }

    /**
     * The current state of the Input Security Group.
     */
    inline void SetState(InputSecurityGroupState&& value) { m_state = std::move(value); }

    /**
     * The current state of the Input Security Group.
     */
    inline DescribeInputSecurityGroupResult& WithState(const InputSecurityGroupState& value) { SetState(value); return *this;}

    /**
     * The current state of the Input Security Group.
     */
    inline DescribeInputSecurityGroupResult& WithState(InputSecurityGroupState&& value) { SetState(std::move(value)); return *this;}


    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputSecurityGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputSecurityGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputSecurityGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputSecurityGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputSecurityGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputSecurityGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputSecurityGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputSecurityGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputSecurityGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * Whitelist rules and their sync status
     */
    inline const Aws::Vector<InputWhitelistRule>& GetWhitelistRules() const{ return m_whitelistRules; }

    /**
     * Whitelist rules and their sync status
     */
    inline void SetWhitelistRules(const Aws::Vector<InputWhitelistRule>& value) { m_whitelistRules = value; }

    /**
     * Whitelist rules and their sync status
     */
    inline void SetWhitelistRules(Aws::Vector<InputWhitelistRule>&& value) { m_whitelistRules = std::move(value); }

    /**
     * Whitelist rules and their sync status
     */
    inline DescribeInputSecurityGroupResult& WithWhitelistRules(const Aws::Vector<InputWhitelistRule>& value) { SetWhitelistRules(value); return *this;}

    /**
     * Whitelist rules and their sync status
     */
    inline DescribeInputSecurityGroupResult& WithWhitelistRules(Aws::Vector<InputWhitelistRule>&& value) { SetWhitelistRules(std::move(value)); return *this;}

    /**
     * Whitelist rules and their sync status
     */
    inline DescribeInputSecurityGroupResult& AddWhitelistRules(const InputWhitelistRule& value) { m_whitelistRules.push_back(value); return *this; }

    /**
     * Whitelist rules and their sync status
     */
    inline DescribeInputSecurityGroupResult& AddWhitelistRules(InputWhitelistRule&& value) { m_whitelistRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::Vector<Aws::String> m_inputs;

    InputSecurityGroupState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<InputWhitelistRule> m_whitelistRules;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
