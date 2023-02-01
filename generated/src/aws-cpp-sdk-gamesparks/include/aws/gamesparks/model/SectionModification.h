/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/Operation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>A single modification to the configuration section.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/SectionModification">AWS
   * API Reference</a></p>
   */
  class SectionModification
  {
  public:
    AWS_GAMESPARKS_API SectionModification();
    AWS_GAMESPARKS_API SectionModification(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API SectionModification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operation to be performed on a configuration section.</p> <p> Content can
     * be added, deleted, or replaced within a section. </p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>The operation to be performed on a configuration section.</p> <p> Content can
     * be added, deleted, or replaced within a section. </p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The operation to be performed on a configuration section.</p> <p> Content can
     * be added, deleted, or replaced within a section. </p>
     */
    inline void SetOperation(const Operation& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The operation to be performed on a configuration section.</p> <p> Content can
     * be added, deleted, or replaced within a section. </p>
     */
    inline void SetOperation(Operation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The operation to be performed on a configuration section.</p> <p> Content can
     * be added, deleted, or replaced within a section. </p>
     */
    inline SectionModification& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>The operation to be performed on a configuration section.</p> <p> Content can
     * be added, deleted, or replaced within a section. </p>
     */
    inline SectionModification& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>The path within the section content to be modified.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path within the section content to be modified.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path within the section content to be modified.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path within the section content to be modified.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path within the section content to be modified.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path within the section content to be modified.</p>
     */
    inline SectionModification& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path within the section content to be modified.</p>
     */
    inline SectionModification& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path within the section content to be modified.</p>
     */
    inline SectionModification& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The name of the section to be modified.</p>
     */
    inline const Aws::String& GetSection() const{ return m_section; }

    /**
     * <p>The name of the section to be modified.</p>
     */
    inline bool SectionHasBeenSet() const { return m_sectionHasBeenSet; }

    /**
     * <p>The name of the section to be modified.</p>
     */
    inline void SetSection(const Aws::String& value) { m_sectionHasBeenSet = true; m_section = value; }

    /**
     * <p>The name of the section to be modified.</p>
     */
    inline void SetSection(Aws::String&& value) { m_sectionHasBeenSet = true; m_section = std::move(value); }

    /**
     * <p>The name of the section to be modified.</p>
     */
    inline void SetSection(const char* value) { m_sectionHasBeenSet = true; m_section.assign(value); }

    /**
     * <p>The name of the section to be modified.</p>
     */
    inline SectionModification& WithSection(const Aws::String& value) { SetSection(value); return *this;}

    /**
     * <p>The name of the section to be modified.</p>
     */
    inline SectionModification& WithSection(Aws::String&& value) { SetSection(std::move(value)); return *this;}

    /**
     * <p>The name of the section to be modified.</p>
     */
    inline SectionModification& WithSection(const char* value) { SetSection(value); return *this;}


    /**
     * <p>For add and replace operations, this is the value that will be used.</p> <p>
     * This field should be omitted for delete operations. </p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }

    /**
     * <p>For add and replace operations, this is the value that will be used.</p> <p>
     * This field should be omitted for delete operations. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>For add and replace operations, this is the value that will be used.</p> <p>
     * This field should be omitted for delete operations. </p>
     */
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>For add and replace operations, this is the value that will be used.</p> <p>
     * This field should be omitted for delete operations. </p>
     */
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>For add and replace operations, this is the value that will be used.</p> <p>
     * This field should be omitted for delete operations. </p>
     */
    inline SectionModification& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}

    /**
     * <p>For add and replace operations, this is the value that will be used.</p> <p>
     * This field should be omitted for delete operations. </p>
     */
    inline SectionModification& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}

  private:

    Operation m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_section;
    bool m_sectionHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
