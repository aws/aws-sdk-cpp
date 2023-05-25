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
    AWS_CONFIGSERVICE_API Scope();
    AWS_CONFIGSERVICE_API Scope(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Scope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComplianceResourceTypes() const{ return m_complianceResourceTypes; }

    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline bool ComplianceResourceTypesHasBeenSet() const { return m_complianceResourceTypesHasBeenSet; }

    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline void SetComplianceResourceTypes(const Aws::Vector<Aws::String>& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes = value; }

    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline void SetComplianceResourceTypes(Aws::Vector<Aws::String>&& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes = std::move(value); }

    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline Scope& WithComplianceResourceTypes(const Aws::Vector<Aws::String>& value) { SetComplianceResourceTypes(value); return *this;}

    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline Scope& WithComplianceResourceTypes(Aws::Vector<Aws::String>&& value) { SetComplianceResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline Scope& AddComplianceResourceTypes(const Aws::String& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline Scope& AddComplianceResourceTypes(Aws::String&& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The resource types of only those Amazon Web Services resources that you want
     * to trigger an evaluation for the rule. You can only specify one type if you also
     * specify a resource ID for <code>ComplianceResourceId</code>.</p>
     */
    inline Scope& AddComplianceResourceTypes(const char* value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes.push_back(value); return *this; }


    /**
     * <p>The tag key that is applied to only those Amazon Web Services resources that
     * you want to trigger an evaluation for the rule.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The tag key that is applied to only those Amazon Web Services resources that
     * you want to trigger an evaluation for the rule.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The tag key that is applied to only those Amazon Web Services resources that
     * you want to trigger an evaluation for the rule.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The tag key that is applied to only those Amazon Web Services resources that
     * you want to trigger an evaluation for the rule.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The tag key that is applied to only those Amazon Web Services resources that
     * you want to trigger an evaluation for the rule.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The tag key that is applied to only those Amazon Web Services resources that
     * you want to trigger an evaluation for the rule.</p>
     */
    inline Scope& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The tag key that is applied to only those Amazon Web Services resources that
     * you want to trigger an evaluation for the rule.</p>
     */
    inline Scope& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The tag key that is applied to only those Amazon Web Services resources that
     * you want to trigger an evaluation for the rule.</p>
     */
    inline Scope& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>The tag value applied to only those Amazon Web Services resources that you
     * want to trigger an evaluation for the rule. If you specify a value for
     * <code>TagValue</code>, you must also specify a value for
     * <code>TagKey</code>.</p>
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }

    /**
     * <p>The tag value applied to only those Amazon Web Services resources that you
     * want to trigger an evaluation for the rule. If you specify a value for
     * <code>TagValue</code>, you must also specify a value for
     * <code>TagKey</code>.</p>
     */
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }

    /**
     * <p>The tag value applied to only those Amazon Web Services resources that you
     * want to trigger an evaluation for the rule. If you specify a value for
     * <code>TagValue</code>, you must also specify a value for
     * <code>TagKey</code>.</p>
     */
    inline void SetTagValue(const Aws::String& value) { m_tagValueHasBeenSet = true; m_tagValue = value; }

    /**
     * <p>The tag value applied to only those Amazon Web Services resources that you
     * want to trigger an evaluation for the rule. If you specify a value for
     * <code>TagValue</code>, you must also specify a value for
     * <code>TagKey</code>.</p>
     */
    inline void SetTagValue(Aws::String&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::move(value); }

    /**
     * <p>The tag value applied to only those Amazon Web Services resources that you
     * want to trigger an evaluation for the rule. If you specify a value for
     * <code>TagValue</code>, you must also specify a value for
     * <code>TagKey</code>.</p>
     */
    inline void SetTagValue(const char* value) { m_tagValueHasBeenSet = true; m_tagValue.assign(value); }

    /**
     * <p>The tag value applied to only those Amazon Web Services resources that you
     * want to trigger an evaluation for the rule. If you specify a value for
     * <code>TagValue</code>, you must also specify a value for
     * <code>TagKey</code>.</p>
     */
    inline Scope& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}

    /**
     * <p>The tag value applied to only those Amazon Web Services resources that you
     * want to trigger an evaluation for the rule. If you specify a value for
     * <code>TagValue</code>, you must also specify a value for
     * <code>TagKey</code>.</p>
     */
    inline Scope& WithTagValue(Aws::String&& value) { SetTagValue(std::move(value)); return *this;}

    /**
     * <p>The tag value applied to only those Amazon Web Services resources that you
     * want to trigger an evaluation for the rule. If you specify a value for
     * <code>TagValue</code>, you must also specify a value for
     * <code>TagKey</code>.</p>
     */
    inline Scope& WithTagValue(const char* value) { SetTagValue(value); return *this;}


    /**
     * <p>The ID of the only Amazon Web Services resource that you want to trigger an
     * evaluation for the rule. If you specify a resource ID, you must specify one
     * resource type for <code>ComplianceResourceTypes</code>.</p>
     */
    inline const Aws::String& GetComplianceResourceId() const{ return m_complianceResourceId; }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want to trigger an
     * evaluation for the rule. If you specify a resource ID, you must specify one
     * resource type for <code>ComplianceResourceTypes</code>.</p>
     */
    inline bool ComplianceResourceIdHasBeenSet() const { return m_complianceResourceIdHasBeenSet; }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want to trigger an
     * evaluation for the rule. If you specify a resource ID, you must specify one
     * resource type for <code>ComplianceResourceTypes</code>.</p>
     */
    inline void SetComplianceResourceId(const Aws::String& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = value; }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want to trigger an
     * evaluation for the rule. If you specify a resource ID, you must specify one
     * resource type for <code>ComplianceResourceTypes</code>.</p>
     */
    inline void SetComplianceResourceId(Aws::String&& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = std::move(value); }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want to trigger an
     * evaluation for the rule. If you specify a resource ID, you must specify one
     * resource type for <code>ComplianceResourceTypes</code>.</p>
     */
    inline void SetComplianceResourceId(const char* value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId.assign(value); }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want to trigger an
     * evaluation for the rule. If you specify a resource ID, you must specify one
     * resource type for <code>ComplianceResourceTypes</code>.</p>
     */
    inline Scope& WithComplianceResourceId(const Aws::String& value) { SetComplianceResourceId(value); return *this;}

    /**
     * <p>The ID of the only Amazon Web Services resource that you want to trigger an
     * evaluation for the rule. If you specify a resource ID, you must specify one
     * resource type for <code>ComplianceResourceTypes</code>.</p>
     */
    inline Scope& WithComplianceResourceId(Aws::String&& value) { SetComplianceResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the only Amazon Web Services resource that you want to trigger an
     * evaluation for the rule. If you specify a resource ID, you must specify one
     * resource type for <code>ComplianceResourceTypes</code>.</p>
     */
    inline Scope& WithComplianceResourceId(const char* value) { SetComplianceResourceId(value); return *this;}

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
