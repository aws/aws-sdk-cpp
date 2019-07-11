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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Information about the EC2 instances that are to be sent the command,
   * specified as key-value pairs. Each <code>RunCommandTarget</code> block can
   * include only one key, but this key can specify multiple values.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RunCommandTarget">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API RunCommandTarget
  {
  public:
    RunCommandTarget();
    RunCommandTarget(Aws::Utils::Json::JsonView jsonValue);
    RunCommandTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Can be either <code>tag:</code> <i>tag-key</i> or
     * <code>InstanceIds</code>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Can be either <code>tag:</code> <i>tag-key</i> or
     * <code>InstanceIds</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Can be either <code>tag:</code> <i>tag-key</i> or
     * <code>InstanceIds</code>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Can be either <code>tag:</code> <i>tag-key</i> or
     * <code>InstanceIds</code>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Can be either <code>tag:</code> <i>tag-key</i> or
     * <code>InstanceIds</code>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Can be either <code>tag:</code> <i>tag-key</i> or
     * <code>InstanceIds</code>.</p>
     */
    inline RunCommandTarget& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Can be either <code>tag:</code> <i>tag-key</i> or
     * <code>InstanceIds</code>.</p>
     */
    inline RunCommandTarget& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Can be either <code>tag:</code> <i>tag-key</i> or
     * <code>InstanceIds</code>.</p>
     */
    inline RunCommandTarget& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>If <code>Key</code> is <code>tag:</code> <i>tag-key</i>, <code>Values</code>
     * is a list of tag values. If <code>Key</code> is <code>InstanceIds</code>,
     * <code>Values</code> is a list of Amazon EC2 instance IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>If <code>Key</code> is <code>tag:</code> <i>tag-key</i>, <code>Values</code>
     * is a list of tag values. If <code>Key</code> is <code>InstanceIds</code>,
     * <code>Values</code> is a list of Amazon EC2 instance IDs.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>If <code>Key</code> is <code>tag:</code> <i>tag-key</i>, <code>Values</code>
     * is a list of tag values. If <code>Key</code> is <code>InstanceIds</code>,
     * <code>Values</code> is a list of Amazon EC2 instance IDs.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>If <code>Key</code> is <code>tag:</code> <i>tag-key</i>, <code>Values</code>
     * is a list of tag values. If <code>Key</code> is <code>InstanceIds</code>,
     * <code>Values</code> is a list of Amazon EC2 instance IDs.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>If <code>Key</code> is <code>tag:</code> <i>tag-key</i>, <code>Values</code>
     * is a list of tag values. If <code>Key</code> is <code>InstanceIds</code>,
     * <code>Values</code> is a list of Amazon EC2 instance IDs.</p>
     */
    inline RunCommandTarget& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>If <code>Key</code> is <code>tag:</code> <i>tag-key</i>, <code>Values</code>
     * is a list of tag values. If <code>Key</code> is <code>InstanceIds</code>,
     * <code>Values</code> is a list of Amazon EC2 instance IDs.</p>
     */
    inline RunCommandTarget& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>If <code>Key</code> is <code>tag:</code> <i>tag-key</i>, <code>Values</code>
     * is a list of tag values. If <code>Key</code> is <code>InstanceIds</code>,
     * <code>Values</code> is a list of Amazon EC2 instance IDs.</p>
     */
    inline RunCommandTarget& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>If <code>Key</code> is <code>tag:</code> <i>tag-key</i>, <code>Values</code>
     * is a list of tag values. If <code>Key</code> is <code>InstanceIds</code>,
     * <code>Values</code> is a list of Amazon EC2 instance IDs.</p>
     */
    inline RunCommandTarget& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>If <code>Key</code> is <code>tag:</code> <i>tag-key</i>, <code>Values</code>
     * is a list of tag values. If <code>Key</code> is <code>InstanceIds</code>,
     * <code>Values</code> is a list of Amazon EC2 instance IDs.</p>
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
