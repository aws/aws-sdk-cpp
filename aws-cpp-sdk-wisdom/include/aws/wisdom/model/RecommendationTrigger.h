/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/RecommendationTriggerData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/model/RecommendationSourceType.h>
#include <aws/wisdom/model/RecommendationTriggerType.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>A recommendation trigger provides context on the event that produced the
   * referenced recommendations. Recommendations are only referenced in
   * <code>recommendationIds</code> by a single RecommendationTrigger.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/RecommendationTrigger">AWS
   * API Reference</a></p>
   */
  class RecommendationTrigger
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API RecommendationTrigger();
    AWS_CONNECTWISDOMSERVICE_API RecommendationTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API RecommendationTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A union type containing information related to the trigger.</p>
     */
    inline const RecommendationTriggerData& GetData() const{ return m_data; }

    /**
     * <p>A union type containing information related to the trigger.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>A union type containing information related to the trigger.</p>
     */
    inline void SetData(const RecommendationTriggerData& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>A union type containing information related to the trigger.</p>
     */
    inline void SetData(RecommendationTriggerData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>A union type containing information related to the trigger.</p>
     */
    inline RecommendationTrigger& WithData(const RecommendationTriggerData& value) { SetData(value); return *this;}

    /**
     * <p>A union type containing information related to the trigger.</p>
     */
    inline RecommendationTrigger& WithData(RecommendationTriggerData&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline RecommendationTrigger& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline RecommendationTrigger& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline RecommendationTrigger& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = value; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::move(value); }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline RecommendationTrigger& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline RecommendationTrigger& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline RecommendationTrigger& AddRecommendationIds(const Aws::String& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline RecommendationTrigger& AddRecommendationIds(Aws::String&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline RecommendationTrigger& AddRecommendationIds(const char* value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }


    /**
     * <p>The source of the recommendation trigger.</p> <ul> <li> <p>ISSUE_DETECTION:
     * The corresponding recommendations were triggered by a Contact Lens issue.</p>
     * </li> <li> <p>RULE_EVALUATION: The corresponding recommendations were triggered
     * by a Contact Lens rule.</p> </li> </ul>
     */
    inline const RecommendationSourceType& GetSource() const{ return m_source; }

    /**
     * <p>The source of the recommendation trigger.</p> <ul> <li> <p>ISSUE_DETECTION:
     * The corresponding recommendations were triggered by a Contact Lens issue.</p>
     * </li> <li> <p>RULE_EVALUATION: The corresponding recommendations were triggered
     * by a Contact Lens rule.</p> </li> </ul>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the recommendation trigger.</p> <ul> <li> <p>ISSUE_DETECTION:
     * The corresponding recommendations were triggered by a Contact Lens issue.</p>
     * </li> <li> <p>RULE_EVALUATION: The corresponding recommendations were triggered
     * by a Contact Lens rule.</p> </li> </ul>
     */
    inline void SetSource(const RecommendationSourceType& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the recommendation trigger.</p> <ul> <li> <p>ISSUE_DETECTION:
     * The corresponding recommendations were triggered by a Contact Lens issue.</p>
     * </li> <li> <p>RULE_EVALUATION: The corresponding recommendations were triggered
     * by a Contact Lens rule.</p> </li> </ul>
     */
    inline void SetSource(RecommendationSourceType&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the recommendation trigger.</p> <ul> <li> <p>ISSUE_DETECTION:
     * The corresponding recommendations were triggered by a Contact Lens issue.</p>
     * </li> <li> <p>RULE_EVALUATION: The corresponding recommendations were triggered
     * by a Contact Lens rule.</p> </li> </ul>
     */
    inline RecommendationTrigger& WithSource(const RecommendationSourceType& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the recommendation trigger.</p> <ul> <li> <p>ISSUE_DETECTION:
     * The corresponding recommendations were triggered by a Contact Lens issue.</p>
     * </li> <li> <p>RULE_EVALUATION: The corresponding recommendations were triggered
     * by a Contact Lens rule.</p> </li> </ul>
     */
    inline RecommendationTrigger& WithSource(RecommendationSourceType&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The type of recommendation trigger.</p>
     */
    inline const RecommendationTriggerType& GetType() const{ return m_type; }

    /**
     * <p>The type of recommendation trigger.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of recommendation trigger.</p>
     */
    inline void SetType(const RecommendationTriggerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of recommendation trigger.</p>
     */
    inline void SetType(RecommendationTriggerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of recommendation trigger.</p>
     */
    inline RecommendationTrigger& WithType(const RecommendationTriggerType& value) { SetType(value); return *this;}

    /**
     * <p>The type of recommendation trigger.</p>
     */
    inline RecommendationTrigger& WithType(RecommendationTriggerType&& value) { SetType(std::move(value)); return *this;}

  private:

    RecommendationTriggerData m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    RecommendationSourceType m_source;
    bool m_sourceHasBeenSet = false;

    RecommendationTriggerType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
