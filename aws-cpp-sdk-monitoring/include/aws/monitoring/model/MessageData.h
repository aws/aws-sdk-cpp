/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * a description.</p> <p>If a cross-Region <code>GetMetricData</code> operation
   * fails with a code of <code>Forbidden</code> and a value of <code>Authentication
   * too complex to retrieve cross region data</code>, you can correct the problem by
   * running the <code>GetMetricData</code> operation in the same Region where the
   * metric data is.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MessageData">AWS
   * API Reference</a></p>
   */
  class MessageData
  {
  public:
    AWS_CLOUDWATCH_API MessageData();
    AWS_CLOUDWATCH_API MessageData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MessageData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The error code or status code associated with the message.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error code or status code associated with the message.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

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
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

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
    bool m_codeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
