/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelSource.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The Amazon SageMaker model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ExternalModelSummary">AWS
   * API Reference</a></p>
   */
  class ExternalModelSummary
  {
  public:
    AWS_FRAUDDETECTOR_API ExternalModelSummary();
    AWS_FRAUDDETECTOR_API ExternalModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ExternalModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint of the Amazon SageMaker model.</p>
     */
    inline const Aws::String& GetModelEndpoint() const{ return m_modelEndpoint; }

    /**
     * <p>The endpoint of the Amazon SageMaker model.</p>
     */
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }

    /**
     * <p>The endpoint of the Amazon SageMaker model.</p>
     */
    inline void SetModelEndpoint(const Aws::String& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = value; }

    /**
     * <p>The endpoint of the Amazon SageMaker model.</p>
     */
    inline void SetModelEndpoint(Aws::String&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::move(value); }

    /**
     * <p>The endpoint of the Amazon SageMaker model.</p>
     */
    inline void SetModelEndpoint(const char* value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint.assign(value); }

    /**
     * <p>The endpoint of the Amazon SageMaker model.</p>
     */
    inline ExternalModelSummary& WithModelEndpoint(const Aws::String& value) { SetModelEndpoint(value); return *this;}

    /**
     * <p>The endpoint of the Amazon SageMaker model.</p>
     */
    inline ExternalModelSummary& WithModelEndpoint(Aws::String&& value) { SetModelEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the Amazon SageMaker model.</p>
     */
    inline ExternalModelSummary& WithModelEndpoint(const char* value) { SetModelEndpoint(value); return *this;}


    /**
     * <p>The source of the model.</p>
     */
    inline const ModelSource& GetModelSource() const{ return m_modelSource; }

    /**
     * <p>The source of the model.</p>
     */
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }

    /**
     * <p>The source of the model.</p>
     */
    inline void SetModelSource(const ModelSource& value) { m_modelSourceHasBeenSet = true; m_modelSource = value; }

    /**
     * <p>The source of the model.</p>
     */
    inline void SetModelSource(ModelSource&& value) { m_modelSourceHasBeenSet = true; m_modelSource = std::move(value); }

    /**
     * <p>The source of the model.</p>
     */
    inline ExternalModelSummary& WithModelSource(const ModelSource& value) { SetModelSource(value); return *this;}

    /**
     * <p>The source of the model.</p>
     */
    inline ExternalModelSummary& WithModelSource(ModelSource&& value) { SetModelSource(std::move(value)); return *this;}

  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet = false;

    ModelSource m_modelSource;
    bool m_modelSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
