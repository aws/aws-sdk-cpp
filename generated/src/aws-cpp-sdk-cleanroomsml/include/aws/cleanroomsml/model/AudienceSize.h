/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/AudienceSizeType.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>The size of the generated audience. Must match one of the sizes in the
   * configured audience model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AudienceSize">AWS
   * API Reference</a></p>
   */
  class AudienceSize
  {
  public:
    AWS_CLEANROOMSML_API AudienceSize();
    AWS_CLEANROOMSML_API AudienceSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the audience size is defined in absolute terms or as a percentage.
     * You can use the <code>ABSOLUTE</code> <a>AudienceSize</a> to configure out
     * audience sizes using the count of identifiers in the output. You can use the
     * <code>Percentage</code> <a>AudienceSize</a> to configure sizes in the range
     * 1-100 percent.</p>
     */
    inline const AudienceSizeType& GetType() const{ return m_type; }

    /**
     * <p>Whether the audience size is defined in absolute terms or as a percentage.
     * You can use the <code>ABSOLUTE</code> <a>AudienceSize</a> to configure out
     * audience sizes using the count of identifiers in the output. You can use the
     * <code>Percentage</code> <a>AudienceSize</a> to configure sizes in the range
     * 1-100 percent.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Whether the audience size is defined in absolute terms or as a percentage.
     * You can use the <code>ABSOLUTE</code> <a>AudienceSize</a> to configure out
     * audience sizes using the count of identifiers in the output. You can use the
     * <code>Percentage</code> <a>AudienceSize</a> to configure sizes in the range
     * 1-100 percent.</p>
     */
    inline void SetType(const AudienceSizeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Whether the audience size is defined in absolute terms or as a percentage.
     * You can use the <code>ABSOLUTE</code> <a>AudienceSize</a> to configure out
     * audience sizes using the count of identifiers in the output. You can use the
     * <code>Percentage</code> <a>AudienceSize</a> to configure sizes in the range
     * 1-100 percent.</p>
     */
    inline void SetType(AudienceSizeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Whether the audience size is defined in absolute terms or as a percentage.
     * You can use the <code>ABSOLUTE</code> <a>AudienceSize</a> to configure out
     * audience sizes using the count of identifiers in the output. You can use the
     * <code>Percentage</code> <a>AudienceSize</a> to configure sizes in the range
     * 1-100 percent.</p>
     */
    inline AudienceSize& WithType(const AudienceSizeType& value) { SetType(value); return *this;}

    /**
     * <p>Whether the audience size is defined in absolute terms or as a percentage.
     * You can use the <code>ABSOLUTE</code> <a>AudienceSize</a> to configure out
     * audience sizes using the count of identifiers in the output. You can use the
     * <code>Percentage</code> <a>AudienceSize</a> to configure sizes in the range
     * 1-100 percent.</p>
     */
    inline AudienceSize& WithType(AudienceSizeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Specify an audience size value.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>Specify an audience size value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Specify an audience size value.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specify an audience size value.</p>
     */
    inline AudienceSize& WithValue(int value) { SetValue(value); return *this;}

  private:

    AudienceSizeType m_type;
    bool m_typeHasBeenSet = false;

    int m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
