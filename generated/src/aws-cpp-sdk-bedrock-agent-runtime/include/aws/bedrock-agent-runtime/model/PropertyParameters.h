/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/Parameter.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains the parameters in the request body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PropertyParameters">AWS
   * API Reference</a></p>
   */
  class PropertyParameters
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PropertyParameters();
    AWS_BEDROCKAGENTRUNTIME_API PropertyParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PropertyParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of parameters in the request body.</p>
     */
    inline const Aws::Vector<Parameter>& GetProperties() const{ return m_properties; }

    /**
     * <p>A list of parameters in the request body.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A list of parameters in the request body.</p>
     */
    inline void SetProperties(const Aws::Vector<Parameter>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A list of parameters in the request body.</p>
     */
    inline void SetProperties(Aws::Vector<Parameter>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A list of parameters in the request body.</p>
     */
    inline PropertyParameters& WithProperties(const Aws::Vector<Parameter>& value) { SetProperties(value); return *this;}

    /**
     * <p>A list of parameters in the request body.</p>
     */
    inline PropertyParameters& WithProperties(Aws::Vector<Parameter>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A list of parameters in the request body.</p>
     */
    inline PropertyParameters& AddProperties(const Parameter& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>A list of parameters in the request body.</p>
     */
    inline PropertyParameters& AddProperties(Parameter&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Parameter> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
