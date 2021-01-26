/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A choice available to answer question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Choice">AWS
   * API Reference</a></p>
   */
  class AWS_WELLARCHITECTED_API Choice
  {
  public:
    Choice();
    Choice(Aws::Utils::Json::JsonView jsonValue);
    Choice& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetChoiceId() const{ return m_choiceId; }

    
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }

    
    inline void SetChoiceId(const Aws::String& value) { m_choiceIdHasBeenSet = true; m_choiceId = value; }

    
    inline void SetChoiceId(Aws::String&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::move(value); }

    
    inline void SetChoiceId(const char* value) { m_choiceIdHasBeenSet = true; m_choiceId.assign(value); }

    
    inline Choice& WithChoiceId(const Aws::String& value) { SetChoiceId(value); return *this;}

    
    inline Choice& WithChoiceId(Aws::String&& value) { SetChoiceId(std::move(value)); return *this;}

    
    inline Choice& WithChoiceId(const char* value) { SetChoiceId(value); return *this;}


    
    inline const Aws::String& GetTitle() const{ return m_title; }

    
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    
    inline Choice& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    
    inline Choice& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    
    inline Choice& WithTitle(const char* value) { SetTitle(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline Choice& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline Choice& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline Choice& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
