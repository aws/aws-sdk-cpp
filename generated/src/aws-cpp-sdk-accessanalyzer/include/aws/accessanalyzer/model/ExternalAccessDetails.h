/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/FindingSource.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about an external access finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ExternalAccessDetails">AWS
   * API Reference</a></p>
   */
  class ExternalAccessDetails
  {
  public:
    AWS_ACCESSANALYZER_API ExternalAccessDetails();
    AWS_ACCESSANALYZER_API ExternalAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API ExternalAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const{ return m_action; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline void SetAction(const Aws::Vector<Aws::String>& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline void SetAction(Aws::Vector<Aws::String>&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline ExternalAccessDetails& WithAction(const Aws::Vector<Aws::String>& value) { SetAction(value); return *this;}

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline ExternalAccessDetails& WithAction(Aws::Vector<Aws::String>&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline ExternalAccessDetails& AddAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline ExternalAccessDetails& AddAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action.push_back(std::move(value)); return *this; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline ExternalAccessDetails& AddAction(const char* value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }


    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCondition() const{ return m_condition; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline void SetCondition(const Aws::Map<Aws::String, Aws::String>& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline void SetCondition(Aws::Map<Aws::String, Aws::String>&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline ExternalAccessDetails& WithCondition(const Aws::Map<Aws::String, Aws::String>& value) { SetCondition(value); return *this;}

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline ExternalAccessDetails& WithCondition(Aws::Map<Aws::String, Aws::String>&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline ExternalAccessDetails& AddCondition(const Aws::String& key, const Aws::String& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline ExternalAccessDetails& AddCondition(Aws::String&& key, const Aws::String& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), value); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline ExternalAccessDetails& AddCondition(const Aws::String& key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline ExternalAccessDetails& AddCondition(Aws::String&& key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline ExternalAccessDetails& AddCondition(const char* key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline ExternalAccessDetails& AddCondition(Aws::String&& key, const char* value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), value); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline ExternalAccessDetails& AddCondition(const char* key, const char* value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether the external access finding is public.</p>
     */
    inline bool GetIsPublic() const{ return m_isPublic; }

    /**
     * <p>Specifies whether the external access finding is public.</p>
     */
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }

    /**
     * <p>Specifies whether the external access finding is public.</p>
     */
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }

    /**
     * <p>Specifies whether the external access finding is public.</p>
     */
    inline ExternalAccessDetails& WithIsPublic(bool value) { SetIsPublic(value); return *this;}


    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline void SetPrincipal(const Aws::Map<Aws::String, Aws::String>& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline void SetPrincipal(Aws::Map<Aws::String, Aws::String>&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline ExternalAccessDetails& WithPrincipal(const Aws::Map<Aws::String, Aws::String>& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline ExternalAccessDetails& WithPrincipal(Aws::Map<Aws::String, Aws::String>&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline ExternalAccessDetails& AddPrincipal(const Aws::String& key, const Aws::String& value) { m_principalHasBeenSet = true; m_principal.emplace(key, value); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline ExternalAccessDetails& AddPrincipal(Aws::String&& key, const Aws::String& value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), value); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline ExternalAccessDetails& AddPrincipal(const Aws::String& key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline ExternalAccessDetails& AddPrincipal(Aws::String&& key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline ExternalAccessDetails& AddPrincipal(const char* key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline ExternalAccessDetails& AddPrincipal(Aws::String&& key, const char* value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), value); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline ExternalAccessDetails& AddPrincipal(const char* key, const char* value) { m_principalHasBeenSet = true; m_principal.emplace(key, value); return *this; }


    /**
     * <p>The sources of the external access finding. This indicates how the access
     * that generated the finding is granted. It is populated for Amazon S3 bucket
     * findings.</p>
     */
    inline const Aws::Vector<FindingSource>& GetSources() const{ return m_sources; }

    /**
     * <p>The sources of the external access finding. This indicates how the access
     * that generated the finding is granted. It is populated for Amazon S3 bucket
     * findings.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The sources of the external access finding. This indicates how the access
     * that generated the finding is granted. It is populated for Amazon S3 bucket
     * findings.</p>
     */
    inline void SetSources(const Aws::Vector<FindingSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The sources of the external access finding. This indicates how the access
     * that generated the finding is granted. It is populated for Amazon S3 bucket
     * findings.</p>
     */
    inline void SetSources(Aws::Vector<FindingSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The sources of the external access finding. This indicates how the access
     * that generated the finding is granted. It is populated for Amazon S3 bucket
     * findings.</p>
     */
    inline ExternalAccessDetails& WithSources(const Aws::Vector<FindingSource>& value) { SetSources(value); return *this;}

    /**
     * <p>The sources of the external access finding. This indicates how the access
     * that generated the finding is granted. It is populated for Amazon S3 bucket
     * findings.</p>
     */
    inline ExternalAccessDetails& WithSources(Aws::Vector<FindingSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The sources of the external access finding. This indicates how the access
     * that generated the finding is granted. It is populated for Amazon S3 bucket
     * findings.</p>
     */
    inline ExternalAccessDetails& AddSources(const FindingSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The sources of the external access finding. This indicates how the access
     * that generated the finding is granted. It is populated for Amazon S3 bucket
     * findings.</p>
     */
    inline ExternalAccessDetails& AddSources(FindingSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_action;
    bool m_actionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_condition;
    bool m_conditionHasBeenSet = false;

    bool m_isPublic;
    bool m_isPublicHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_principal;
    bool m_principalHasBeenSet = false;

    Aws::Vector<FindingSource> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
