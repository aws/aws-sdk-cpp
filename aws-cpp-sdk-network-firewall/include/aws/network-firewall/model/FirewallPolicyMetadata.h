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
   * <p>High-level information about a firewall policy, returned by operations like
   * create and describe. You can use the information provided in the metadata to
   * retrieve and manage a firewall policy. You can retrieve all objects for a
   * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallPolicyMetadata">AWS
   * API Reference</a></p>
   */
  class FirewallPolicyMetadata
  {
  public:
    AWS_NETWORKFIREWALL_API FirewallPolicyMetadata();
    AWS_NETWORKFIREWALL_API FirewallPolicyMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FirewallPolicyMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline FirewallPolicyMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline FirewallPolicyMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline FirewallPolicyMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>
     */
    inline FirewallPolicyMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>
     */
    inline FirewallPolicyMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>
     */
    inline FirewallPolicyMetadata& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
