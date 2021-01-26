/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API CreateFilterRequest : public PersonalizeRequest
  {
  public:
    CreateFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFilter"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the filter to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter to create.</p>
     */
    inline CreateFilterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter to create.</p>
     */
    inline CreateFilterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter to create.</p>
     */
    inline CreateFilterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the dataset group that the filter will belong to.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The ARN of the dataset group that the filter will belong to.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the dataset group that the filter will belong to.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The ARN of the dataset group that the filter will belong to.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The ARN of the dataset group that the filter will belong to.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The ARN of the dataset group that the filter will belong to.</p>
     */
    inline CreateFilterRequest& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The ARN of the dataset group that the filter will belong to.</p>
     */
    inline CreateFilterRequest& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset group that the filter will belong to.</p>
     */
    inline CreateFilterRequest& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The filter expression that designates the interaction types that the filter
     * will filter out. A filter expression must follow the following format:</p> <p>
     * <code>EXCLUDE itemId WHERE INTERACTIONS.event_type in ("EVENT_TYPE")</code> </p>
     * <p>Where "EVENT_TYPE" is the type of event to filter out. To filter out all
     * items with any interactions history, set <code>"*"</code> as the EVENT_TYPE. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filters.html">Using
     * Filters with Amazon Personalize</a>.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }

    /**
     * <p>The filter expression that designates the interaction types that the filter
     * will filter out. A filter expression must follow the following format:</p> <p>
     * <code>EXCLUDE itemId WHERE INTERACTIONS.event_type in ("EVENT_TYPE")</code> </p>
     * <p>Where "EVENT_TYPE" is the type of event to filter out. To filter out all
     * items with any interactions history, set <code>"*"</code> as the EVENT_TYPE. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filters.html">Using
     * Filters with Amazon Personalize</a>.</p>
     */
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }

    /**
     * <p>The filter expression that designates the interaction types that the filter
     * will filter out. A filter expression must follow the following format:</p> <p>
     * <code>EXCLUDE itemId WHERE INTERACTIONS.event_type in ("EVENT_TYPE")</code> </p>
     * <p>Where "EVENT_TYPE" is the type of event to filter out. To filter out all
     * items with any interactions history, set <code>"*"</code> as the EVENT_TYPE. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filters.html">Using
     * Filters with Amazon Personalize</a>.</p>
     */
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>The filter expression that designates the interaction types that the filter
     * will filter out. A filter expression must follow the following format:</p> <p>
     * <code>EXCLUDE itemId WHERE INTERACTIONS.event_type in ("EVENT_TYPE")</code> </p>
     * <p>Where "EVENT_TYPE" is the type of event to filter out. To filter out all
     * items with any interactions history, set <code>"*"</code> as the EVENT_TYPE. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filters.html">Using
     * Filters with Amazon Personalize</a>.</p>
     */
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }

    /**
     * <p>The filter expression that designates the interaction types that the filter
     * will filter out. A filter expression must follow the following format:</p> <p>
     * <code>EXCLUDE itemId WHERE INTERACTIONS.event_type in ("EVENT_TYPE")</code> </p>
     * <p>Where "EVENT_TYPE" is the type of event to filter out. To filter out all
     * items with any interactions history, set <code>"*"</code> as the EVENT_TYPE. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filters.html">Using
     * Filters with Amazon Personalize</a>.</p>
     */
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>The filter expression that designates the interaction types that the filter
     * will filter out. A filter expression must follow the following format:</p> <p>
     * <code>EXCLUDE itemId WHERE INTERACTIONS.event_type in ("EVENT_TYPE")</code> </p>
     * <p>Where "EVENT_TYPE" is the type of event to filter out. To filter out all
     * items with any interactions history, set <code>"*"</code> as the EVENT_TYPE. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filters.html">Using
     * Filters with Amazon Personalize</a>.</p>
     */
    inline CreateFilterRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>The filter expression that designates the interaction types that the filter
     * will filter out. A filter expression must follow the following format:</p> <p>
     * <code>EXCLUDE itemId WHERE INTERACTIONS.event_type in ("EVENT_TYPE")</code> </p>
     * <p>Where "EVENT_TYPE" is the type of event to filter out. To filter out all
     * items with any interactions history, set <code>"*"</code> as the EVENT_TYPE. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filters.html">Using
     * Filters with Amazon Personalize</a>.</p>
     */
    inline CreateFilterRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}

    /**
     * <p>The filter expression that designates the interaction types that the filter
     * will filter out. A filter expression must follow the following format:</p> <p>
     * <code>EXCLUDE itemId WHERE INTERACTIONS.event_type in ("EVENT_TYPE")</code> </p>
     * <p>Where "EVENT_TYPE" is the type of event to filter out. To filter out all
     * items with any interactions history, set <code>"*"</code> as the EVENT_TYPE. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filters.html">Using
     * Filters with Amazon Personalize</a>.</p>
     */
    inline CreateFilterRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
