/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/GlueTableReference.h>
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
   * <p>A pointer to the dataset that underlies this table. Currently, this can only
   * be an Glue table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/TableReference">AWS
   * API Reference</a></p>
   */
  class TableReference
  {
  public:
    AWS_CLEANROOMS_API TableReference();
    AWS_CLEANROOMS_API TableReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API TableReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If present, a reference to the Glue table referred to by this table
     * reference.</p>
     */
    inline const GlueTableReference& GetGlue() const{ return m_glue; }

    /**
     * <p>If present, a reference to the Glue table referred to by this table
     * reference.</p>
     */
    inline bool GlueHasBeenSet() const { return m_glueHasBeenSet; }

    /**
     * <p>If present, a reference to the Glue table referred to by this table
     * reference.</p>
     */
    inline void SetGlue(const GlueTableReference& value) { m_glueHasBeenSet = true; m_glue = value; }

    /**
     * <p>If present, a reference to the Glue table referred to by this table
     * reference.</p>
     */
    inline void SetGlue(GlueTableReference&& value) { m_glueHasBeenSet = true; m_glue = std::move(value); }

    /**
     * <p>If present, a reference to the Glue table referred to by this table
     * reference.</p>
     */
    inline TableReference& WithGlue(const GlueTableReference& value) { SetGlue(value); return *this;}

    /**
     * <p>If present, a reference to the Glue table referred to by this table
     * reference.</p>
     */
    inline TableReference& WithGlue(GlueTableReference&& value) { SetGlue(std::move(value)); return *this;}

  private:

    GlueTableReference m_glue;
    bool m_glueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
