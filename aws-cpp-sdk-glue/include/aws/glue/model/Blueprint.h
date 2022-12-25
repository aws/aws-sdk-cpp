/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/BlueprintStatus.h>
#include <aws/glue/model/LastActiveDefinition.h>
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
   * <p>The details of a blueprint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Blueprint">AWS API
   * Reference</a></p>
   */
  class Blueprint
  {
  public:
    AWS_GLUE_API Blueprint();
    AWS_GLUE_API Blueprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Blueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline Blueprint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline Blueprint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline Blueprint& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the blueprint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline Blueprint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the blueprint.</p>
     */
    inline Blueprint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the blueprint.</p>
     */
    inline Blueprint& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time the blueprint was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }

    /**
     * <p>The date and time the blueprint was registered.</p>
     */
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }

    /**
     * <p>The date and time the blueprint was registered.</p>
     */
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }

    /**
     * <p>The date and time the blueprint was registered.</p>
     */
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }

    /**
     * <p>The date and time the blueprint was registered.</p>
     */
    inline Blueprint& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}

    /**
     * <p>The date and time the blueprint was registered.</p>
     */
    inline Blueprint& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time the blueprint was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>The date and time the blueprint was last modified.</p>
     */
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }

    /**
     * <p>The date and time the blueprint was last modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = value; }

    /**
     * <p>The date and time the blueprint was last modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::move(value); }

    /**
     * <p>The date and time the blueprint was last modified.</p>
     */
    inline Blueprint& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The date and time the blueprint was last modified.</p>
     */
    inline Blueprint& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>A JSON string that indicates the list of parameter specifications for the
     * blueprint.</p>
     */
    inline const Aws::String& GetParameterSpec() const{ return m_parameterSpec; }

    /**
     * <p>A JSON string that indicates the list of parameter specifications for the
     * blueprint.</p>
     */
    inline bool ParameterSpecHasBeenSet() const { return m_parameterSpecHasBeenSet; }

    /**
     * <p>A JSON string that indicates the list of parameter specifications for the
     * blueprint.</p>
     */
    inline void SetParameterSpec(const Aws::String& value) { m_parameterSpecHasBeenSet = true; m_parameterSpec = value; }

    /**
     * <p>A JSON string that indicates the list of parameter specifications for the
     * blueprint.</p>
     */
    inline void SetParameterSpec(Aws::String&& value) { m_parameterSpecHasBeenSet = true; m_parameterSpec = std::move(value); }

    /**
     * <p>A JSON string that indicates the list of parameter specifications for the
     * blueprint.</p>
     */
    inline void SetParameterSpec(const char* value) { m_parameterSpecHasBeenSet = true; m_parameterSpec.assign(value); }

    /**
     * <p>A JSON string that indicates the list of parameter specifications for the
     * blueprint.</p>
     */
    inline Blueprint& WithParameterSpec(const Aws::String& value) { SetParameterSpec(value); return *this;}

    /**
     * <p>A JSON string that indicates the list of parameter specifications for the
     * blueprint.</p>
     */
    inline Blueprint& WithParameterSpec(Aws::String&& value) { SetParameterSpec(std::move(value)); return *this;}

    /**
     * <p>A JSON string that indicates the list of parameter specifications for the
     * blueprint.</p>
     */
    inline Blueprint& WithParameterSpec(const char* value) { SetParameterSpec(value); return *this;}


    /**
     * <p>Specifies the path in Amazon S3 where the blueprint is published.</p>
     */
    inline const Aws::String& GetBlueprintLocation() const{ return m_blueprintLocation; }

    /**
     * <p>Specifies the path in Amazon S3 where the blueprint is published.</p>
     */
    inline bool BlueprintLocationHasBeenSet() const { return m_blueprintLocationHasBeenSet; }

    /**
     * <p>Specifies the path in Amazon S3 where the blueprint is published.</p>
     */
    inline void SetBlueprintLocation(const Aws::String& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = value; }

    /**
     * <p>Specifies the path in Amazon S3 where the blueprint is published.</p>
     */
    inline void SetBlueprintLocation(Aws::String&& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = std::move(value); }

    /**
     * <p>Specifies the path in Amazon S3 where the blueprint is published.</p>
     */
    inline void SetBlueprintLocation(const char* value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation.assign(value); }

    /**
     * <p>Specifies the path in Amazon S3 where the blueprint is published.</p>
     */
    inline Blueprint& WithBlueprintLocation(const Aws::String& value) { SetBlueprintLocation(value); return *this;}

    /**
     * <p>Specifies the path in Amazon S3 where the blueprint is published.</p>
     */
    inline Blueprint& WithBlueprintLocation(Aws::String&& value) { SetBlueprintLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies the path in Amazon S3 where the blueprint is published.</p>
     */
    inline Blueprint& WithBlueprintLocation(const char* value) { SetBlueprintLocation(value); return *this;}


    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you call
     * <code>CreateBlueprint/UpdateBlueprint</code> to register the blueprint in
     * Glue.</p>
     */
    inline const Aws::String& GetBlueprintServiceLocation() const{ return m_blueprintServiceLocation; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you call
     * <code>CreateBlueprint/UpdateBlueprint</code> to register the blueprint in
     * Glue.</p>
     */
    inline bool BlueprintServiceLocationHasBeenSet() const { return m_blueprintServiceLocationHasBeenSet; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you call
     * <code>CreateBlueprint/UpdateBlueprint</code> to register the blueprint in
     * Glue.</p>
     */
    inline void SetBlueprintServiceLocation(const Aws::String& value) { m_blueprintServiceLocationHasBeenSet = true; m_blueprintServiceLocation = value; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you call
     * <code>CreateBlueprint/UpdateBlueprint</code> to register the blueprint in
     * Glue.</p>
     */
    inline void SetBlueprintServiceLocation(Aws::String&& value) { m_blueprintServiceLocationHasBeenSet = true; m_blueprintServiceLocation = std::move(value); }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you call
     * <code>CreateBlueprint/UpdateBlueprint</code> to register the blueprint in
     * Glue.</p>
     */
    inline void SetBlueprintServiceLocation(const char* value) { m_blueprintServiceLocationHasBeenSet = true; m_blueprintServiceLocation.assign(value); }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you call
     * <code>CreateBlueprint/UpdateBlueprint</code> to register the blueprint in
     * Glue.</p>
     */
    inline Blueprint& WithBlueprintServiceLocation(const Aws::String& value) { SetBlueprintServiceLocation(value); return *this;}

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you call
     * <code>CreateBlueprint/UpdateBlueprint</code> to register the blueprint in
     * Glue.</p>
     */
    inline Blueprint& WithBlueprintServiceLocation(Aws::String&& value) { SetBlueprintServiceLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you call
     * <code>CreateBlueprint/UpdateBlueprint</code> to register the blueprint in
     * Glue.</p>
     */
    inline Blueprint& WithBlueprintServiceLocation(const char* value) { SetBlueprintServiceLocation(value); return *this;}


    /**
     * <p>The status of the blueprint registration.</p> <ul> <li> <p>Creating — The
     * blueprint registration is in progress.</p> </li> <li> <p>Active — The blueprint
     * has been successfully registered.</p> </li> <li> <p>Updating — An update to the
     * blueprint registration is in progress.</p> </li> <li> <p>Failed — The blueprint
     * registration failed.</p> </li> </ul>
     */
    inline const BlueprintStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the blueprint registration.</p> <ul> <li> <p>Creating — The
     * blueprint registration is in progress.</p> </li> <li> <p>Active — The blueprint
     * has been successfully registered.</p> </li> <li> <p>Updating — An update to the
     * blueprint registration is in progress.</p> </li> <li> <p>Failed — The blueprint
     * registration failed.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the blueprint registration.</p> <ul> <li> <p>Creating — The
     * blueprint registration is in progress.</p> </li> <li> <p>Active — The blueprint
     * has been successfully registered.</p> </li> <li> <p>Updating — An update to the
     * blueprint registration is in progress.</p> </li> <li> <p>Failed — The blueprint
     * registration failed.</p> </li> </ul>
     */
    inline void SetStatus(const BlueprintStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the blueprint registration.</p> <ul> <li> <p>Creating — The
     * blueprint registration is in progress.</p> </li> <li> <p>Active — The blueprint
     * has been successfully registered.</p> </li> <li> <p>Updating — An update to the
     * blueprint registration is in progress.</p> </li> <li> <p>Failed — The blueprint
     * registration failed.</p> </li> </ul>
     */
    inline void SetStatus(BlueprintStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the blueprint registration.</p> <ul> <li> <p>Creating — The
     * blueprint registration is in progress.</p> </li> <li> <p>Active — The blueprint
     * has been successfully registered.</p> </li> <li> <p>Updating — An update to the
     * blueprint registration is in progress.</p> </li> <li> <p>Failed — The blueprint
     * registration failed.</p> </li> </ul>
     */
    inline Blueprint& WithStatus(const BlueprintStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the blueprint registration.</p> <ul> <li> <p>Creating — The
     * blueprint registration is in progress.</p> </li> <li> <p>Active — The blueprint
     * has been successfully registered.</p> </li> <li> <p>Updating — An update to the
     * blueprint registration is in progress.</p> </li> <li> <p>Failed — The blueprint
     * registration failed.</p> </li> </ul>
     */
    inline Blueprint& WithStatus(BlueprintStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message.</p>
     */
    inline Blueprint& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message.</p>
     */
    inline Blueprint& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message.</p>
     */
    inline Blueprint& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>When there are multiple versions of a blueprint and the latest version has
     * some errors, this attribute indicates the last successful blueprint definition
     * that is available with the service.</p>
     */
    inline const LastActiveDefinition& GetLastActiveDefinition() const{ return m_lastActiveDefinition; }

    /**
     * <p>When there are multiple versions of a blueprint and the latest version has
     * some errors, this attribute indicates the last successful blueprint definition
     * that is available with the service.</p>
     */
    inline bool LastActiveDefinitionHasBeenSet() const { return m_lastActiveDefinitionHasBeenSet; }

    /**
     * <p>When there are multiple versions of a blueprint and the latest version has
     * some errors, this attribute indicates the last successful blueprint definition
     * that is available with the service.</p>
     */
    inline void SetLastActiveDefinition(const LastActiveDefinition& value) { m_lastActiveDefinitionHasBeenSet = true; m_lastActiveDefinition = value; }

    /**
     * <p>When there are multiple versions of a blueprint and the latest version has
     * some errors, this attribute indicates the last successful blueprint definition
     * that is available with the service.</p>
     */
    inline void SetLastActiveDefinition(LastActiveDefinition&& value) { m_lastActiveDefinitionHasBeenSet = true; m_lastActiveDefinition = std::move(value); }

    /**
     * <p>When there are multiple versions of a blueprint and the latest version has
     * some errors, this attribute indicates the last successful blueprint definition
     * that is available with the service.</p>
     */
    inline Blueprint& WithLastActiveDefinition(const LastActiveDefinition& value) { SetLastActiveDefinition(value); return *this;}

    /**
     * <p>When there are multiple versions of a blueprint and the latest version has
     * some errors, this attribute indicates the last successful blueprint definition
     * that is available with the service.</p>
     */
    inline Blueprint& WithLastActiveDefinition(LastActiveDefinition&& value) { SetLastActiveDefinition(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn;
    bool m_lastModifiedOnHasBeenSet = false;

    Aws::String m_parameterSpec;
    bool m_parameterSpecHasBeenSet = false;

    Aws::String m_blueprintLocation;
    bool m_blueprintLocationHasBeenSet = false;

    Aws::String m_blueprintServiceLocation;
    bool m_blueprintServiceLocationHasBeenSet = false;

    BlueprintStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    LastActiveDefinition m_lastActiveDefinition;
    bool m_lastActiveDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
