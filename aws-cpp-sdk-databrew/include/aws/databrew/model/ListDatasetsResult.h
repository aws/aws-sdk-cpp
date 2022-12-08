/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/Dataset.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class ListDatasetsResult
  {
  public:
    AWS_GLUEDATABREW_API ListDatasetsResult();
    AWS_GLUEDATABREW_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of datasets that are defined.</p>
     */
    inline const Aws::Vector<Dataset>& GetDatasets() const{ return m_datasets; }

    /**
     * <p>A list of datasets that are defined.</p>
     */
    inline void SetDatasets(const Aws::Vector<Dataset>& value) { m_datasets = value; }

    /**
     * <p>A list of datasets that are defined.</p>
     */
    inline void SetDatasets(Aws::Vector<Dataset>&& value) { m_datasets = std::move(value); }

    /**
     * <p>A list of datasets that are defined.</p>
     */
    inline ListDatasetsResult& WithDatasets(const Aws::Vector<Dataset>& value) { SetDatasets(value); return *this;}

    /**
     * <p>A list of datasets that are defined.</p>
     */
    inline ListDatasetsResult& WithDatasets(Aws::Vector<Dataset>&& value) { SetDatasets(std::move(value)); return *this;}

    /**
     * <p>A list of datasets that are defined.</p>
     */
    inline ListDatasetsResult& AddDatasets(const Dataset& value) { m_datasets.push_back(value); return *this; }

    /**
     * <p>A list of datasets that are defined.</p>
     */
    inline ListDatasetsResult& AddDatasets(Dataset&& value) { m_datasets.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Dataset> m_datasets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
