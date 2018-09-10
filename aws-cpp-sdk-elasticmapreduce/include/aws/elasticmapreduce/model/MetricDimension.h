﻿/*
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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>A CloudWatch dimension, which is specified using a <code>Key</code> (known as
   * a <code>Name</code> in CloudWatch), <code>Value</code> pair. By default, Amazon
   * EMR uses one dimension whose <code>Key</code> is <code>JobFlowID</code> and
   * <code>Value</code> is a variable representing the cluster ID, which is
   * <code>${emr.clusterId}</code>. This enables the rule to bootstrap when the
   * cluster ID becomes available.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/MetricDimension">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API MetricDimension
  {
  public:
    MetricDimension();
    MetricDimension(Aws::Utils::Json::JsonView jsonValue);
    MetricDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimension name.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The dimension name.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The dimension name.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The dimension name.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The dimension name.</p>
     */
    inline MetricDimension& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The dimension name.</p>
     */
    inline MetricDimension& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The dimension name.</p>
     */
    inline MetricDimension& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The dimension value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The dimension value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The dimension value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The dimension value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The dimension value.</p>
     */
    inline MetricDimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The dimension value.</p>
     */
    inline MetricDimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The dimension value.</p>
     */
    inline MetricDimension& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
