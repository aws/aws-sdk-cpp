/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>An augmented manifest file that provides training data for your custom model.
   * An augmented manifest file is a labeled dataset that is produced by Amazon
   * SageMaker Ground Truth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/AugmentedManifestsListItem">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API AugmentedManifestsListItem
  {
  public:
    AugmentedManifestsListItem();
    AugmentedManifestsListItem(Aws::Utils::Json::JsonView jsonValue);
    AugmentedManifestsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline AugmentedManifestsListItem& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline AugmentedManifestsListItem& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline AugmentedManifestsListItem& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }

    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline void SetAttributeNames(const Aws::Vector<Aws::String>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline void SetAttributeNames(Aws::Vector<Aws::String>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }

    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline AugmentedManifestsListItem& WithAttributeNames(const Aws::Vector<Aws::String>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline AugmentedManifestsListItem& WithAttributeNames(Aws::Vector<Aws::String>&& value) { SetAttributeNames(std::move(value)); return *this;}

    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline AugmentedManifestsListItem& AddAttributeNames(const Aws::String& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline AugmentedManifestsListItem& AddAttributeNames(Aws::String&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline AugmentedManifestsListItem& AddAttributeNames(const char* value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
