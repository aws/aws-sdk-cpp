/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <zonbook> <simpara>Information about the EC2 instances that are to be sent the
   * command, specified as key-value pairs. Each <code>RunCommandTarget</code> block
   * can include only one key, but this key may specify multiple values.</simpara>
   * </zonbook> <xhtml> <p>Information about the EC2 instances that are to be sent
   * the command, specified as key-value pairs. Each <code>RunCommandTarget</code>
   * block can include only one key, but this key may specify multiple values.</p>
   * </xhtml>
   */
  class AWS_CLOUDWATCHEVENTS_API RunCommandTarget
  {
  public:
    RunCommandTarget();
    RunCommandTarget(const Aws::Utils::Json::JsonValue& jsonValue);
    RunCommandTarget& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <zonbook> <simpara>Can be either <code>tag:</code> <emphasis>tag-key</emphasis>
     * or <code>InstanceIds</code>.</simpara> </zonbook> <xhtml> <p>Can be either
     * <code>tag:</code> <i>tag-key</i> or <code>InstanceIds</code>.</p> </xhtml>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <zonbook> <simpara>Can be either <code>tag:</code> <emphasis>tag-key</emphasis>
     * or <code>InstanceIds</code>.</simpara> </zonbook> <xhtml> <p>Can be either
     * <code>tag:</code> <i>tag-key</i> or <code>InstanceIds</code>.</p> </xhtml>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <zonbook> <simpara>Can be either <code>tag:</code> <emphasis>tag-key</emphasis>
     * or <code>InstanceIds</code>.</simpara> </zonbook> <xhtml> <p>Can be either
     * <code>tag:</code> <i>tag-key</i> or <code>InstanceIds</code>.</p> </xhtml>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <zonbook> <simpara>Can be either <code>tag:</code> <emphasis>tag-key</emphasis>
     * or <code>InstanceIds</code>.</simpara> </zonbook> <xhtml> <p>Can be either
     * <code>tag:</code> <i>tag-key</i> or <code>InstanceIds</code>.</p> </xhtml>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <zonbook> <simpara>Can be either <code>tag:</code> <emphasis>tag-key</emphasis>
     * or <code>InstanceIds</code>.</simpara> </zonbook> <xhtml> <p>Can be either
     * <code>tag:</code> <i>tag-key</i> or <code>InstanceIds</code>.</p> </xhtml>
     */
    inline RunCommandTarget& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <zonbook> <simpara>Can be either <code>tag:</code> <emphasis>tag-key</emphasis>
     * or <code>InstanceIds</code>.</simpara> </zonbook> <xhtml> <p>Can be either
     * <code>tag:</code> <i>tag-key</i> or <code>InstanceIds</code>.</p> </xhtml>
     */
    inline RunCommandTarget& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /**
     * <zonbook> <simpara>Can be either <code>tag:</code> <emphasis>tag-key</emphasis>
     * or <code>InstanceIds</code>.</simpara> </zonbook> <xhtml> <p>Can be either
     * <code>tag:</code> <i>tag-key</i> or <code>InstanceIds</code>.</p> </xhtml>
     */
    inline RunCommandTarget& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * <zonbook> <simpara>If <code>Key</code> is <code>tag:</code>
     * <emphasis>tag-key</emphasis>, <code>Values</code> is a list of tag values. If
     * <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list of
     * Amazon EC2 instance IDs.</simpara> </zonbook> <xhtml> <p>If <code>Key</code> is
     * <code>tag:</code> <i>tag-key</i>, <code>Values</code> is a list of tag values.
     * If <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list
     * of Amazon EC2 instance IDs.</p> </xhtml>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <zonbook> <simpara>If <code>Key</code> is <code>tag:</code>
     * <emphasis>tag-key</emphasis>, <code>Values</code> is a list of tag values. If
     * <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list of
     * Amazon EC2 instance IDs.</simpara> </zonbook> <xhtml> <p>If <code>Key</code> is
     * <code>tag:</code> <i>tag-key</i>, <code>Values</code> is a list of tag values.
     * If <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list
     * of Amazon EC2 instance IDs.</p> </xhtml>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <zonbook> <simpara>If <code>Key</code> is <code>tag:</code>
     * <emphasis>tag-key</emphasis>, <code>Values</code> is a list of tag values. If
     * <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list of
     * Amazon EC2 instance IDs.</simpara> </zonbook> <xhtml> <p>If <code>Key</code> is
     * <code>tag:</code> <i>tag-key</i>, <code>Values</code> is a list of tag values.
     * If <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list
     * of Amazon EC2 instance IDs.</p> </xhtml>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <zonbook> <simpara>If <code>Key</code> is <code>tag:</code>
     * <emphasis>tag-key</emphasis>, <code>Values</code> is a list of tag values. If
     * <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list of
     * Amazon EC2 instance IDs.</simpara> </zonbook> <xhtml> <p>If <code>Key</code> is
     * <code>tag:</code> <i>tag-key</i>, <code>Values</code> is a list of tag values.
     * If <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list
     * of Amazon EC2 instance IDs.</p> </xhtml>
     */
    inline RunCommandTarget& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <zonbook> <simpara>If <code>Key</code> is <code>tag:</code>
     * <emphasis>tag-key</emphasis>, <code>Values</code> is a list of tag values. If
     * <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list of
     * Amazon EC2 instance IDs.</simpara> </zonbook> <xhtml> <p>If <code>Key</code> is
     * <code>tag:</code> <i>tag-key</i>, <code>Values</code> is a list of tag values.
     * If <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list
     * of Amazon EC2 instance IDs.</p> </xhtml>
     */
    inline RunCommandTarget& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(value); return *this;}

    /**
     * <zonbook> <simpara>If <code>Key</code> is <code>tag:</code>
     * <emphasis>tag-key</emphasis>, <code>Values</code> is a list of tag values. If
     * <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list of
     * Amazon EC2 instance IDs.</simpara> </zonbook> <xhtml> <p>If <code>Key</code> is
     * <code>tag:</code> <i>tag-key</i>, <code>Values</code> is a list of tag values.
     * If <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list
     * of Amazon EC2 instance IDs.</p> </xhtml>
     */
    inline RunCommandTarget& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>If <code>Key</code> is <code>tag:</code>
     * <emphasis>tag-key</emphasis>, <code>Values</code> is a list of tag values. If
     * <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list of
     * Amazon EC2 instance IDs.</simpara> </zonbook> <xhtml> <p>If <code>Key</code> is
     * <code>tag:</code> <i>tag-key</i>, <code>Values</code> is a list of tag values.
     * If <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list
     * of Amazon EC2 instance IDs.</p> </xhtml>
     */
    inline RunCommandTarget& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>If <code>Key</code> is <code>tag:</code>
     * <emphasis>tag-key</emphasis>, <code>Values</code> is a list of tag values. If
     * <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list of
     * Amazon EC2 instance IDs.</simpara> </zonbook> <xhtml> <p>If <code>Key</code> is
     * <code>tag:</code> <i>tag-key</i>, <code>Values</code> is a list of tag values.
     * If <code>Key</code> is <code>InstanceIds</code>, <code>Values</code> is a list
     * of Amazon EC2 instance IDs.</p> </xhtml>
     */
    inline RunCommandTarget& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
