/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightHealth.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about the health of Amazon Web Services resources in your
   * account that are specified by an Amazon Web Services tag <i>key</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/TagHealth">AWS
   * API Reference</a></p>
   */
  class TagHealth
  {
  public:
    AWS_DEVOPSGURU_API TagHealth() = default;
    AWS_DEVOPSGURU_API TagHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API TagHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Web Services tag <i>key</i> that is used to identify the Amazon Web
     * Services resources that DevOps Guru analyzes. All Amazon Web Services resources
     * in your account and Region tagged with this <i>key</i> make up your DevOps Guru
     * application and analysis boundary.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline const Aws::String& GetAppBoundaryKey() const { return m_appBoundaryKey; }
    inline bool AppBoundaryKeyHasBeenSet() const { return m_appBoundaryKeyHasBeenSet; }
    template<typename AppBoundaryKeyT = Aws::String>
    void SetAppBoundaryKey(AppBoundaryKeyT&& value) { m_appBoundaryKeyHasBeenSet = true; m_appBoundaryKey = std::forward<AppBoundaryKeyT>(value); }
    template<typename AppBoundaryKeyT = Aws::String>
    TagHealth& WithAppBoundaryKey(AppBoundaryKeyT&& value) { SetAppBoundaryKey(std::forward<AppBoundaryKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value in an Amazon Web Services tag.</p> <p>The tag's <i>value</i> is an
     * optional field used to associate a string with the tag <i>key</i> (for example,
     * <code>111122223333</code>, <code>Production</code>, or a team name). The
     * <i>key</i> and <i>value</i> are the tag's <i>key</i> pair. Omitting the tag
     * <i>value</i> is the same as using an empty string. Like tag <i>keys</i>, tag
     * <i>values</i> are case-sensitive. You can specify a maximum of 256 characters
     * for a tag value.</p>
     */
    inline const Aws::String& GetTagValue() const { return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    template<typename TagValueT = Aws::String>
    void SetTagValue(TagValueT&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::forward<TagValueT>(value); }
    template<typename TagValueT = Aws::String>
    TagHealth& WithTagValue(TagValueT&& value) { SetTagValue(std::forward<TagValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the health of the Amazon Web Services resources in your
     * account that are specified by an Amazon Web Services tag, including the number
     * of open proactive, open reactive insights, and the Mean Time to Recover (MTTR)
     * of closed insights. </p>
     */
    inline const InsightHealth& GetInsight() const { return m_insight; }
    inline bool InsightHasBeenSet() const { return m_insightHasBeenSet; }
    template<typename InsightT = InsightHealth>
    void SetInsight(InsightT&& value) { m_insightHasBeenSet = true; m_insight = std::forward<InsightT>(value); }
    template<typename InsightT = InsightHealth>
    TagHealth& WithInsight(InsightT&& value) { SetInsight(std::forward<InsightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Number of resources that DevOps Guru is monitoring in your account that are
     * specified by an Amazon Web Services tag. </p>
     */
    inline long long GetAnalyzedResourceCount() const { return m_analyzedResourceCount; }
    inline bool AnalyzedResourceCountHasBeenSet() const { return m_analyzedResourceCountHasBeenSet; }
    inline void SetAnalyzedResourceCount(long long value) { m_analyzedResourceCountHasBeenSet = true; m_analyzedResourceCount = value; }
    inline TagHealth& WithAnalyzedResourceCount(long long value) { SetAnalyzedResourceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_appBoundaryKey;
    bool m_appBoundaryKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;

    InsightHealth m_insight;
    bool m_insightHasBeenSet = false;

    long long m_analyzedResourceCount{0};
    bool m_analyzedResourceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
