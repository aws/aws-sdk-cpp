/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/DifferentialPrivacyColumn.h>
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
   * <p>Specifies the unique identifier for your users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyConfiguration">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyConfiguration
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyConfiguration();
    AWS_CLEANROOMS_API DifferentialPrivacyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column (such as user_id) that contains the unique identifier
     * of your users whose privacy you want to protect. If you want to turn on
     * diﬀerential privacy for two or more tables in a collaboration, you must conﬁgure
     * the same column as the user identiﬁer column in both analysis rules.</p>
     */
    inline const Aws::Vector<DifferentialPrivacyColumn>& GetColumns() const{ return m_columns; }

    /**
     * <p>The name of the column (such as user_id) that contains the unique identifier
     * of your users whose privacy you want to protect. If you want to turn on
     * diﬀerential privacy for two or more tables in a collaboration, you must conﬁgure
     * the same column as the user identiﬁer column in both analysis rules.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>The name of the column (such as user_id) that contains the unique identifier
     * of your users whose privacy you want to protect. If you want to turn on
     * diﬀerential privacy for two or more tables in a collaboration, you must conﬁgure
     * the same column as the user identiﬁer column in both analysis rules.</p>
     */
    inline void SetColumns(const Aws::Vector<DifferentialPrivacyColumn>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>The name of the column (such as user_id) that contains the unique identifier
     * of your users whose privacy you want to protect. If you want to turn on
     * diﬀerential privacy for two or more tables in a collaboration, you must conﬁgure
     * the same column as the user identiﬁer column in both analysis rules.</p>
     */
    inline void SetColumns(Aws::Vector<DifferentialPrivacyColumn>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>The name of the column (such as user_id) that contains the unique identifier
     * of your users whose privacy you want to protect. If you want to turn on
     * diﬀerential privacy for two or more tables in a collaboration, you must conﬁgure
     * the same column as the user identiﬁer column in both analysis rules.</p>
     */
    inline DifferentialPrivacyConfiguration& WithColumns(const Aws::Vector<DifferentialPrivacyColumn>& value) { SetColumns(value); return *this;}

    /**
     * <p>The name of the column (such as user_id) that contains the unique identifier
     * of your users whose privacy you want to protect. If you want to turn on
     * diﬀerential privacy for two or more tables in a collaboration, you must conﬁgure
     * the same column as the user identiﬁer column in both analysis rules.</p>
     */
    inline DifferentialPrivacyConfiguration& WithColumns(Aws::Vector<DifferentialPrivacyColumn>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>The name of the column (such as user_id) that contains the unique identifier
     * of your users whose privacy you want to protect. If you want to turn on
     * diﬀerential privacy for two or more tables in a collaboration, you must conﬁgure
     * the same column as the user identiﬁer column in both analysis rules.</p>
     */
    inline DifferentialPrivacyConfiguration& AddColumns(const DifferentialPrivacyColumn& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>The name of the column (such as user_id) that contains the unique identifier
     * of your users whose privacy you want to protect. If you want to turn on
     * diﬀerential privacy for two or more tables in a collaboration, you must conﬁgure
     * the same column as the user identiﬁer column in both analysis rules.</p>
     */
    inline DifferentialPrivacyConfiguration& AddColumns(DifferentialPrivacyColumn&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DifferentialPrivacyColumn> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
