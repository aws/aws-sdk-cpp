/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>High-level information about the managed rule group that your own rule group
   * is copied from. You can use the the metadata to track version updates made to
   * the originating rule group. You can retrieve all objects for a rule group by
   * calling <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html">DescribeRuleGroup</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/SourceMetadata">AWS
   * API Reference</a></p>
   */
  class SourceMetadata
  {
  public:
    AWS_NETWORKFIREWALL_API SourceMetadata();
    AWS_NETWORKFIREWALL_API SourceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API SourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the rule group that your own rule group is
     * copied from.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group that your own rule group is
     * copied from.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group that your own rule group is
     * copied from.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group that your own rule group is
     * copied from.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group that your own rule group is
     * copied from.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group that your own rule group is
     * copied from.</p>
     */
    inline SourceMetadata& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group that your own rule group is
     * copied from.</p>
     */
    inline SourceMetadata& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group that your own rule group is
     * copied from.</p>
     */
    inline SourceMetadata& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The update token of the Amazon Web Services managed rule group that your own
     * rule group is copied from. To determine the update token for the managed rule
     * group, call <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html#networkfirewall-DescribeRuleGroup-response-UpdateToken">DescribeRuleGroup</a>.</p>
     */
    inline const Aws::String& GetSourceUpdateToken() const{ return m_sourceUpdateToken; }

    /**
     * <p>The update token of the Amazon Web Services managed rule group that your own
     * rule group is copied from. To determine the update token for the managed rule
     * group, call <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html#networkfirewall-DescribeRuleGroup-response-UpdateToken">DescribeRuleGroup</a>.</p>
     */
    inline bool SourceUpdateTokenHasBeenSet() const { return m_sourceUpdateTokenHasBeenSet; }

    /**
     * <p>The update token of the Amazon Web Services managed rule group that your own
     * rule group is copied from. To determine the update token for the managed rule
     * group, call <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html#networkfirewall-DescribeRuleGroup-response-UpdateToken">DescribeRuleGroup</a>.</p>
     */
    inline void SetSourceUpdateToken(const Aws::String& value) { m_sourceUpdateTokenHasBeenSet = true; m_sourceUpdateToken = value; }

    /**
     * <p>The update token of the Amazon Web Services managed rule group that your own
     * rule group is copied from. To determine the update token for the managed rule
     * group, call <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html#networkfirewall-DescribeRuleGroup-response-UpdateToken">DescribeRuleGroup</a>.</p>
     */
    inline void SetSourceUpdateToken(Aws::String&& value) { m_sourceUpdateTokenHasBeenSet = true; m_sourceUpdateToken = std::move(value); }

    /**
     * <p>The update token of the Amazon Web Services managed rule group that your own
     * rule group is copied from. To determine the update token for the managed rule
     * group, call <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html#networkfirewall-DescribeRuleGroup-response-UpdateToken">DescribeRuleGroup</a>.</p>
     */
    inline void SetSourceUpdateToken(const char* value) { m_sourceUpdateTokenHasBeenSet = true; m_sourceUpdateToken.assign(value); }

    /**
     * <p>The update token of the Amazon Web Services managed rule group that your own
     * rule group is copied from. To determine the update token for the managed rule
     * group, call <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html#networkfirewall-DescribeRuleGroup-response-UpdateToken">DescribeRuleGroup</a>.</p>
     */
    inline SourceMetadata& WithSourceUpdateToken(const Aws::String& value) { SetSourceUpdateToken(value); return *this;}

    /**
     * <p>The update token of the Amazon Web Services managed rule group that your own
     * rule group is copied from. To determine the update token for the managed rule
     * group, call <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html#networkfirewall-DescribeRuleGroup-response-UpdateToken">DescribeRuleGroup</a>.</p>
     */
    inline SourceMetadata& WithSourceUpdateToken(Aws::String&& value) { SetSourceUpdateToken(std::move(value)); return *this;}

    /**
     * <p>The update token of the Amazon Web Services managed rule group that your own
     * rule group is copied from. To determine the update token for the managed rule
     * group, call <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/APIReference/API_DescribeRuleGroup.html#networkfirewall-DescribeRuleGroup-response-UpdateToken">DescribeRuleGroup</a>.</p>
     */
    inline SourceMetadata& WithSourceUpdateToken(const char* value) { SetSourceUpdateToken(value); return *this;}

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_sourceUpdateToken;
    bool m_sourceUpdateTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
