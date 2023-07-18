﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The filters to describe or get information about your managed
   * nodes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceInformationStringFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InstanceInformationStringFilter
  {
  public:
    InstanceInformationStringFilter();
    InstanceInformationStringFilter(Aws::Utils::Json::JsonView jsonValue);
    InstanceInformationStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter key name to describe your managed nodes. For example:</p>
     * <p>"InstanceIds"|"AgentVersion"|"PingStatus"|"PlatformTypes"|"ActivationIds"|"IamRole"|"ResourceType"|"AssociationStatus"|"Tag
     * Key"</p>  <p> <code>Tag key</code> isn't a valid filter. You must
     * specify either <code>tag-key</code> or <code>tag:keyname</code> and a string.
     * Here are some valid examples: tag-key, tag:123, tag:al!, tag:Windows. Here are
     * some <i>invalid</i> examples: tag-keys, Tag Key, tag:, tagKey, abc:keyname.</p>
     * 
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The filter key name to describe your managed nodes. For example:</p>
     * <p>"InstanceIds"|"AgentVersion"|"PingStatus"|"PlatformTypes"|"ActivationIds"|"IamRole"|"ResourceType"|"AssociationStatus"|"Tag
     * Key"</p>  <p> <code>Tag key</code> isn't a valid filter. You must
     * specify either <code>tag-key</code> or <code>tag:keyname</code> and a string.
     * Here are some valid examples: tag-key, tag:123, tag:al!, tag:Windows. Here are
     * some <i>invalid</i> examples: tag-keys, Tag Key, tag:, tagKey, abc:keyname.</p>
     * 
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The filter key name to describe your managed nodes. For example:</p>
     * <p>"InstanceIds"|"AgentVersion"|"PingStatus"|"PlatformTypes"|"ActivationIds"|"IamRole"|"ResourceType"|"AssociationStatus"|"Tag
     * Key"</p>  <p> <code>Tag key</code> isn't a valid filter. You must
     * specify either <code>tag-key</code> or <code>tag:keyname</code> and a string.
     * Here are some valid examples: tag-key, tag:123, tag:al!, tag:Windows. Here are
     * some <i>invalid</i> examples: tag-keys, Tag Key, tag:, tagKey, abc:keyname.</p>
     * 
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The filter key name to describe your managed nodes. For example:</p>
     * <p>"InstanceIds"|"AgentVersion"|"PingStatus"|"PlatformTypes"|"ActivationIds"|"IamRole"|"ResourceType"|"AssociationStatus"|"Tag
     * Key"</p>  <p> <code>Tag key</code> isn't a valid filter. You must
     * specify either <code>tag-key</code> or <code>tag:keyname</code> and a string.
     * Here are some valid examples: tag-key, tag:123, tag:al!, tag:Windows. Here are
     * some <i>invalid</i> examples: tag-keys, Tag Key, tag:, tagKey, abc:keyname.</p>
     * 
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The filter key name to describe your managed nodes. For example:</p>
     * <p>"InstanceIds"|"AgentVersion"|"PingStatus"|"PlatformTypes"|"ActivationIds"|"IamRole"|"ResourceType"|"AssociationStatus"|"Tag
     * Key"</p>  <p> <code>Tag key</code> isn't a valid filter. You must
     * specify either <code>tag-key</code> or <code>tag:keyname</code> and a string.
     * Here are some valid examples: tag-key, tag:123, tag:al!, tag:Windows. Here are
     * some <i>invalid</i> examples: tag-keys, Tag Key, tag:, tagKey, abc:keyname.</p>
     * 
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The filter key name to describe your managed nodes. For example:</p>
     * <p>"InstanceIds"|"AgentVersion"|"PingStatus"|"PlatformTypes"|"ActivationIds"|"IamRole"|"ResourceType"|"AssociationStatus"|"Tag
     * Key"</p>  <p> <code>Tag key</code> isn't a valid filter. You must
     * specify either <code>tag-key</code> or <code>tag:keyname</code> and a string.
     * Here are some valid examples: tag-key, tag:123, tag:al!, tag:Windows. Here are
     * some <i>invalid</i> examples: tag-keys, Tag Key, tag:, tagKey, abc:keyname.</p>
     * 
     */
    inline InstanceInformationStringFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The filter key name to describe your managed nodes. For example:</p>
     * <p>"InstanceIds"|"AgentVersion"|"PingStatus"|"PlatformTypes"|"ActivationIds"|"IamRole"|"ResourceType"|"AssociationStatus"|"Tag
     * Key"</p>  <p> <code>Tag key</code> isn't a valid filter. You must
     * specify either <code>tag-key</code> or <code>tag:keyname</code> and a string.
     * Here are some valid examples: tag-key, tag:123, tag:al!, tag:Windows. Here are
     * some <i>invalid</i> examples: tag-keys, Tag Key, tag:, tagKey, abc:keyname.</p>
     * 
     */
    inline InstanceInformationStringFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The filter key name to describe your managed nodes. For example:</p>
     * <p>"InstanceIds"|"AgentVersion"|"PingStatus"|"PlatformTypes"|"ActivationIds"|"IamRole"|"ResourceType"|"AssociationStatus"|"Tag
     * Key"</p>  <p> <code>Tag key</code> isn't a valid filter. You must
     * specify either <code>tag-key</code> or <code>tag:keyname</code> and a string.
     * Here are some valid examples: tag-key, tag:123, tag:al!, tag:Windows. Here are
     * some <i>invalid</i> examples: tag-keys, Tag Key, tag:, tagKey, abc:keyname.</p>
     * 
     */
    inline InstanceInformationStringFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The filter values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationStringFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationStringFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationStringFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationStringFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationStringFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
