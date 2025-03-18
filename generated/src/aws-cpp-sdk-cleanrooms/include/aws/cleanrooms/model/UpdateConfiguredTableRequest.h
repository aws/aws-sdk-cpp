/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalysisMethod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/SelectedAnalysisMethod.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class UpdateConfiguredTableRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguredTable"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline const Aws::String& GetConfiguredTableIdentifier() const{ return m_configuredTableIdentifier; }
    inline bool ConfiguredTableIdentifierHasBeenSet() const { return m_configuredTableIdentifierHasBeenSet; }
    inline void SetConfiguredTableIdentifier(const Aws::String& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = value; }
    inline void SetConfiguredTableIdentifier(Aws::String&& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = std::move(value); }
    inline void SetConfiguredTableIdentifier(const char* value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier.assign(value); }
    inline UpdateConfiguredTableRequest& WithConfiguredTableIdentifier(const Aws::String& value) { SetConfiguredTableIdentifier(value); return *this;}
    inline UpdateConfiguredTableRequest& WithConfiguredTableIdentifier(Aws::String&& value) { SetConfiguredTableIdentifier(std::move(value)); return *this;}
    inline UpdateConfiguredTableRequest& WithConfiguredTableIdentifier(const char* value) { SetConfiguredTableIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the configured table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateConfiguredTableRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateConfiguredTableRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateConfiguredTableRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the configured table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateConfiguredTableRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateConfiguredTableRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateConfiguredTableRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The analysis method for the configured table.</p> <p>
     * <code>DIRECT_QUERY</code> allows SQL queries to be run directly on this
     * table.</p> <p> <code>DIRECT_JOB</code> allows PySpark jobs to be run directly on
     * this table.</p> <p> <code>MULTIPLE</code> allows both SQL queries and PySpark
     * jobs to be run directly on this table.</p>
     */
    inline const AnalysisMethod& GetAnalysisMethod() const{ return m_analysisMethod; }
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }
    inline void SetAnalysisMethod(const AnalysisMethod& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }
    inline void SetAnalysisMethod(AnalysisMethod&& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = std::move(value); }
    inline UpdateConfiguredTableRequest& WithAnalysisMethod(const AnalysisMethod& value) { SetAnalysisMethod(value); return *this;}
    inline UpdateConfiguredTableRequest& WithAnalysisMethod(AnalysisMethod&& value) { SetAnalysisMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The selected analysis methods for the table configuration update.</p>
     */
    inline const Aws::Vector<SelectedAnalysisMethod>& GetSelectedAnalysisMethods() const{ return m_selectedAnalysisMethods; }
    inline bool SelectedAnalysisMethodsHasBeenSet() const { return m_selectedAnalysisMethodsHasBeenSet; }
    inline void SetSelectedAnalysisMethods(const Aws::Vector<SelectedAnalysisMethod>& value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods = value; }
    inline void SetSelectedAnalysisMethods(Aws::Vector<SelectedAnalysisMethod>&& value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods = std::move(value); }
    inline UpdateConfiguredTableRequest& WithSelectedAnalysisMethods(const Aws::Vector<SelectedAnalysisMethod>& value) { SetSelectedAnalysisMethods(value); return *this;}
    inline UpdateConfiguredTableRequest& WithSelectedAnalysisMethods(Aws::Vector<SelectedAnalysisMethod>&& value) { SetSelectedAnalysisMethods(std::move(value)); return *this;}
    inline UpdateConfiguredTableRequest& AddSelectedAnalysisMethods(const SelectedAnalysisMethod& value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods.push_back(value); return *this; }
    inline UpdateConfiguredTableRequest& AddSelectedAnalysisMethods(SelectedAnalysisMethod&& value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_configuredTableIdentifier;
    bool m_configuredTableIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AnalysisMethod m_analysisMethod;
    bool m_analysisMethodHasBeenSet = false;

    Aws::Vector<SelectedAnalysisMethod> m_selectedAnalysisMethods;
    bool m_selectedAnalysisMethodsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
