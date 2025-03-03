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
    AWS_DYNAMODB_API TableClassSummary() = default;
    AWS_DYNAMODB_API TableClassSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TableClassSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The table class of the specified table. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline TableClass GetTableClass() const { return m_tableClass; }
    inline bool TableClassHasBeenSet() const { return m_tableClassHasBeenSet; }
    inline void SetTableClass(TableClass value) { m_tableClassHasBeenSet = true; m_tableClass = value; }
    inline TableClassSummary& WithTableClass(TableClass value) { SetTableClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the table class was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDateTime() const { return m_lastUpdateDateTime; }
    inline bool LastUpdateDateTimeHasBeenSet() const { return m_lastUpdateDateTimeHasBeenSet; }
    template<typename LastUpdateDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateDateTime(LastUpdateDateTimeT&& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = std::forward<LastUpdateDateTimeT>(value); }
    template<typename LastUpdateDateTimeT = Aws::Utils::DateTime>
    TableClassSummary& WithLastUpdateDateTime(LastUpdateDateTimeT&& value) { SetLastUpdateDateTime(std::forward<LastUpdateDateTimeT>(value)); return *this;}
    ///@}
  private:

    TableClass m_tableClass{TableClass::NOT_SET};
    bool m_tableClassHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDateTime{};
    bool m_lastUpdateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
