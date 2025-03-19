/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/GlueTableReference.h>
#include <aws/cleanrooms/model/SnowflakeTableReference.h>
#include <aws/cleanrooms/model/AthenaTableReference.h>
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
   * <p>A pointer to the dataset that underlies this table.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/TableReference">AWS
   * API Reference</a></p>
   */
  class TableReference
  {
  public:
    AWS_CLEANROOMS_API TableReference() = default;
    AWS_CLEANROOMS_API TableReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API TableReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If present, a reference to the Glue table referred to by this table
     * reference.</p>
     */
    inline const GlueTableReference& GetGlue() const { return m_glue; }
    inline bool GlueHasBeenSet() const { return m_glueHasBeenSet; }
    template<typename GlueT = GlueTableReference>
    void SetGlue(GlueT&& value) { m_glueHasBeenSet = true; m_glue = std::forward<GlueT>(value); }
    template<typename GlueT = GlueTableReference>
    TableReference& WithGlue(GlueT&& value) { SetGlue(std::forward<GlueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If present, a reference to the Snowflake table referred to by this table
     * reference.</p>
     */
    inline const SnowflakeTableReference& GetSnowflake() const { return m_snowflake; }
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }
    template<typename SnowflakeT = SnowflakeTableReference>
    void SetSnowflake(SnowflakeT&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::forward<SnowflakeT>(value); }
    template<typename SnowflakeT = SnowflakeTableReference>
    TableReference& WithSnowflake(SnowflakeT&& value) { SetSnowflake(std::forward<SnowflakeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If present, a reference to the Athena table referred to by this table
     * reference.</p>
     */
    inline const AthenaTableReference& GetAthena() const { return m_athena; }
    inline bool AthenaHasBeenSet() const { return m_athenaHasBeenSet; }
    template<typename AthenaT = AthenaTableReference>
    void SetAthena(AthenaT&& value) { m_athenaHasBeenSet = true; m_athena = std::forward<AthenaT>(value); }
    template<typename AthenaT = AthenaTableReference>
    TableReference& WithAthena(AthenaT&& value) { SetAthena(std::forward<AthenaT>(value)); return *this;}
    ///@}
  private:

    GlueTableReference m_glue;
    bool m_glueHasBeenSet = false;

    SnowflakeTableReference m_snowflake;
    bool m_snowflakeHasBeenSet = false;

    AthenaTableReference m_athena;
    bool m_athenaHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
