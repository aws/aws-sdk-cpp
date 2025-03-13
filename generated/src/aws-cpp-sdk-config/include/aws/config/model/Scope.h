/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Defines which resources trigger an evaluation for an Config rule. The scope
   * can include one or more resource types, a combination of a tag key and value, or
   * a combination of one resource type and one resource ID. Specify a scope to
   * constrain which resources trigger an evaluation for a rule. Otherwise,
   * evaluations for the rule are triggered when any resource in your recording group
   * changes in configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/Scope">AWS API
   * Reference</a></p>
   */
  class Scope
  {
  public:
    AWS_CONFIGSERVICE_API Scope() = default;
    AWS_CONFIGSERVICE_API Scope(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Scope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComplianceResourceTypes() const { return m_complianceResourceTypes; }
    inline bool ComplianceResourceTypesHasBeenSet() const { return m_complianceResourceTypesHasBeenSet; }
    template<typename ComplianceResourceTypesT = Aws::Vector<Aws::String>>
    void SetComplianceResourceTypes(ComplianceResourceTypesT&& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes = std::forward<ComplianceResourceTypesT>(value); }
    template<typename ComplianceResourceTypesT = Aws::Vector<Aws::String>>
    Scope& WithComplianceResourceTypes(ComplianceResourceTypesT&& value) { SetComplianceResourceTypes(std::forward<ComplianceResourceTypesT>(value)); return *this;}
    template<typename ComplianceResourceTypesT = Aws::String>
    Scope& AddComplianceResourceTypes(ComplianceResourceTypesT&& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes.emplace_back(std::forward<ComplianceResourceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tag key that is applied to only those Amazon Web Services resources that
     * you want to trigger an evaluation for the rule.</p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    Scope& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value applied to only those Amazon Web Services resources that you
     * want to trigger an evaluation for the rule. If you specify a value for
     * <code>TagValue</code>, you must also specify a value for
     * <code>TagKey</code>.</p>
     */
    inline const Aws::String& GetTagValue() const { return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    template<typename TagValueT = Aws::String>
    void SetTagValue(TagValueT&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::forward<TagValueT>(value); }
    template<typename TagValueT = Aws::String>
    Scope& WithTagValue(TagValueT&& value) { SetTagValue(std::forward<TagValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the only Amazon Web Services resource that you want to trigger an
     * evaluation for the rule. If you specify a resource ID, you must specify one
     * resource type for <code>ComplianceResourceTypes</code>.</p>
     */
    inline const Aws::String& GetComplianceResourceId() const { return m_complianceResourceId; }
    inline bool ComplianceResourceIdHasBeenSet() const { return m_complianceResourceIdHasBeenSet; }
    template<typename ComplianceResourceIdT = Aws::String>
    void SetComplianceResourceId(ComplianceResourceIdT&& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = std::forward<ComplianceResourceIdT>(value); }
    template<typename ComplianceResourceIdT = Aws::String>
    Scope& WithComplianceResourceId(ComplianceResourceIdT&& value) { SetComplianceResourceId(std::forward<ComplianceResourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_complianceResourceTypes;
    bool m_complianceResourceTypesHasBeenSet = false;

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;

    Aws::String m_complianceResourceId;
    bool m_complianceResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
