/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/AlarmType.h>
#include <aws/resiliencehub/model/RecommendationItem.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a recommendation for a CloudWatch alarm.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AlarmRecommendation">AWS
   * API Reference</a></p>
   */
  class AlarmRecommendation
  {
  public:
    AWS_RESILIENCEHUB_API AlarmRecommendation();
    AWS_RESILIENCEHUB_API AlarmRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AlarmRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application component for the CloudWatch alarm recommendation.</p>
     */
    inline const Aws::String& GetAppComponentName() const{ return m_appComponentName; }

    /**
     * <p>The application component for the CloudWatch alarm recommendation.</p>
     */
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }

    /**
     * <p>The application component for the CloudWatch alarm recommendation.</p>
     */
    inline void SetAppComponentName(const Aws::String& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = value; }

    /**
     * <p>The application component for the CloudWatch alarm recommendation.</p>
     */
    inline void SetAppComponentName(Aws::String&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::move(value); }

    /**
     * <p>The application component for the CloudWatch alarm recommendation.</p>
     */
    inline void SetAppComponentName(const char* value) { m_appComponentNameHasBeenSet = true; m_appComponentName.assign(value); }

    /**
     * <p>The application component for the CloudWatch alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithAppComponentName(const Aws::String& value) { SetAppComponentName(value); return *this;}

    /**
     * <p>The application component for the CloudWatch alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithAppComponentName(Aws::String&& value) { SetAppComponentName(std::move(value)); return *this;}

    /**
     * <p>The application component for the CloudWatch alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithAppComponentName(const char* value) { SetAppComponentName(value); return *this;}


    /**
     * <p>The description of the recommendation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the recommendation.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the recommendation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the recommendation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the recommendation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the recommendation.</p>
     */
    inline AlarmRecommendation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the recommendation.</p>
     */
    inline AlarmRecommendation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the recommendation.</p>
     */
    inline AlarmRecommendation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The list of CloudWatch alarm recommendations.</p>
     */
    inline const Aws::Vector<RecommendationItem>& GetItems() const{ return m_items; }

    /**
     * <p>The list of CloudWatch alarm recommendations.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The list of CloudWatch alarm recommendations.</p>
     */
    inline void SetItems(const Aws::Vector<RecommendationItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The list of CloudWatch alarm recommendations.</p>
     */
    inline void SetItems(Aws::Vector<RecommendationItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The list of CloudWatch alarm recommendations.</p>
     */
    inline AlarmRecommendation& WithItems(const Aws::Vector<RecommendationItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of CloudWatch alarm recommendations.</p>
     */
    inline AlarmRecommendation& WithItems(Aws::Vector<RecommendationItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of CloudWatch alarm recommendations.</p>
     */
    inline AlarmRecommendation& AddItems(const RecommendationItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The list of CloudWatch alarm recommendations.</p>
     */
    inline AlarmRecommendation& AddItems(RecommendationItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the alarm recommendation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the alarm recommendation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the alarm recommendation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the alarm recommendation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the alarm recommendation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline const Aws::String& GetPrerequisite() const{ return m_prerequisite; }

    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline bool PrerequisiteHasBeenSet() const { return m_prerequisiteHasBeenSet; }

    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline void SetPrerequisite(const Aws::String& value) { m_prerequisiteHasBeenSet = true; m_prerequisite = value; }

    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline void SetPrerequisite(Aws::String&& value) { m_prerequisiteHasBeenSet = true; m_prerequisite = std::move(value); }

    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline void SetPrerequisite(const char* value) { m_prerequisiteHasBeenSet = true; m_prerequisite.assign(value); }

    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithPrerequisite(const Aws::String& value) { SetPrerequisite(value); return *this;}

    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithPrerequisite(Aws::String&& value) { SetPrerequisite(std::move(value)); return *this;}

    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithPrerequisite(const char* value) { SetPrerequisite(value); return *this;}


    /**
     * <p>The identifier of the alarm recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The identifier of the alarm recommendation.</p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The identifier of the alarm recommendation.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The identifier of the alarm recommendation.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The identifier of the alarm recommendation.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The identifier of the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The identifier of the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>The reference identifier of the alarm recommendation.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>The reference identifier of the alarm recommendation.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>The reference identifier of the alarm recommendation.</p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>The reference identifier of the alarm recommendation.</p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }

    /**
     * <p>The reference identifier of the alarm recommendation.</p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>The reference identifier of the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>The reference identifier of the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}

    /**
     * <p>The reference identifier of the alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}


    /**
     * <p>The type of alarm recommendation.</p>
     */
    inline const AlarmType& GetType() const{ return m_type; }

    /**
     * <p>The type of alarm recommendation.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of alarm recommendation.</p>
     */
    inline void SetType(const AlarmType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of alarm recommendation.</p>
     */
    inline void SetType(AlarmType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithType(const AlarmType& value) { SetType(value); return *this;}

    /**
     * <p>The type of alarm recommendation.</p>
     */
    inline AlarmRecommendation& WithType(AlarmType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_appComponentName;
    bool m_appComponentNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<RecommendationItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_prerequisite;
    bool m_prerequisiteHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    AlarmType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
