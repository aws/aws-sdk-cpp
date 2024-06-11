/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Extra details specific to the affected scope in this LF data
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/LakeFormationTagPolicyDetails">AWS
   * API Reference</a></p>
   */
  class LakeFormationTagPolicyDetails
  {
  public:
    AWS_DATAEXCHANGE_API LakeFormationTagPolicyDetails();
    AWS_DATAEXCHANGE_API LakeFormationTagPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API LakeFormationTagPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The underlying Glue database that the notification is referring to.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline LakeFormationTagPolicyDetails& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline LakeFormationTagPolicyDetails& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline LakeFormationTagPolicyDetails& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The underlying Glue table that the notification is referring to.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }
    inline LakeFormationTagPolicyDetails& WithTable(const Aws::String& value) { SetTable(value); return *this;}
    inline LakeFormationTagPolicyDetails& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}
    inline LakeFormationTagPolicyDetails& WithTable(const char* value) { SetTable(value); return *this;}
    ///@}
  private:

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
