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
    AWS_ELASTICBEANSTALK_API ApplicationVersionLifecycleConfig() = default;
    AWS_ELASTICBEANSTALK_API ApplicationVersionLifecycleConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ApplicationVersionLifecycleConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specify a max count rule to restrict the number of application versions that
     * are retained for an application.</p>
     */
    inline const MaxCountRule& GetMaxCountRule() const { return m_maxCountRule; }
    inline bool MaxCountRuleHasBeenSet() const { return m_maxCountRuleHasBeenSet; }
    template<typename MaxCountRuleT = MaxCountRule>
    void SetMaxCountRule(MaxCountRuleT&& value) { m_maxCountRuleHasBeenSet = true; m_maxCountRule = std::forward<MaxCountRuleT>(value); }
    template<typename MaxCountRuleT = MaxCountRule>
    ApplicationVersionLifecycleConfig& WithMaxCountRule(MaxCountRuleT&& value) { SetMaxCountRule(std::forward<MaxCountRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a max age rule to restrict the length of time that application
     * versions are retained for an application.</p>
     */
    inline const MaxAgeRule& GetMaxAgeRule() const { return m_maxAgeRule; }
    inline bool MaxAgeRuleHasBeenSet() const { return m_maxAgeRuleHasBeenSet; }
    template<typename MaxAgeRuleT = MaxAgeRule>
    void SetMaxAgeRule(MaxAgeRuleT&& value) { m_maxAgeRuleHasBeenSet = true; m_maxAgeRule = std::forward<MaxAgeRuleT>(value); }
    template<typename MaxAgeRuleT = MaxAgeRule>
    ApplicationVersionLifecycleConfig& WithMaxAgeRule(MaxAgeRuleT&& value) { SetMaxAgeRule(std::forward<MaxAgeRuleT>(value)); return *this;}
    ///@}
  private:

    MaxCountRule m_maxCountRule;
    bool m_maxCountRuleHasBeenSet = false;

    MaxAgeRule m_maxAgeRule;
    bool m_maxAgeRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
