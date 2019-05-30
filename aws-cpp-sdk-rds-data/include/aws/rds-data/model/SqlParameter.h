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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds-data/model/Field.h>
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
   * <p>A parameter used in a SQL statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/SqlParameter">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API SqlParameter
  {
  public:
    SqlParameter();
    SqlParameter(Aws::Utils::Json::JsonView jsonValue);
    SqlParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline SqlParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline SqlParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline SqlParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the parameter.</p>
     */
    inline const Field& GetValue() const{ return m_value; }

    /**
     * <p>The value of the parameter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the parameter.</p>
     */
    inline void SetValue(const Field& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the parameter.</p>
     */
    inline void SetValue(Field&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the parameter.</p>
     */
    inline SqlParameter& WithValue(const Field& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the parameter.</p>
     */
    inline SqlParameter& WithValue(Field&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Field m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
