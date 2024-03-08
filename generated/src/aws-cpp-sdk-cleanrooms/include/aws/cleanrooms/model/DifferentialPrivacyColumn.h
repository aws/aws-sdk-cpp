/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Specifies the name of the column that contains the unique identifier of your
   * users, whose privacy you want to protect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyColumn">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyColumn
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyColumn();
    AWS_CLEANROOMS_API DifferentialPrivacyColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column, such as user_id, that contains the unique identifier
     * of your users, whose privacy you want to protect. If you want to turn on
     * differential privacy for two or more tables in a collaboration, you must
     * configure the same column as the user identifier column in both analysis
     * rules.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column, such as user_id, that contains the unique identifier
     * of your users, whose privacy you want to protect. If you want to turn on
     * differential privacy for two or more tables in a collaboration, you must
     * configure the same column as the user identifier column in both analysis
     * rules.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the column, such as user_id, that contains the unique identifier
     * of your users, whose privacy you want to protect. If you want to turn on
     * differential privacy for two or more tables in a collaboration, you must
     * configure the same column as the user identifier column in both analysis
     * rules.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column, such as user_id, that contains the unique identifier
     * of your users, whose privacy you want to protect. If you want to turn on
     * differential privacy for two or more tables in a collaboration, you must
     * configure the same column as the user identifier column in both analysis
     * rules.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column, such as user_id, that contains the unique identifier
     * of your users, whose privacy you want to protect. If you want to turn on
     * differential privacy for two or more tables in a collaboration, you must
     * configure the same column as the user identifier column in both analysis
     * rules.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column, such as user_id, that contains the unique identifier
     * of your users, whose privacy you want to protect. If you want to turn on
     * differential privacy for two or more tables in a collaboration, you must
     * configure the same column as the user identifier column in both analysis
     * rules.</p>
     */
    inline DifferentialPrivacyColumn& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column, such as user_id, that contains the unique identifier
     * of your users, whose privacy you want to protect. If you want to turn on
     * differential privacy for two or more tables in a collaboration, you must
     * configure the same column as the user identifier column in both analysis
     * rules.</p>
     */
    inline DifferentialPrivacyColumn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column, such as user_id, that contains the unique identifier
     * of your users, whose privacy you want to protect. If you want to turn on
     * differential privacy for two or more tables in a collaboration, you must
     * configure the same column as the user identifier column in both analysis
     * rules.</p>
     */
    inline DifferentialPrivacyColumn& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
