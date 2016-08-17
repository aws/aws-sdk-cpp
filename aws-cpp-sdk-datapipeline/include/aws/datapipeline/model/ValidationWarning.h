/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Defines a validation warning. Validation warnings do not prevent pipeline
   * activation. The set of validation warnings that can be returned are defined by
   * AWS Data Pipeline.</p>
   */
  class AWS_DATAPIPELINE_API ValidationWarning
  {
  public:
    ValidationWarning();
    ValidationWarning(const Aws::Utils::Json::JsonValue& jsonValue);
    ValidationWarning& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline ValidationWarning& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline ValidationWarning& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline ValidationWarning& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>A description of the validation warning.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warningsHasBeenSet = true; m_warnings = value; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warningsHasBeenSet = true; m_warnings = value; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(value); return *this;}

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& AddWarnings(const Aws::String& value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& AddWarnings(Aws::String&& value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& AddWarnings(const char* value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::Vector<Aws::String> m_warnings;
    bool m_warningsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
