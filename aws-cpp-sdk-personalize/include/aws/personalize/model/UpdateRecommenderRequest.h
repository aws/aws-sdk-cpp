/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/RecommenderConfig.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class UpdateRecommenderRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API UpdateRecommenderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRecommender"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to modify.</p>
     */
    inline const Aws::String& GetRecommenderArn() const{ return m_recommenderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to modify.</p>
     */
    inline bool RecommenderArnHasBeenSet() const { return m_recommenderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to modify.</p>
     */
    inline void SetRecommenderArn(const Aws::String& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to modify.</p>
     */
    inline void SetRecommenderArn(Aws::String&& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to modify.</p>
     */
    inline void SetRecommenderArn(const char* value) { m_recommenderArnHasBeenSet = true; m_recommenderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to modify.</p>
     */
    inline UpdateRecommenderRequest& WithRecommenderArn(const Aws::String& value) { SetRecommenderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to modify.</p>
     */
    inline UpdateRecommenderRequest& WithRecommenderArn(Aws::String&& value) { SetRecommenderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to modify.</p>
     */
    inline UpdateRecommenderRequest& WithRecommenderArn(const char* value) { SetRecommenderArn(value); return *this;}


    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline const RecommenderConfig& GetRecommenderConfig() const{ return m_recommenderConfig; }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline void SetRecommenderConfig(const RecommenderConfig& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = value; }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline void SetRecommenderConfig(RecommenderConfig&& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = std::move(value); }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline UpdateRecommenderRequest& WithRecommenderConfig(const RecommenderConfig& value) { SetRecommenderConfig(value); return *this;}

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline UpdateRecommenderRequest& WithRecommenderConfig(RecommenderConfig&& value) { SetRecommenderConfig(std::move(value)); return *this;}

  private:

    Aws::String m_recommenderArn;
    bool m_recommenderArnHasBeenSet = false;

    RecommenderConfig m_recommenderConfig;
    bool m_recommenderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
