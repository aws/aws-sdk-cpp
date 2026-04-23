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
#include <aws/ssm/model/SessionFilterKey.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a filter for Session Manager information.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SessionFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API SessionFilter
  {
  public:
    SessionFilter();
    SessionFilter(Aws::Utils::Json::JsonView jsonValue);
    SessionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p>
     */
    inline const SessionFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(const SessionFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(SessionFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline SessionFilter& WithKey(const SessionFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline SessionFilter& WithKey(SessionFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p>InvokedAfter: Specify a timestamp to limit your results. For example,
     * specify 2018-08-29T00:00:00Z to see sessions that started August 29, 2018, and
     * later.</p> </li> <li> <p>InvokedBefore: Specify a timestamp to limit your
     * results. For example, specify 2018-08-29T00:00:00Z to see sessions that started
     * before August 29, 2018.</p> </li> <li> <p>Target: Specify an instance to which
     * session connections have been made.</p> </li> <li> <p>Owner: Specify an AWS user
     * account to see a list of sessions started by that user.</p> </li> <li>
     * <p>Status: Specify a valid session status to see a list of all sessions with
     * that status. Status values you can specify include:</p> <ul> <li>
     * <p>Connected</p> </li> <li> <p>Connecting</p> </li> <li> <p>Disconnected</p>
     * </li> <li> <p>Terminated</p> </li> <li> <p>Terminating</p> </li> <li>
     * <p>Failed</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p>InvokedAfter: Specify a timestamp to limit your results. For example,
     * specify 2018-08-29T00:00:00Z to see sessions that started August 29, 2018, and
     * later.</p> </li> <li> <p>InvokedBefore: Specify a timestamp to limit your
     * results. For example, specify 2018-08-29T00:00:00Z to see sessions that started
     * before August 29, 2018.</p> </li> <li> <p>Target: Specify an instance to which
     * session connections have been made.</p> </li> <li> <p>Owner: Specify an AWS user
     * account to see a list of sessions started by that user.</p> </li> <li>
     * <p>Status: Specify a valid session status to see a list of all sessions with
     * that status. Status values you can specify include:</p> <ul> <li>
     * <p>Connected</p> </li> <li> <p>Connecting</p> </li> <li> <p>Disconnected</p>
     * </li> <li> <p>Terminated</p> </li> <li> <p>Terminating</p> </li> <li>
     * <p>Failed</p> </li> </ul> </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p>InvokedAfter: Specify a timestamp to limit your results. For example,
     * specify 2018-08-29T00:00:00Z to see sessions that started August 29, 2018, and
     * later.</p> </li> <li> <p>InvokedBefore: Specify a timestamp to limit your
     * results. For example, specify 2018-08-29T00:00:00Z to see sessions that started
     * before August 29, 2018.</p> </li> <li> <p>Target: Specify an instance to which
     * session connections have been made.</p> </li> <li> <p>Owner: Specify an AWS user
     * account to see a list of sessions started by that user.</p> </li> <li>
     * <p>Status: Specify a valid session status to see a list of all sessions with
     * that status. Status values you can specify include:</p> <ul> <li>
     * <p>Connected</p> </li> <li> <p>Connecting</p> </li> <li> <p>Disconnected</p>
     * </li> <li> <p>Terminated</p> </li> <li> <p>Terminating</p> </li> <li>
     * <p>Failed</p> </li> </ul> </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p>InvokedAfter: Specify a timestamp to limit your results. For example,
     * specify 2018-08-29T00:00:00Z to see sessions that started August 29, 2018, and
     * later.</p> </li> <li> <p>InvokedBefore: Specify a timestamp to limit your
     * results. For example, specify 2018-08-29T00:00:00Z to see sessions that started
     * before August 29, 2018.</p> </li> <li> <p>Target: Specify an instance to which
     * session connections have been made.</p> </li> <li> <p>Owner: Specify an AWS user
     * account to see a list of sessions started by that user.</p> </li> <li>
     * <p>Status: Specify a valid session status to see a list of all sessions with
     * that status. Status values you can specify include:</p> <ul> <li>
     * <p>Connected</p> </li> <li> <p>Connecting</p> </li> <li> <p>Disconnected</p>
     * </li> <li> <p>Terminated</p> </li> <li> <p>Terminating</p> </li> <li>
     * <p>Failed</p> </li> </ul> </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p>InvokedAfter: Specify a timestamp to limit your results. For example,
     * specify 2018-08-29T00:00:00Z to see sessions that started August 29, 2018, and
     * later.</p> </li> <li> <p>InvokedBefore: Specify a timestamp to limit your
     * results. For example, specify 2018-08-29T00:00:00Z to see sessions that started
     * before August 29, 2018.</p> </li> <li> <p>Target: Specify an instance to which
     * session connections have been made.</p> </li> <li> <p>Owner: Specify an AWS user
     * account to see a list of sessions started by that user.</p> </li> <li>
     * <p>Status: Specify a valid session status to see a list of all sessions with
     * that status. Status values you can specify include:</p> <ul> <li>
     * <p>Connected</p> </li> <li> <p>Connecting</p> </li> <li> <p>Disconnected</p>
     * </li> <li> <p>Terminated</p> </li> <li> <p>Terminating</p> </li> <li>
     * <p>Failed</p> </li> </ul> </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p>InvokedAfter: Specify a timestamp to limit your results. For example,
     * specify 2018-08-29T00:00:00Z to see sessions that started August 29, 2018, and
     * later.</p> </li> <li> <p>InvokedBefore: Specify a timestamp to limit your
     * results. For example, specify 2018-08-29T00:00:00Z to see sessions that started
     * before August 29, 2018.</p> </li> <li> <p>Target: Specify an instance to which
     * session connections have been made.</p> </li> <li> <p>Owner: Specify an AWS user
     * account to see a list of sessions started by that user.</p> </li> <li>
     * <p>Status: Specify a valid session status to see a list of all sessions with
     * that status. Status values you can specify include:</p> <ul> <li>
     * <p>Connected</p> </li> <li> <p>Connecting</p> </li> <li> <p>Disconnected</p>
     * </li> <li> <p>Terminated</p> </li> <li> <p>Terminating</p> </li> <li>
     * <p>Failed</p> </li> </ul> </li> </ul>
     */
    inline SessionFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p>InvokedAfter: Specify a timestamp to limit your results. For example,
     * specify 2018-08-29T00:00:00Z to see sessions that started August 29, 2018, and
     * later.</p> </li> <li> <p>InvokedBefore: Specify a timestamp to limit your
     * results. For example, specify 2018-08-29T00:00:00Z to see sessions that started
     * before August 29, 2018.</p> </li> <li> <p>Target: Specify an instance to which
     * session connections have been made.</p> </li> <li> <p>Owner: Specify an AWS user
     * account to see a list of sessions started by that user.</p> </li> <li>
     * <p>Status: Specify a valid session status to see a list of all sessions with
     * that status. Status values you can specify include:</p> <ul> <li>
     * <p>Connected</p> </li> <li> <p>Connecting</p> </li> <li> <p>Disconnected</p>
     * </li> <li> <p>Terminated</p> </li> <li> <p>Terminating</p> </li> <li>
     * <p>Failed</p> </li> </ul> </li> </ul>
     */
    inline SessionFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p>InvokedAfter: Specify a timestamp to limit your results. For example,
     * specify 2018-08-29T00:00:00Z to see sessions that started August 29, 2018, and
     * later.</p> </li> <li> <p>InvokedBefore: Specify a timestamp to limit your
     * results. For example, specify 2018-08-29T00:00:00Z to see sessions that started
     * before August 29, 2018.</p> </li> <li> <p>Target: Specify an instance to which
     * session connections have been made.</p> </li> <li> <p>Owner: Specify an AWS user
     * account to see a list of sessions started by that user.</p> </li> <li>
     * <p>Status: Specify a valid session status to see a list of all sessions with
     * that status. Status values you can specify include:</p> <ul> <li>
     * <p>Connected</p> </li> <li> <p>Connecting</p> </li> <li> <p>Disconnected</p>
     * </li> <li> <p>Terminated</p> </li> <li> <p>Terminating</p> </li> <li>
     * <p>Failed</p> </li> </ul> </li> </ul>
     */
    inline SessionFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    SessionFilterKey m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
