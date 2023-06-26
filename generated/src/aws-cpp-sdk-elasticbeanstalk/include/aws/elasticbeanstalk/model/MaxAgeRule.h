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
   * <p>A lifecycle rule that deletes application versions after the specified number
   * of days.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/MaxAgeRule">AWS
   * API Reference</a></p>
   */
  class MaxAgeRule
  {
  public:
    AWS_ELASTICBEANSTALK_API MaxAgeRule();
    AWS_ELASTICBEANSTALK_API MaxAgeRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API MaxAgeRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specify <code>true</code> to apply the rule, or <code>false</code> to disable
     * it.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specify <code>true</code> to apply the rule, or <code>false</code> to disable
     * it.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specify <code>true</code> to apply the rule, or <code>false</code> to disable
     * it.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specify <code>true</code> to apply the rule, or <code>false</code> to disable
     * it.</p>
     */
    inline MaxAgeRule& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specify the number of days to retain an application versions.</p>
     */
    inline int GetMaxAgeInDays() const{ return m_maxAgeInDays; }

    /**
     * <p>Specify the number of days to retain an application versions.</p>
     */
    inline bool MaxAgeInDaysHasBeenSet() const { return m_maxAgeInDaysHasBeenSet; }

    /**
     * <p>Specify the number of days to retain an application versions.</p>
     */
    inline void SetMaxAgeInDays(int value) { m_maxAgeInDaysHasBeenSet = true; m_maxAgeInDays = value; }

    /**
     * <p>Specify the number of days to retain an application versions.</p>
     */
    inline MaxAgeRule& WithMaxAgeInDays(int value) { SetMaxAgeInDays(value); return *this;}


    /**
     * <p>Set to <code>true</code> to delete a version's source bundle from Amazon S3
     * when Elastic Beanstalk deletes the application version.</p>
     */
    inline bool GetDeleteSourceFromS3() const{ return m_deleteSourceFromS3; }

    /**
     * <p>Set to <code>true</code> to delete a version's source bundle from Amazon S3
     * when Elastic Beanstalk deletes the application version.</p>
     */
    inline bool DeleteSourceFromS3HasBeenSet() const { return m_deleteSourceFromS3HasBeenSet; }

    /**
     * <p>Set to <code>true</code> to delete a version's source bundle from Amazon S3
     * when Elastic Beanstalk deletes the application version.</p>
     */
    inline void SetDeleteSourceFromS3(bool value) { m_deleteSourceFromS3HasBeenSet = true; m_deleteSourceFromS3 = value; }

    /**
     * <p>Set to <code>true</code> to delete a version's source bundle from Amazon S3
     * when Elastic Beanstalk deletes the application version.</p>
     */
    inline MaxAgeRule& WithDeleteSourceFromS3(bool value) { SetDeleteSourceFromS3(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_maxAgeInDays;
    bool m_maxAgeInDaysHasBeenSet = false;

    bool m_deleteSourceFromS3;
    bool m_deleteSourceFromS3HasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
