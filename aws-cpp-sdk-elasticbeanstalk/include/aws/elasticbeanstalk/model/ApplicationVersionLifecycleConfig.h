/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticbeanstalk/model/MaxCountRule.h>
#include <aws/elasticbeanstalk/model/MaxAgeRule.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>The application version lifecycle settings for an application. Defines the
   * rules that Elastic Beanstalk applies to an application's versions in order to
   * avoid hitting the per-region limit for application versions.</p> <p>When Elastic
   * Beanstalk deletes an application version from its database, you can no longer
   * deploy that version to an environment. The source bundle remains in S3 unless
   * you configure the rule to delete it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationVersionLifecycleConfig">AWS
   * API Reference</a></p>
   */
  class ApplicationVersionLifecycleConfig
  {
  public:
    AWS_ELASTICBEANSTALK_API ApplicationVersionLifecycleConfig();
    AWS_ELASTICBEANSTALK_API ApplicationVersionLifecycleConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ApplicationVersionLifecycleConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specify a max count rule to restrict the number of application versions that
     * are retained for an application.</p>
     */
    inline const MaxCountRule& GetMaxCountRule() const{ return m_maxCountRule; }

    /**
     * <p>Specify a max count rule to restrict the number of application versions that
     * are retained for an application.</p>
     */
    inline bool MaxCountRuleHasBeenSet() const { return m_maxCountRuleHasBeenSet; }

    /**
     * <p>Specify a max count rule to restrict the number of application versions that
     * are retained for an application.</p>
     */
    inline void SetMaxCountRule(const MaxCountRule& value) { m_maxCountRuleHasBeenSet = true; m_maxCountRule = value; }

    /**
     * <p>Specify a max count rule to restrict the number of application versions that
     * are retained for an application.</p>
     */
    inline void SetMaxCountRule(MaxCountRule&& value) { m_maxCountRuleHasBeenSet = true; m_maxCountRule = std::move(value); }

    /**
     * <p>Specify a max count rule to restrict the number of application versions that
     * are retained for an application.</p>
     */
    inline ApplicationVersionLifecycleConfig& WithMaxCountRule(const MaxCountRule& value) { SetMaxCountRule(value); return *this;}

    /**
     * <p>Specify a max count rule to restrict the number of application versions that
     * are retained for an application.</p>
     */
    inline ApplicationVersionLifecycleConfig& WithMaxCountRule(MaxCountRule&& value) { SetMaxCountRule(std::move(value)); return *this;}


    /**
     * <p>Specify a max age rule to restrict the length of time that application
     * versions are retained for an application.</p>
     */
    inline const MaxAgeRule& GetMaxAgeRule() const{ return m_maxAgeRule; }

    /**
     * <p>Specify a max age rule to restrict the length of time that application
     * versions are retained for an application.</p>
     */
    inline bool MaxAgeRuleHasBeenSet() const { return m_maxAgeRuleHasBeenSet; }

    /**
     * <p>Specify a max age rule to restrict the length of time that application
     * versions are retained for an application.</p>
     */
    inline void SetMaxAgeRule(const MaxAgeRule& value) { m_maxAgeRuleHasBeenSet = true; m_maxAgeRule = value; }

    /**
     * <p>Specify a max age rule to restrict the length of time that application
     * versions are retained for an application.</p>
     */
    inline void SetMaxAgeRule(MaxAgeRule&& value) { m_maxAgeRuleHasBeenSet = true; m_maxAgeRule = std::move(value); }

    /**
     * <p>Specify a max age rule to restrict the length of time that application
     * versions are retained for an application.</p>
     */
    inline ApplicationVersionLifecycleConfig& WithMaxAgeRule(const MaxAgeRule& value) { SetMaxAgeRule(value); return *this;}

    /**
     * <p>Specify a max age rule to restrict the length of time that application
     * versions are retained for an application.</p>
     */
    inline ApplicationVersionLifecycleConfig& WithMaxAgeRule(MaxAgeRule&& value) { SetMaxAgeRule(std::move(value)); return *this;}

  private:

    MaxCountRule m_maxCountRule;
    bool m_maxCountRuleHasBeenSet = false;

    MaxAgeRule m_maxAgeRule;
    bool m_maxAgeRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
