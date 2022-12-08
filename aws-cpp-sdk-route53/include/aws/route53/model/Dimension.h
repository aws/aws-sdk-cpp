/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>For the metric that the CloudWatch alarm is associated with, a complex type
   * that contains information about one dimension.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/Dimension">AWS
   * API Reference</a></p>
   */
  class Dimension
  {
  public:
    AWS_ROUTE53_API Dimension();
    AWS_ROUTE53_API Dimension(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API Dimension& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the name of one
     * dimension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the name of one
     * dimension.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the name of one
     * dimension.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the name of one
     * dimension.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the name of one
     * dimension.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the name of one
     * dimension.</p>
     */
    inline Dimension& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the name of one
     * dimension.</p>
     */
    inline Dimension& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the name of one
     * dimension.</p>
     */
    inline Dimension& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value of one
     * dimension.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value of one
     * dimension.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value of one
     * dimension.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value of one
     * dimension.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value of one
     * dimension.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value of one
     * dimension.</p>
     */
    inline Dimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value of one
     * dimension.</p>
     */
    inline Dimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value of one
     * dimension.</p>
     */
    inline Dimension& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
