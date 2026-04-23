/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ErrorDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about a partition error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PartitionError">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API PartitionError
  {
  public:
    PartitionError();
    PartitionError(Aws::Utils::Json::JsonView jsonValue);
    PartitionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values that define the partition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValues() const{ return m_partitionValues; }

    /**
     * <p>The values that define the partition.</p>
     */
    inline bool PartitionValuesHasBeenSet() const { return m_partitionValuesHasBeenSet; }

    /**
     * <p>The values that define the partition.</p>
     */
    inline void SetPartitionValues(const Aws::Vector<Aws::String>& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = value; }

    /**
     * <p>The values that define the partition.</p>
     */
    inline void SetPartitionValues(Aws::Vector<Aws::String>&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = std::move(value); }

    /**
     * <p>The values that define the partition.</p>
     */
    inline PartitionError& WithPartitionValues(const Aws::Vector<Aws::String>& value) { SetPartitionValues(value); return *this;}

    /**
     * <p>The values that define the partition.</p>
     */
    inline PartitionError& WithPartitionValues(Aws::Vector<Aws::String>&& value) { SetPartitionValues(std::move(value)); return *this;}

    /**
     * <p>The values that define the partition.</p>
     */
    inline PartitionError& AddPartitionValues(const Aws::String& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }

    /**
     * <p>The values that define the partition.</p>
     */
    inline PartitionError& AddPartitionValues(Aws::String&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The values that define the partition.</p>
     */
    inline PartitionError& AddPartitionValues(const char* value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }


    /**
     * <p>Details about the partition error.</p>
     */
    inline const ErrorDetail& GetErrorDetail() const{ return m_errorDetail; }

    /**
     * <p>Details about the partition error.</p>
     */
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }

    /**
     * <p>Details about the partition error.</p>
     */
    inline void SetErrorDetail(const ErrorDetail& value) { m_errorDetailHasBeenSet = true; m_errorDetail = value; }

    /**
     * <p>Details about the partition error.</p>
     */
    inline void SetErrorDetail(ErrorDetail&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::move(value); }

    /**
     * <p>Details about the partition error.</p>
     */
    inline PartitionError& WithErrorDetail(const ErrorDetail& value) { SetErrorDetail(value); return *this;}

    /**
     * <p>Details about the partition error.</p>
     */
    inline PartitionError& WithErrorDetail(ErrorDetail&& value) { SetErrorDetail(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_partitionValues;
    bool m_partitionValuesHasBeenSet;

    ErrorDetail m_errorDetail;
    bool m_errorDetailHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
