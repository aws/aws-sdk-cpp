﻿/*
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
   * <p>Contains the name and identifier of a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PipelineIdName">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API PipelineIdName
  {
  public:
    PipelineIdName();
    PipelineIdName(const Aws::Utils::Json::JsonValue& jsonValue);
    PipelineIdName& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the pipeline that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the pipeline that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the pipeline that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the pipeline that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the pipeline that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline PipelineIdName& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the pipeline that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline PipelineIdName& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the pipeline that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline PipelineIdName& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineIdName& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineIdName& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineIdName& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
