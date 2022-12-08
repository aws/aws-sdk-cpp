/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
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
namespace ElasticInference
{
namespace Model
{

  /**
   * <p> A filter expression for the Elastic Inference Accelerator list.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_ELASTICINFERENCE_API Filter();
    AWS_ELASTICINFERENCE_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The filter name for the Elastic Inference Accelerator list. It can assume
     * the following values: accelerator-type: the type of Elastic Inference
     * Accelerator to filter for. instance-id: an EC2 instance id to filter for. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The filter name for the Elastic Inference Accelerator list. It can assume
     * the following values: accelerator-type: the type of Elastic Inference
     * Accelerator to filter for. instance-id: an EC2 instance id to filter for. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The filter name for the Elastic Inference Accelerator list. It can assume
     * the following values: accelerator-type: the type of Elastic Inference
     * Accelerator to filter for. instance-id: an EC2 instance id to filter for. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The filter name for the Elastic Inference Accelerator list. It can assume
     * the following values: accelerator-type: the type of Elastic Inference
     * Accelerator to filter for. instance-id: an EC2 instance id to filter for. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The filter name for the Elastic Inference Accelerator list. It can assume
     * the following values: accelerator-type: the type of Elastic Inference
     * Accelerator to filter for. instance-id: an EC2 instance id to filter for. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The filter name for the Elastic Inference Accelerator list. It can assume
     * the following values: accelerator-type: the type of Elastic Inference
     * Accelerator to filter for. instance-id: an EC2 instance id to filter for. </p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The filter name for the Elastic Inference Accelerator list. It can assume
     * the following values: accelerator-type: the type of Elastic Inference
     * Accelerator to filter for. instance-id: an EC2 instance id to filter for. </p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The filter name for the Elastic Inference Accelerator list. It can assume
     * the following values: accelerator-type: the type of Elastic Inference
     * Accelerator to filter for. instance-id: an EC2 instance id to filter for. </p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The values for the filter of the Elastic Inference Accelerator list. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p> The values for the filter of the Elastic Inference Accelerator list. </p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p> The values for the filter of the Elastic Inference Accelerator list. </p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p> The values for the filter of the Elastic Inference Accelerator list. </p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p> The values for the filter of the Elastic Inference Accelerator list. </p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p> The values for the filter of the Elastic Inference Accelerator list. </p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p> The values for the filter of the Elastic Inference Accelerator list. </p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p> The values for the filter of the Elastic Inference Accelerator list. </p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p> The values for the filter of the Elastic Inference Accelerator list. </p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
