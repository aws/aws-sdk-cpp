/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableClass.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Contains details of the table class.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TableClassSummary">AWS
   * API Reference</a></p>
   */
  class TableClassSummary
  {
  public:
    AWS_DYNAMODB_API TableClassSummary();
    AWS_DYNAMODB_API TableClassSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TableClassSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The table class of the specified table. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline const TableClass& GetTableClass() const{ return m_tableClass; }

    /**
     * <p>The table class of the specified table. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline bool TableClassHasBeenSet() const { return m_tableClassHasBeenSet; }

    /**
     * <p>The table class of the specified table. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline void SetTableClass(const TableClass& value) { m_tableClassHasBeenSet = true; m_tableClass = value; }

    /**
     * <p>The table class of the specified table. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline void SetTableClass(TableClass&& value) { m_tableClassHasBeenSet = true; m_tableClass = std::move(value); }

    /**
     * <p>The table class of the specified table. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline TableClassSummary& WithTableClass(const TableClass& value) { SetTableClass(value); return *this;}

    /**
     * <p>The table class of the specified table. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline TableClassSummary& WithTableClass(TableClass&& value) { SetTableClass(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the table class was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDateTime() const{ return m_lastUpdateDateTime; }

    /**
     * <p>The date and time at which the table class was last updated.</p>
     */
    inline bool LastUpdateDateTimeHasBeenSet() const { return m_lastUpdateDateTimeHasBeenSet; }

    /**
     * <p>The date and time at which the table class was last updated.</p>
     */
    inline void SetLastUpdateDateTime(const Aws::Utils::DateTime& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = value; }

    /**
     * <p>The date and time at which the table class was last updated.</p>
     */
    inline void SetLastUpdateDateTime(Aws::Utils::DateTime&& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = std::move(value); }

    /**
     * <p>The date and time at which the table class was last updated.</p>
     */
    inline TableClassSummary& WithLastUpdateDateTime(const Aws::Utils::DateTime& value) { SetLastUpdateDateTime(value); return *this;}

    /**
     * <p>The date and time at which the table class was last updated.</p>
     */
    inline TableClassSummary& WithLastUpdateDateTime(Aws::Utils::DateTime&& value) { SetLastUpdateDateTime(std::move(value)); return *this;}

  private:

    TableClass m_tableClass;
    bool m_tableClassHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDateTime;
    bool m_lastUpdateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
