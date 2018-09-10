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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>A message returned by the <code>GetMetricData</code>API, including a code and
   * a description.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MessageData">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCH_API MessageData
  {
  public:
    MessageData();
    MessageData(const Aws::Utils::Xml::XmlNode& xmlNode);
    MessageData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The error code or status code associated with the message.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error code or status code associated with the message.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code or status code associated with the message.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code or status code associated with the message.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The error code or status code associated with the message.</p>
     */
    inline MessageData& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The error code or status code associated with the message.</p>
     */
    inline MessageData& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The error code or status code associated with the message.</p>
     */
    inline MessageData& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The message text.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The message text.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The message text.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The message text.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The message text.</p>
     */
    inline MessageData& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The message text.</p>
     */
    inline MessageData& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The message text.</p>
     */
    inline MessageData& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
