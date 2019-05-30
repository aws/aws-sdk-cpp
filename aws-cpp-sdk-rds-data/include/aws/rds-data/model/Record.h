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
#include <aws/rds-data/model/Value.h>
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

  /**
   * <p>A record returned by a call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/Record">AWS API
   * Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API Record
  {
  public:
    Record();
    Record(Aws::Utils::Json::JsonView jsonValue);
    Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values returned in the record.</p>
     */
    inline const Aws::Vector<Value>& GetValues() const{ return m_values; }

    /**
     * <p>The values returned in the record.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values returned in the record.</p>
     */
    inline void SetValues(const Aws::Vector<Value>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values returned in the record.</p>
     */
    inline void SetValues(Aws::Vector<Value>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values returned in the record.</p>
     */
    inline Record& WithValues(const Aws::Vector<Value>& value) { SetValues(value); return *this;}

    /**
     * <p>The values returned in the record.</p>
     */
    inline Record& WithValues(Aws::Vector<Value>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values returned in the record.</p>
     */
    inline Record& AddValues(const Value& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values returned in the record.</p>
     */
    inline Record& AddValues(Value&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Value> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
