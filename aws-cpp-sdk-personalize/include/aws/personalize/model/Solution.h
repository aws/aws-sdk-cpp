/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/SolutionConfig.h>
#include <aws/personalize/model/AutoMLResult.h>
#include <aws/core/utils/DateTime.h>
#include <aws/personalize/model/SolutionVersionSummary.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>An object that provides information about a solution. A solution is a trained
   * model that can be deployed as a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Solution">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API Solution
  {
  public:
    Solution();
    Solution(Aws::Utils::Json::JsonView jsonValue);
    Solution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the solution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the solution.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the solution.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the solution.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the solution.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the solution.</p>
     */
    inline Solution& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the solution.</p>
     */
    inline Solution& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the solution.</p>
     */
    inline Solution& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the solution.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArnHasBeenSet = true; m_solutionArn = value; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::move(value); }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(const char* value) { m_solutionArnHasBeenSet = true; m_solutionArn.assign(value); }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline Solution& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}

    /**
     * <p>The ARN of the solution.</p>
     */
    inline Solution& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the solution.</p>
     */
    inline Solution& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}


    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline bool GetPerformHPO() const{ return m_performHPO; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline bool PerformHPOHasBeenSet() const { return m_performHPOHasBeenSet; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline void SetPerformHPO(bool value) { m_performHPOHasBeenSet = true; m_performHPO = value; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline Solution& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}


    /**
     * <p>When true, Amazon Personalize performs a search for the best
     * USER_PERSONALIZATION recipe from the list specified in the solution
     * configuration (<code>recipeArn</code> must not be specified). When false (the
     * default), Amazon Personalize uses <code>recipeArn</code> for training.</p>
     */
    inline bool GetPerformAutoML() const{ return m_performAutoML; }

    /**
     * <p>When true, Amazon Personalize performs a search for the best
     * USER_PERSONALIZATION recipe from the list specified in the solution
     * configuration (<code>recipeArn</code> must not be specified). When false (the
     * default), Amazon Personalize uses <code>recipeArn</code> for training.</p>
     */
    inline bool PerformAutoMLHasBeenSet() const { return m_performAutoMLHasBeenSet; }

    /**
     * <p>When true, Amazon Personalize performs a search for the best
     * USER_PERSONALIZATION recipe from the list specified in the solution
     * configuration (<code>recipeArn</code> must not be specified). When false (the
     * default), Amazon Personalize uses <code>recipeArn</code> for training.</p>
     */
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }

    /**
     * <p>When true, Amazon Personalize performs a search for the best
     * USER_PERSONALIZATION recipe from the list specified in the solution
     * configuration (<code>recipeArn</code> must not be specified). When false (the
     * default), Amazon Personalize uses <code>recipeArn</code> for training.</p>
     */
    inline Solution& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}


    /**
     * <p>The ARN of the recipe used to create the solution.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }

    /**
     * <p>The ARN of the recipe used to create the solution.</p>
     */
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }

    /**
     * <p>The ARN of the recipe used to create the solution.</p>
     */
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }

    /**
     * <p>The ARN of the recipe used to create the solution.</p>
     */
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }

    /**
     * <p>The ARN of the recipe used to create the solution.</p>
     */
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }

    /**
     * <p>The ARN of the recipe used to create the solution.</p>
     */
    inline Solution& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}

    /**
     * <p>The ARN of the recipe used to create the solution.</p>
     */
    inline Solution& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the recipe used to create the solution.</p>
     */
    inline Solution& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline Solution& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline Solution& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline Solution& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline Solution& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline Solution& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline Solution& WithEventType(const char* value) { SetEventType(value); return *this;}


    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline const SolutionConfig& GetSolutionConfig() const{ return m_solutionConfig; }

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline bool SolutionConfigHasBeenSet() const { return m_solutionConfigHasBeenSet; }

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline void SetSolutionConfig(const SolutionConfig& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = value; }

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline void SetSolutionConfig(SolutionConfig&& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = std::move(value); }

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline Solution& WithSolutionConfig(const SolutionConfig& value) { SetSolutionConfig(value); return *this;}

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline Solution& WithSolutionConfig(SolutionConfig&& value) { SetSolutionConfig(std::move(value)); return *this;}


    /**
     * <p>When <code>performAutoML</code> is true, specifies the best recipe found.</p>
     */
    inline const AutoMLResult& GetAutoMLResult() const{ return m_autoMLResult; }

    /**
     * <p>When <code>performAutoML</code> is true, specifies the best recipe found.</p>
     */
    inline bool AutoMLResultHasBeenSet() const { return m_autoMLResultHasBeenSet; }

    /**
     * <p>When <code>performAutoML</code> is true, specifies the best recipe found.</p>
     */
    inline void SetAutoMLResult(const AutoMLResult& value) { m_autoMLResultHasBeenSet = true; m_autoMLResult = value; }

    /**
     * <p>When <code>performAutoML</code> is true, specifies the best recipe found.</p>
     */
    inline void SetAutoMLResult(AutoMLResult&& value) { m_autoMLResultHasBeenSet = true; m_autoMLResult = std::move(value); }

    /**
     * <p>When <code>performAutoML</code> is true, specifies the best recipe found.</p>
     */
    inline Solution& WithAutoMLResult(const AutoMLResult& value) { SetAutoMLResult(value); return *this;}

    /**
     * <p>When <code>performAutoML</code> is true, specifies the best recipe found.</p>
     */
    inline Solution& WithAutoMLResult(AutoMLResult&& value) { SetAutoMLResult(std::move(value)); return *this;}


    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline Solution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline Solution& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline Solution& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The creation date and time (in Unix time) of the solution.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time (in Unix time) of the solution.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation date and time (in Unix time) of the solution.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time (in Unix time) of the solution.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time (in Unix time) of the solution.</p>
     */
    inline Solution& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time (in Unix time) of the solution.</p>
     */
    inline Solution& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline Solution& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline Solution& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>Describes the latest version of the solution, including the status and the
     * ARN.</p>
     */
    inline const SolutionVersionSummary& GetLatestSolutionVersion() const{ return m_latestSolutionVersion; }

    /**
     * <p>Describes the latest version of the solution, including the status and the
     * ARN.</p>
     */
    inline bool LatestSolutionVersionHasBeenSet() const { return m_latestSolutionVersionHasBeenSet; }

    /**
     * <p>Describes the latest version of the solution, including the status and the
     * ARN.</p>
     */
    inline void SetLatestSolutionVersion(const SolutionVersionSummary& value) { m_latestSolutionVersionHasBeenSet = true; m_latestSolutionVersion = value; }

    /**
     * <p>Describes the latest version of the solution, including the status and the
     * ARN.</p>
     */
    inline void SetLatestSolutionVersion(SolutionVersionSummary&& value) { m_latestSolutionVersionHasBeenSet = true; m_latestSolutionVersion = std::move(value); }

    /**
     * <p>Describes the latest version of the solution, including the status and the
     * ARN.</p>
     */
    inline Solution& WithLatestSolutionVersion(const SolutionVersionSummary& value) { SetLatestSolutionVersion(value); return *this;}

    /**
     * <p>Describes the latest version of the solution, including the status and the
     * ARN.</p>
     */
    inline Solution& WithLatestSolutionVersion(SolutionVersionSummary&& value) { SetLatestSolutionVersion(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet;

    bool m_performHPO;
    bool m_performHPOHasBeenSet;

    bool m_performAutoML;
    bool m_performAutoMLHasBeenSet;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet;

    SolutionConfig m_solutionConfig;
    bool m_solutionConfigHasBeenSet;

    AutoMLResult m_autoMLResult;
    bool m_autoMLResultHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet;

    SolutionVersionSummary m_latestSolutionVersion;
    bool m_latestSolutionVersionHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
