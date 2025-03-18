/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Specifies the total weight for the specified axle group. Meant for usage in
   * countries that have different regulations based on the axle group type.</p> <p>
   * <b>Unit</b>: <code>Kilograms</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WeightPerAxleGroup">AWS
   * API Reference</a></p>
   */
  class WeightPerAxleGroup
  {
  public:
    AWS_GEOROUTES_API WeightPerAxleGroup() = default;
    AWS_GEOROUTES_API WeightPerAxleGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WeightPerAxleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Weight for single axle group.</p> <p> <b>Unit</b>: <code>Kilograms</code>
     * </p>
     */
    inline long long GetSingle() const { return m_single; }
    inline bool SingleHasBeenSet() const { return m_singleHasBeenSet; }
    inline void SetSingle(long long value) { m_singleHasBeenSet = true; m_single = value; }
    inline WeightPerAxleGroup& WithSingle(long long value) { SetSingle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Weight for tandem axle group.</p> <p> <b>Unit</b>: <code>Kilograms</code>
     * </p>
     */
    inline long long GetTandem() const { return m_tandem; }
    inline bool TandemHasBeenSet() const { return m_tandemHasBeenSet; }
    inline void SetTandem(long long value) { m_tandemHasBeenSet = true; m_tandem = value; }
    inline WeightPerAxleGroup& WithTandem(long long value) { SetTandem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Weight for triple axle group.</p> <p> <b>Unit</b>: <code>Kilograms</code>
     * </p>
     */
    inline long long GetTriple() const { return m_triple; }
    inline bool TripleHasBeenSet() const { return m_tripleHasBeenSet; }
    inline void SetTriple(long long value) { m_tripleHasBeenSet = true; m_triple = value; }
    inline WeightPerAxleGroup& WithTriple(long long value) { SetTriple(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Weight for quad axle group.</p> <p> <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline long long GetQuad() const { return m_quad; }
    inline bool QuadHasBeenSet() const { return m_quadHasBeenSet; }
    inline void SetQuad(long long value) { m_quadHasBeenSet = true; m_quad = value; }
    inline WeightPerAxleGroup& WithQuad(long long value) { SetQuad(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Weight for quad quint group.</p> <p> <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline long long GetQuint() const { return m_quint; }
    inline bool QuintHasBeenSet() const { return m_quintHasBeenSet; }
    inline void SetQuint(long long value) { m_quintHasBeenSet = true; m_quint = value; }
    inline WeightPerAxleGroup& WithQuint(long long value) { SetQuint(value); return *this;}
    ///@}
  private:

    long long m_single{0};
    bool m_singleHasBeenSet = false;

    long long m_tandem{0};
    bool m_tandemHasBeenSet = false;

    long long m_triple{0};
    bool m_tripleHasBeenSet = false;

    long long m_quad{0};
    bool m_quadHasBeenSet = false;

    long long m_quint{0};
    bool m_quintHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
