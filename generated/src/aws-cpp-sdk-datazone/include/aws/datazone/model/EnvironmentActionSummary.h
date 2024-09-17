/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ActionParameters.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details about the specified action configured for an environment. For
   * example, the details of the specified console links for an analytics tool that
   * is available in this environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentActionSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentActionSummary
  {
  public:
    AWS_DATAZONE_API EnvironmentActionSummary();
    AWS_DATAZONE_API EnvironmentActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment action description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EnvironmentActionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EnvironmentActionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EnvironmentActionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone domain ID of the environment action.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline EnvironmentActionSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline EnvironmentActionSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline EnvironmentActionSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID of the environment action.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline EnvironmentActionSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline EnvironmentActionSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline EnvironmentActionSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment action.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EnvironmentActionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EnvironmentActionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EnvironmentActionSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EnvironmentActionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EnvironmentActionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EnvironmentActionSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters of the environment action.</p>
     */
    inline const ActionParameters& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const ActionParameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(ActionParameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline EnvironmentActionSummary& WithParameters(const ActionParameters& value) { SetParameters(value); return *this;}
    inline EnvironmentActionSummary& WithParameters(ActionParameters&& value) { SetParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ActionParameters m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
