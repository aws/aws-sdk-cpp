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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/PhysicalConnectionRequirements.h>
#include <aws/glue/model/ConnectionPropertyKey.h>
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
   * <p>A structure that is used to specify a connection to create or
   * update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectionInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API ConnectionInput
  {
  public:
    ConnectionInput();
    ConnectionInput(Aws::Utils::Json::JsonView jsonValue);
    ConnectionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the connection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline ConnectionInput& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline ConnectionInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline ConnectionInput& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the connection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the connection.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the connection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the connection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the connection.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the connection.</p>
     */
    inline ConnectionInput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the connection.</p>
     */
    inline ConnectionInput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the connection.</p>
     */
    inline ConnectionInput& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline ConnectionInput& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline ConnectionInput& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}


    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchCriteria() const{ return m_matchCriteria; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline void SetMatchCriteria(const Aws::Vector<Aws::String>& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = value; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline void SetMatchCriteria(Aws::Vector<Aws::String>&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::move(value); }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline ConnectionInput& WithMatchCriteria(const Aws::Vector<Aws::String>& value) { SetMatchCriteria(value); return *this;}

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline ConnectionInput& WithMatchCriteria(Aws::Vector<Aws::String>&& value) { SetMatchCriteria(std::move(value)); return *this;}

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline ConnectionInput& AddMatchCriteria(const Aws::String& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline ConnectionInput& AddMatchCriteria(Aws::String&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline ConnectionInput& AddMatchCriteria(const char* value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }


    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline const Aws::Map<ConnectionPropertyKey, Aws::String>& GetConnectionProperties() const{ return m_connectionProperties; }

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline void SetConnectionProperties(const Aws::Map<ConnectionPropertyKey, Aws::String>& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = value; }

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline void SetConnectionProperties(Aws::Map<ConnectionPropertyKey, Aws::String>&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::move(value); }

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline ConnectionInput& WithConnectionProperties(const Aws::Map<ConnectionPropertyKey, Aws::String>& value) { SetConnectionProperties(value); return *this;}

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline ConnectionInput& WithConnectionProperties(Aws::Map<ConnectionPropertyKey, Aws::String>&& value) { SetConnectionProperties(std::move(value)); return *this;}

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline ConnectionInput& AddConnectionProperties(const ConnectionPropertyKey& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline ConnectionInput& AddConnectionProperties(ConnectionPropertyKey&& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline ConnectionInput& AddConnectionProperties(const ConnectionPropertyKey& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline ConnectionInput& AddConnectionProperties(ConnectionPropertyKey&& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline ConnectionInput& AddConnectionProperties(ConnectionPropertyKey&& key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline ConnectionInput& AddConnectionProperties(const ConnectionPropertyKey& key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }


    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to successfully make this
     * connection.</p>
     */
    inline const PhysicalConnectionRequirements& GetPhysicalConnectionRequirements() const{ return m_physicalConnectionRequirements; }

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to successfully make this
     * connection.</p>
     */
    inline bool PhysicalConnectionRequirementsHasBeenSet() const { return m_physicalConnectionRequirementsHasBeenSet; }

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to successfully make this
     * connection.</p>
     */
    inline void SetPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = value; }

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to successfully make this
     * connection.</p>
     */
    inline void SetPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = std::move(value); }

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to successfully make this
     * connection.</p>
     */
    inline ConnectionInput& WithPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { SetPhysicalConnectionRequirements(value); return *this;}

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to successfully make this
     * connection.</p>
     */
    inline ConnectionInput& WithPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { SetPhysicalConnectionRequirements(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet;

    Aws::Vector<Aws::String> m_matchCriteria;
    bool m_matchCriteriaHasBeenSet;

    Aws::Map<ConnectionPropertyKey, Aws::String> m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet;

    PhysicalConnectionRequirements m_physicalConnectionRequirements;
    bool m_physicalConnectionRequirementsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
