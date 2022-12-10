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
   * <p>A lifecycle rule that deletes the oldest application version when the maximum
   * count is exceeded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/MaxCountRule">AWS
   * API Reference</a></p>
   */
  class MaxCountRule
  {
  public:
    AWS_ELASTICBEANSTALK_API MaxCountRule();
    AWS_ELASTICBEANSTALK_API MaxCountRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API MaxCountRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline MaxCountRule& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specify the maximum number of application versions to retain.</p>
     */
    inline int GetMaxCount() const{ return m_maxCount; }

    /**
     * <p>Specify the maximum number of application versions to retain.</p>
     */
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }

    /**
     * <p>Specify the maximum number of application versions to retain.</p>
     */
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }

    /**
     * <p>Specify the maximum number of application versions to retain.</p>
     */
    inline MaxCountRule& WithMaxCount(int value) { SetMaxCount(value); return *this;}


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
    inline MaxCountRule& WithDeleteSourceFromS3(bool value) { SetDeleteSourceFromS3(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_maxCount;
    bool m_maxCountHasBeenSet = false;

    bool m_deleteSourceFromS3;
    bool m_deleteSourceFromS3HasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
