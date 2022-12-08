/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/PortType.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A node input port.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NodeInputPort">AWS
   * API Reference</a></p>
   */
  class NodeInputPort
  {
  public:
    AWS_PANORAMA_API NodeInputPort();
    AWS_PANORAMA_API NodeInputPort(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeInputPort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The input port's default value.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The input port's default value.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The input port's default value.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The input port's default value.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The input port's default value.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The input port's default value.</p>
     */
    inline NodeInputPort& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The input port's default value.</p>
     */
    inline NodeInputPort& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The input port's default value.</p>
     */
    inline NodeInputPort& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The input port's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The input port's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The input port's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The input port's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The input port's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The input port's description.</p>
     */
    inline NodeInputPort& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The input port's description.</p>
     */
    inline NodeInputPort& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The input port's description.</p>
     */
    inline NodeInputPort& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The input port's max connections.</p>
     */
    inline int GetMaxConnections() const{ return m_maxConnections; }

    /**
     * <p>The input port's max connections.</p>
     */
    inline bool MaxConnectionsHasBeenSet() const { return m_maxConnectionsHasBeenSet; }

    /**
     * <p>The input port's max connections.</p>
     */
    inline void SetMaxConnections(int value) { m_maxConnectionsHasBeenSet = true; m_maxConnections = value; }

    /**
     * <p>The input port's max connections.</p>
     */
    inline NodeInputPort& WithMaxConnections(int value) { SetMaxConnections(value); return *this;}


    /**
     * <p>The input port's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The input port's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The input port's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The input port's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The input port's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The input port's name.</p>
     */
    inline NodeInputPort& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The input port's name.</p>
     */
    inline NodeInputPort& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The input port's name.</p>
     */
    inline NodeInputPort& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The input port's type.</p>
     */
    inline const PortType& GetType() const{ return m_type; }

    /**
     * <p>The input port's type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The input port's type.</p>
     */
    inline void SetType(const PortType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The input port's type.</p>
     */
    inline void SetType(PortType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The input port's type.</p>
     */
    inline NodeInputPort& WithType(const PortType& value) { SetType(value); return *this;}

    /**
     * <p>The input port's type.</p>
     */
    inline NodeInputPort& WithType(PortType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_maxConnections;
    bool m_maxConnectionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PortType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
