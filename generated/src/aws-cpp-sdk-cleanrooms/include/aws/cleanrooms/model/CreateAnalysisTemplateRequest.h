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
#include <aws/cleanrooms/model/AnalysisSchema.h>
#include <aws/cleanrooms/model/ErrorMessageConfiguration.h>
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
    AWS_CLEANROOMS_API CreateAnalysisTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnalysisTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The description of the analysis template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAnalysisTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    CreateAnalysisTemplateRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the analysis template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAnalysisTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the analysis template.</p>
     */
    inline AnalysisFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(AnalysisFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline CreateAnalysisTemplateRequest& WithFormat(AnalysisFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information in the analysis template.</p>
     */
    inline const AnalysisSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = AnalysisSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = AnalysisSource>
    CreateAnalysisTemplateRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAnalysisTemplateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAnalysisTemplateRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline const Aws::Vector<AnalysisParameter>& GetAnalysisParameters() const { return m_analysisParameters; }
    inline bool AnalysisParametersHasBeenSet() const { return m_analysisParametersHasBeenSet; }
    template<typename AnalysisParametersT = Aws::Vector<AnalysisParameter>>
    void SetAnalysisParameters(AnalysisParametersT&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = std::forward<AnalysisParametersT>(value); }
    template<typename AnalysisParametersT = Aws::Vector<AnalysisParameter>>
    CreateAnalysisTemplateRequest& WithAnalysisParameters(AnalysisParametersT&& value) { SetAnalysisParameters(std::forward<AnalysisParametersT>(value)); return *this;}
    template<typename AnalysisParametersT = AnalysisParameter>
    CreateAnalysisTemplateRequest& AddAnalysisParameters(AnalysisParametersT&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.emplace_back(std::forward<AnalysisParametersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AnalysisSchema& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = AnalysisSchema>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = AnalysisSchema>
    CreateAnalysisTemplateRequest& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies the level of detail in error messages
     * returned by analyses using this template. When set to <code>DETAILED</code>,
     * error messages include more information to help troubleshoot issues with PySpark
     * jobs. Detailed error messages may expose underlying data, including sensitive
     * information. Recommended for faster troubleshooting in development and testing
     * environments.</p>
     */
    inline const ErrorMessageConfiguration& GetErrorMessageConfiguration() const { return m_errorMessageConfiguration; }
    inline bool ErrorMessageConfigurationHasBeenSet() const { return m_errorMessageConfigurationHasBeenSet; }
    template<typename ErrorMessageConfigurationT = ErrorMessageConfiguration>
    void SetErrorMessageConfiguration(ErrorMessageConfigurationT&& value) { m_errorMessageConfigurationHasBeenSet = true; m_errorMessageConfiguration = std::forward<ErrorMessageConfigurationT>(value); }
    template<typename ErrorMessageConfigurationT = ErrorMessageConfiguration>
    CreateAnalysisTemplateRequest& WithErrorMessageConfiguration(ErrorMessageConfigurationT&& value) { SetErrorMessageConfiguration(std::forward<ErrorMessageConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AnalysisFormat m_format{AnalysisFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    AnalysisSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AnalysisParameter> m_analysisParameters;
    bool m_analysisParametersHasBeenSet = false;

    AnalysisSchema m_schema;
    bool m_schemaHasBeenSet = false;

    ErrorMessageConfiguration m_errorMessageConfiguration;
    bool m_errorMessageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
