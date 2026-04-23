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
  class AWS_ELASTICBEANSTALK_API MaxAgeRule
  {
  public:
    MaxAgeRule();
    MaxAgeRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    MaxAgeRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_enabledHasBeenSet;

    int m_maxAgeInDays;
    bool m_maxAgeInDaysHasBeenSet;

    bool m_deleteSourceFromS3;
    bool m_deleteSourceFromS3HasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
