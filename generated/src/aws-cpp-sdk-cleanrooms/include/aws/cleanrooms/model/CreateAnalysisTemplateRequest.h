/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalysisFormat.h>
#include <aws/cleanrooms/model/AnalysisSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisParameter.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class CreateAnalysisTemplateRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateAnalysisTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnalysisTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The description of the analysis template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline CreateAnalysisTemplateRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline CreateAnalysisTemplateRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline CreateAnalysisTemplateRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>The name of the analysis template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The format of the analysis template.</p>
     */
    inline const AnalysisFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the analysis template.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the analysis template.</p>
     */
    inline void SetFormat(const AnalysisFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the analysis template.</p>
     */
    inline void SetFormat(AnalysisFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithFormat(const AnalysisFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithFormat(AnalysisFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The information in the analysis template. Currently supports
     * <code>text</code>, the query text for the analysis template.</p>
     */
    inline const AnalysisSource& GetSource() const{ return m_source; }

    /**
     * <p>The information in the analysis template. Currently supports
     * <code>text</code>, the query text for the analysis template.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The information in the analysis template. Currently supports
     * <code>text</code>, the query text for the analysis template.</p>
     */
    inline void SetSource(const AnalysisSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The information in the analysis template. Currently supports
     * <code>text</code>, the query text for the analysis template.</p>
     */
    inline void SetSource(AnalysisSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The information in the analysis template. Currently supports
     * <code>text</code>, the query text for the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithSource(const AnalysisSource& value) { SetSource(value); return *this;}

    /**
     * <p>The information in the analysis template. Currently supports
     * <code>text</code>, the query text for the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithSource(AnalysisSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateAnalysisTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateAnalysisTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateAnalysisTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateAnalysisTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateAnalysisTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateAnalysisTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateAnalysisTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateAnalysisTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateAnalysisTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline const Aws::Vector<AnalysisParameter>& GetAnalysisParameters() const{ return m_analysisParameters; }

    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline bool AnalysisParametersHasBeenSet() const { return m_analysisParametersHasBeenSet; }

    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline void SetAnalysisParameters(const Aws::Vector<AnalysisParameter>& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = value; }

    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline void SetAnalysisParameters(Aws::Vector<AnalysisParameter>&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = std::move(value); }

    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithAnalysisParameters(const Aws::Vector<AnalysisParameter>& value) { SetAnalysisParameters(value); return *this;}

    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& WithAnalysisParameters(Aws::Vector<AnalysisParameter>&& value) { SetAnalysisParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& AddAnalysisParameters(const AnalysisParameter& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.push_back(value); return *this; }

    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline CreateAnalysisTemplateRequest& AddAnalysisParameters(AnalysisParameter&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AnalysisFormat m_format;
    bool m_formatHasBeenSet = false;

    AnalysisSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AnalysisParameter> m_analysisParameters;
    bool m_analysisParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
