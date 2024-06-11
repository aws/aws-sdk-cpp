/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Details of a glossary term attached to the inventory asset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DetailedGlossaryTerm">AWS
   * API Reference</a></p>
   */
  class DetailedGlossaryTerm
  {
  public:
    AWS_DATAZONE_API DetailedGlossaryTerm();
    AWS_DATAZONE_API DetailedGlossaryTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DetailedGlossaryTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a glossary term attached to the inventory asset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DetailedGlossaryTerm& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DetailedGlossaryTerm& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DetailedGlossaryTerm& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shoft description of a glossary term attached to the inventory asset.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }
    inline DetailedGlossaryTerm& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}
    inline DetailedGlossaryTerm& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}
    inline DetailedGlossaryTerm& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
