/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/RuleGroupsNamespaceStatus.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_PROMETHEUSSERVICE_API RuleGroupsNamespaceDescription() = default;
    AWS_PROMETHEUSSERVICE_API RuleGroupsNamespaceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API RuleGroupsNamespaceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the rule groups namespace. For example,
     * <code>arn:aws:aps:&lt;region&gt;:123456789012:rulegroupsnamespace/ws-example1-1234-abcd-5678-ef90abcd1234/rulesfile1</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RuleGroupsNamespaceDescription& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule groups namespace.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RuleGroupsNamespaceDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the rule groups namespace.</p>
     */
    inline const RuleGroupsNamespaceStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = RuleGroupsNamespaceStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = RuleGroupsNamespaceStatus>
    RuleGroupsNamespaceDescription& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule groups file used in the namespace.</p> <p>For details about the rule
     * groups namespace structure, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-RuleGroupsNamespaceData.html">RuleGroupsNamespaceData</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Utils::ByteBuffer>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Utils::ByteBuffer>
    RuleGroupsNamespaceDescription& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the rule groups namespace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    RuleGroupsNamespaceDescription& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the rule groups namespace was most recently
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    RuleGroupsNamespaceDescription& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values that are associated with the rule groups
     * namespace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RuleGroupsNamespaceDescription& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RuleGroupsNamespaceDescription& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleGroupsNamespaceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::ByteBuffer m_data{};
    bool m_dataHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
