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
   * <p>A dimension is a name/value pair that is part of the identity of a metric.
   * You can assign up to 10 dimensions to a metric. Because dimensions are part of
   * the unique identifier for a metric, whenever you add a unique name/value pair to
   * one of your metrics, you are creating a new variation of that metric.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/Dimension">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCH_API Dimension
  {
  public:
    Dimension();
    Dimension(const Aws::Utils::Xml::XmlNode& xmlNode);
    Dimension& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the dimension. Dimension names cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the dimension. Dimension names cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the dimension. Dimension names cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the dimension. Dimension names cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the dimension. Dimension names cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the dimension. Dimension names cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline Dimension& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the dimension. Dimension names cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline Dimension& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dimension. Dimension names cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline Dimension& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the dimension. Dimension values cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the dimension. Dimension values cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the dimension. Dimension values cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the dimension. Dimension values cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the dimension. Dimension values cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the dimension. Dimension values cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline Dimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the dimension. Dimension values cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline Dimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the dimension. Dimension values cannot contain blank spaces or
     * non-ASCII characters.</p>
     */
    inline Dimension& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
