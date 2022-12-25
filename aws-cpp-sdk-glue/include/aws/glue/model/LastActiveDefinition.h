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
    AWS_GLUE_API LastActiveDefinition();
    AWS_GLUE_API LastActiveDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API LastActiveDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline LastActiveDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the blueprint.</p>
     */
    inline LastActiveDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the blueprint.</p>
     */
    inline LastActiveDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline LastActiveDefinition& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The date and time the blueprint was last modified.</p>
     */
    inline LastActiveDefinition& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>A JSON string specifying the parameters for the blueprint.</p>
     */
    inline const Aws::String& GetParameterSpec() const{ return m_parameterSpec; }

    /**
     * <p>A JSON string specifying the parameters for the blueprint.</p>
     */
    inline bool ParameterSpecHasBeenSet() const { return m_parameterSpecHasBeenSet; }

    /**
     * <p>A JSON string specifying the parameters for the blueprint.</p>
     */
    inline void SetParameterSpec(const Aws::String& value) { m_parameterSpecHasBeenSet = true; m_parameterSpec = value; }

    /**
     * <p>A JSON string specifying the parameters for the blueprint.</p>
     */
    inline void SetParameterSpec(Aws::String&& value) { m_parameterSpecHasBeenSet = true; m_parameterSpec = std::move(value); }

    /**
     * <p>A JSON string specifying the parameters for the blueprint.</p>
     */
    inline void SetParameterSpec(const char* value) { m_parameterSpecHasBeenSet = true; m_parameterSpec.assign(value); }

    /**
     * <p>A JSON string specifying the parameters for the blueprint.</p>
     */
    inline LastActiveDefinition& WithParameterSpec(const Aws::String& value) { SetParameterSpec(value); return *this;}

    /**
     * <p>A JSON string specifying the parameters for the blueprint.</p>
     */
    inline LastActiveDefinition& WithParameterSpec(Aws::String&& value) { SetParameterSpec(std::move(value)); return *this;}

    /**
     * <p>A JSON string specifying the parameters for the blueprint.</p>
     */
    inline LastActiveDefinition& WithParameterSpec(const char* value) { SetParameterSpec(value); return *this;}


    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published by the Glue
     * developer.</p>
     */
    inline const Aws::String& GetBlueprintLocation() const{ return m_blueprintLocation; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published by the Glue
     * developer.</p>
     */
    inline bool BlueprintLocationHasBeenSet() const { return m_blueprintLocationHasBeenSet; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published by the Glue
     * developer.</p>
     */
    inline void SetBlueprintLocation(const Aws::String& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = value; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published by the Glue
     * developer.</p>
     */
    inline void SetBlueprintLocation(Aws::String&& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = std::move(value); }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published by the Glue
     * developer.</p>
     */
    inline void SetBlueprintLocation(const char* value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation.assign(value); }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published by the Glue
     * developer.</p>
     */
    inline LastActiveDefinition& WithBlueprintLocation(const Aws::String& value) { SetBlueprintLocation(value); return *this;}

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published by the Glue
     * developer.</p>
     */
    inline LastActiveDefinition& WithBlueprintLocation(Aws::String&& value) { SetBlueprintLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published by the Glue
     * developer.</p>
     */
    inline LastActiveDefinition& WithBlueprintLocation(const char* value) { SetBlueprintLocation(value); return *this;}


    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you create
     * or update the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintServiceLocation() const{ return m_blueprintServiceLocation; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you create
     * or update the blueprint.</p>
     */
    inline bool BlueprintServiceLocationHasBeenSet() const { return m_blueprintServiceLocationHasBeenSet; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you create
     * or update the blueprint.</p>
     */
    inline void SetBlueprintServiceLocation(const Aws::String& value) { m_blueprintServiceLocationHasBeenSet = true; m_blueprintServiceLocation = value; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you create
     * or update the blueprint.</p>
     */
    inline void SetBlueprintServiceLocation(Aws::String&& value) { m_blueprintServiceLocationHasBeenSet = true; m_blueprintServiceLocation = std::move(value); }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you create
     * or update the blueprint.</p>
     */
    inline void SetBlueprintServiceLocation(const char* value) { m_blueprintServiceLocationHasBeenSet = true; m_blueprintServiceLocation.assign(value); }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you create
     * or update the blueprint.</p>
     */
    inline LastActiveDefinition& WithBlueprintServiceLocation(const Aws::String& value) { SetBlueprintServiceLocation(value); return *this;}

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you create
     * or update the blueprint.</p>
     */
    inline LastActiveDefinition& WithBlueprintServiceLocation(Aws::String&& value) { SetBlueprintServiceLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is copied when you create
     * or update the blueprint.</p>
     */
    inline LastActiveDefinition& WithBlueprintServiceLocation(const char* value) { SetBlueprintServiceLocation(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn;
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
