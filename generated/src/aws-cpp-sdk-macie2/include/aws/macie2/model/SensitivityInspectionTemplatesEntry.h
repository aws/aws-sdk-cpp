/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the sensitivity inspection template for an Amazon
   * Macie account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SensitivityInspectionTemplatesEntry">AWS
   * API Reference</a></p>
   */
  class SensitivityInspectionTemplatesEntry
  {
  public:
    AWS_MACIE2_API SensitivityInspectionTemplatesEntry();
    AWS_MACIE2_API SensitivityInspectionTemplatesEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SensitivityInspectionTemplatesEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the sensitivity inspection template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SensitivityInspectionTemplatesEntry& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SensitivityInspectionTemplatesEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SensitivityInspectionTemplatesEntry& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the sensitivity inspection template:
     * automated-sensitive-data-discovery.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SensitivityInspectionTemplatesEntry& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SensitivityInspectionTemplatesEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SensitivityInspectionTemplatesEntry& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
