/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies configuration settings that determine which findings are published
   * to Security Hub automatically. For information about how Macie publishes
   * findings to Security Hub, see <a
   * href="https://docs.aws.amazon.com/macie/latest/user/securityhub-integration.html">Amazon
   * Macie integration with Security Hub</a> in the <i>Amazon Macie User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SecurityHubConfiguration">AWS
   * API Reference</a></p>
   */
  class SecurityHubConfiguration
  {
  public:
    AWS_MACIE2_API SecurityHubConfiguration();
    AWS_MACIE2_API SecurityHubConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SecurityHubConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to publish sensitive data findings to Security Hub. If you
     * set this value to true, Amazon Macie automatically publishes all sensitive data
     * findings that weren't suppressed by a findings filter. The default value is
     * false.</p>
     */
    inline bool GetPublishClassificationFindings() const{ return m_publishClassificationFindings; }

    /**
     * <p>Specifies whether to publish sensitive data findings to Security Hub. If you
     * set this value to true, Amazon Macie automatically publishes all sensitive data
     * findings that weren't suppressed by a findings filter. The default value is
     * false.</p>
     */
    inline bool PublishClassificationFindingsHasBeenSet() const { return m_publishClassificationFindingsHasBeenSet; }

    /**
     * <p>Specifies whether to publish sensitive data findings to Security Hub. If you
     * set this value to true, Amazon Macie automatically publishes all sensitive data
     * findings that weren't suppressed by a findings filter. The default value is
     * false.</p>
     */
    inline void SetPublishClassificationFindings(bool value) { m_publishClassificationFindingsHasBeenSet = true; m_publishClassificationFindings = value; }

    /**
     * <p>Specifies whether to publish sensitive data findings to Security Hub. If you
     * set this value to true, Amazon Macie automatically publishes all sensitive data
     * findings that weren't suppressed by a findings filter. The default value is
     * false.</p>
     */
    inline SecurityHubConfiguration& WithPublishClassificationFindings(bool value) { SetPublishClassificationFindings(value); return *this;}


    /**
     * <p>Specifies whether to publish policy findings to Security Hub. If you set this
     * value to true, Amazon Macie automatically publishes all new and updated policy
     * findings that weren't suppressed by a findings filter. The default value is
     * true.</p>
     */
    inline bool GetPublishPolicyFindings() const{ return m_publishPolicyFindings; }

    /**
     * <p>Specifies whether to publish policy findings to Security Hub. If you set this
     * value to true, Amazon Macie automatically publishes all new and updated policy
     * findings that weren't suppressed by a findings filter. The default value is
     * true.</p>
     */
    inline bool PublishPolicyFindingsHasBeenSet() const { return m_publishPolicyFindingsHasBeenSet; }

    /**
     * <p>Specifies whether to publish policy findings to Security Hub. If you set this
     * value to true, Amazon Macie automatically publishes all new and updated policy
     * findings that weren't suppressed by a findings filter. The default value is
     * true.</p>
     */
    inline void SetPublishPolicyFindings(bool value) { m_publishPolicyFindingsHasBeenSet = true; m_publishPolicyFindings = value; }

    /**
     * <p>Specifies whether to publish policy findings to Security Hub. If you set this
     * value to true, Amazon Macie automatically publishes all new and updated policy
     * findings that weren't suppressed by a findings filter. The default value is
     * true.</p>
     */
    inline SecurityHubConfiguration& WithPublishPolicyFindings(bool value) { SetPublishPolicyFindings(value); return *this;}

  private:

    bool m_publishClassificationFindings;
    bool m_publishClassificationFindingsHasBeenSet = false;

    bool m_publishPolicyFindings;
    bool m_publishPolicyFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
