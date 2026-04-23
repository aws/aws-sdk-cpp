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
  class AWS_ELASTICBEANSTALK_API ApplicationVersionLifecycleConfig
  {
  public:
    ApplicationVersionLifecycleConfig();
    ApplicationVersionLifecycleConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    ApplicationVersionLifecycleConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_maxCountRuleHasBeenSet;

    MaxAgeRule m_maxAgeRule;
    bool m_maxAgeRuleHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
