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
    AWS_GLUE_API Blueprint() = default;
    AWS_GLUE_API Blueprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Blueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Blueprint& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the blueprint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Blueprint& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the blueprint was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    Blueprint& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the blueprint was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    Blueprint& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string that indicates the list of parameter specifications for the
     * blueprint.</p>
     */
    inline const Aws::String& GetParameterSpec() const { return m_parameterSpec; }
    inline bool ParameterSpecHasBeenSet() const { return m_parameterSpecHasBeenSet; }
    template<typename ParameterSpecT = Aws::String>
    void SetParameterSpec(ParameterSpecT&& value) { m_parameterSpecHasBeenSet = true; m_parameterSpec = std::forward<ParameterSpecT>(value); }
    template<typename ParameterSpecT = Aws::String>
    Blueprint& WithParameterSpec(ParameterSpecT&& value) { SetParameterSpec(std::forward<ParameterSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the path in Amazon S3 where the blueprint is published.</p>
     */
    inline const Aws::String& GetBlueprintLocation() const { return m_blueprintLocation; }
    inline bool BlueprintLocationHasBeenSet() const { return m_blueprintLocationHasBeenSet; }
    template<typename BlueprintLocationT = Aws::String>
    void SetBlueprintLocation(BlueprintLocationT&& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = std::forward<BlueprintLocationT>(value); }
    template<typename BlueprintLocationT = Aws::String>
    Blueprint& WithBlueprintLocation(BlueprintLocationT&& value) { SetBlueprintLocation(std::forward<BlueprintLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you call
     * <code>CreateBlueprint/UpdateBlueprint</code> to register the blueprint in
     * Glue.</p>
     */
    inline const Aws::String& GetBlueprintServiceLocation() const { return m_blueprintServiceLocation; }
    inline bool BlueprintServiceLocationHasBeenSet() const { return m_blueprintServiceLocationHasBeenSet; }
    template<typename BlueprintServiceLocationT = Aws::String>
    void SetBlueprintServiceLocation(BlueprintServiceLocationT&& value) { m_blueprintServiceLocationHasBeenSet = true; m_blueprintServiceLocation = std::forward<BlueprintServiceLocationT>(value); }
    template<typename BlueprintServiceLocationT = Aws::String>
    Blueprint& WithBlueprintServiceLocation(BlueprintServiceLocationT&& value) { SetBlueprintServiceLocation(std::forward<BlueprintServiceLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the blueprint registration.</p> <ul> <li> <p>Creating — The
     * blueprint registration is in progress.</p> </li> <li> <p>Active — The blueprint
     * has been successfully registered.</p> </li> <li> <p>Updating — An update to the
     * blueprint registration is in progress.</p> </li> <li> <p>Failed — The blueprint
     * registration failed.</p> </li> </ul>
     */
    inline BlueprintStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BlueprintStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Blueprint& WithStatus(BlueprintStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    Blueprint& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When there are multiple versions of a blueprint and the latest version has
     * some errors, this attribute indicates the last successful blueprint definition
     * that is available with the service.</p>
     */
    inline const LastActiveDefinition& GetLastActiveDefinition() const { return m_lastActiveDefinition; }
    inline bool LastActiveDefinitionHasBeenSet() const { return m_lastActiveDefinitionHasBeenSet; }
    template<typename LastActiveDefinitionT = LastActiveDefinition>
    void SetLastActiveDefinition(LastActiveDefinitionT&& value) { m_lastActiveDefinitionHasBeenSet = true; m_lastActiveDefinition = std::forward<LastActiveDefinitionT>(value); }
    template<typename LastActiveDefinitionT = LastActiveDefinition>
    Blueprint& WithLastActiveDefinition(LastActiveDefinitionT&& value) { SetLastActiveDefinition(std::forward<LastActiveDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn{};
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    Aws::String m_parameterSpec;
    bool m_parameterSpecHasBeenSet = false;

    Aws::String m_blueprintLocation;
    bool m_blueprintLocationHasBeenSet = false;

    Aws::String m_blueprintServiceLocation;
    bool m_blueprintServiceLocationHasBeenSet = false;

    BlueprintStatus m_status{BlueprintStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    LastActiveDefinition m_lastActiveDefinition;
    bool m_lastActiveDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
