/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Array.h>
#include <aws/amp/model/RuleGroupsNamespaceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>The details about one rule groups namespace. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/RuleGroupsNamespaceDescription">AWS
   * API Reference</a></p>
   */
  class RuleGroupsNamespaceDescription
  {
  public:
    AWS_PROMETHEUSSERVICE_API RuleGroupsNamespaceDescription();
    AWS_PROMETHEUSSERVICE_API RuleGroupsNamespaceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API RuleGroupsNamespaceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the rule groups namespace. For example,
     * <code>arn:aws:aps:&lt;region&gt;:123456789012:rulegroupsnamespace/ws-example1-1234-abcd-5678-ef90abcd1234/rulesfile1</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RuleGroupsNamespaceDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RuleGroupsNamespaceDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RuleGroupsNamespaceDescription& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the rule groups namespace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline RuleGroupsNamespaceDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline RuleGroupsNamespaceDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule groups file used in the namespace.</p> <p>For details about the rule
     * groups namespace structure, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-RuleGroupsNamespaceData.html">RuleGroupsNamespaceData</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline RuleGroupsNamespaceDescription& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}
    inline RuleGroupsNamespaceDescription& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the rule groups namespace was most recently
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline RuleGroupsNamespaceDescription& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline RuleGroupsNamespaceDescription& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule groups namespace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RuleGroupsNamespaceDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RuleGroupsNamespaceDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RuleGroupsNamespaceDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the rule groups namespace.</p>
     */
    inline const RuleGroupsNamespaceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RuleGroupsNamespaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RuleGroupsNamespaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RuleGroupsNamespaceDescription& WithStatus(const RuleGroupsNamespaceStatus& value) { SetStatus(value); return *this;}
    inline RuleGroupsNamespaceDescription& WithStatus(RuleGroupsNamespaceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values that are associated with the rule groups
     * namespace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RuleGroupsNamespaceDescription& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RuleGroupsNamespaceDescription& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RuleGroupsNamespaceDescription& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline RuleGroupsNamespaceDescription& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RuleGroupsNamespaceDescription& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RuleGroupsNamespaceDescription& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RuleGroupsNamespaceDescription& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RuleGroupsNamespaceDescription& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RuleGroupsNamespaceDescription& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleGroupsNamespaceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
