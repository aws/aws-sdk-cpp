/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/DatasetLabelDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class ListDatasetLabelsResult
  {
  public:
    AWS_REKOGNITION_API ListDatasetLabelsResult();
    AWS_REKOGNITION_API ListDatasetLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API ListDatasetLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of the labels in the dataset. </p>
     */
    inline const Aws::Vector<DatasetLabelDescription>& GetDatasetLabelDescriptions() const{ return m_datasetLabelDescriptions; }

    /**
     * <p> A list of the labels in the dataset. </p>
     */
    inline void SetDatasetLabelDescriptions(const Aws::Vector<DatasetLabelDescription>& value) { m_datasetLabelDescriptions = value; }

    /**
     * <p> A list of the labels in the dataset. </p>
     */
    inline void SetDatasetLabelDescriptions(Aws::Vector<DatasetLabelDescription>&& value) { m_datasetLabelDescriptions = std::move(value); }

    /**
     * <p> A list of the labels in the dataset. </p>
     */
    inline ListDatasetLabelsResult& WithDatasetLabelDescriptions(const Aws::Vector<DatasetLabelDescription>& value) { SetDatasetLabelDescriptions(value); return *this;}

    /**
     * <p> A list of the labels in the dataset. </p>
     */
    inline ListDatasetLabelsResult& WithDatasetLabelDescriptions(Aws::Vector<DatasetLabelDescription>&& value) { SetDatasetLabelDescriptions(std::move(value)); return *this;}

    /**
     * <p> A list of the labels in the dataset. </p>
     */
    inline ListDatasetLabelsResult& AddDatasetLabelDescriptions(const DatasetLabelDescription& value) { m_datasetLabelDescriptions.push_back(value); return *this; }

    /**
     * <p> A list of the labels in the dataset. </p>
     */
    inline ListDatasetLabelsResult& AddDatasetLabelDescriptions(DatasetLabelDescription&& value) { m_datasetLabelDescriptions.push_back(std::move(value)); return *this; }


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
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline ListDatasetLabelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline ListDatasetLabelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline ListDatasetLabelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatasetLabelDescription> m_datasetLabelDescriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
