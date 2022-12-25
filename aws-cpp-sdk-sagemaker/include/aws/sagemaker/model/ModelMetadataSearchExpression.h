/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ModelMetadataFilter.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>One or more filters that searches for the specified resource or resources in
   * a search. All resource objects that satisfy the expression's condition are
   * included in the search results</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelMetadataSearchExpression">AWS
   * API Reference</a></p>
   */
  class ModelMetadataSearchExpression
  {
  public:
    AWS_SAGEMAKER_API ModelMetadataSearchExpression();
    AWS_SAGEMAKER_API ModelMetadataSearchExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelMetadataSearchExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of filter objects.</p>
     */
    inline const Aws::Vector<ModelMetadataFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of filter objects.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of filter objects.</p>
     */
    inline void SetFilters(const Aws::Vector<ModelMetadataFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of filter objects.</p>
     */
    inline void SetFilters(Aws::Vector<ModelMetadataFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of filter objects.</p>
     */
    inline ModelMetadataSearchExpression& WithFilters(const Aws::Vector<ModelMetadataFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of filter objects.</p>
     */
    inline ModelMetadataSearchExpression& WithFilters(Aws::Vector<ModelMetadataFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of filter objects.</p>
     */
    inline ModelMetadataSearchExpression& AddFilters(const ModelMetadataFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of filter objects.</p>
     */
    inline ModelMetadataSearchExpression& AddFilters(ModelMetadataFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ModelMetadataFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
