/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class ListDatasetEntriesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API ListDatasetEntriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasetEntries"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The Amazon Resource Name (ARN) for the dataset that you want to use. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the dataset that you want to use. </p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the dataset that you want to use. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the dataset that you want to use. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the dataset that you want to use. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the dataset that you want to use. </p>
     */
    inline ListDatasetEntriesRequest& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the dataset that you want to use. </p>
     */
    inline ListDatasetEntriesRequest& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the dataset that you want to use. </p>
     */
    inline ListDatasetEntriesRequest& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline const Aws::Vector<Aws::String>& GetContainsLabels() const{ return m_containsLabels; }

    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline bool ContainsLabelsHasBeenSet() const { return m_containsLabelsHasBeenSet; }

    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline void SetContainsLabels(const Aws::Vector<Aws::String>& value) { m_containsLabelsHasBeenSet = true; m_containsLabels = value; }

    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline void SetContainsLabels(Aws::Vector<Aws::String>&& value) { m_containsLabelsHasBeenSet = true; m_containsLabels = std::move(value); }

    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline ListDatasetEntriesRequest& WithContainsLabels(const Aws::Vector<Aws::String>& value) { SetContainsLabels(value); return *this;}

    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline ListDatasetEntriesRequest& WithContainsLabels(Aws::Vector<Aws::String>&& value) { SetContainsLabels(std::move(value)); return *this;}

    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline ListDatasetEntriesRequest& AddContainsLabels(const Aws::String& value) { m_containsLabelsHasBeenSet = true; m_containsLabels.push_back(value); return *this; }

    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline ListDatasetEntriesRequest& AddContainsLabels(Aws::String&& value) { m_containsLabelsHasBeenSet = true; m_containsLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline ListDatasetEntriesRequest& AddContainsLabels(const char* value) { m_containsLabelsHasBeenSet = true; m_containsLabels.push_back(value); return *this; }


    /**
     * <p> Specify <code>true</code> to get only the JSON Lines where the image is
     * labeled. Specify <code>false</code> to get only the JSON Lines where the image
     * isn't labeled. If you don't specify <code>Labeled</code>,
     * <code>ListDatasetEntries</code> returns JSON Lines for labeled and unlabeled
     * images. </p>
     */
    inline bool GetLabeled() const{ return m_labeled; }

    /**
     * <p> Specify <code>true</code> to get only the JSON Lines where the image is
     * labeled. Specify <code>false</code> to get only the JSON Lines where the image
     * isn't labeled. If you don't specify <code>Labeled</code>,
     * <code>ListDatasetEntries</code> returns JSON Lines for labeled and unlabeled
     * images. </p>
     */
    inline bool LabeledHasBeenSet() const { return m_labeledHasBeenSet; }

    /**
     * <p> Specify <code>true</code> to get only the JSON Lines where the image is
     * labeled. Specify <code>false</code> to get only the JSON Lines where the image
     * isn't labeled. If you don't specify <code>Labeled</code>,
     * <code>ListDatasetEntries</code> returns JSON Lines for labeled and unlabeled
     * images. </p>
     */
    inline void SetLabeled(bool value) { m_labeledHasBeenSet = true; m_labeled = value; }

    /**
     * <p> Specify <code>true</code> to get only the JSON Lines where the image is
     * labeled. Specify <code>false</code> to get only the JSON Lines where the image
     * isn't labeled. If you don't specify <code>Labeled</code>,
     * <code>ListDatasetEntries</code> returns JSON Lines for labeled and unlabeled
     * images. </p>
     */
    inline ListDatasetEntriesRequest& WithLabeled(bool value) { SetLabeled(value); return *this;}


    /**
     * <p>If specified, <code>ListDatasetEntries</code> only returns JSON Lines where
     * the value of <code>SourceRefContains</code> is part of the
     * <code>source-ref</code> field. The <code>source-ref</code> field contains the
     * Amazon S3 location of the image. You can use <code>SouceRefContains</code> for
     * tasks such as getting the JSON Line for a single image, or gettting JSON Lines
     * for all images within a specific folder.</p>
     */
    inline const Aws::String& GetSourceRefContains() const{ return m_sourceRefContains; }

    /**
     * <p>If specified, <code>ListDatasetEntries</code> only returns JSON Lines where
     * the value of <code>SourceRefContains</code> is part of the
     * <code>source-ref</code> field. The <code>source-ref</code> field contains the
     * Amazon S3 location of the image. You can use <code>SouceRefContains</code> for
     * tasks such as getting the JSON Line for a single image, or gettting JSON Lines
     * for all images within a specific folder.</p>
     */
    inline bool SourceRefContainsHasBeenSet() const { return m_sourceRefContainsHasBeenSet; }

    /**
     * <p>If specified, <code>ListDatasetEntries</code> only returns JSON Lines where
     * the value of <code>SourceRefContains</code> is part of the
     * <code>source-ref</code> field. The <code>source-ref</code> field contains the
     * Amazon S3 location of the image. You can use <code>SouceRefContains</code> for
     * tasks such as getting the JSON Line for a single image, or gettting JSON Lines
     * for all images within a specific folder.</p>
     */
    inline void SetSourceRefContains(const Aws::String& value) { m_sourceRefContainsHasBeenSet = true; m_sourceRefContains = value; }

    /**
     * <p>If specified, <code>ListDatasetEntries</code> only returns JSON Lines where
     * the value of <code>SourceRefContains</code> is part of the
     * <code>source-ref</code> field. The <code>source-ref</code> field contains the
     * Amazon S3 location of the image. You can use <code>SouceRefContains</code> for
     * tasks such as getting the JSON Line for a single image, or gettting JSON Lines
     * for all images within a specific folder.</p>
     */
    inline void SetSourceRefContains(Aws::String&& value) { m_sourceRefContainsHasBeenSet = true; m_sourceRefContains = std::move(value); }

    /**
     * <p>If specified, <code>ListDatasetEntries</code> only returns JSON Lines where
     * the value of <code>SourceRefContains</code> is part of the
     * <code>source-ref</code> field. The <code>source-ref</code> field contains the
     * Amazon S3 location of the image. You can use <code>SouceRefContains</code> for
     * tasks such as getting the JSON Line for a single image, or gettting JSON Lines
     * for all images within a specific folder.</p>
     */
    inline void SetSourceRefContains(const char* value) { m_sourceRefContainsHasBeenSet = true; m_sourceRefContains.assign(value); }

    /**
     * <p>If specified, <code>ListDatasetEntries</code> only returns JSON Lines where
     * the value of <code>SourceRefContains</code> is part of the
     * <code>source-ref</code> field. The <code>source-ref</code> field contains the
     * Amazon S3 location of the image. You can use <code>SouceRefContains</code> for
     * tasks such as getting the JSON Line for a single image, or gettting JSON Lines
     * for all images within a specific folder.</p>
     */
    inline ListDatasetEntriesRequest& WithSourceRefContains(const Aws::String& value) { SetSourceRefContains(value); return *this;}

    /**
     * <p>If specified, <code>ListDatasetEntries</code> only returns JSON Lines where
     * the value of <code>SourceRefContains</code> is part of the
     * <code>source-ref</code> field. The <code>source-ref</code> field contains the
     * Amazon S3 location of the image. You can use <code>SouceRefContains</code> for
     * tasks such as getting the JSON Line for a single image, or gettting JSON Lines
     * for all images within a specific folder.</p>
     */
    inline ListDatasetEntriesRequest& WithSourceRefContains(Aws::String&& value) { SetSourceRefContains(std::move(value)); return *this;}

    /**
     * <p>If specified, <code>ListDatasetEntries</code> only returns JSON Lines where
     * the value of <code>SourceRefContains</code> is part of the
     * <code>source-ref</code> field. The <code>source-ref</code> field contains the
     * Amazon S3 location of the image. You can use <code>SouceRefContains</code> for
     * tasks such as getting the JSON Line for a single image, or gettting JSON Lines
     * for all images within a specific folder.</p>
     */
    inline ListDatasetEntriesRequest& WithSourceRefContains(const char* value) { SetSourceRefContains(value); return *this;}


    /**
     * <p>Specifies an error filter for the response. Specify <code>True</code> to only
     * include entries that have errors. </p>
     */
    inline bool GetHasErrors() const{ return m_hasErrors; }

    /**
     * <p>Specifies an error filter for the response. Specify <code>True</code> to only
     * include entries that have errors. </p>
     */
    inline bool HasErrorsHasBeenSet() const { return m_hasErrorsHasBeenSet; }

    /**
     * <p>Specifies an error filter for the response. Specify <code>True</code> to only
     * include entries that have errors. </p>
     */
    inline void SetHasErrors(bool value) { m_hasErrorsHasBeenSet = true; m_hasErrors = value; }

    /**
     * <p>Specifies an error filter for the response. Specify <code>True</code> to only
     * include entries that have errors. </p>
     */
    inline ListDatasetEntriesRequest& WithHasErrors(bool value) { SetHasErrors(value); return *this;}


    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline ListDatasetEntriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline ListDatasetEntriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline ListDatasetEntriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline ListDatasetEntriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_containsLabels;
    bool m_containsLabelsHasBeenSet = false;

    bool m_labeled;
    bool m_labeledHasBeenSet = false;

    Aws::String m_sourceRefContains;
    bool m_sourceRefContainsHasBeenSet = false;

    bool m_hasErrors;
    bool m_hasErrorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
