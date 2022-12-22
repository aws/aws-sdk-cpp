/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TransformType.h>
#include <aws/glue/model/FindMatchesParameters.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The algorithm-specific parameters that are associated with the machine
   * learning transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TransformParameters">AWS
   * API Reference</a></p>
   */
  class TransformParameters
  {
  public:
    AWS_GLUE_API TransformParameters();
    AWS_GLUE_API TransformParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TransformParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of machine learning transform.</p> <p>For information about the
     * types of machine learning transforms, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job-machine-learning-transform.html">Creating
     * Machine Learning Transforms</a>.</p>
     */
    inline const TransformType& GetTransformType() const{ return m_transformType; }

    /**
     * <p>The type of machine learning transform.</p> <p>For information about the
     * types of machine learning transforms, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job-machine-learning-transform.html">Creating
     * Machine Learning Transforms</a>.</p>
     */
    inline bool TransformTypeHasBeenSet() const { return m_transformTypeHasBeenSet; }

    /**
     * <p>The type of machine learning transform.</p> <p>For information about the
     * types of machine learning transforms, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job-machine-learning-transform.html">Creating
     * Machine Learning Transforms</a>.</p>
     */
    inline void SetTransformType(const TransformType& value) { m_transformTypeHasBeenSet = true; m_transformType = value; }

    /**
     * <p>The type of machine learning transform.</p> <p>For information about the
     * types of machine learning transforms, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job-machine-learning-transform.html">Creating
     * Machine Learning Transforms</a>.</p>
     */
    inline void SetTransformType(TransformType&& value) { m_transformTypeHasBeenSet = true; m_transformType = std::move(value); }

    /**
     * <p>The type of machine learning transform.</p> <p>For information about the
     * types of machine learning transforms, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job-machine-learning-transform.html">Creating
     * Machine Learning Transforms</a>.</p>
     */
    inline TransformParameters& WithTransformType(const TransformType& value) { SetTransformType(value); return *this;}

    /**
     * <p>The type of machine learning transform.</p> <p>For information about the
     * types of machine learning transforms, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job-machine-learning-transform.html">Creating
     * Machine Learning Transforms</a>.</p>
     */
    inline TransformParameters& WithTransformType(TransformType&& value) { SetTransformType(std::move(value)); return *this;}


    /**
     * <p>The parameters for the find matches algorithm.</p>
     */
    inline const FindMatchesParameters& GetFindMatchesParameters() const{ return m_findMatchesParameters; }

    /**
     * <p>The parameters for the find matches algorithm.</p>
     */
    inline bool FindMatchesParametersHasBeenSet() const { return m_findMatchesParametersHasBeenSet; }

    /**
     * <p>The parameters for the find matches algorithm.</p>
     */
    inline void SetFindMatchesParameters(const FindMatchesParameters& value) { m_findMatchesParametersHasBeenSet = true; m_findMatchesParameters = value; }

    /**
     * <p>The parameters for the find matches algorithm.</p>
     */
    inline void SetFindMatchesParameters(FindMatchesParameters&& value) { m_findMatchesParametersHasBeenSet = true; m_findMatchesParameters = std::move(value); }

    /**
     * <p>The parameters for the find matches algorithm.</p>
     */
    inline TransformParameters& WithFindMatchesParameters(const FindMatchesParameters& value) { SetFindMatchesParameters(value); return *this;}

    /**
     * <p>The parameters for the find matches algorithm.</p>
     */
    inline TransformParameters& WithFindMatchesParameters(FindMatchesParameters&& value) { SetFindMatchesParameters(std::move(value)); return *this;}

  private:

    TransformType m_transformType;
    bool m_transformTypeHasBeenSet = false;

    FindMatchesParameters m_findMatchesParameters;
    bool m_findMatchesParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
