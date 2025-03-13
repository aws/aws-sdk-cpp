/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>When there are multiple versions of a blueprint and the latest version has
   * some errors, this attribute indicates the last successful blueprint definition
   * that is available with the service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/LastActiveDefinition">AWS
   * API Reference</a></p>
   */
  class LastActiveDefinition
  {
  public:
    AWS_GLUE_API LastActiveDefinition() = default;
    AWS_GLUE_API LastActiveDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API LastActiveDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the blueprint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    LastActiveDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    LastActiveDefinition& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string specifying the parameters for the blueprint.</p>
     */
    inline const Aws::String& GetParameterSpec() const { return m_parameterSpec; }
    inline bool ParameterSpecHasBeenSet() const { return m_parameterSpecHasBeenSet; }
    template<typename ParameterSpecT = Aws::String>
    void SetParameterSpec(ParameterSpecT&& value) { m_parameterSpecHasBeenSet = true; m_parameterSpec = std::forward<ParameterSpecT>(value); }
    template<typename ParameterSpecT = Aws::String>
    LastActiveDefinition& WithParameterSpec(ParameterSpecT&& value) { SetParameterSpec(std::forward<ParameterSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published by the Glue
     * developer.</p>
     */
    inline const Aws::String& GetBlueprintLocation() const { return m_blueprintLocation; }
    inline bool BlueprintLocationHasBeenSet() const { return m_blueprintLocationHasBeenSet; }
    template<typename BlueprintLocationT = Aws::String>
    void SetBlueprintLocation(BlueprintLocationT&& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = std::forward<BlueprintLocationT>(value); }
    template<typename BlueprintLocationT = Aws::String>
    LastActiveDefinition& WithBlueprintLocation(BlueprintLocationT&& value) { SetBlueprintLocation(std::forward<BlueprintLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you create
     * or update the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintServiceLocation() const { return m_blueprintServiceLocation; }
    inline bool BlueprintServiceLocationHasBeenSet() const { return m_blueprintServiceLocationHasBeenSet; }
    template<typename BlueprintServiceLocationT = Aws::String>
    void SetBlueprintServiceLocation(BlueprintServiceLocationT&& value) { m_blueprintServiceLocationHasBeenSet = true; m_blueprintServiceLocation = std::forward<BlueprintServiceLocationT>(value); }
    template<typename BlueprintServiceLocationT = Aws::String>
    LastActiveDefinition& WithBlueprintServiceLocation(BlueprintServiceLocationT&& value) { SetBlueprintServiceLocation(std::forward<BlueprintServiceLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    Aws::String m_parameterSpec;
    bool m_parameterSpecHasBeenSet = false;

    Aws::String m_blueprintLocation;
    bool m_blueprintLocationHasBeenSet = false;

    Aws::String m_blueprintServiceLocation;
    bool m_blueprintServiceLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
