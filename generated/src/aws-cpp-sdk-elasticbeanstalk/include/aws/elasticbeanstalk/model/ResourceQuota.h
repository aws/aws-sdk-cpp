/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>The AWS Elastic Beanstalk quota information for a single resource type in an
   * AWS account. It reflects the resource's limits for this account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ResourceQuota">AWS
   * API Reference</a></p>
   */
  class ResourceQuota
  {
  public:
    AWS_ELASTICBEANSTALK_API ResourceQuota();
    AWS_ELASTICBEANSTALK_API ResourceQuota(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ResourceQuota& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The maximum number of instances of this Elastic Beanstalk resource type that
     * an AWS account can use.</p>
     */
    inline int GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum number of instances of this Elastic Beanstalk resource type that
     * an AWS account can use.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>The maximum number of instances of this Elastic Beanstalk resource type that
     * an AWS account can use.</p>
     */
    inline void SetMaximum(int value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum number of instances of this Elastic Beanstalk resource type that
     * an AWS account can use.</p>
     */
    inline ResourceQuota& WithMaximum(int value) { SetMaximum(value); return *this;}

  private:

    int m_maximum;
    bool m_maximumHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
