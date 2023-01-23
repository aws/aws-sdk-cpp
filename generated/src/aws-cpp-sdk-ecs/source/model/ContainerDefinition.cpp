/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ContainerDefinition::ContainerDefinition() : 
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_repositoryCredentialsHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false),
    m_linksHasBeenSet(false),
    m_portMappingsHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_environmentFilesHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_volumesFromHasBeenSet(false),
    m_linuxParametersHasBeenSet(false),
    m_secretsHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_startTimeout(0),
    m_startTimeoutHasBeenSet(false),
    m_stopTimeout(0),
    m_stopTimeoutHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_disableNetworking(false),
    m_disableNetworkingHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_dnsSearchDomainsHasBeenSet(false),
    m_extraHostsHasBeenSet(false),
    m_dockerSecurityOptionsHasBeenSet(false),
    m_interactive(false),
    m_interactiveHasBeenSet(false),
    m_pseudoTerminal(false),
    m_pseudoTerminalHasBeenSet(false),
    m_dockerLabelsHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_systemControlsHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_firelensConfigurationHasBeenSet(false)
{
}

ContainerDefinition::ContainerDefinition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_repositoryCredentialsHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false),
    m_linksHasBeenSet(false),
    m_portMappingsHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_environmentFilesHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_volumesFromHasBeenSet(false),
    m_linuxParametersHasBeenSet(false),
    m_secretsHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_startTimeout(0),
    m_startTimeoutHasBeenSet(false),
    m_stopTimeout(0),
    m_stopTimeoutHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_disableNetworking(false),
    m_disableNetworkingHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_dnsSearchDomainsHasBeenSet(false),
    m_extraHostsHasBeenSet(false),
    m_dockerSecurityOptionsHasBeenSet(false),
    m_interactive(false),
    m_interactiveHasBeenSet(false),
    m_pseudoTerminal(false),
    m_pseudoTerminalHasBeenSet(false),
    m_dockerLabelsHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_systemControlsHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_firelensConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDefinition& ContainerDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryCredentials"))
  {
    m_repositoryCredentials = jsonValue.GetObject("repositoryCredentials");

    m_repositoryCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetInteger("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInteger("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryReservation"))
  {
    m_memoryReservation = jsonValue.GetInteger("memoryReservation");

    m_memoryReservationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("links"))
  {
    Aws::Utils::Array<JsonView> linksJsonList = jsonValue.GetArray("links");
    for(unsigned linksIndex = 0; linksIndex < linksJsonList.GetLength(); ++linksIndex)
    {
      m_links.push_back(linksJsonList[linksIndex].AsString());
    }
    m_linksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portMappings"))
  {
    Aws::Utils::Array<JsonView> portMappingsJsonList = jsonValue.GetArray("portMappings");
    for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
    {
      m_portMappings.push_back(portMappingsJsonList[portMappingsIndex].AsObject());
    }
    m_portMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("essential"))
  {
    m_essential = jsonValue.GetBool("essential");

    m_essentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entryPoint"))
  {
    Aws::Utils::Array<JsonView> entryPointJsonList = jsonValue.GetArray("entryPoint");
    for(unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex)
    {
      m_entryPoint.push_back(entryPointJsonList[entryPointIndex].AsString());
    }
    m_entryPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    Aws::Utils::Array<JsonView> environmentJsonList = jsonValue.GetArray("environment");
    for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
    {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentFiles"))
  {
    Aws::Utils::Array<JsonView> environmentFilesJsonList = jsonValue.GetArray("environmentFiles");
    for(unsigned environmentFilesIndex = 0; environmentFilesIndex < environmentFilesJsonList.GetLength(); ++environmentFilesIndex)
    {
      m_environmentFiles.push_back(environmentFilesJsonList[environmentFilesIndex].AsObject());
    }
    m_environmentFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountPoints"))
  {
    Aws::Utils::Array<JsonView> mountPointsJsonList = jsonValue.GetArray("mountPoints");
    for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
    {
      m_mountPoints.push_back(mountPointsJsonList[mountPointsIndex].AsObject());
    }
    m_mountPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumesFrom"))
  {
    Aws::Utils::Array<JsonView> volumesFromJsonList = jsonValue.GetArray("volumesFrom");
    for(unsigned volumesFromIndex = 0; volumesFromIndex < volumesFromJsonList.GetLength(); ++volumesFromIndex)
    {
      m_volumesFrom.push_back(volumesFromJsonList[volumesFromIndex].AsObject());
    }
    m_volumesFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linuxParameters"))
  {
    m_linuxParameters = jsonValue.GetObject("linuxParameters");

    m_linuxParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secrets"))
  {
    Aws::Utils::Array<JsonView> secretsJsonList = jsonValue.GetArray("secrets");
    for(unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex)
    {
      m_secrets.push_back(secretsJsonList[secretsIndex].AsObject());
    }
    m_secretsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dependsOn"))
  {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("dependsOn");
    for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
    {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsObject());
    }
    m_dependsOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimeout"))
  {
    m_startTimeout = jsonValue.GetInteger("startTimeout");

    m_startTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopTimeout"))
  {
    m_stopTimeout = jsonValue.GetInteger("stopTimeout");

    m_stopTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetString("user");

    m_userHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workingDirectory"))
  {
    m_workingDirectory = jsonValue.GetString("workingDirectory");

    m_workingDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("disableNetworking"))
  {
    m_disableNetworking = jsonValue.GetBool("disableNetworking");

    m_disableNetworkingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privileged"))
  {
    m_privileged = jsonValue.GetBool("privileged");

    m_privilegedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readonlyRootFilesystem"))
  {
    m_readonlyRootFilesystem = jsonValue.GetBool("readonlyRootFilesystem");

    m_readonlyRootFilesystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsServers"))
  {
    Aws::Utils::Array<JsonView> dnsServersJsonList = jsonValue.GetArray("dnsServers");
    for(unsigned dnsServersIndex = 0; dnsServersIndex < dnsServersJsonList.GetLength(); ++dnsServersIndex)
    {
      m_dnsServers.push_back(dnsServersJsonList[dnsServersIndex].AsString());
    }
    m_dnsServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsSearchDomains"))
  {
    Aws::Utils::Array<JsonView> dnsSearchDomainsJsonList = jsonValue.GetArray("dnsSearchDomains");
    for(unsigned dnsSearchDomainsIndex = 0; dnsSearchDomainsIndex < dnsSearchDomainsJsonList.GetLength(); ++dnsSearchDomainsIndex)
    {
      m_dnsSearchDomains.push_back(dnsSearchDomainsJsonList[dnsSearchDomainsIndex].AsString());
    }
    m_dnsSearchDomainsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("extraHosts"))
  {
    Aws::Utils::Array<JsonView> extraHostsJsonList = jsonValue.GetArray("extraHosts");
    for(unsigned extraHostsIndex = 0; extraHostsIndex < extraHostsJsonList.GetLength(); ++extraHostsIndex)
    {
      m_extraHosts.push_back(extraHostsJsonList[extraHostsIndex].AsObject());
    }
    m_extraHostsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dockerSecurityOptions"))
  {
    Aws::Utils::Array<JsonView> dockerSecurityOptionsJsonList = jsonValue.GetArray("dockerSecurityOptions");
    for(unsigned dockerSecurityOptionsIndex = 0; dockerSecurityOptionsIndex < dockerSecurityOptionsJsonList.GetLength(); ++dockerSecurityOptionsIndex)
    {
      m_dockerSecurityOptions.push_back(dockerSecurityOptionsJsonList[dockerSecurityOptionsIndex].AsString());
    }
    m_dockerSecurityOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interactive"))
  {
    m_interactive = jsonValue.GetBool("interactive");

    m_interactiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pseudoTerminal"))
  {
    m_pseudoTerminal = jsonValue.GetBool("pseudoTerminal");

    m_pseudoTerminalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dockerLabels"))
  {
    Aws::Map<Aws::String, JsonView> dockerLabelsJsonMap = jsonValue.GetObject("dockerLabels").GetAllObjects();
    for(auto& dockerLabelsItem : dockerLabelsJsonMap)
    {
      m_dockerLabels[dockerLabelsItem.first] = dockerLabelsItem.second.AsString();
    }
    m_dockerLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ulimits"))
  {
    Aws::Utils::Array<JsonView> ulimitsJsonList = jsonValue.GetArray("ulimits");
    for(unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex)
    {
      m_ulimits.push_back(ulimitsJsonList[ulimitsIndex].AsObject());
    }
    m_ulimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("logConfiguration");

    m_logConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthCheck"))
  {
    m_healthCheck = jsonValue.GetObject("healthCheck");

    m_healthCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemControls"))
  {
    Aws::Utils::Array<JsonView> systemControlsJsonList = jsonValue.GetArray("systemControls");
    for(unsigned systemControlsIndex = 0; systemControlsIndex < systemControlsJsonList.GetLength(); ++systemControlsIndex)
    {
      m_systemControls.push_back(systemControlsJsonList[systemControlsIndex].AsObject());
    }
    m_systemControlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceRequirements"))
  {
    Aws::Utils::Array<JsonView> resourceRequirementsJsonList = jsonValue.GetArray("resourceRequirements");
    for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
    {
      m_resourceRequirements.push_back(resourceRequirementsJsonList[resourceRequirementsIndex].AsObject());
    }
    m_resourceRequirementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firelensConfiguration"))
  {
    m_firelensConfiguration = jsonValue.GetObject("firelensConfiguration");

    m_firelensConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_repositoryCredentialsHasBeenSet)
  {
   payload.WithObject("repositoryCredentials", m_repositoryCredentials.Jsonize());

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithInteger("cpu", m_cpu);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("memory", m_memory);

  }

  if(m_memoryReservationHasBeenSet)
  {
   payload.WithInteger("memoryReservation", m_memoryReservation);

  }

  if(m_linksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linksJsonList(m_links.size());
   for(unsigned linksIndex = 0; linksIndex < linksJsonList.GetLength(); ++linksIndex)
   {
     linksJsonList[linksIndex].AsString(m_links[linksIndex]);
   }
   payload.WithArray("links", std::move(linksJsonList));

  }

  if(m_portMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portMappingsJsonList(m_portMappings.size());
   for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
   {
     portMappingsJsonList[portMappingsIndex].AsObject(m_portMappings[portMappingsIndex].Jsonize());
   }
   payload.WithArray("portMappings", std::move(portMappingsJsonList));

  }

  if(m_essentialHasBeenSet)
  {
   payload.WithBool("essential", m_essential);

  }

  if(m_entryPointHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entryPointJsonList(m_entryPoint.size());
   for(unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex)
   {
     entryPointJsonList[entryPointIndex].AsString(m_entryPoint[entryPointIndex]);
   }
   payload.WithArray("entryPoint", std::move(entryPointJsonList));

  }

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("command", std::move(commandJsonList));

  }

  if(m_environmentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("environment", std::move(environmentJsonList));

  }

  if(m_environmentFilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentFilesJsonList(m_environmentFiles.size());
   for(unsigned environmentFilesIndex = 0; environmentFilesIndex < environmentFilesJsonList.GetLength(); ++environmentFilesIndex)
   {
     environmentFilesJsonList[environmentFilesIndex].AsObject(m_environmentFiles[environmentFilesIndex].Jsonize());
   }
   payload.WithArray("environmentFiles", std::move(environmentFilesJsonList));

  }

  if(m_mountPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mountPointsJsonList(m_mountPoints.size());
   for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
   {
     mountPointsJsonList[mountPointsIndex].AsObject(m_mountPoints[mountPointsIndex].Jsonize());
   }
   payload.WithArray("mountPoints", std::move(mountPointsJsonList));

  }

  if(m_volumesFromHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesFromJsonList(m_volumesFrom.size());
   for(unsigned volumesFromIndex = 0; volumesFromIndex < volumesFromJsonList.GetLength(); ++volumesFromIndex)
   {
     volumesFromJsonList[volumesFromIndex].AsObject(m_volumesFrom[volumesFromIndex].Jsonize());
   }
   payload.WithArray("volumesFrom", std::move(volumesFromJsonList));

  }

  if(m_linuxParametersHasBeenSet)
  {
   payload.WithObject("linuxParameters", m_linuxParameters.Jsonize());

  }

  if(m_secretsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secretsJsonList(m_secrets.size());
   for(unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex)
   {
     secretsJsonList[secretsIndex].AsObject(m_secrets[secretsIndex].Jsonize());
   }
   payload.WithArray("secrets", std::move(secretsJsonList));

  }

  if(m_dependsOnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
   for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
   {
     dependsOnJsonList[dependsOnIndex].AsObject(m_dependsOn[dependsOnIndex].Jsonize());
   }
   payload.WithArray("dependsOn", std::move(dependsOnJsonList));

  }

  if(m_startTimeoutHasBeenSet)
  {
   payload.WithInteger("startTimeout", m_startTimeout);

  }

  if(m_stopTimeoutHasBeenSet)
  {
   payload.WithInteger("stopTimeout", m_stopTimeout);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_userHasBeenSet)
  {
   payload.WithString("user", m_user);

  }

  if(m_workingDirectoryHasBeenSet)
  {
   payload.WithString("workingDirectory", m_workingDirectory);

  }

  if(m_disableNetworkingHasBeenSet)
  {
   payload.WithBool("disableNetworking", m_disableNetworking);

  }

  if(m_privilegedHasBeenSet)
  {
   payload.WithBool("privileged", m_privileged);

  }

  if(m_readonlyRootFilesystemHasBeenSet)
  {
   payload.WithBool("readonlyRootFilesystem", m_readonlyRootFilesystem);

  }

  if(m_dnsServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsServersJsonList(m_dnsServers.size());
   for(unsigned dnsServersIndex = 0; dnsServersIndex < dnsServersJsonList.GetLength(); ++dnsServersIndex)
   {
     dnsServersJsonList[dnsServersIndex].AsString(m_dnsServers[dnsServersIndex]);
   }
   payload.WithArray("dnsServers", std::move(dnsServersJsonList));

  }

  if(m_dnsSearchDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsSearchDomainsJsonList(m_dnsSearchDomains.size());
   for(unsigned dnsSearchDomainsIndex = 0; dnsSearchDomainsIndex < dnsSearchDomainsJsonList.GetLength(); ++dnsSearchDomainsIndex)
   {
     dnsSearchDomainsJsonList[dnsSearchDomainsIndex].AsString(m_dnsSearchDomains[dnsSearchDomainsIndex]);
   }
   payload.WithArray("dnsSearchDomains", std::move(dnsSearchDomainsJsonList));

  }

  if(m_extraHostsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> extraHostsJsonList(m_extraHosts.size());
   for(unsigned extraHostsIndex = 0; extraHostsIndex < extraHostsJsonList.GetLength(); ++extraHostsIndex)
   {
     extraHostsJsonList[extraHostsIndex].AsObject(m_extraHosts[extraHostsIndex].Jsonize());
   }
   payload.WithArray("extraHosts", std::move(extraHostsJsonList));

  }

  if(m_dockerSecurityOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dockerSecurityOptionsJsonList(m_dockerSecurityOptions.size());
   for(unsigned dockerSecurityOptionsIndex = 0; dockerSecurityOptionsIndex < dockerSecurityOptionsJsonList.GetLength(); ++dockerSecurityOptionsIndex)
   {
     dockerSecurityOptionsJsonList[dockerSecurityOptionsIndex].AsString(m_dockerSecurityOptions[dockerSecurityOptionsIndex]);
   }
   payload.WithArray("dockerSecurityOptions", std::move(dockerSecurityOptionsJsonList));

  }

  if(m_interactiveHasBeenSet)
  {
   payload.WithBool("interactive", m_interactive);

  }

  if(m_pseudoTerminalHasBeenSet)
  {
   payload.WithBool("pseudoTerminal", m_pseudoTerminal);

  }

  if(m_dockerLabelsHasBeenSet)
  {
   JsonValue dockerLabelsJsonMap;
   for(auto& dockerLabelsItem : m_dockerLabels)
   {
     dockerLabelsJsonMap.WithString(dockerLabelsItem.first, dockerLabelsItem.second);
   }
   payload.WithObject("dockerLabels", std::move(dockerLabelsJsonMap));

  }

  if(m_ulimitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ulimitsJsonList(m_ulimits.size());
   for(unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex)
   {
     ulimitsJsonList[ulimitsIndex].AsObject(m_ulimits[ulimitsIndex].Jsonize());
   }
   payload.WithArray("ulimits", std::move(ulimitsJsonList));

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_healthCheckHasBeenSet)
  {
   payload.WithObject("healthCheck", m_healthCheck.Jsonize());

  }

  if(m_systemControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> systemControlsJsonList(m_systemControls.size());
   for(unsigned systemControlsIndex = 0; systemControlsIndex < systemControlsJsonList.GetLength(); ++systemControlsIndex)
   {
     systemControlsJsonList[systemControlsIndex].AsObject(m_systemControls[systemControlsIndex].Jsonize());
   }
   payload.WithArray("systemControls", std::move(systemControlsJsonList));

  }

  if(m_resourceRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceRequirementsJsonList(m_resourceRequirements.size());
   for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
   {
     resourceRequirementsJsonList[resourceRequirementsIndex].AsObject(m_resourceRequirements[resourceRequirementsIndex].Jsonize());
   }
   payload.WithArray("resourceRequirements", std::move(resourceRequirementsJsonList));

  }

  if(m_firelensConfigurationHasBeenSet)
  {
   payload.WithObject("firelensConfiguration", m_firelensConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
