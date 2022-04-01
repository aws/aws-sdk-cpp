﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when Dynatrace is being used as a source.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DynatraceSourceProperties">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API DynatraceSourceProperties
  {
  public:
    DynatraceSourceProperties();
    DynatraceSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    DynatraceSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The object specified in the Dynatrace flow source. </p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }

    /**
     * <p> The object specified in the Dynatrace flow source. </p>
     */
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    /**
     * <p> The object specified in the Dynatrace flow source. </p>
     */
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    /**
     * <p> The object specified in the Dynatrace flow source. </p>
     */
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    /**
     * <p> The object specified in the Dynatrace flow source. </p>
     */
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    /**
     * <p> The object specified in the Dynatrace flow source. </p>
     */
    inline DynatraceSourceProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    /**
     * <p> The object specified in the Dynatrace flow source. </p>
     */
    inline DynatraceSourceProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    /**
     * <p> The object specified in the Dynatrace flow source. </p>
     */
    inline DynatraceSourceProperties& WithObject(const char* value) { SetObject(value); return *this;}

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
