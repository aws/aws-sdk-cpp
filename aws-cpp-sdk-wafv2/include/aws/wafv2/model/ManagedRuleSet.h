/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/ManagedRuleSetVersion.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A set of rules that is managed by Amazon Web Services and Amazon Web Services
   * Marketplace sellers to provide versioned managed rule groups for customers of
   * WAF.</p>  <p>This is intended for use only by vendors of managed rule
   * sets. Vendors are Amazon Web Services and Amazon Web Services Marketplace
   * sellers. </p> <p>Vendors, you can use the managed rule set APIs to provide
   * controlled rollout of your versioned managed rule group offerings for your
   * customers. The APIs are <code>ListManagedRuleSets</code>,
   * <code>GetManagedRuleSet</code>, <code>PutManagedRuleSetVersions</code>, and
   * <code>UpdateManagedRuleSetVersionExpiryDate</code>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleSet">AWS
   * API Reference</a></p>
   */
  class ManagedRuleSet
  {
  public:
    AWS_WAFV2_API ManagedRuleSet();
    AWS_WAFV2_API ManagedRuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline ManagedRuleSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline ManagedRuleSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline ManagedRuleSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline ManagedRuleSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline ManagedRuleSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline ManagedRuleSet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline ManagedRuleSet& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline ManagedRuleSet& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline ManagedRuleSet& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline ManagedRuleSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline ManagedRuleSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline ManagedRuleSet& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline const Aws::Map<Aws::String, ManagedRuleSetVersion>& GetPublishedVersions() const{ return m_publishedVersions; }

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline bool PublishedVersionsHasBeenSet() const { return m_publishedVersionsHasBeenSet; }

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline void SetPublishedVersions(const Aws::Map<Aws::String, ManagedRuleSetVersion>& value) { m_publishedVersionsHasBeenSet = true; m_publishedVersions = value; }

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline void SetPublishedVersions(Aws::Map<Aws::String, ManagedRuleSetVersion>&& value) { m_publishedVersionsHasBeenSet = true; m_publishedVersions = std::move(value); }

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline ManagedRuleSet& WithPublishedVersions(const Aws::Map<Aws::String, ManagedRuleSetVersion>& value) { SetPublishedVersions(value); return *this;}

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline ManagedRuleSet& WithPublishedVersions(Aws::Map<Aws::String, ManagedRuleSetVersion>&& value) { SetPublishedVersions(std::move(value)); return *this;}

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline ManagedRuleSet& AddPublishedVersions(const Aws::String& key, const ManagedRuleSetVersion& value) { m_publishedVersionsHasBeenSet = true; m_publishedVersions.emplace(key, value); return *this; }

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline ManagedRuleSet& AddPublishedVersions(Aws::String&& key, const ManagedRuleSetVersion& value) { m_publishedVersionsHasBeenSet = true; m_publishedVersions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline ManagedRuleSet& AddPublishedVersions(const Aws::String& key, ManagedRuleSetVersion&& value) { m_publishedVersionsHasBeenSet = true; m_publishedVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline ManagedRuleSet& AddPublishedVersions(Aws::String&& key, ManagedRuleSetVersion&& value) { m_publishedVersionsHasBeenSet = true; m_publishedVersions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline ManagedRuleSet& AddPublishedVersions(const char* key, ManagedRuleSetVersion&& value) { m_publishedVersionsHasBeenSet = true; m_publishedVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline ManagedRuleSet& AddPublishedVersions(const char* key, const ManagedRuleSetVersion& value) { m_publishedVersionsHasBeenSet = true; m_publishedVersions.emplace(key, value); return *this; }


    /**
     * <p>The version that you would like your customers to use.</p>
     */
    inline const Aws::String& GetRecommendedVersion() const{ return m_recommendedVersion; }

    /**
     * <p>The version that you would like your customers to use.</p>
     */
    inline bool RecommendedVersionHasBeenSet() const { return m_recommendedVersionHasBeenSet; }

    /**
     * <p>The version that you would like your customers to use.</p>
     */
    inline void SetRecommendedVersion(const Aws::String& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = value; }

    /**
     * <p>The version that you would like your customers to use.</p>
     */
    inline void SetRecommendedVersion(Aws::String&& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = std::move(value); }

    /**
     * <p>The version that you would like your customers to use.</p>
     */
    inline void SetRecommendedVersion(const char* value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion.assign(value); }

    /**
     * <p>The version that you would like your customers to use.</p>
     */
    inline ManagedRuleSet& WithRecommendedVersion(const Aws::String& value) { SetRecommendedVersion(value); return *this;}

    /**
     * <p>The version that you would like your customers to use.</p>
     */
    inline ManagedRuleSet& WithRecommendedVersion(Aws::String&& value) { SetRecommendedVersion(std::move(value)); return *this;}

    /**
     * <p>The version that you would like your customers to use.</p>
     */
    inline ManagedRuleSet& WithRecommendedVersion(const char* value) { SetRecommendedVersion(value); return *this;}


    /**
     * <p>The label namespace prefix for the managed rule groups that are offered to
     * customers from this managed rule set. All labels that are added by rules in the
     * managed rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLabelNamespace() const{ return m_labelNamespace; }

    /**
     * <p>The label namespace prefix for the managed rule groups that are offered to
     * customers from this managed rule set. All labels that are added by rules in the
     * managed rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline bool LabelNamespaceHasBeenSet() const { return m_labelNamespaceHasBeenSet; }

    /**
     * <p>The label namespace prefix for the managed rule groups that are offered to
     * customers from this managed rule set. All labels that are added by rules in the
     * managed rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline void SetLabelNamespace(const Aws::String& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = value; }

    /**
     * <p>The label namespace prefix for the managed rule groups that are offered to
     * customers from this managed rule set. All labels that are added by rules in the
     * managed rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline void SetLabelNamespace(Aws::String&& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = std::move(value); }

    /**
     * <p>The label namespace prefix for the managed rule groups that are offered to
     * customers from this managed rule set. All labels that are added by rules in the
     * managed rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline void SetLabelNamespace(const char* value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace.assign(value); }

    /**
     * <p>The label namespace prefix for the managed rule groups that are offered to
     * customers from this managed rule set. All labels that are added by rules in the
     * managed rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline ManagedRuleSet& WithLabelNamespace(const Aws::String& value) { SetLabelNamespace(value); return *this;}

    /**
     * <p>The label namespace prefix for the managed rule groups that are offered to
     * customers from this managed rule set. All labels that are added by rules in the
     * managed rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline ManagedRuleSet& WithLabelNamespace(Aws::String&& value) { SetLabelNamespace(std::move(value)); return *this;}

    /**
     * <p>The label namespace prefix for the managed rule groups that are offered to
     * customers from this managed rule set. All labels that are added by rules in the
     * managed rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline ManagedRuleSet& WithLabelNamespace(const char* value) { SetLabelNamespace(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, ManagedRuleSetVersion> m_publishedVersions;
    bool m_publishedVersionsHasBeenSet = false;

    Aws::String m_recommendedVersion;
    bool m_recommendedVersionHasBeenSet = false;

    Aws::String m_labelNamespace;
    bool m_labelNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
