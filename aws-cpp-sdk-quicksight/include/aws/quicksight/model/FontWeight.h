/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FontWeightName.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The option that determines the text display weight, or
   * boldness.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FontWeight">AWS
   * API Reference</a></p>
   */
  class FontWeight
  {
  public:
    AWS_QUICKSIGHT_API FontWeight();
    AWS_QUICKSIGHT_API FontWeight(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FontWeight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lexical name for the level of boldness of the text display.</p>
     */
    inline const FontWeightName& GetName() const{ return m_name; }

    /**
     * <p>The lexical name for the level of boldness of the text display.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The lexical name for the level of boldness of the text display.</p>
     */
    inline void SetName(const FontWeightName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The lexical name for the level of boldness of the text display.</p>
     */
    inline void SetName(FontWeightName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The lexical name for the level of boldness of the text display.</p>
     */
    inline FontWeight& WithName(const FontWeightName& value) { SetName(value); return *this;}

    /**
     * <p>The lexical name for the level of boldness of the text display.</p>
     */
    inline FontWeight& WithName(FontWeightName&& value) { SetName(std::move(value)); return *this;}

  private:

    FontWeightName m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
