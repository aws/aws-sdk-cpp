/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class PutDetectorRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API PutDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDetector"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The detector ID. </p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID. </p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID. </p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID. </p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID. </p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID. </p>
     */
    inline PutDetectorRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID. </p>
     */
    inline PutDetectorRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID. </p>
     */
    inline PutDetectorRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The description of the detector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the detector.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the detector.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the detector.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the detector.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the detector.</p>
     */
    inline PutDetectorRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the detector.</p>
     */
    inline PutDetectorRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the detector.</p>
     */
    inline PutDetectorRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the event type.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The name of the event type.</p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p>The name of the event type.</p>
     */
    inline PutDetectorRequest& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline PutDetectorRequest& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline PutDetectorRequest& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline PutDetectorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline PutDetectorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline PutDetectorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline PutDetectorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
