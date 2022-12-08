/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A set of port ranges for use in the rules in a rule group. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PortSet">AWS
   * API Reference</a></p>
   */
  class PortSet
  {
  public:
    AWS_NETWORKFIREWALL_API PortSet();
    AWS_NETWORKFIREWALL_API PortSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API PortSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The set of port ranges. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDefinition() const{ return m_definition; }

    /**
     * <p>The set of port ranges. </p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The set of port ranges. </p>
     */
    inline void SetDefinition(const Aws::Vector<Aws::String>& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The set of port ranges. </p>
     */
    inline void SetDefinition(Aws::Vector<Aws::String>&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The set of port ranges. </p>
     */
    inline PortSet& WithDefinition(const Aws::Vector<Aws::String>& value) { SetDefinition(value); return *this;}

    /**
     * <p>The set of port ranges. </p>
     */
    inline PortSet& WithDefinition(Aws::Vector<Aws::String>&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The set of port ranges. </p>
     */
    inline PortSet& AddDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition.push_back(value); return *this; }

    /**
     * <p>The set of port ranges. </p>
     */
    inline PortSet& AddDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition.push_back(std::move(value)); return *this; }

    /**
     * <p>The set of port ranges. </p>
     */
    inline PortSet& AddDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
