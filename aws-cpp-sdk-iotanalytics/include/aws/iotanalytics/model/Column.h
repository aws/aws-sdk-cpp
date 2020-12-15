/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Contains information about a column that stores your data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Column">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API Column
  {
  public:
    Column();
    Column(Aws::Utils::Json::JsonView jsonValue);
    Column& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline Column& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline Column& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline Column& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of data. For more information about the supported data types, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html">Common
     * data types</a> in the <i>AWS Glue Developer Guide</i>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of data. For more information about the supported data types, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html">Common
     * data types</a> in the <i>AWS Glue Developer Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of data. For more information about the supported data types, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html">Common
     * data types</a> in the <i>AWS Glue Developer Guide</i>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of data. For more information about the supported data types, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html">Common
     * data types</a> in the <i>AWS Glue Developer Guide</i>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of data. For more information about the supported data types, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html">Common
     * data types</a> in the <i>AWS Glue Developer Guide</i>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of data. For more information about the supported data types, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html">Common
     * data types</a> in the <i>AWS Glue Developer Guide</i>.</p>
     */
    inline Column& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of data. For more information about the supported data types, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html">Common
     * data types</a> in the <i>AWS Glue Developer Guide</i>.</p>
     */
    inline Column& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of data. For more information about the supported data types, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html">Common
     * data types</a> in the <i>AWS Glue Developer Guide</i>.</p>
     */
    inline Column& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
