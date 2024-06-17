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
   * <p>Describes an Glue usage profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UsageProfileDefinition">AWS
   * API Reference</a></p>
   */
  class UsageProfileDefinition
  {
  public:
    AWS_GLUE_API UsageProfileDefinition();
    AWS_GLUE_API UsageProfileDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UsageProfileDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the usage profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UsageProfileDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UsageProfileDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UsageProfileDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the usage profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UsageProfileDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UsageProfileDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UsageProfileDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the usage profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }
    inline UsageProfileDefinition& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}
    inline UsageProfileDefinition& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the usage profile was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = value; }
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::move(value); }
    inline UsageProfileDefinition& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}
    inline UsageProfileDefinition& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn;
    bool m_lastModifiedOnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
