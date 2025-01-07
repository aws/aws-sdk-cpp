﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/SnowflakeTableSchemaV1.h>
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
   * <p> The schema of a Snowflake table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SnowflakeTableSchema">AWS
   * API Reference</a></p>
   */
  class SnowflakeTableSchema
  {
  public:
    AWS_CLEANROOMS_API SnowflakeTableSchema();
    AWS_CLEANROOMS_API SnowflakeTableSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SnowflakeTableSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The schema of a Snowflake table.</p>
     */
    inline const Aws::Vector<SnowflakeTableSchemaV1>& GetV1() const{ return m_v1; }
    inline bool V1HasBeenSet() const { return m_v1HasBeenSet; }
    inline void SetV1(const Aws::Vector<SnowflakeTableSchemaV1>& value) { m_v1HasBeenSet = true; m_v1 = value; }
    inline void SetV1(Aws::Vector<SnowflakeTableSchemaV1>&& value) { m_v1HasBeenSet = true; m_v1 = std::move(value); }
    inline SnowflakeTableSchema& WithV1(const Aws::Vector<SnowflakeTableSchemaV1>& value) { SetV1(value); return *this;}
    inline SnowflakeTableSchema& WithV1(Aws::Vector<SnowflakeTableSchemaV1>&& value) { SetV1(std::move(value)); return *this;}
    inline SnowflakeTableSchema& AddV1(const SnowflakeTableSchemaV1& value) { m_v1HasBeenSet = true; m_v1.push_back(value); return *this; }
    inline SnowflakeTableSchema& AddV1(SnowflakeTableSchemaV1&& value) { m_v1HasBeenSet = true; m_v1.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SnowflakeTableSchemaV1> m_v1;
    bool m_v1HasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
