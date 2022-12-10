/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/IPSetReference.h>
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
   * <p>Contains a set of IP set references.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ReferenceSets">AWS
   * API Reference</a></p>
   */
  class ReferenceSets
  {
  public:
    AWS_NETWORKFIREWALL_API ReferenceSets();
    AWS_NETWORKFIREWALL_API ReferenceSets(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API ReferenceSets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of IP set references.</p>
     */
    inline const Aws::Map<Aws::String, IPSetReference>& GetIPSetReferences() const{ return m_iPSetReferences; }

    /**
     * <p>The list of IP set references.</p>
     */
    inline bool IPSetReferencesHasBeenSet() const { return m_iPSetReferencesHasBeenSet; }

    /**
     * <p>The list of IP set references.</p>
     */
    inline void SetIPSetReferences(const Aws::Map<Aws::String, IPSetReference>& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences = value; }

    /**
     * <p>The list of IP set references.</p>
     */
    inline void SetIPSetReferences(Aws::Map<Aws::String, IPSetReference>&& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences = std::move(value); }

    /**
     * <p>The list of IP set references.</p>
     */
    inline ReferenceSets& WithIPSetReferences(const Aws::Map<Aws::String, IPSetReference>& value) { SetIPSetReferences(value); return *this;}

    /**
     * <p>The list of IP set references.</p>
     */
    inline ReferenceSets& WithIPSetReferences(Aws::Map<Aws::String, IPSetReference>&& value) { SetIPSetReferences(std::move(value)); return *this;}

    /**
     * <p>The list of IP set references.</p>
     */
    inline ReferenceSets& AddIPSetReferences(const Aws::String& key, const IPSetReference& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(key, value); return *this; }

    /**
     * <p>The list of IP set references.</p>
     */
    inline ReferenceSets& AddIPSetReferences(Aws::String&& key, const IPSetReference& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of IP set references.</p>
     */
    inline ReferenceSets& AddIPSetReferences(const Aws::String& key, IPSetReference&& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of IP set references.</p>
     */
    inline ReferenceSets& AddIPSetReferences(Aws::String&& key, IPSetReference&& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of IP set references.</p>
     */
    inline ReferenceSets& AddIPSetReferences(const char* key, IPSetReference&& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of IP set references.</p>
     */
    inline ReferenceSets& AddIPSetReferences(const char* key, const IPSetReference& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, IPSetReference> m_iPSetReferences;
    bool m_iPSetReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
