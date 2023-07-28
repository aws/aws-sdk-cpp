/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SnowflakeNodeData.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a Snowflake target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SnowflakeTarget">AWS
   * API Reference</a></p>
   */
  class SnowflakeTarget
  {
  public:
    AWS_GLUE_API SnowflakeTarget();
    AWS_GLUE_API SnowflakeTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SnowflakeTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Snowflake target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Snowflake target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Snowflake target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Snowflake target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Snowflake target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Snowflake target.</p>
     */
    inline SnowflakeTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Snowflake target.</p>
     */
    inline SnowflakeTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Snowflake target.</p>
     */
    inline SnowflakeTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the data of the Snowflake target node.</p>
     */
    inline const SnowflakeNodeData& GetData() const{ return m_data; }

    /**
     * <p>Specifies the data of the Snowflake target node.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>Specifies the data of the Snowflake target node.</p>
     */
    inline void SetData(const SnowflakeNodeData& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>Specifies the data of the Snowflake target node.</p>
     */
    inline void SetData(SnowflakeNodeData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>Specifies the data of the Snowflake target node.</p>
     */
    inline SnowflakeTarget& WithData(const SnowflakeNodeData& value) { SetData(value); return *this;}

    /**
     * <p>Specifies the data of the Snowflake target node.</p>
     */
    inline SnowflakeTarget& WithData(SnowflakeNodeData&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline SnowflakeTarget& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline SnowflakeTarget& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline SnowflakeTarget& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline SnowflakeTarget& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline SnowflakeTarget& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SnowflakeNodeData m_data;
    bool m_dataHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
