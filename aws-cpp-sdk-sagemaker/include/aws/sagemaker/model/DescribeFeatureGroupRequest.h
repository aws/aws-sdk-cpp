/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeFeatureGroupRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeFeatureGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFeatureGroup"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the <code>FeatureGroup</code> you want described. </p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want described. </p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want described. </p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want described. </p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want described. </p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want described. </p>
     */
    inline DescribeFeatureGroupRequest& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the <code>FeatureGroup</code> you want described. </p>
     */
    inline DescribeFeatureGroupRequest& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>FeatureGroup</code> you want described. </p>
     */
    inline DescribeFeatureGroupRequest& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>). 2,500 <code>Features</code> are returned by
     * default.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>). 2,500 <code>Features</code> are returned by
     * default.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>). 2,500 <code>Features</code> are returned by
     * default.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>). 2,500 <code>Features</code> are returned by
     * default.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>). 2,500 <code>Features</code> are returned by
     * default.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>). 2,500 <code>Features</code> are returned by
     * default.</p>
     */
    inline DescribeFeatureGroupRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>). 2,500 <code>Features</code> are returned by
     * default.</p>
     */
    inline DescribeFeatureGroupRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>). 2,500 <code>Features</code> are returned by
     * default.</p>
     */
    inline DescribeFeatureGroupRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
