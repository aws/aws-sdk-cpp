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
   * <p>An array of search criteria that targets instances using a Key,Value
   * combination that you specify. <code>Targets</code> is required if you don't
   * provide one or more instance IDs in the call.</p> <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Target">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API Target
  {
  public:
    Target();
    Target(Aws::Utils::Json::JsonView jsonValue);
    Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>User-defined criteria for sending commands that target instances that meet
     * the criteria. <code>Key</code> can be <code>tag:&lt;Amazon EC2 tag&gt;</code> or
     * <code>InstanceIds</code>. For more information about how to send commands that
     * target instances using <code>Key,Value</code> parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>User-defined criteria for sending commands that target instances that meet
     * the criteria. <code>Key</code> can be <code>tag:&lt;Amazon EC2 tag&gt;</code> or
     * <code>InstanceIds</code>. For more information about how to send commands that
     * target instances using <code>Key,Value</code> parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>User-defined criteria for sending commands that target instances that meet
     * the criteria. <code>Key</code> can be <code>tag:&lt;Amazon EC2 tag&gt;</code> or
     * <code>InstanceIds</code>. For more information about how to send commands that
     * target instances using <code>Key,Value</code> parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>User-defined criteria for sending commands that target instances that meet
     * the criteria. <code>Key</code> can be <code>tag:&lt;Amazon EC2 tag&gt;</code> or
     * <code>InstanceIds</code>. For more information about how to send commands that
     * target instances using <code>Key,Value</code> parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>User-defined criteria for sending commands that target instances that meet
     * the criteria. <code>Key</code> can be <code>tag:&lt;Amazon EC2 tag&gt;</code> or
     * <code>InstanceIds</code>. For more information about how to send commands that
     * target instances using <code>Key,Value</code> parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>User-defined criteria for sending commands that target instances that meet
     * the criteria. <code>Key</code> can be <code>tag:&lt;Amazon EC2 tag&gt;</code> or
     * <code>InstanceIds</code>. For more information about how to send commands that
     * target instances using <code>Key,Value</code> parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline Target& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>User-defined criteria for sending commands that target instances that meet
     * the criteria. <code>Key</code> can be <code>tag:&lt;Amazon EC2 tag&gt;</code> or
     * <code>InstanceIds</code>. For more information about how to send commands that
     * target instances using <code>Key,Value</code> parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline Target& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>User-defined criteria for sending commands that target instances that meet
     * the criteria. <code>Key</code> can be <code>tag:&lt;Amazon EC2 tag&gt;</code> or
     * <code>InstanceIds</code>. For more information about how to send commands that
     * target instances using <code>Key,Value</code> parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline Target& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include Amazon
     * EC2 tags of <code>ServerRole,WebServer</code>. For more information about how to
     * send commands that target instances using <code>Key,Value</code> parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include Amazon
     * EC2 tags of <code>ServerRole,WebServer</code>. For more information about how to
     * send commands that target instances using <code>Key,Value</code> parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include Amazon
     * EC2 tags of <code>ServerRole,WebServer</code>. For more information about how to
     * send commands that target instances using <code>Key,Value</code> parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include Amazon
     * EC2 tags of <code>ServerRole,WebServer</code>. For more information about how to
     * send commands that target instances using <code>Key,Value</code> parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include Amazon
     * EC2 tags of <code>ServerRole,WebServer</code>. For more information about how to
     * send commands that target instances using <code>Key,Value</code> parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline Target& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include Amazon
     * EC2 tags of <code>ServerRole,WebServer</code>. For more information about how to
     * send commands that target instances using <code>Key,Value</code> parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline Target& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include Amazon
     * EC2 tags of <code>ServerRole,WebServer</code>. For more information about how to
     * send commands that target instances using <code>Key,Value</code> parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline Target& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include Amazon
     * EC2 tags of <code>ServerRole,WebServer</code>. For more information about how to
     * send commands that target instances using <code>Key,Value</code> parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline Target& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include Amazon
     * EC2 tags of <code>ServerRole,WebServer</code>. For more information about how to
     * send commands that target instances using <code>Key,Value</code> parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * Targets and Rate Controls to Send Commands to a Fleet</a> in the <i>AWS Systems
     * Manager User Guide</i>.</p>
     */
    inline Target& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
