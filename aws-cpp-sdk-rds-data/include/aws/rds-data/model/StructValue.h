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
#include <aws/rds-data/RDSDataService_EXPORTS.h>
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
namespace RDSDataService
{
namespace Model
{
  class Value;

  /**
   * <p>A structure value returned by a call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/StructValue">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API StructValue
  {
  public:
    StructValue();
    StructValue(Aws::Utils::Json::JsonView jsonValue);
    StructValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attributes returned in the record.</p>
     */
    inline const Aws::Vector<Value>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes returned in the record.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes returned in the record.</p>
     */
    inline void SetAttributes(const Aws::Vector<Value>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes returned in the record.</p>
     */
    inline void SetAttributes(Aws::Vector<Value>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes returned in the record.</p>
     */
    inline StructValue& WithAttributes(const Aws::Vector<Value>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes returned in the record.</p>
     */
    inline StructValue& WithAttributes(Aws::Vector<Value>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes returned in the record.</p>
     */
    inline StructValue& AddAttributes(const Value& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes returned in the record.</p>
     */
    inline StructValue& AddAttributes(Value&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Value> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
